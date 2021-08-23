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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoConditionTpl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyGroupInfoConditionTpl::DescribePolicyGroupInfoConditionTpl() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_lastEditUinHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_isUnionRuleHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyGroupInfoConditionTpl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoConditionTpl.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoConditionTpl.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ViewName") && !value["ViewName"].IsNull())
    {
        if (!value["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoConditionTpl.ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(value["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoConditionTpl.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("LastEditUin") && !value["LastEditUin"].IsNull())
    {
        if (!value["LastEditUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoConditionTpl.LastEditUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastEditUin = string(value["LastEditUin"].GetString());
        m_lastEditUinHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoConditionTpl.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoConditionTpl.InsertTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = value["InsertTime"].GetInt64();
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("IsUnionRule") && !value["IsUnionRule"].IsNull())
    {
        if (!value["IsUnionRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoConditionTpl.IsUnionRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isUnionRule = value["IsUnionRule"].GetInt64();
        m_isUnionRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicyGroupInfoConditionTpl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_lastEditUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastEditUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastEditUin.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_insertTime, allocator);
    }

    if (m_isUnionRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUnionRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUnionRule, allocator);
    }

}


int64_t DescribePolicyGroupInfoConditionTpl::GetGroupId() const
{
    return m_groupId;
}

void DescribePolicyGroupInfoConditionTpl::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribePolicyGroupInfoConditionTpl::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribePolicyGroupInfoConditionTpl::GetGroupName() const
{
    return m_groupName;
}

void DescribePolicyGroupInfoConditionTpl::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribePolicyGroupInfoConditionTpl::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string DescribePolicyGroupInfoConditionTpl::GetViewName() const
{
    return m_viewName;
}

void DescribePolicyGroupInfoConditionTpl::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool DescribePolicyGroupInfoConditionTpl::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

string DescribePolicyGroupInfoConditionTpl::GetRemark() const
{
    return m_remark;
}

void DescribePolicyGroupInfoConditionTpl::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DescribePolicyGroupInfoConditionTpl::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribePolicyGroupInfoConditionTpl::GetLastEditUin() const
{
    return m_lastEditUin;
}

void DescribePolicyGroupInfoConditionTpl::SetLastEditUin(const string& _lastEditUin)
{
    m_lastEditUin = _lastEditUin;
    m_lastEditUinHasBeenSet = true;
}

bool DescribePolicyGroupInfoConditionTpl::LastEditUinHasBeenSet() const
{
    return m_lastEditUinHasBeenSet;
}

int64_t DescribePolicyGroupInfoConditionTpl::GetUpdateTime() const
{
    return m_updateTime;
}

void DescribePolicyGroupInfoConditionTpl::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DescribePolicyGroupInfoConditionTpl::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DescribePolicyGroupInfoConditionTpl::GetInsertTime() const
{
    return m_insertTime;
}

void DescribePolicyGroupInfoConditionTpl::SetInsertTime(const int64_t& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool DescribePolicyGroupInfoConditionTpl::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

int64_t DescribePolicyGroupInfoConditionTpl::GetIsUnionRule() const
{
    return m_isUnionRule;
}

void DescribePolicyGroupInfoConditionTpl::SetIsUnionRule(const int64_t& _isUnionRule)
{
    m_isUnionRule = _isUnionRule;
    m_isUnionRuleHasBeenSet = true;
}

bool DescribePolicyGroupInfoConditionTpl::IsUnionRuleHasBeenSet() const
{
    return m_isUnionRuleHasBeenSet;
}

