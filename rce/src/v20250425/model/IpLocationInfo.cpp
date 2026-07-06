/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/rce/v20250425/model/IpLocationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20250425::Model;
using namespace std;

IpLocationInfo::IpLocationInfo() :
    m_countryHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_districtHasBeenSet(false),
    m_longitudeHasBeenSet(false),
    m_latitudeHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_zipCodeHasBeenSet(false)
{
}

CoreInternalOutcome IpLocationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpLocationInfo.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpLocationInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpLocationInfo.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("District") && !value["District"].IsNull())
    {
        if (!value["District"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpLocationInfo.District` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_district = string(value["District"].GetString());
        m_districtHasBeenSet = true;
    }

    if (value.HasMember("Longitude") && !value["Longitude"].IsNull())
    {
        if (!value["Longitude"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpLocationInfo.Longitude` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longitude = string(value["Longitude"].GetString());
        m_longitudeHasBeenSet = true;
    }

    if (value.HasMember("Latitude") && !value["Latitude"].IsNull())
    {
        if (!value["Latitude"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpLocationInfo.Latitude` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latitude = string(value["Latitude"].GetString());
        m_latitudeHasBeenSet = true;
    }

    if (value.HasMember("Timezone") && !value["Timezone"].IsNull())
    {
        if (!value["Timezone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpLocationInfo.Timezone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timezone = string(value["Timezone"].GetString());
        m_timezoneHasBeenSet = true;
    }

    if (value.HasMember("ZipCode") && !value["ZipCode"].IsNull())
    {
        if (!value["ZipCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpLocationInfo.ZipCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zipCode = string(value["ZipCode"].GetString());
        m_zipCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpLocationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_districtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "District";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_district.c_str(), allocator).Move(), allocator);
    }

    if (m_longitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Longitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_longitude.c_str(), allocator).Move(), allocator);
    }

    if (m_latitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latitude.c_str(), allocator).Move(), allocator);
    }

    if (m_timezoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timezone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timezone.c_str(), allocator).Move(), allocator);
    }

    if (m_zipCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZipCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zipCode.c_str(), allocator).Move(), allocator);
    }

}


string IpLocationInfo::GetCountry() const
{
    return m_country;
}

void IpLocationInfo::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool IpLocationInfo::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string IpLocationInfo::GetRegion() const
{
    return m_region;
}

void IpLocationInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool IpLocationInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string IpLocationInfo::GetCity() const
{
    return m_city;
}

void IpLocationInfo::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool IpLocationInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string IpLocationInfo::GetDistrict() const
{
    return m_district;
}

void IpLocationInfo::SetDistrict(const string& _district)
{
    m_district = _district;
    m_districtHasBeenSet = true;
}

bool IpLocationInfo::DistrictHasBeenSet() const
{
    return m_districtHasBeenSet;
}

string IpLocationInfo::GetLongitude() const
{
    return m_longitude;
}

void IpLocationInfo::SetLongitude(const string& _longitude)
{
    m_longitude = _longitude;
    m_longitudeHasBeenSet = true;
}

bool IpLocationInfo::LongitudeHasBeenSet() const
{
    return m_longitudeHasBeenSet;
}

string IpLocationInfo::GetLatitude() const
{
    return m_latitude;
}

void IpLocationInfo::SetLatitude(const string& _latitude)
{
    m_latitude = _latitude;
    m_latitudeHasBeenSet = true;
}

bool IpLocationInfo::LatitudeHasBeenSet() const
{
    return m_latitudeHasBeenSet;
}

string IpLocationInfo::GetTimezone() const
{
    return m_timezone;
}

void IpLocationInfo::SetTimezone(const string& _timezone)
{
    m_timezone = _timezone;
    m_timezoneHasBeenSet = true;
}

bool IpLocationInfo::TimezoneHasBeenSet() const
{
    return m_timezoneHasBeenSet;
}

string IpLocationInfo::GetZipCode() const
{
    return m_zipCode;
}

void IpLocationInfo::SetZipCode(const string& _zipCode)
{
    m_zipCode = _zipCode;
    m_zipCodeHasBeenSet = true;
}

bool IpLocationInfo::ZipCodeHasBeenSet() const
{
    return m_zipCodeHasBeenSet;
}

