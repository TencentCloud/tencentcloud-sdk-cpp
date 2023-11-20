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

#include <tencentcloud/sqlserver/v20180328/model/ZoneStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ZoneStatus::ZoneStatus() :
    m_zoneHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ZoneStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStatus.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStatus.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStatus.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string ZoneStatus::GetZone() const
{
    return m_zone;
}

void ZoneStatus::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ZoneStatus::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ZoneStatus::GetRegion() const
{
    return m_region;
}

void ZoneStatus::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ZoneStatus::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t ZoneStatus::GetStatus() const
{
    return m_status;
}

void ZoneStatus::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ZoneStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

