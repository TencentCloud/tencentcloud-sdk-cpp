/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/cpdp/v20190820/model/AddShopRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

AddShopRequest::AddShopRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_outShopIdHasBeenSet(false),
    m_shopNameHasBeenSet(false),
    m_shopFullNameHasBeenSet(false),
    m_merchantNoHasBeenSet(false),
    m_telephoneHasBeenSet(false),
    m_openHoursHasBeenSet(false),
    m_cityIdHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_pictureOneHasBeenSet(false),
    m_pictureTwoHasBeenSet(false),
    m_pictureThreeHasBeenSet(false),
    m_financialTelephoneHasBeenSet(false),
    m_contactHasBeenSet(false),
    m_latitudeHasBeenSet(false),
    m_latitudeTwoHasBeenSet(false),
    m_longitudeHasBeenSet(false),
    m_longitudeTwoHasBeenSet(false),
    m_otherPictureHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string AddShopRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_openKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openKey.c_str(), allocator).Move(), allocator);
    }

    if (m_outShopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutShopId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outShopId.c_str(), allocator).Move(), allocator);
    }

    if (m_shopNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shopName.c_str(), allocator).Move(), allocator);
    }

    if (m_shopFullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopFullName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shopFullName.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantNo.c_str(), allocator).Move(), allocator);
    }

    if (m_telephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Telephone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_telephone.c_str(), allocator).Move(), allocator);
    }

    if (m_openHoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenHours";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openHours.c_str(), allocator).Move(), allocator);
    }

    if (m_cityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cityId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureOne";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pictureOne.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureTwo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pictureTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureThreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureThree";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pictureThree.c_str(), allocator).Move(), allocator);
    }

    if (m_financialTelephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinancialTelephone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_financialTelephone.c_str(), allocator).Move(), allocator);
    }

    if (m_contactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contact";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contact.c_str(), allocator).Move(), allocator);
    }

    if (m_latitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latitude";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_latitude.c_str(), allocator).Move(), allocator);
    }

    if (m_latitudeTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatitudeTwo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_latitudeTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_longitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Longitude";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_longitude.c_str(), allocator).Move(), allocator);
    }

    if (m_longitudeTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongitudeTwo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_longitudeTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_otherPictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherPicture";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_otherPicture.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddShopRequest::GetOpenId() const
{
    return m_openId;
}

void AddShopRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool AddShopRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string AddShopRequest::GetOpenKey() const
{
    return m_openKey;
}

void AddShopRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool AddShopRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string AddShopRequest::GetOutShopId() const
{
    return m_outShopId;
}

void AddShopRequest::SetOutShopId(const string& _outShopId)
{
    m_outShopId = _outShopId;
    m_outShopIdHasBeenSet = true;
}

bool AddShopRequest::OutShopIdHasBeenSet() const
{
    return m_outShopIdHasBeenSet;
}

string AddShopRequest::GetShopName() const
{
    return m_shopName;
}

void AddShopRequest::SetShopName(const string& _shopName)
{
    m_shopName = _shopName;
    m_shopNameHasBeenSet = true;
}

bool AddShopRequest::ShopNameHasBeenSet() const
{
    return m_shopNameHasBeenSet;
}

string AddShopRequest::GetShopFullName() const
{
    return m_shopFullName;
}

void AddShopRequest::SetShopFullName(const string& _shopFullName)
{
    m_shopFullName = _shopFullName;
    m_shopFullNameHasBeenSet = true;
}

bool AddShopRequest::ShopFullNameHasBeenSet() const
{
    return m_shopFullNameHasBeenSet;
}

string AddShopRequest::GetMerchantNo() const
{
    return m_merchantNo;
}

void AddShopRequest::SetMerchantNo(const string& _merchantNo)
{
    m_merchantNo = _merchantNo;
    m_merchantNoHasBeenSet = true;
}

bool AddShopRequest::MerchantNoHasBeenSet() const
{
    return m_merchantNoHasBeenSet;
}

string AddShopRequest::GetTelephone() const
{
    return m_telephone;
}

void AddShopRequest::SetTelephone(const string& _telephone)
{
    m_telephone = _telephone;
    m_telephoneHasBeenSet = true;
}

bool AddShopRequest::TelephoneHasBeenSet() const
{
    return m_telephoneHasBeenSet;
}

string AddShopRequest::GetOpenHours() const
{
    return m_openHours;
}

void AddShopRequest::SetOpenHours(const string& _openHours)
{
    m_openHours = _openHours;
    m_openHoursHasBeenSet = true;
}

bool AddShopRequest::OpenHoursHasBeenSet() const
{
    return m_openHoursHasBeenSet;
}

string AddShopRequest::GetCityId() const
{
    return m_cityId;
}

void AddShopRequest::SetCityId(const string& _cityId)
{
    m_cityId = _cityId;
    m_cityIdHasBeenSet = true;
}

bool AddShopRequest::CityIdHasBeenSet() const
{
    return m_cityIdHasBeenSet;
}

string AddShopRequest::GetAddress() const
{
    return m_address;
}

void AddShopRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool AddShopRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string AddShopRequest::GetPictureOne() const
{
    return m_pictureOne;
}

void AddShopRequest::SetPictureOne(const string& _pictureOne)
{
    m_pictureOne = _pictureOne;
    m_pictureOneHasBeenSet = true;
}

bool AddShopRequest::PictureOneHasBeenSet() const
{
    return m_pictureOneHasBeenSet;
}

string AddShopRequest::GetPictureTwo() const
{
    return m_pictureTwo;
}

void AddShopRequest::SetPictureTwo(const string& _pictureTwo)
{
    m_pictureTwo = _pictureTwo;
    m_pictureTwoHasBeenSet = true;
}

bool AddShopRequest::PictureTwoHasBeenSet() const
{
    return m_pictureTwoHasBeenSet;
}

string AddShopRequest::GetPictureThree() const
{
    return m_pictureThree;
}

void AddShopRequest::SetPictureThree(const string& _pictureThree)
{
    m_pictureThree = _pictureThree;
    m_pictureThreeHasBeenSet = true;
}

bool AddShopRequest::PictureThreeHasBeenSet() const
{
    return m_pictureThreeHasBeenSet;
}

string AddShopRequest::GetFinancialTelephone() const
{
    return m_financialTelephone;
}

void AddShopRequest::SetFinancialTelephone(const string& _financialTelephone)
{
    m_financialTelephone = _financialTelephone;
    m_financialTelephoneHasBeenSet = true;
}

bool AddShopRequest::FinancialTelephoneHasBeenSet() const
{
    return m_financialTelephoneHasBeenSet;
}

string AddShopRequest::GetContact() const
{
    return m_contact;
}

void AddShopRequest::SetContact(const string& _contact)
{
    m_contact = _contact;
    m_contactHasBeenSet = true;
}

bool AddShopRequest::ContactHasBeenSet() const
{
    return m_contactHasBeenSet;
}

string AddShopRequest::GetLatitude() const
{
    return m_latitude;
}

void AddShopRequest::SetLatitude(const string& _latitude)
{
    m_latitude = _latitude;
    m_latitudeHasBeenSet = true;
}

bool AddShopRequest::LatitudeHasBeenSet() const
{
    return m_latitudeHasBeenSet;
}

string AddShopRequest::GetLatitudeTwo() const
{
    return m_latitudeTwo;
}

void AddShopRequest::SetLatitudeTwo(const string& _latitudeTwo)
{
    m_latitudeTwo = _latitudeTwo;
    m_latitudeTwoHasBeenSet = true;
}

bool AddShopRequest::LatitudeTwoHasBeenSet() const
{
    return m_latitudeTwoHasBeenSet;
}

string AddShopRequest::GetLongitude() const
{
    return m_longitude;
}

void AddShopRequest::SetLongitude(const string& _longitude)
{
    m_longitude = _longitude;
    m_longitudeHasBeenSet = true;
}

bool AddShopRequest::LongitudeHasBeenSet() const
{
    return m_longitudeHasBeenSet;
}

string AddShopRequest::GetLongitudeTwo() const
{
    return m_longitudeTwo;
}

void AddShopRequest::SetLongitudeTwo(const string& _longitudeTwo)
{
    m_longitudeTwo = _longitudeTwo;
    m_longitudeTwoHasBeenSet = true;
}

bool AddShopRequest::LongitudeTwoHasBeenSet() const
{
    return m_longitudeTwoHasBeenSet;
}

string AddShopRequest::GetOtherPicture() const
{
    return m_otherPicture;
}

void AddShopRequest::SetOtherPicture(const string& _otherPicture)
{
    m_otherPicture = _otherPicture;
    m_otherPictureHasBeenSet = true;
}

bool AddShopRequest::OtherPictureHasBeenSet() const
{
    return m_otherPictureHasBeenSet;
}

string AddShopRequest::GetProfile() const
{
    return m_profile;
}

void AddShopRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool AddShopRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


