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

#include <tencentcloud/cdb/v20170320/model/SlaveConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

SlaveConfig::SlaveConfig() :
    m_replicationModeHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

CoreInternalOutcome SlaveConfig::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ReplicationMode") && !value["ReplicationMode"].IsNull())
    {
        if (!value["ReplicationMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `SlaveConfig.ReplicationMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicationMode = string(value["ReplicationMode"].GetString());
        m_replicationModeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `SlaveConfig.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlaveConfig::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_replicationModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReplicationMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_replicationMode.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

}


string SlaveConfig::GetReplicationMode() const
{
    return m_replicationMode;
}

void SlaveConfig::SetReplicationMode(const string& _replicationMode)
{
    m_replicationMode = _replicationMode;
    m_replicationModeHasBeenSet = true;
}

bool SlaveConfig::ReplicationModeHasBeenSet() const
{
    return m_replicationModeHasBeenSet;
}

string SlaveConfig::GetZone() const
{
    return m_zone;
}

void SlaveConfig::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool SlaveConfig::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

