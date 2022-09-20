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

#include <tencentcloud/teo/v20220901/model/GeoIp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

GeoIp::GeoIp() :
    m_regionIdHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_continentHasBeenSet(false),
    m_provinceHasBeenSet(false)
{
}

CoreInternalOutcome GeoIp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GeoIp.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeoIp.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Continent") && !value["Continent"].IsNull())
    {
        if (!value["Continent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeoIp.Continent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_continent = string(value["Continent"].GetString());
        m_continentHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeoIp.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeoIp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_continentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Continent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_continent.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

}


int64_t GeoIp::GetRegionId() const
{
    return m_regionId;
}

void GeoIp::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool GeoIp::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string GeoIp::GetCountry() const
{
    return m_country;
}

void GeoIp::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool GeoIp::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string GeoIp::GetContinent() const
{
    return m_continent;
}

void GeoIp::SetContinent(const string& _continent)
{
    m_continent = _continent;
    m_continentHasBeenSet = true;
}

bool GeoIp::ContinentHasBeenSet() const
{
    return m_continentHasBeenSet;
}

string GeoIp::GetProvince() const
{
    return m_province;
}

void GeoIp::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool GeoIp::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

