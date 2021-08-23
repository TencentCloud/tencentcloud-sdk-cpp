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

#include <tencentcloud/cwp/v20180228/model/UsualPlace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

UsualPlace::UsualPlace() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_countryIdHasBeenSet(false),
    m_provinceIdHasBeenSet(false),
    m_cityIdHasBeenSet(false)
{
}

CoreInternalOutcome UsualPlace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsualPlace.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsualPlace.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("CountryId") && !value["CountryId"].IsNull())
    {
        if (!value["CountryId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsualPlace.CountryId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_countryId = value["CountryId"].GetUint64();
        m_countryIdHasBeenSet = true;
    }

    if (value.HasMember("ProvinceId") && !value["ProvinceId"].IsNull())
    {
        if (!value["ProvinceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsualPlace.ProvinceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_provinceId = value["ProvinceId"].GetUint64();
        m_provinceIdHasBeenSet = true;
    }

    if (value.HasMember("CityId") && !value["CityId"].IsNull())
    {
        if (!value["CityId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsualPlace.CityId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cityId = value["CityId"].GetUint64();
        m_cityIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsualPlace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

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

}


uint64_t UsualPlace::GetId() const
{
    return m_id;
}

void UsualPlace::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UsualPlace::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UsualPlace::GetUuid() const
{
    return m_uuid;
}

void UsualPlace::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool UsualPlace::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

uint64_t UsualPlace::GetCountryId() const
{
    return m_countryId;
}

void UsualPlace::SetCountryId(const uint64_t& _countryId)
{
    m_countryId = _countryId;
    m_countryIdHasBeenSet = true;
}

bool UsualPlace::CountryIdHasBeenSet() const
{
    return m_countryIdHasBeenSet;
}

uint64_t UsualPlace::GetProvinceId() const
{
    return m_provinceId;
}

void UsualPlace::SetProvinceId(const uint64_t& _provinceId)
{
    m_provinceId = _provinceId;
    m_provinceIdHasBeenSet = true;
}

bool UsualPlace::ProvinceIdHasBeenSet() const
{
    return m_provinceIdHasBeenSet;
}

uint64_t UsualPlace::GetCityId() const
{
    return m_cityId;
}

void UsualPlace::SetCityId(const uint64_t& _cityId)
{
    m_cityId = _cityId;
    m_cityIdHasBeenSet = true;
}

bool UsualPlace::CityIdHasBeenSet() const
{
    return m_cityIdHasBeenSet;
}

