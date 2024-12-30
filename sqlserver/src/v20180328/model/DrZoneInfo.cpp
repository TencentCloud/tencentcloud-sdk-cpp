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

#include <tencentcloud/sqlserver/v20180328/model/DrZoneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DrZoneInfo::DrZoneInfo() :
    m_drInstanceIdHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

CoreInternalOutcome DrZoneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrInstanceId") && !value["DrInstanceId"].IsNull())
    {
        if (!value["DrInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrZoneInfo.DrInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drInstanceId = string(value["DrInstanceId"].GetString());
        m_drInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrZoneInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrZoneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_drInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

}


string DrZoneInfo::GetDrInstanceId() const
{
    return m_drInstanceId;
}

void DrZoneInfo::SetDrInstanceId(const string& _drInstanceId)
{
    m_drInstanceId = _drInstanceId;
    m_drInstanceIdHasBeenSet = true;
}

bool DrZoneInfo::DrInstanceIdHasBeenSet() const
{
    return m_drInstanceIdHasBeenSet;
}

string DrZoneInfo::GetZone() const
{
    return m_zone;
}

void DrZoneInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DrZoneInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

