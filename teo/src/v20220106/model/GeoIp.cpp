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

#include <tencentcloud/teo/v20220106/model/GeoIp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

GeoIp::GeoIp() :
    m_regionIdHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_continentHasBeenSet(false),
    m_countryEnHasBeenSet(false),
    m_continentEnHasBeenSet(false)
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

    if (value.HasMember("CountryEn") && !value["CountryEn"].IsNull())
    {
        if (!value["CountryEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeoIp.CountryEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryEn = string(value["CountryEn"].GetString());
        m_countryEnHasBeenSet = true;
    }

    if (value.HasMember("ContinentEn") && !value["ContinentEn"].IsNull())
    {
        if (!value["ContinentEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeoIp.ContinentEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_continentEn = string(value["ContinentEn"].GetString());
        m_continentEnHasBeenSet = true;
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

    if (m_countryEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryEn.c_str(), allocator).Move(), allocator);
    }

    if (m_continentEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinentEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_continentEn.c_str(), allocator).Move(), allocator);
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

string GeoIp::GetCountryEn() const
{
    return m_countryEn;
}

void GeoIp::SetCountryEn(const string& _countryEn)
{
    m_countryEn = _countryEn;
    m_countryEnHasBeenSet = true;
}

bool GeoIp::CountryEnHasBeenSet() const
{
    return m_countryEnHasBeenSet;
}

string GeoIp::GetContinentEn() const
{
    return m_continentEn;
}

void GeoIp::SetContinentEn(const string& _continentEn)
{
    m_continentEn = _continentEn;
    m_continentEnHasBeenSet = true;
}

bool GeoIp::ContinentEnHasBeenSet() const
{
    return m_continentEnHasBeenSet;
}

