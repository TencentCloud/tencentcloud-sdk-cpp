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

#include <tencentcloud/cpdp/v20190820/model/QueryContractRelateShopResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryContractRelateShopResult::QueryContractRelateShopResult() :
    m_provinceHasBeenSet(false),
    m_cityIdHasBeenSet(false),
    m_shopNameHasBeenSet(false),
    m_terminalCountHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_shopStatusHasBeenSet(false),
    m_aliPayOnlineHasBeenSet(false),
    m_shopNoHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_aliPayStatusHasBeenSet(false),
    m_isCheckedHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_aliPayDescHasBeenSet(false)
{
}

CoreInternalOutcome QueryContractRelateShopResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryContractRelateShopResult.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("CityId") && !value["CityId"].IsNull())
    {
        if (!value["CityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryContractRelateShopResult.CityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityId = string(value["CityId"].GetString());
        m_cityIdHasBeenSet = true;
    }

    if (value.HasMember("ShopName") && !value["ShopName"].IsNull())
    {
        if (!value["ShopName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryContractRelateShopResult.ShopName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopName = string(value["ShopName"].GetString());
        m_shopNameHasBeenSet = true;
    }

    if (value.HasMember("TerminalCount") && !value["TerminalCount"].IsNull())
    {
        if (!value["TerminalCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryContractRelateShopResult.TerminalCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_terminalCount = string(value["TerminalCount"].GetString());
        m_terminalCountHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryContractRelateShopResult.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("ShopStatus") && !value["ShopStatus"].IsNull())
    {
        if (!value["ShopStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryContractRelateShopResult.ShopStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopStatus = string(value["ShopStatus"].GetString());
        m_shopStatusHasBeenSet = true;
    }

    if (value.HasMember("AliPayOnline") && !value["AliPayOnline"].IsNull())
    {
        if (!value["AliPayOnline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryContractRelateShopResult.AliPayOnline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliPayOnline = string(value["AliPayOnline"].GetString());
        m_aliPayOnlineHasBeenSet = true;
    }

    if (value.HasMember("ShopNo") && !value["ShopNo"].IsNull())
    {
        if (!value["ShopNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryContractRelateShopResult.ShopNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopNo = string(value["ShopNo"].GetString());
        m_shopNoHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryContractRelateShopResult.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("AliPayStatus") && !value["AliPayStatus"].IsNull())
    {
        if (!value["AliPayStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryContractRelateShopResult.AliPayStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliPayStatus = string(value["AliPayStatus"].GetString());
        m_aliPayStatusHasBeenSet = true;
    }

    if (value.HasMember("IsChecked") && !value["IsChecked"].IsNull())
    {
        if (!value["IsChecked"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryContractRelateShopResult.IsChecked` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isChecked = string(value["IsChecked"].GetString());
        m_isCheckedHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryContractRelateShopResult.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("AliPayDesc") && !value["AliPayDesc"].IsNull())
    {
        if (!value["AliPayDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryContractRelateShopResult.AliPayDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliPayDesc = string(value["AliPayDesc"].GetString());
        m_aliPayDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryContractRelateShopResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityId.c_str(), allocator).Move(), allocator);
    }

    if (m_shopNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopName.c_str(), allocator).Move(), allocator);
    }

    if (m_terminalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_terminalCount.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_shopStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_aliPayOnlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliPayOnline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliPayOnline.c_str(), allocator).Move(), allocator);
    }

    if (m_shopNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopNo.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_aliPayStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliPayStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliPayStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_isCheckedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsChecked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isChecked.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_aliPayDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliPayDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliPayDesc.c_str(), allocator).Move(), allocator);
    }

}


string QueryContractRelateShopResult::GetProvince() const
{
    return m_province;
}

void QueryContractRelateShopResult::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool QueryContractRelateShopResult::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string QueryContractRelateShopResult::GetCityId() const
{
    return m_cityId;
}

void QueryContractRelateShopResult::SetCityId(const string& _cityId)
{
    m_cityId = _cityId;
    m_cityIdHasBeenSet = true;
}

bool QueryContractRelateShopResult::CityIdHasBeenSet() const
{
    return m_cityIdHasBeenSet;
}

string QueryContractRelateShopResult::GetShopName() const
{
    return m_shopName;
}

void QueryContractRelateShopResult::SetShopName(const string& _shopName)
{
    m_shopName = _shopName;
    m_shopNameHasBeenSet = true;
}

bool QueryContractRelateShopResult::ShopNameHasBeenSet() const
{
    return m_shopNameHasBeenSet;
}

string QueryContractRelateShopResult::GetTerminalCount() const
{
    return m_terminalCount;
}

void QueryContractRelateShopResult::SetTerminalCount(const string& _terminalCount)
{
    m_terminalCount = _terminalCount;
    m_terminalCountHasBeenSet = true;
}

bool QueryContractRelateShopResult::TerminalCountHasBeenSet() const
{
    return m_terminalCountHasBeenSet;
}

string QueryContractRelateShopResult::GetCity() const
{
    return m_city;
}

void QueryContractRelateShopResult::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool QueryContractRelateShopResult::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string QueryContractRelateShopResult::GetShopStatus() const
{
    return m_shopStatus;
}

void QueryContractRelateShopResult::SetShopStatus(const string& _shopStatus)
{
    m_shopStatus = _shopStatus;
    m_shopStatusHasBeenSet = true;
}

bool QueryContractRelateShopResult::ShopStatusHasBeenSet() const
{
    return m_shopStatusHasBeenSet;
}

string QueryContractRelateShopResult::GetAliPayOnline() const
{
    return m_aliPayOnline;
}

void QueryContractRelateShopResult::SetAliPayOnline(const string& _aliPayOnline)
{
    m_aliPayOnline = _aliPayOnline;
    m_aliPayOnlineHasBeenSet = true;
}

bool QueryContractRelateShopResult::AliPayOnlineHasBeenSet() const
{
    return m_aliPayOnlineHasBeenSet;
}

string QueryContractRelateShopResult::GetShopNo() const
{
    return m_shopNo;
}

void QueryContractRelateShopResult::SetShopNo(const string& _shopNo)
{
    m_shopNo = _shopNo;
    m_shopNoHasBeenSet = true;
}

bool QueryContractRelateShopResult::ShopNoHasBeenSet() const
{
    return m_shopNoHasBeenSet;
}

string QueryContractRelateShopResult::GetCountry() const
{
    return m_country;
}

void QueryContractRelateShopResult::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool QueryContractRelateShopResult::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string QueryContractRelateShopResult::GetAliPayStatus() const
{
    return m_aliPayStatus;
}

void QueryContractRelateShopResult::SetAliPayStatus(const string& _aliPayStatus)
{
    m_aliPayStatus = _aliPayStatus;
    m_aliPayStatusHasBeenSet = true;
}

bool QueryContractRelateShopResult::AliPayStatusHasBeenSet() const
{
    return m_aliPayStatusHasBeenSet;
}

string QueryContractRelateShopResult::GetIsChecked() const
{
    return m_isChecked;
}

void QueryContractRelateShopResult::SetIsChecked(const string& _isChecked)
{
    m_isChecked = _isChecked;
    m_isCheckedHasBeenSet = true;
}

bool QueryContractRelateShopResult::IsCheckedHasBeenSet() const
{
    return m_isCheckedHasBeenSet;
}

string QueryContractRelateShopResult::GetAddress() const
{
    return m_address;
}

void QueryContractRelateShopResult::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool QueryContractRelateShopResult::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string QueryContractRelateShopResult::GetAliPayDesc() const
{
    return m_aliPayDesc;
}

void QueryContractRelateShopResult::SetAliPayDesc(const string& _aliPayDesc)
{
    m_aliPayDesc = _aliPayDesc;
    m_aliPayDescHasBeenSet = true;
}

bool QueryContractRelateShopResult::AliPayDescHasBeenSet() const
{
    return m_aliPayDescHasBeenSet;
}

