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

#include <tencentcloud/ecm/v20190719/model/City.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

City::City() :
    m_cityIdHasBeenSet(false),
    m_cityNameHasBeenSet(false)
{
}

CoreInternalOutcome City::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CityId") && !value["CityId"].IsNull())
    {
        if (!value["CityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `City.CityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityId = string(value["CityId"].GetString());
        m_cityIdHasBeenSet = true;
    }

    if (value.HasMember("CityName") && !value["CityName"].IsNull())
    {
        if (!value["CityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `City.CityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityName = string(value["CityName"].GetString());
        m_cityNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void City::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityId.c_str(), allocator).Move(), allocator);
    }

    if (m_cityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityName.c_str(), allocator).Move(), allocator);
    }

}


string City::GetCityId() const
{
    return m_cityId;
}

void City::SetCityId(const string& _cityId)
{
    m_cityId = _cityId;
    m_cityIdHasBeenSet = true;
}

bool City::CityIdHasBeenSet() const
{
    return m_cityIdHasBeenSet;
}

string City::GetCityName() const
{
    return m_cityName;
}

void City::SetCityName(const string& _cityName)
{
    m_cityName = _cityName;
    m_cityNameHasBeenSet = true;
}

bool City::CityNameHasBeenSet() const
{
    return m_cityNameHasBeenSet;
}

