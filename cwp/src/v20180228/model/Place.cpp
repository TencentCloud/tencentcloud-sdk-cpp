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

#include <tencentcloud/cwp/v20180228/model/Place.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

Place::Place() :
    m_cityIdHasBeenSet(false),
    m_provinceIdHasBeenSet(false),
    m_countryIdHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome Place::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CityId") && !value["CityId"].IsNull())
    {
        if (!value["CityId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Place.CityId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cityId = value["CityId"].GetUint64();
        m_cityIdHasBeenSet = true;
    }

    if (value.HasMember("ProvinceId") && !value["ProvinceId"].IsNull())
    {
        if (!value["ProvinceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Place.ProvinceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_provinceId = value["ProvinceId"].GetUint64();
        m_provinceIdHasBeenSet = true;
    }

    if (value.HasMember("CountryId") && !value["CountryId"].IsNull())
    {
        if (!value["CountryId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Place.CountryId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_countryId = value["CountryId"].GetUint64();
        m_countryIdHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Place.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Place::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cityId, allocator);
    }

    if (m_provinceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvinceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_provinceId, allocator);
    }

    if (m_countryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_countryId, allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Place::GetCityId() const
{
    return m_cityId;
}

void Place::SetCityId(const uint64_t& _cityId)
{
    m_cityId = _cityId;
    m_cityIdHasBeenSet = true;
}

bool Place::CityIdHasBeenSet() const
{
    return m_cityIdHasBeenSet;
}

uint64_t Place::GetProvinceId() const
{
    return m_provinceId;
}

void Place::SetProvinceId(const uint64_t& _provinceId)
{
    m_provinceId = _provinceId;
    m_provinceIdHasBeenSet = true;
}

bool Place::ProvinceIdHasBeenSet() const
{
    return m_provinceIdHasBeenSet;
}

uint64_t Place::GetCountryId() const
{
    return m_countryId;
}

void Place::SetCountryId(const uint64_t& _countryId)
{
    m_countryId = _countryId;
    m_countryIdHasBeenSet = true;
}

bool Place::CountryIdHasBeenSet() const
{
    return m_countryIdHasBeenSet;
}

string Place::GetLocation() const
{
    return m_location;
}

void Place::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool Place::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

