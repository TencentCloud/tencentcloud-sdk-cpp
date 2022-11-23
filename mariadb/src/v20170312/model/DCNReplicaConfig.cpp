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

#include <tencentcloud/mariadb/v20170312/model/DCNReplicaConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DCNReplicaConfig::DCNReplicaConfig() :
    m_roReplicationModeHasBeenSet(false),
    m_delayReplicationTypeHasBeenSet(false),
    m_dueTimeHasBeenSet(false),
    m_replicationDelayHasBeenSet(false)
{
}

CoreInternalOutcome DCNReplicaConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoReplicationMode") && !value["RoReplicationMode"].IsNull())
    {
        if (!value["RoReplicationMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCNReplicaConfig.RoReplicationMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roReplicationMode = string(value["RoReplicationMode"].GetString());
        m_roReplicationModeHasBeenSet = true;
    }

    if (value.HasMember("DelayReplicationType") && !value["DelayReplicationType"].IsNull())
    {
        if (!value["DelayReplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCNReplicaConfig.DelayReplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delayReplicationType = string(value["DelayReplicationType"].GetString());
        m_delayReplicationTypeHasBeenSet = true;
    }

    if (value.HasMember("DueTime") && !value["DueTime"].IsNull())
    {
        if (!value["DueTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCNReplicaConfig.DueTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dueTime = string(value["DueTime"].GetString());
        m_dueTimeHasBeenSet = true;
    }

    if (value.HasMember("ReplicationDelay") && !value["ReplicationDelay"].IsNull())
    {
        if (!value["ReplicationDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCNReplicaConfig.ReplicationDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicationDelay = value["ReplicationDelay"].GetInt64();
        m_replicationDelayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DCNReplicaConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roReplicationModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoReplicationMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roReplicationMode.c_str(), allocator).Move(), allocator);
    }

    if (m_delayReplicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayReplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delayReplicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_dueTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DueTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dueTime.c_str(), allocator).Move(), allocator);
    }

    if (m_replicationDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicationDelay, allocator);
    }

}


string DCNReplicaConfig::GetRoReplicationMode() const
{
    return m_roReplicationMode;
}

void DCNReplicaConfig::SetRoReplicationMode(const string& _roReplicationMode)
{
    m_roReplicationMode = _roReplicationMode;
    m_roReplicationModeHasBeenSet = true;
}

bool DCNReplicaConfig::RoReplicationModeHasBeenSet() const
{
    return m_roReplicationModeHasBeenSet;
}

string DCNReplicaConfig::GetDelayReplicationType() const
{
    return m_delayReplicationType;
}

void DCNReplicaConfig::SetDelayReplicationType(const string& _delayReplicationType)
{
    m_delayReplicationType = _delayReplicationType;
    m_delayReplicationTypeHasBeenSet = true;
}

bool DCNReplicaConfig::DelayReplicationTypeHasBeenSet() const
{
    return m_delayReplicationTypeHasBeenSet;
}

string DCNReplicaConfig::GetDueTime() const
{
    return m_dueTime;
}

void DCNReplicaConfig::SetDueTime(const string& _dueTime)
{
    m_dueTime = _dueTime;
    m_dueTimeHasBeenSet = true;
}

bool DCNReplicaConfig::DueTimeHasBeenSet() const
{
    return m_dueTimeHasBeenSet;
}

int64_t DCNReplicaConfig::GetReplicationDelay() const
{
    return m_replicationDelay;
}

void DCNReplicaConfig::SetReplicationDelay(const int64_t& _replicationDelay)
{
    m_replicationDelay = _replicationDelay;
    m_replicationDelayHasBeenSet = true;
}

bool DCNReplicaConfig::ReplicationDelayHasBeenSet() const
{
    return m_replicationDelayHasBeenSet;
}

