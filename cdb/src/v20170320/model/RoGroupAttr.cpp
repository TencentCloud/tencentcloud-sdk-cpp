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

#include <tencentcloud/cdb/v20170320/model/RoGroupAttr.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

RoGroupAttr::RoGroupAttr() :
    m_roGroupNameHasBeenSet(false),
    m_roMaxDelayTimeHasBeenSet(false),
    m_roOfflineDelayHasBeenSet(false),
    m_minRoInGroupHasBeenSet(false),
    m_weightModeHasBeenSet(false),
    m_replicationDelayTimeHasBeenSet(false)
{
}

CoreInternalOutcome RoGroupAttr::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoGroupName") && !value["RoGroupName"].IsNull())
    {
        if (!value["RoGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroupAttr.RoGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roGroupName = string(value["RoGroupName"].GetString());
        m_roGroupNameHasBeenSet = true;
    }

    if (value.HasMember("RoMaxDelayTime") && !value["RoMaxDelayTime"].IsNull())
    {
        if (!value["RoMaxDelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroupAttr.RoMaxDelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roMaxDelayTime = value["RoMaxDelayTime"].GetInt64();
        m_roMaxDelayTimeHasBeenSet = true;
    }

    if (value.HasMember("RoOfflineDelay") && !value["RoOfflineDelay"].IsNull())
    {
        if (!value["RoOfflineDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroupAttr.RoOfflineDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roOfflineDelay = value["RoOfflineDelay"].GetInt64();
        m_roOfflineDelayHasBeenSet = true;
    }

    if (value.HasMember("MinRoInGroup") && !value["MinRoInGroup"].IsNull())
    {
        if (!value["MinRoInGroup"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroupAttr.MinRoInGroup` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minRoInGroup = value["MinRoInGroup"].GetInt64();
        m_minRoInGroupHasBeenSet = true;
    }

    if (value.HasMember("WeightMode") && !value["WeightMode"].IsNull())
    {
        if (!value["WeightMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroupAttr.WeightMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weightMode = string(value["WeightMode"].GetString());
        m_weightModeHasBeenSet = true;
    }

    if (value.HasMember("ReplicationDelayTime") && !value["ReplicationDelayTime"].IsNull())
    {
        if (!value["ReplicationDelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroupAttr.ReplicationDelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicationDelayTime = value["ReplicationDelayTime"].GetInt64();
        m_replicationDelayTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoGroupAttr::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_roMaxDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoMaxDelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roMaxDelayTime, allocator);
    }

    if (m_roOfflineDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoOfflineDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roOfflineDelay, allocator);
    }

    if (m_minRoInGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinRoInGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minRoInGroup, allocator);
    }

    if (m_weightModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weightMode.c_str(), allocator).Move(), allocator);
    }

    if (m_replicationDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationDelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicationDelayTime, allocator);
    }

}


string RoGroupAttr::GetRoGroupName() const
{
    return m_roGroupName;
}

void RoGroupAttr::SetRoGroupName(const string& _roGroupName)
{
    m_roGroupName = _roGroupName;
    m_roGroupNameHasBeenSet = true;
}

bool RoGroupAttr::RoGroupNameHasBeenSet() const
{
    return m_roGroupNameHasBeenSet;
}

int64_t RoGroupAttr::GetRoMaxDelayTime() const
{
    return m_roMaxDelayTime;
}

void RoGroupAttr::SetRoMaxDelayTime(const int64_t& _roMaxDelayTime)
{
    m_roMaxDelayTime = _roMaxDelayTime;
    m_roMaxDelayTimeHasBeenSet = true;
}

bool RoGroupAttr::RoMaxDelayTimeHasBeenSet() const
{
    return m_roMaxDelayTimeHasBeenSet;
}

int64_t RoGroupAttr::GetRoOfflineDelay() const
{
    return m_roOfflineDelay;
}

void RoGroupAttr::SetRoOfflineDelay(const int64_t& _roOfflineDelay)
{
    m_roOfflineDelay = _roOfflineDelay;
    m_roOfflineDelayHasBeenSet = true;
}

bool RoGroupAttr::RoOfflineDelayHasBeenSet() const
{
    return m_roOfflineDelayHasBeenSet;
}

int64_t RoGroupAttr::GetMinRoInGroup() const
{
    return m_minRoInGroup;
}

void RoGroupAttr::SetMinRoInGroup(const int64_t& _minRoInGroup)
{
    m_minRoInGroup = _minRoInGroup;
    m_minRoInGroupHasBeenSet = true;
}

bool RoGroupAttr::MinRoInGroupHasBeenSet() const
{
    return m_minRoInGroupHasBeenSet;
}

string RoGroupAttr::GetWeightMode() const
{
    return m_weightMode;
}

void RoGroupAttr::SetWeightMode(const string& _weightMode)
{
    m_weightMode = _weightMode;
    m_weightModeHasBeenSet = true;
}

bool RoGroupAttr::WeightModeHasBeenSet() const
{
    return m_weightModeHasBeenSet;
}

int64_t RoGroupAttr::GetReplicationDelayTime() const
{
    return m_replicationDelayTime;
}

void RoGroupAttr::SetReplicationDelayTime(const int64_t& _replicationDelayTime)
{
    m_replicationDelayTime = _replicationDelayTime;
    m_replicationDelayTimeHasBeenSet = true;
}

bool RoGroupAttr::ReplicationDelayTimeHasBeenSet() const
{
    return m_replicationDelayTimeHasBeenSet;
}

