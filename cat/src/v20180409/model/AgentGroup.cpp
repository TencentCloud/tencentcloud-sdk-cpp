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

#include <tencentcloud/cat/v20180409/model/AgentGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

AgentGroup::AgentGroup() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_taskNumHasBeenSet(false),
    m_groupDetailHasBeenSet(false),
    m_maxGroupNumHasBeenSet(false)
{
}

CoreInternalOutcome AgentGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentGroup.GroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetUint64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentGroup.IsDefault` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetUint64();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("TaskNum") && !value["TaskNum"].IsNull())
    {
        if (!value["TaskNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentGroup.TaskNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskNum = value["TaskNum"].GetUint64();
        m_taskNumHasBeenSet = true;
    }

    if (value.HasMember("GroupDetail") && !value["GroupDetail"].IsNull())
    {
        if (!value["GroupDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentGroup.GroupDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CatAgent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupDetail.push_back(item);
        }
        m_groupDetailHasBeenSet = true;
    }

    if (value.HasMember("MaxGroupNum") && !value["MaxGroupNum"].IsNull())
    {
        if (!value["MaxGroupNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentGroup.MaxGroupNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxGroupNum = value["MaxGroupNum"].GetUint64();
        m_maxGroupNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_taskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskNum, allocator);
    }

    if (m_groupDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupDetail.begin(); itr != m_groupDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maxGroupNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxGroupNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxGroupNum, allocator);
    }

}


uint64_t AgentGroup::GetGroupId() const
{
    return m_groupId;
}

void AgentGroup::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool AgentGroup::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string AgentGroup::GetGroupName() const
{
    return m_groupName;
}

void AgentGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool AgentGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

uint64_t AgentGroup::GetIsDefault() const
{
    return m_isDefault;
}

void AgentGroup::SetIsDefault(const uint64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool AgentGroup::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

uint64_t AgentGroup::GetTaskNum() const
{
    return m_taskNum;
}

void AgentGroup::SetTaskNum(const uint64_t& _taskNum)
{
    m_taskNum = _taskNum;
    m_taskNumHasBeenSet = true;
}

bool AgentGroup::TaskNumHasBeenSet() const
{
    return m_taskNumHasBeenSet;
}

vector<CatAgent> AgentGroup::GetGroupDetail() const
{
    return m_groupDetail;
}

void AgentGroup::SetGroupDetail(const vector<CatAgent>& _groupDetail)
{
    m_groupDetail = _groupDetail;
    m_groupDetailHasBeenSet = true;
}

bool AgentGroup::GroupDetailHasBeenSet() const
{
    return m_groupDetailHasBeenSet;
}

uint64_t AgentGroup::GetMaxGroupNum() const
{
    return m_maxGroupNum;
}

void AgentGroup::SetMaxGroupNum(const uint64_t& _maxGroupNum)
{
    m_maxGroupNum = _maxGroupNum;
    m_maxGroupNumHasBeenSet = true;
}

bool AgentGroup::MaxGroupNumHasBeenSet() const
{
    return m_maxGroupNumHasBeenSet;
}

