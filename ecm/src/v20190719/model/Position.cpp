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

#include <tencentcloud/ecm/v20190719/model/Position.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

Position::Position() :
    m_zoneInfoHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_regionInfoHasBeenSet(false),
    m_ipv6SupportedHasBeenSet(false)
{
}

CoreInternalOutcome Position::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneInfo") && !value["ZoneInfo"].IsNull())
    {
        if (!value["ZoneInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Position.ZoneInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_zoneInfo.Deserialize(value["ZoneInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_zoneInfoHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Position.Country` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_country.Deserialize(value["Country"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Position.Area` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_area.Deserialize(value["Area"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Position.Province` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_province.Deserialize(value["Province"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Position.City` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_city.Deserialize(value["City"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cityHasBeenSet = true;
    }

    if (value.HasMember("RegionInfo") && !value["RegionInfo"].IsNull())
    {
        if (!value["RegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Position.RegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regionInfo.Deserialize(value["RegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regionInfoHasBeenSet = true;
    }

    if (value.HasMember("Ipv6Supported") && !value["Ipv6Supported"].IsNull())
    {
        if (!value["Ipv6Supported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Position.Ipv6Supported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6Supported = value["Ipv6Supported"].GetBool();
        m_ipv6SupportedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Position::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_zoneInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_country.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_area.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_province.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_city.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_regionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipv6SupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Supported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv6Supported, allocator);
    }

}


ZoneInfo Position::GetZoneInfo() const
{
    return m_zoneInfo;
}

void Position::SetZoneInfo(const ZoneInfo& _zoneInfo)
{
    m_zoneInfo = _zoneInfo;
    m_zoneInfoHasBeenSet = true;
}

bool Position::ZoneInfoHasBeenSet() const
{
    return m_zoneInfoHasBeenSet;
}

Country Position::GetCountry() const
{
    return m_country;
}

void Position::SetCountry(const Country& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool Position::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

Area Position::GetArea() const
{
    return m_area;
}

void Position::SetArea(const Area& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool Position::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

Province Position::GetProvince() const
{
    return m_province;
}

void Position::SetProvince(const Province& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool Position::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

City Position::GetCity() const
{
    return m_city;
}

void Position::SetCity(const City& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool Position::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

RegionInfo Position::GetRegionInfo() const
{
    return m_regionInfo;
}

void Position::SetRegionInfo(const RegionInfo& _regionInfo)
{
    m_regionInfo = _regionInfo;
    m_regionInfoHasBeenSet = true;
}

bool Position::RegionInfoHasBeenSet() const
{
    return m_regionInfoHasBeenSet;
}

bool Position::GetIpv6Supported() const
{
    return m_ipv6Supported;
}

void Position::SetIpv6Supported(const bool& _ipv6Supported)
{
    m_ipv6Supported = _ipv6Supported;
    m_ipv6SupportedHasBeenSet = true;
}

bool Position::Ipv6SupportedHasBeenSet() const
{
    return m_ipv6SupportedHasBeenSet;
}

