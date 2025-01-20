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

#include <tencentcloud/vpc/v20170312/model/IpGeolocationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

IpGeolocationInfo::IpGeolocationInfo() :
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_asNameHasBeenSet(false),
    m_asIdHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_addressIpHasBeenSet(false)
{
}

CoreInternalOutcome IpGeolocationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpGeolocationInfo.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpGeolocationInfo.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpGeolocationInfo.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpGeolocationInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpGeolocationInfo.Isp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isp = string(value["Isp"].GetString());
        m_ispHasBeenSet = true;
    }

    if (value.HasMember("AsName") && !value["AsName"].IsNull())
    {
        if (!value["AsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpGeolocationInfo.AsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asName = string(value["AsName"].GetString());
        m_asNameHasBeenSet = true;
    }

    if (value.HasMember("AsId") && !value["AsId"].IsNull())
    {
        if (!value["AsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpGeolocationInfo.AsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asId = string(value["AsId"].GetString());
        m_asIdHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpGeolocationInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("AddressIp") && !value["AddressIp"].IsNull())
    {
        if (!value["AddressIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpGeolocationInfo.AddressIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIp = string(value["AddressIp"].GetString());
        m_addressIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpGeolocationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }

    if (m_asNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asName.c_str(), allocator).Move(), allocator);
    }

    if (m_asIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asId.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressIp.c_str(), allocator).Move(), allocator);
    }

}


string IpGeolocationInfo::GetCountry() const
{
    return m_country;
}

void IpGeolocationInfo::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool IpGeolocationInfo::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string IpGeolocationInfo::GetProvince() const
{
    return m_province;
}

void IpGeolocationInfo::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool IpGeolocationInfo::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string IpGeolocationInfo::GetCity() const
{
    return m_city;
}

void IpGeolocationInfo::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool IpGeolocationInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string IpGeolocationInfo::GetRegion() const
{
    return m_region;
}

void IpGeolocationInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool IpGeolocationInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string IpGeolocationInfo::GetIsp() const
{
    return m_isp;
}

void IpGeolocationInfo::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool IpGeolocationInfo::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

string IpGeolocationInfo::GetAsName() const
{
    return m_asName;
}

void IpGeolocationInfo::SetAsName(const string& _asName)
{
    m_asName = _asName;
    m_asNameHasBeenSet = true;
}

bool IpGeolocationInfo::AsNameHasBeenSet() const
{
    return m_asNameHasBeenSet;
}

string IpGeolocationInfo::GetAsId() const
{
    return m_asId;
}

void IpGeolocationInfo::SetAsId(const string& _asId)
{
    m_asId = _asId;
    m_asIdHasBeenSet = true;
}

bool IpGeolocationInfo::AsIdHasBeenSet() const
{
    return m_asIdHasBeenSet;
}

string IpGeolocationInfo::GetComment() const
{
    return m_comment;
}

void IpGeolocationInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool IpGeolocationInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string IpGeolocationInfo::GetAddressIp() const
{
    return m_addressIp;
}

void IpGeolocationInfo::SetAddressIp(const string& _addressIp)
{
    m_addressIp = _addressIp;
    m_addressIpHasBeenSet = true;
}

bool IpGeolocationInfo::AddressIpHasBeenSet() const
{
    return m_addressIpHasBeenSet;
}

