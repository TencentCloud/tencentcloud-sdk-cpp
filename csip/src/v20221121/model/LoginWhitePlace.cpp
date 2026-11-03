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

#include <tencentcloud/csip/v20221121/model/LoginWhitePlace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LoginWhitePlace::LoginWhitePlace() :
    m_countryIdHasBeenSet(false),
    m_provinceIdHasBeenSet(false),
    m_cityIdHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome LoginWhitePlace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CountryId") && !value["CountryId"].IsNull())
    {
        if (!value["CountryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhitePlace.CountryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_countryId = value["CountryId"].GetInt64();
        m_countryIdHasBeenSet = true;
    }

    if (value.HasMember("ProvinceId") && !value["ProvinceId"].IsNull())
    {
        if (!value["ProvinceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhitePlace.ProvinceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_provinceId = value["ProvinceId"].GetInt64();
        m_provinceIdHasBeenSet = true;
    }

    if (value.HasMember("CityId") && !value["CityId"].IsNull())
    {
        if (!value["CityId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhitePlace.CityId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cityId = value["CityId"].GetInt64();
        m_cityIdHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhitePlace.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginWhitePlace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_countryId, allocator);
    }

    if (m_provinceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvinceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_provinceId, allocator);
    }

    if (m_cityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cityId, allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

}


int64_t LoginWhitePlace::GetCountryId() const
{
    return m_countryId;
}

void LoginWhitePlace::SetCountryId(const int64_t& _countryId)
{
    m_countryId = _countryId;
    m_countryIdHasBeenSet = true;
}

bool LoginWhitePlace::CountryIdHasBeenSet() const
{
    return m_countryIdHasBeenSet;
}

int64_t LoginWhitePlace::GetProvinceId() const
{
    return m_provinceId;
}

void LoginWhitePlace::SetProvinceId(const int64_t& _provinceId)
{
    m_provinceId = _provinceId;
    m_provinceIdHasBeenSet = true;
}

bool LoginWhitePlace::ProvinceIdHasBeenSet() const
{
    return m_provinceIdHasBeenSet;
}

int64_t LoginWhitePlace::GetCityId() const
{
    return m_cityId;
}

void LoginWhitePlace::SetCityId(const int64_t& _cityId)
{
    m_cityId = _cityId;
    m_cityIdHasBeenSet = true;
}

bool LoginWhitePlace::CityIdHasBeenSet() const
{
    return m_cityIdHasBeenSet;
}

string LoginWhitePlace::GetLocation() const
{
    return m_location;
}

void LoginWhitePlace::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool LoginWhitePlace::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

