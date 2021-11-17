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

#include <tencentcloud/cpdp/v20190820/model/QueryShopOpenIdResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryShopOpenIdResult::QueryShopOpenIdResult() :
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_shopNameHasBeenSet(false),
    m_merchantNoHasBeenSet(false),
    m_cityIdHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_telephoneHasBeenSet(false),
    m_shopNoHasBeenSet(false),
    m_countyHasBeenSet(false),
    m_shopFullNameHasBeenSet(false),
    m_brandNameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_merchantNameHasBeenSet(false)
{
}

CoreInternalOutcome QueryShopOpenIdResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryShopOpenIdResult.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryShopOpenIdResult.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("ShopName") && !value["ShopName"].IsNull())
    {
        if (!value["ShopName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryShopOpenIdResult.ShopName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopName = string(value["ShopName"].GetString());
        m_shopNameHasBeenSet = true;
    }

    if (value.HasMember("MerchantNo") && !value["MerchantNo"].IsNull())
    {
        if (!value["MerchantNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryShopOpenIdResult.MerchantNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantNo = string(value["MerchantNo"].GetString());
        m_merchantNoHasBeenSet = true;
    }

    if (value.HasMember("CityId") && !value["CityId"].IsNull())
    {
        if (!value["CityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryShopOpenIdResult.CityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityId = string(value["CityId"].GetString());
        m_cityIdHasBeenSet = true;
    }

    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryShopOpenIdResult.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("Telephone") && !value["Telephone"].IsNull())
    {
        if (!value["Telephone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryShopOpenIdResult.Telephone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telephone = string(value["Telephone"].GetString());
        m_telephoneHasBeenSet = true;
    }

    if (value.HasMember("ShopNo") && !value["ShopNo"].IsNull())
    {
        if (!value["ShopNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryShopOpenIdResult.ShopNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopNo = string(value["ShopNo"].GetString());
        m_shopNoHasBeenSet = true;
    }

    if (value.HasMember("County") && !value["County"].IsNull())
    {
        if (!value["County"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryShopOpenIdResult.County` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_county = string(value["County"].GetString());
        m_countyHasBeenSet = true;
    }

    if (value.HasMember("ShopFullName") && !value["ShopFullName"].IsNull())
    {
        if (!value["ShopFullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryShopOpenIdResult.ShopFullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopFullName = string(value["ShopFullName"].GetString());
        m_shopFullNameHasBeenSet = true;
    }

    if (value.HasMember("BrandName") && !value["BrandName"].IsNull())
    {
        if (!value["BrandName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryShopOpenIdResult.BrandName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandName = string(value["BrandName"].GetString());
        m_brandNameHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryShopOpenIdResult.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("OpenKey") && !value["OpenKey"].IsNull())
    {
        if (!value["OpenKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryShopOpenIdResult.OpenKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openKey = string(value["OpenKey"].GetString());
        m_openKeyHasBeenSet = true;
    }

    if (value.HasMember("MerchantName") && !value["MerchantName"].IsNull())
    {
        if (!value["MerchantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryShopOpenIdResult.MerchantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantName = string(value["MerchantName"].GetString());
        m_merchantNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryShopOpenIdResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_shopNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopName.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantNo.c_str(), allocator).Move(), allocator);
    }

    if (m_cityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityId.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_telephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Telephone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_telephone.c_str(), allocator).Move(), allocator);
    }

    if (m_shopNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopNo.c_str(), allocator).Move(), allocator);
    }

    if (m_countyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "County";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_county.c_str(), allocator).Move(), allocator);
    }

    if (m_shopFullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopFullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopFullName.c_str(), allocator).Move(), allocator);
    }

    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_openKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openKey.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }

}


string QueryShopOpenIdResult::GetProvince() const
{
    return m_province;
}

void QueryShopOpenIdResult::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool QueryShopOpenIdResult::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string QueryShopOpenIdResult::GetCity() const
{
    return m_city;
}

void QueryShopOpenIdResult::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool QueryShopOpenIdResult::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string QueryShopOpenIdResult::GetShopName() const
{
    return m_shopName;
}

void QueryShopOpenIdResult::SetShopName(const string& _shopName)
{
    m_shopName = _shopName;
    m_shopNameHasBeenSet = true;
}

bool QueryShopOpenIdResult::ShopNameHasBeenSet() const
{
    return m_shopNameHasBeenSet;
}

string QueryShopOpenIdResult::GetMerchantNo() const
{
    return m_merchantNo;
}

void QueryShopOpenIdResult::SetMerchantNo(const string& _merchantNo)
{
    m_merchantNo = _merchantNo;
    m_merchantNoHasBeenSet = true;
}

bool QueryShopOpenIdResult::MerchantNoHasBeenSet() const
{
    return m_merchantNoHasBeenSet;
}

string QueryShopOpenIdResult::GetCityId() const
{
    return m_cityId;
}

void QueryShopOpenIdResult::SetCityId(const string& _cityId)
{
    m_cityId = _cityId;
    m_cityIdHasBeenSet = true;
}

bool QueryShopOpenIdResult::CityIdHasBeenSet() const
{
    return m_cityIdHasBeenSet;
}

string QueryShopOpenIdResult::GetOpenId() const
{
    return m_openId;
}

void QueryShopOpenIdResult::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool QueryShopOpenIdResult::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string QueryShopOpenIdResult::GetTelephone() const
{
    return m_telephone;
}

void QueryShopOpenIdResult::SetTelephone(const string& _telephone)
{
    m_telephone = _telephone;
    m_telephoneHasBeenSet = true;
}

bool QueryShopOpenIdResult::TelephoneHasBeenSet() const
{
    return m_telephoneHasBeenSet;
}

string QueryShopOpenIdResult::GetShopNo() const
{
    return m_shopNo;
}

void QueryShopOpenIdResult::SetShopNo(const string& _shopNo)
{
    m_shopNo = _shopNo;
    m_shopNoHasBeenSet = true;
}

bool QueryShopOpenIdResult::ShopNoHasBeenSet() const
{
    return m_shopNoHasBeenSet;
}

string QueryShopOpenIdResult::GetCounty() const
{
    return m_county;
}

void QueryShopOpenIdResult::SetCounty(const string& _county)
{
    m_county = _county;
    m_countyHasBeenSet = true;
}

bool QueryShopOpenIdResult::CountyHasBeenSet() const
{
    return m_countyHasBeenSet;
}

string QueryShopOpenIdResult::GetShopFullName() const
{
    return m_shopFullName;
}

void QueryShopOpenIdResult::SetShopFullName(const string& _shopFullName)
{
    m_shopFullName = _shopFullName;
    m_shopFullNameHasBeenSet = true;
}

bool QueryShopOpenIdResult::ShopFullNameHasBeenSet() const
{
    return m_shopFullNameHasBeenSet;
}

string QueryShopOpenIdResult::GetBrandName() const
{
    return m_brandName;
}

void QueryShopOpenIdResult::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool QueryShopOpenIdResult::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

string QueryShopOpenIdResult::GetAddress() const
{
    return m_address;
}

void QueryShopOpenIdResult::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool QueryShopOpenIdResult::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string QueryShopOpenIdResult::GetOpenKey() const
{
    return m_openKey;
}

void QueryShopOpenIdResult::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool QueryShopOpenIdResult::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string QueryShopOpenIdResult::GetMerchantName() const
{
    return m_merchantName;
}

void QueryShopOpenIdResult::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool QueryShopOpenIdResult::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}

