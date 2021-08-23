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

#include <tencentcloud/cfw/v20190904/model/AssetZone.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

AssetZone::AssetZone() :
    m_zoneHasBeenSet(false),
    m_zoneEngHasBeenSet(false)
{
}

CoreInternalOutcome AssetZone::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetZone.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneEng") && !value["ZoneEng"].IsNull())
    {
        if (!value["ZoneEng"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetZone.ZoneEng` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneEng = string(value["ZoneEng"].GetString());
        m_zoneEngHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetZone::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneEngHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneEng";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneEng.c_str(), allocator).Move(), allocator);
    }

}


string AssetZone::GetZone() const
{
    return m_zone;
}

void AssetZone::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool AssetZone::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string AssetZone::GetZoneEng() const
{
    return m_zoneEng;
}

void AssetZone::SetZoneEng(const string& _zoneEng)
{
    m_zoneEng = _zoneEng;
    m_zoneEngHasBeenSet = true;
}

bool AssetZone::ZoneEngHasBeenSet() const
{
    return m_zoneEngHasBeenSet;
}

