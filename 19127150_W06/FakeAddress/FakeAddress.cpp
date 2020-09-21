#include "FakeAddress.h"

Address::Address(string num, string street, string ward, string district, string city)
{
	this->_city = city;
	this->_district = district;
	this->_number = num;
	this->_street = street;
	this->_ward = ward;
}

string Address::getFakeAddress()
{
	string address = "No " + this->_number + ", " + this->_street + ", " + this->_ward + ", " + this->_district + ", " + this->_city;
	return address;
}

FakeHcmAddress::FakeHcmAddress()
{
	//City data
	this->_city = "Ho Chi Minh City";

	//District data
	this->_district.push_back("District 1");
	this->_district.push_back("District 3");
	this->_district.push_back("District 4");
	this->_district.push_back("District 5");
	this->_district.push_back("District 8");

	//Ward data
	//Ward of District 1
	this->_ward.push_back("Ben Nghe Ward");
	this->_ward.push_back("Ben Thanh Ward");
	this->_ward.push_back("Cau Kho Ward");
	this->_ward.push_back("Cau Ong Lanh Ward");
	this->_ward.push_back("Co Giang Ward");
	this->_ward.push_back("Da Kao Ward");
	this->_ward.push_back("Nguyen Cu Trinh Ward");
	this->_ward.push_back("Nguyen Thai Binh Ward");
	//Ward of District 3
	this->_ward.push_back("Ward 1");
	this->_ward.push_back("Ward 2");
	this->_ward.push_back("Ward 3");
	this->_ward.push_back("Ward 4");
	this->_ward.push_back("Ward 5");
	this->_ward.push_back("Ward 6");
	this->_ward.push_back("Ward 7");
	this->_ward.push_back("Ward 8");
	//Ward of District 4
	this->_ward.push_back("Ward 1");
	this->_ward.push_back("Ward 2");
	this->_ward.push_back("Ward 3");
	this->_ward.push_back("Ward 4");
	this->_ward.push_back("Ward 5");
	this->_ward.push_back("Ward 6");
	this->_ward.push_back("Ward 8");
	this->_ward.push_back("Ward 9");
	//Ward of District 5
	this->_ward.push_back("Ward 1");
	this->_ward.push_back("Ward 2");
	this->_ward.push_back("Ward 3");
	this->_ward.push_back("Ward 4");
	this->_ward.push_back("Ward 5");
	this->_ward.push_back("Ward 6");
	this->_ward.push_back("Ward 7");
	this->_ward.push_back("Ward 8");
	//Ward of District 8
	this->_ward.push_back("Ward 1");
	this->_ward.push_back("Ward 2");
	this->_ward.push_back("Ward 3");
	this->_ward.push_back("Ward 4");
	this->_ward.push_back("Ward 5");
	this->_ward.push_back("Ward 6");
	this->_ward.push_back("Ward 7");
	this->_ward.push_back("Ward 8");

	//Street data
	//District 1 Ward Ben Nghe
	this->_street.push_back("Dinh Tien Hoang Street");
	this->_street.push_back("Le Duan Street");
	this->_street.push_back("Mac Dinh Chi Street");
	this->_street.push_back("Nguyen Du Street");
	this->_street.push_back("Ton Duc Thang Street");
	//District 1 Ward Ben Thanh
	this->_street.push_back("Huyen Tran Cong Chua Street");
	this->_street.push_back("Truong Dinh Street");
	this->_street.push_back("Cach Mang Thang Tam Street");
	this->_street.push_back("Nguyen Du Street");
	this->_street.push_back("Ly Tu Trong Street");
	//District 1 Ward Cau Kho
	this->_street.push_back("Tran Hung Dao Street");
	this->_street.push_back("Vo Van Kiet Street");
	this->_street.push_back("Nguyen Van Cu Street");
	this->_street.push_back("Nguyen Canh Chan Street");
	this->_street.push_back("Tran Dinh Xu Street");
	//District 1 Ward Cau Ong Lanh
	this->_street.push_back("Nguyen Thai Hoc Street");
	this->_street.push_back("Vo Van Kiet Street");
	this->_street.push_back("Co Bac Street");
	this->_street.push_back("Yersin Street");
	this->_street.push_back("Nguyen Cong Tru Street");
	//District 1 Ward Co Giang
	this->_street.push_back("Co Giang Street");
	this->_street.push_back("Vo Van Kiet Street");
	this->_street.push_back("Tran Hung Dao Street");
	this->_street.push_back("Co Bac Street");
	this->_street.push_back("Ho Hao Hon Street");
	//District 1 Ward Da Kao
	this->_street.push_back("Dien Bien Phu Street");
	this->_street.push_back("Nguyen Dinh Chieu Street");
	this->_street.push_back("Mac Dinh Chi Street");
	this->_street.push_back("Phung Khac Khoan Street");
	this->_street.push_back("Nguyen Binh Khiem Street");
	//District 1 Ward Nguyen Cu Trinh
	this->_street.push_back("Nguyen Thi Minh Khai Street");
	this->_street.push_back("Nguyen Van Cu Street");
	this->_street.push_back("Nguyen Trai Street");
	this->_street.push_back("Tran Dinh Xu Street");
	this->_street.push_back("Nguyen Cu Trinh Street");
	//District 1 Ward Nguyen Thai Binh
	this->_street.push_back("Vo Van Kiet Street");
	this->_street.push_back("Ky Con Street");
	this->_street.push_back("Nguyen Cong Tru Street");
	this->_street.push_back("Ham Nghi Street");
	this->_street.push_back("Nam Ky Khoi Nghia Street");

	//District 3 Ward 1
	this->_street.push_back("Ly Thai To Street");
	this->_street.push_back("Nguyen Thien Thuat Street");
	this->_street.push_back("Dien Bien Phu Street");
	this->_street.push_back("Nguyen Dinh Chieu Street");
	this->_street.push_back("561 Lane, Dien Bien Phu Street");
	//District 3 Ward 2
	this->_street.push_back("Cao Thang Street");
	this->_street.push_back("Nguyen Thi Minh Khai Street");
	this->_street.push_back("Ly Thai To Street");
	this->_street.push_back("Nguyen Dinh Chieu Street");
	this->_street.push_back("Nguyen Thien Thuat Street");
	//District 3 Ward 3
	this->_street.push_back("Dien Bien Phu Street");
	this->_street.push_back("664 Lane, Nguyen Dinh Chieu Street");
	this->_street.push_back("242 Lane, Nguyen Thien Thuat Street");
	this->_street.push_back("Ban Co Street");
	this->_street.push_back("174 Lane, Nguyen Thien Thuat Street");
	//District 3 Ward 4
	this->_street.push_back("Dien Bien Phu Street");
	this->_street.push_back("Vuon Chuoi Street");
	this->_street.push_back("Nguyen Hien Street");
	this->_street.push_back("Cach Mang Thang Tam Street");
	this->_street.push_back("Nguyen Thuong Hien Street");
	//District 3 Ward 5
	this->_street.push_back("Vo Van Tan Street");
	this->_street.push_back("Nguyen Son Ha Street");
	this->_street.push_back("Nguyen Dinh Chieu Street");
	this->_street.push_back("Cach Mang Thang Tam Street");
	this->_street.push_back("Nguyen Thuong Hien Street");
	//District 3 Ward 6
	this->_street.push_back("Nam Ky Khoi Nghia Street");
	this->_street.push_back("Dien Bien Phu Street");
	this->_street.push_back("Pham Ngoc Thach Street");
	this->_street.push_back("Nguyen Thi Dieu Street");
	this->_street.push_back("Nguyen Dinh Chieu Street");
	//District 3 Ward 7
	this->_street.push_back("Nam Ky Khoi Nghia Street");
	this->_street.push_back("Hoang Sa Street");
	this->_street.push_back("Dien Bien Phu Street");
	this->_street.push_back("Vo Thi Sau Street");
	this->_street.push_back("Ly Chinh Thang Street");
	//District 3 Ward 8
	this->_street.push_back("Nam Ky Khoi Nghia Street");
	this->_street.push_back("Hoang Sa Street");
	this->_street.push_back("Pasteur Street");
	this->_street.push_back("Tran Quoc Toan Street");
	this->_street.push_back("Ly Chinh Thang Street");

	//District 4 Ward 1
	this->_street.push_back("Ben Van Don Street");
	this->_street.push_back("Ton That Thuyet Street");
	this->_street.push_back("26 Lane, Ton That Thuyet Street");
	this->_street.push_back("U Tau Lane, Ton That Thuyet Street");
	this->_street.push_back("Nguyen Khoai Street");
	//District 4 Ward 2
	this->_street.push_back("Ben Van Don Street");
	this->_street.push_back("277 Lane, Ben Van Don Street");
	this->_street.push_back("144 Lane, Nguyen Khoai Street");
	this->_street.push_back("Nguyen Khoai Street");
	this->_street.push_back("40 Lane, Nguyen Khoai Street");
	//District 4 Ward 3
	this->_street.push_back("Ton That Thuyet Street");
	this->_street.push_back("Khanh Hoi Street");
	this->_street.push_back("Number 48 Street");
	this->_street.push_back("Vinh Hoi Street");
	this->_street.push_back("Number 10A Street");
	//District 4 Ward 4
	this->_street.push_back("Nguyen Huu Tho Street");
	this->_street.push_back("Vinh Hoi Street");
	this->_street.push_back("Ton That Thuyet Street");
	this->_street.push_back("Tan Vinh Street");
	this->_street.push_back("Ton Dan Street");
	//District 4 Ward 5
	this->_street.push_back("Number 48 Street");
	this->_street.push_back("Ben Van Don Street");
	this->_street.push_back("Khanh Hoi Street");
	this->_street.push_back("254 Lane, Ben Van Don Street");
	this->_street.push_back("209 Lane, Ben Van Don Street");
	//District 4 Ward 6
	this->_street.push_back("Hoang Dieu Street");
	this->_street.push_back("Ben Van Don Street");
	this->_street.push_back("Tan Vinh Street");
	this->_street.push_back("Number 41 Street");
	this->_street.push_back("Cu Xa Vinh Hoi Street");
	//District 4 Ward 8
	this->_street.push_back("Hoang Dieu Street");
	this->_street.push_back("Ben Van Don Street");
	this->_street.push_back("Vinh Khanh Street");
	this->_street.push_back("122 Lane, Ton Dan Street");
	this->_street.push_back("237 Lane, Hoang Dieu Street");
	//District 4 Ward 9
	this->_street.push_back("Ben Van Don Street");
	this->_street.push_back("Doan Van Bo Street");
	this->_street.push_back("Hoang Dieu Street");
	this->_street.push_back("68 Lane, Doan Van Bo Street");
	this->_street.push_back("Cau Chong Street");

	//District 5 Ward 1
	this->_street.push_back("Tran Hung Dao Street");
	this->_street.push_back("Vo Van Kiet Street");
	this->_street.push_back("Nguyen Bieu Street");
	this->_street.push_back("Cao Dat Street");
	this->_street.push_back("Tran Binh Trong Street");
	//District 5 Ward 2
	this->_street.push_back("Nguyen Van Cu Street");
	this->_street.push_back("Nguyen Trai Street");
	this->_street.push_back("Le Hong Phong Street");
	this->_street.push_back("Phan Van Tri Street");
	this->_street.push_back("Tran Hung Dao Street");
	//District 5 Ward 3
	this->_street.push_back("An Duong Vuong Street");
	this->_street.push_back("Huynh Man Dat Street");
	this->_street.push_back("Tran Phu Street");
	this->_street.push_back("Nguyen Duy Duong Street");
	this->_street.push_back("Tran Binh Trong Street");
	//District 5 Ward 4
	this->_street.push_back("Tran Nhan Ton Street");
	this->_street.push_back("Le Hong Phong Street");
	this->_street.push_back("Nguyen Van Cu Street");
	this->_street.push_back("Tran Binh Trong Street");
	this->_street.push_back("Hung Vuong Street");
	//District 5 Ward 5
	this->_street.push_back("Tran Hung Dao Street");
	this->_street.push_back("Tran Tuan Khai Street");
	this->_street.push_back("Bach Van Street");
	this->_street.push_back("Bui Huu Nghia Street");
	this->_street.push_back("Vo Van Kiet Street");
	//District 5 Ward 6
	this->_street.push_back("Nguyen Tri Phuong Street");
	this->_street.push_back("Tran Hung Dao Street");
	this->_street.push_back("Ham Tu Street");
	this->_street.push_back("Vo Van Kiet Street");
	this->_street.push_back("Nguyen Van Dung Street");
	//District 5 Ward 7
	this->_street.push_back("Nguyen Trai Street");
	this->_street.push_back("Tran Phu Street");
	this->_street.push_back("An Binh Street");
	this->_street.push_back("Phan Van Tri Street");
	this->_street.push_back("Tran Xuan Hoa Street");
	//District 5 Ward 8
	this->_street.push_back("An Duong Vuong Street");
	this->_street.push_back("Tran Phu Street");
	this->_street.push_back("Nguyen Duy Duong Street");
	this->_street.push_back("Phuoc Hung Street");
	this->_street.push_back("Mac Thien Tich Street");

	//District 8 Ward 1
	this->_street.push_back("Duong Ba Trac Street");
	this->_street.push_back("157 Lane, Duong Ba Trac Street");
	this->_street.push_back("231 Lane, Duong Ba Trac Street");
	this->_street.push_back("527 Lane, Duong Ba Trac Street");
	this->_street.push_back("432 Lane, Duong Ba Trac Street");
	//District 8 Ward 2
	this->_street.push_back("Pham The Hien Street");
	this->_street.push_back("Da Nam Street");
	this->_street.push_back("Nguyen Thi Tan Street");
	this->_street.push_back("Ta Quang Buu Street");
	this->_street.push_back("Au Duong Lan Street");
	//District 8 Ward 3
	this->_street.push_back("Dang Chat Street");
	this->_street.push_back("Pham The Hien Street");
	this->_street.push_back("Da Nam Street");
	this->_street.push_back("Ta Quang Buu Street");
	this->_street.push_back("Au Duong Lan Street");
	//District 8 Ward 4
	this->_street.push_back("Pham The Hien Street");
	this->_street.push_back("Pham Hung Street");
	this->_street.push_back("Bui Dien Street");
	this->_street.push_back("Ho Thanh Bien Street");
	this->_street.push_back("Ta Quang Buu Street");
	//District 8 Ward 5
	this->_street.push_back("Pham The Hien Street");
	this->_street.push_back("Bui Minh Truc Street");
	this->_street.push_back("Ta Quang Buu Street");
	this->_street.push_back("Bong Sao Street");
	this->_street.push_back("Pham Hung Street");
	//District 8 Ward 6
	this->_street.push_back("Pham The Hien Street");
	this->_street.push_back("Bui Minh Truc Street");
	this->_street.push_back("Ta Quang Buu Street");
	this->_street.push_back("Dang Thuy Tram Street");
	this->_street.push_back("Vam Luong Street");
	//District 8 Ward 7
	this->_street.push_back("Pham The Hien Street");
	this->_street.push_back("Trinh Quang Nghi Street");
	this->_street.push_back("Nguyen Huu Tri Street");
	this->_street.push_back("Rach Long Den Street");
	this->_street.push_back("Rach Cat Ben Luc Street");
	//District 8 Ward 8
	this->_street.push_back("Ba Dinh Street");
	this->_street.push_back("Hung Phu Street");
	this->_street.push_back("Le Quang Kim Street");
	this->_street.push_back("Nguyen Duy Street");
	this->_street.push_back("144 Lane, Hung Phu Street");
}

Address FakeHcmAddress::next()
{
	int temp = 0;
	string number = to_string(this->_rng.next(500) + 1); //random number
	temp = this->_rng.next(this->_district.size());
	string district = this->_district[temp]; //random district
	int offset = 8 * temp;
	temp = offset + this->_rng.next(8);
	string ward = this->_ward[temp]; //random ward
	offset = 5 * temp;
	temp = offset + this->_rng.next(5);
	string street = this->_street[temp]; //random street

	Address fake(number, street, ward, district, this->_city); //initialize fake address

	return fake;
}