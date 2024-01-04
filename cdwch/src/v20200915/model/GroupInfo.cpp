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

#include <tencentcloud/cdwch/v20200915/model/GroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

GroupInfo::GroupInfo() :
    m_groupNameHasBeenSet(false),
    m_shardNameHasBeenSet(false),
    m_replicaNameHasBeenSet(false)
{
}

CoreInternalOutcome GroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ShardName") && !value["ShardName"].IsNull())
    {
        if (!value["ShardName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.ShardName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardName = string(value["ShardName"].GetString());
        m_shardNameHasBeenSet = true;
    }

    if (value.HasMember("ReplicaName") && !value["ReplicaName"].IsNull())
    {
        if (!value["ReplicaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.ReplicaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicaName = string(value["ReplicaName"].GetString());
        m_replicaNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_shardNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardName.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicaName.c_str(), allocator).Move(), allocator);
    }

}


string GroupInfo::GetGroupName() const
{
    return m_groupName;
}

void GroupInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GroupInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string GroupInfo::GetShardName() const
{
    return m_shardName;
}

void GroupInfo::SetShardName(const string& _shardName)
{
    m_shardName = _shardName;
    m_shardNameHasBeenSet = true;
}

bool GroupInfo::ShardNameHasBeenSet() const
{
    return m_shardNameHasBeenSet;
}

string GroupInfo::GetReplicaName() const
{
    return m_replicaName;
}

void GroupInfo::SetReplicaName(const string& _replicaName)
{
    m_replicaName = _replicaName;
    m_replicaNameHasBeenSet = true;
}

bool GroupInfo::ReplicaNameHasBeenSet() const
{
    return m_replicaNameHasBeenSet;
}

