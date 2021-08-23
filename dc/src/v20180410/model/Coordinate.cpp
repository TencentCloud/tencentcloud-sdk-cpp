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

#include <tencentcloud/dc/v20180410/model/Coordinate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

Coordinate::Coordinate() :
    m_latHasBeenSet(false),
    m_lngHasBeenSet(false)
{
}

CoreInternalOutcome Coordinate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Lat") && !value["Lat"].IsNull())
    {
        if (!value["Lat"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coordinate.Lat` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lat = value["Lat"].GetDouble();
        m_latHasBeenSet = true;
    }

    if (value.HasMember("Lng") && !value["Lng"].IsNull())
    {
        if (!value["Lng"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Coordinate.Lng` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lng = value["Lng"].GetDouble();
        m_lngHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Coordinate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_latHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lat, allocator);
    }

    if (m_lngHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lng";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lng, allocator);
    }

}


double Coordinate::GetLat() const
{
    return m_lat;
}

void Coordinate::SetLat(const double& _lat)
{
    m_lat = _lat;
    m_latHasBeenSet = true;
}

bool Coordinate::LatHasBeenSet() const
{
    return m_latHasBeenSet;
}

double Coordinate::GetLng() const
{
    return m_lng;
}

void Coordinate::SetLng(const double& _lng)
{
    m_lng = _lng;
    m_lngHasBeenSet = true;
}

bool Coordinate::LngHasBeenSet() const
{
    return m_lngHasBeenSet;
}

