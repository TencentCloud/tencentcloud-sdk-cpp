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

#include <tencentcloud/hunyuan/v20230901/model/Approximate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

Approximate::Approximate() :
    m_countryHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_addressHasBeenSet(false)
{
}

CoreInternalOutcome Approximate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Approximate.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Approximate.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Approximate.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Timezone") && !value["Timezone"].IsNull())
    {
        if (!value["Timezone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Approximate.Timezone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timezone = string(value["Timezone"].GetString());
        m_timezoneHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Approximate.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Approximate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
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

    if (m_timezoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timezone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timezone.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

}


string Approximate::GetCountry() const
{
    return m_country;
}

void Approximate::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool Approximate::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string Approximate::GetCity() const
{
    return m_city;
}

void Approximate::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool Approximate::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string Approximate::GetRegion() const
{
    return m_region;
}

void Approximate::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Approximate::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string Approximate::GetTimezone() const
{
    return m_timezone;
}

void Approximate::SetTimezone(const string& _timezone)
{
    m_timezone = _timezone;
    m_timezoneHasBeenSet = true;
}

bool Approximate::TimezoneHasBeenSet() const
{
    return m_timezoneHasBeenSet;
}

string Approximate::GetAddress() const
{
    return m_address;
}

void Approximate::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool Approximate::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

