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

#include <tencentcloud/bm/v20180423/model/ZoneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace rapidjson;
using namespace std;

ZoneInfo::ZoneInfo() :
    m_zoneHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome ZoneInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneDescription") && !value["ZoneDescription"].IsNull())
    {
        if (!value["ZoneDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.ZoneDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneDescription = string(value["ZoneDescription"].GetString());
        m_zoneDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zoneDescription.c_str(), allocator).Move(), allocator);
    }

}


string ZoneInfo::GetZone() const
{
    return m_zone;
}

void ZoneInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ZoneInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t ZoneInfo::GetZoneId() const
{
    return m_zoneId;
}

void ZoneInfo::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ZoneInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ZoneInfo::GetZoneDescription() const
{
    return m_zoneDescription;
}

void ZoneInfo::SetZoneDescription(const string& _zoneDescription)
{
    m_zoneDescription = _zoneDescription;
    m_zoneDescriptionHasBeenSet = true;
}

bool ZoneInfo::ZoneDescriptionHasBeenSet() const
{
    return m_zoneDescriptionHasBeenSet;
}

