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

#include <tencentcloud/cfs/v20190719/model/AvailableZone.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

AvailableZone::AvailableZone() :
    m_zoneHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneCnNameHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_zoneNameHasBeenSet(false)
{
}

CoreInternalOutcome AvailableZone::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableZone.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableZone.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneCnName") && !value["ZoneCnName"].IsNull())
    {
        if (!value["ZoneCnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableZone.ZoneCnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneCnName = string(value["ZoneCnName"].GetString());
        m_zoneCnNameHasBeenSet = true;
    }

    if (value.HasMember("Types") && !value["Types"].IsNull())
    {
        if (!value["Types"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AvailableZone.Types` is not array type"));

        const rapidjson::Value &tmpValue = value["Types"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AvailableType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_types.push_back(item);
        }
        m_typesHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableZone.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvailableZone::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneCnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneCnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneCnName.c_str(), allocator).Move(), allocator);
    }

    if (m_typesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Types";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_types.begin(); itr != m_types.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

}


string AvailableZone::GetZone() const
{
    return m_zone;
}

void AvailableZone::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool AvailableZone::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t AvailableZone::GetZoneId() const
{
    return m_zoneId;
}

void AvailableZone::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool AvailableZone::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string AvailableZone::GetZoneCnName() const
{
    return m_zoneCnName;
}

void AvailableZone::SetZoneCnName(const string& _zoneCnName)
{
    m_zoneCnName = _zoneCnName;
    m_zoneCnNameHasBeenSet = true;
}

bool AvailableZone::ZoneCnNameHasBeenSet() const
{
    return m_zoneCnNameHasBeenSet;
}

vector<AvailableType> AvailableZone::GetTypes() const
{
    return m_types;
}

void AvailableZone::SetTypes(const vector<AvailableType>& _types)
{
    m_types = _types;
    m_typesHasBeenSet = true;
}

bool AvailableZone::TypesHasBeenSet() const
{
    return m_typesHasBeenSet;
}

string AvailableZone::GetZoneName() const
{
    return m_zoneName;
}

void AvailableZone::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool AvailableZone::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

