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

#include <tencentcloud/cfg/v20210820/model/DescribePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

DescribePolicy::DescribePolicy() :
    m_taskPolicyIdListHasBeenSet(false),
    m_taskPolicyStatusHasBeenSet(false),
    m_taskPolicyRuleHasBeenSet(false),
    m_taskPolicyDealTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskPolicyIdList") && !value["TaskPolicyIdList"].IsNull())
    {
        if (!value["TaskPolicyIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribePolicy.TaskPolicyIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskPolicyIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskPolicyIdList.push_back((*itr).GetString());
        }
        m_taskPolicyIdListHasBeenSet = true;
    }

    if (value.HasMember("TaskPolicyStatus") && !value["TaskPolicyStatus"].IsNull())
    {
        if (!value["TaskPolicyStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicy.TaskPolicyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskPolicyStatus = string(value["TaskPolicyStatus"].GetString());
        m_taskPolicyStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskPolicyRule") && !value["TaskPolicyRule"].IsNull())
    {
        if (!value["TaskPolicyRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicy.TaskPolicyRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskPolicyRule = string(value["TaskPolicyRule"].GetString());
        m_taskPolicyRuleHasBeenSet = true;
    }

    if (value.HasMember("TaskPolicyDealType") && !value["TaskPolicyDealType"].IsNull())
    {
        if (!value["TaskPolicyDealType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicy.TaskPolicyDealType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskPolicyDealType = value["TaskPolicyDealType"].GetInt64();
        m_taskPolicyDealTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskPolicyIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPolicyIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskPolicyIdList.begin(); itr != m_taskPolicyIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskPolicyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPolicyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskPolicyStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_taskPolicyRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPolicyRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskPolicyRule.c_str(), allocator).Move(), allocator);
    }

    if (m_taskPolicyDealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPolicyDealType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskPolicyDealType, allocator);
    }

}


vector<string> DescribePolicy::GetTaskPolicyIdList() const
{
    return m_taskPolicyIdList;
}

void DescribePolicy::SetTaskPolicyIdList(const vector<string>& _taskPolicyIdList)
{
    m_taskPolicyIdList = _taskPolicyIdList;
    m_taskPolicyIdListHasBeenSet = true;
}

bool DescribePolicy::TaskPolicyIdListHasBeenSet() const
{
    return m_taskPolicyIdListHasBeenSet;
}

string DescribePolicy::GetTaskPolicyStatus() const
{
    return m_taskPolicyStatus;
}

void DescribePolicy::SetTaskPolicyStatus(const string& _taskPolicyStatus)
{
    m_taskPolicyStatus = _taskPolicyStatus;
    m_taskPolicyStatusHasBeenSet = true;
}

bool DescribePolicy::TaskPolicyStatusHasBeenSet() const
{
    return m_taskPolicyStatusHasBeenSet;
}

string DescribePolicy::GetTaskPolicyRule() const
{
    return m_taskPolicyRule;
}

void DescribePolicy::SetTaskPolicyRule(const string& _taskPolicyRule)
{
    m_taskPolicyRule = _taskPolicyRule;
    m_taskPolicyRuleHasBeenSet = true;
}

bool DescribePolicy::TaskPolicyRuleHasBeenSet() const
{
    return m_taskPolicyRuleHasBeenSet;
}

int64_t DescribePolicy::GetTaskPolicyDealType() const
{
    return m_taskPolicyDealType;
}

void DescribePolicy::SetTaskPolicyDealType(const int64_t& _taskPolicyDealType)
{
    m_taskPolicyDealType = _taskPolicyDealType;
    m_taskPolicyDealTypeHasBeenSet = true;
}

bool DescribePolicy::TaskPolicyDealTypeHasBeenSet() const
{
    return m_taskPolicyDealTypeHasBeenSet;
}

