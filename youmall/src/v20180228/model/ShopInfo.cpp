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

#include <tencentcloud/youmall/v20180228/model/ShopInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

ShopInfo::ShopInfo() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_shopNameHasBeenSet(false),
    m_shopCodeHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_companyNameHasBeenSet(false)
{
}

CoreInternalOutcome ShopInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompanyId") && !value["CompanyId"].IsNull())
    {
        if (!value["CompanyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShopInfo.CompanyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyId = string(value["CompanyId"].GetString());
        m_companyIdHasBeenSet = true;
    }

    if (value.HasMember("ShopId") && !value["ShopId"].IsNull())
    {
        if (!value["ShopId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShopInfo.ShopId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shopId = value["ShopId"].GetUint64();
        m_shopIdHasBeenSet = true;
    }

    if (value.HasMember("ShopName") && !value["ShopName"].IsNull())
    {
        if (!value["ShopName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShopInfo.ShopName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopName = string(value["ShopName"].GetString());
        m_shopNameHasBeenSet = true;
    }

    if (value.HasMember("ShopCode") && !value["ShopCode"].IsNull())
    {
        if (!value["ShopCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShopInfo.ShopCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopCode = string(value["ShopCode"].GetString());
        m_shopCodeHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShopInfo.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShopInfo.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("CompanyName") && !value["CompanyName"].IsNull())
    {
        if (!value["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShopInfo.CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(value["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShopInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyId.c_str(), allocator).Move(), allocator);
    }

    if (m_shopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shopId, allocator);
    }

    if (m_shopNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopName.c_str(), allocator).Move(), allocator);
    }

    if (m_shopCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopCode.c_str(), allocator).Move(), allocator);
    }

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

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

}


string ShopInfo::GetCompanyId() const
{
    return m_companyId;
}

void ShopInfo::SetCompanyId(const string& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool ShopInfo::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

uint64_t ShopInfo::GetShopId() const
{
    return m_shopId;
}

void ShopInfo::SetShopId(const uint64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool ShopInfo::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

string ShopInfo::GetShopName() const
{
    return m_shopName;
}

void ShopInfo::SetShopName(const string& _shopName)
{
    m_shopName = _shopName;
    m_shopNameHasBeenSet = true;
}

bool ShopInfo::ShopNameHasBeenSet() const
{
    return m_shopNameHasBeenSet;
}

string ShopInfo::GetShopCode() const
{
    return m_shopCode;
}

void ShopInfo::SetShopCode(const string& _shopCode)
{
    m_shopCode = _shopCode;
    m_shopCodeHasBeenSet = true;
}

bool ShopInfo::ShopCodeHasBeenSet() const
{
    return m_shopCodeHasBeenSet;
}

string ShopInfo::GetProvince() const
{
    return m_province;
}

void ShopInfo::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool ShopInfo::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string ShopInfo::GetCity() const
{
    return m_city;
}

void ShopInfo::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool ShopInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string ShopInfo::GetCompanyName() const
{
    return m_companyName;
}

void ShopInfo::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool ShopInfo::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

