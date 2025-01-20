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

#include <tencentcloud/vpc/v20170312/model/IpField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

IpField::IpField() :
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_asNameHasBeenSet(false),
    m_asIdHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

CoreInternalOutcome IpField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpField.Country` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_country = value["Country"].GetBool();
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpField.Province` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_province = value["Province"].GetBool();
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpField.City` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_city = value["City"].GetBool();
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpField.Region` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_region = value["Region"].GetBool();
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpField.Isp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isp = value["Isp"].GetBool();
        m_ispHasBeenSet = true;
    }

    if (value.HasMember("AsName") && !value["AsName"].IsNull())
    {
        if (!value["AsName"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpField.AsName` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_asName = value["AsName"].GetBool();
        m_asNameHasBeenSet = true;
    }

    if (value.HasMember("AsId") && !value["AsId"].IsNull())
    {
        if (!value["AsId"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpField.AsId` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_asId = value["AsId"].GetBool();
        m_asIdHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpField.Comment` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_comment = value["Comment"].GetBool();
        m_commentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_country, allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_province, allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_city, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_region, allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isp, allocator);
    }

    if (m_asNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asName, allocator);
    }

    if (m_asIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asId, allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_comment, allocator);
    }

}


bool IpField::GetCountry() const
{
    return m_country;
}

void IpField::SetCountry(const bool& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool IpField::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

bool IpField::GetProvince() const
{
    return m_province;
}

void IpField::SetProvince(const bool& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool IpField::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

bool IpField::GetCity() const
{
    return m_city;
}

void IpField::SetCity(const bool& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool IpField::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

bool IpField::GetRegion() const
{
    return m_region;
}

void IpField::SetRegion(const bool& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool IpField::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

bool IpField::GetIsp() const
{
    return m_isp;
}

void IpField::SetIsp(const bool& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool IpField::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

bool IpField::GetAsName() const
{
    return m_asName;
}

void IpField::SetAsName(const bool& _asName)
{
    m_asName = _asName;
    m_asNameHasBeenSet = true;
}

bool IpField::AsNameHasBeenSet() const
{
    return m_asNameHasBeenSet;
}

bool IpField::GetAsId() const
{
    return m_asId;
}

void IpField::SetAsId(const bool& _asId)
{
    m_asId = _asId;
    m_asIdHasBeenSet = true;
}

bool IpField::AsIdHasBeenSet() const
{
    return m_asIdHasBeenSet;
}

bool IpField::GetComment() const
{
    return m_comment;
}

void IpField::SetComment(const bool& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool IpField::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

