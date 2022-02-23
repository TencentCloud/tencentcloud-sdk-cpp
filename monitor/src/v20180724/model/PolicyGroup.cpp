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

#include <tencentcloud/monitor/v20180724/model/PolicyGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PolicyGroup::PolicyGroup() :
    m_canSetDefaultHasBeenSet(false),
    m_groupIDHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_lastEditUinHasBeenSet(false),
    m_noShieldedInstanceCountHasBeenSet(false),
    m_parentGroupIDHasBeenSet(false),
    m_projectIDHasBeenSet(false),
    m_receiverInfosHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_totalInstanceCountHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_isUnionRuleHasBeenSet(false)
{
}

CoreInternalOutcome PolicyGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CanSetDefault") && !value["CanSetDefault"].IsNull())
    {
        if (!value["CanSetDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.CanSetDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canSetDefault = value["CanSetDefault"].GetBool();
        m_canSetDefaultHasBeenSet = true;
    }

    if (value.HasMember("GroupID") && !value["GroupID"].IsNull())
    {
        if (!value["GroupID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.GroupID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupID = value["GroupID"].GetInt64();
        m_groupIDHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.InsertTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = value["InsertTime"].GetInt64();
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("LastEditUin") && !value["LastEditUin"].IsNull())
    {
        if (!value["LastEditUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.LastEditUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastEditUin = value["LastEditUin"].GetInt64();
        m_lastEditUinHasBeenSet = true;
    }

    if (value.HasMember("NoShieldedInstanceCount") && !value["NoShieldedInstanceCount"].IsNull())
    {
        if (!value["NoShieldedInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.NoShieldedInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noShieldedInstanceCount = value["NoShieldedInstanceCount"].GetInt64();
        m_noShieldedInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("ParentGroupID") && !value["ParentGroupID"].IsNull())
    {
        if (!value["ParentGroupID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.ParentGroupID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentGroupID = value["ParentGroupID"].GetInt64();
        m_parentGroupIDHasBeenSet = true;
    }

    if (value.HasMember("ProjectID") && !value["ProjectID"].IsNull())
    {
        if (!value["ProjectID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.ProjectID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectID = value["ProjectID"].GetInt64();
        m_projectIDHasBeenSet = true;
    }

    if (value.HasMember("ReceiverInfos") && !value["ReceiverInfos"].IsNull())
    {
        if (!value["ReceiverInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.ReceiverInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiverInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PolicyGroupReceiverInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_receiverInfos.push_back(item);
        }
        m_receiverInfosHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalInstanceCount") && !value["TotalInstanceCount"].IsNull())
    {
        if (!value["TotalInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.TotalInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalInstanceCount = value["TotalInstanceCount"].GetInt64();
        m_totalInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("ViewName") && !value["ViewName"].IsNull())
    {
        if (!value["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(value["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }

    if (value.HasMember("IsUnionRule") && !value["IsUnionRule"].IsNull())
    {
        if (!value["IsUnionRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroup.IsUnionRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isUnionRule = value["IsUnionRule"].GetInt64();
        m_isUnionRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_canSetDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanSetDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canSetDefault, allocator);
    }

    if (m_groupIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupID, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_insertTime, allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_lastEditUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastEditUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastEditUin, allocator);
    }

    if (m_noShieldedInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoShieldedInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noShieldedInstanceCount, allocator);
    }

    if (m_parentGroupIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentGroupID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentGroupID, allocator);
    }

    if (m_projectIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectID, allocator);
    }

    if (m_receiverInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_receiverInfos.begin(); itr != m_receiverInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_totalInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalInstanceCount, allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_isUnionRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUnionRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUnionRule, allocator);
    }

}


bool PolicyGroup::GetCanSetDefault() const
{
    return m_canSetDefault;
}

void PolicyGroup::SetCanSetDefault(const bool& _canSetDefault)
{
    m_canSetDefault = _canSetDefault;
    m_canSetDefaultHasBeenSet = true;
}

bool PolicyGroup::CanSetDefaultHasBeenSet() const
{
    return m_canSetDefaultHasBeenSet;
}

int64_t PolicyGroup::GetGroupID() const
{
    return m_groupID;
}

void PolicyGroup::SetGroupID(const int64_t& _groupID)
{
    m_groupID = _groupID;
    m_groupIDHasBeenSet = true;
}

bool PolicyGroup::GroupIDHasBeenSet() const
{
    return m_groupIDHasBeenSet;
}

string PolicyGroup::GetGroupName() const
{
    return m_groupName;
}

void PolicyGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool PolicyGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t PolicyGroup::GetInsertTime() const
{
    return m_insertTime;
}

void PolicyGroup::SetInsertTime(const int64_t& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool PolicyGroup::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

int64_t PolicyGroup::GetIsDefault() const
{
    return m_isDefault;
}

void PolicyGroup::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool PolicyGroup::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

bool PolicyGroup::GetEnable() const
{
    return m_enable;
}

void PolicyGroup::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool PolicyGroup::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t PolicyGroup::GetLastEditUin() const
{
    return m_lastEditUin;
}

void PolicyGroup::SetLastEditUin(const int64_t& _lastEditUin)
{
    m_lastEditUin = _lastEditUin;
    m_lastEditUinHasBeenSet = true;
}

bool PolicyGroup::LastEditUinHasBeenSet() const
{
    return m_lastEditUinHasBeenSet;
}

int64_t PolicyGroup::GetNoShieldedInstanceCount() const
{
    return m_noShieldedInstanceCount;
}

void PolicyGroup::SetNoShieldedInstanceCount(const int64_t& _noShieldedInstanceCount)
{
    m_noShieldedInstanceCount = _noShieldedInstanceCount;
    m_noShieldedInstanceCountHasBeenSet = true;
}

bool PolicyGroup::NoShieldedInstanceCountHasBeenSet() const
{
    return m_noShieldedInstanceCountHasBeenSet;
}

int64_t PolicyGroup::GetParentGroupID() const
{
    return m_parentGroupID;
}

void PolicyGroup::SetParentGroupID(const int64_t& _parentGroupID)
{
    m_parentGroupID = _parentGroupID;
    m_parentGroupIDHasBeenSet = true;
}

bool PolicyGroup::ParentGroupIDHasBeenSet() const
{
    return m_parentGroupIDHasBeenSet;
}

int64_t PolicyGroup::GetProjectID() const
{
    return m_projectID;
}

void PolicyGroup::SetProjectID(const int64_t& _projectID)
{
    m_projectID = _projectID;
    m_projectIDHasBeenSet = true;
}

bool PolicyGroup::ProjectIDHasBeenSet() const
{
    return m_projectIDHasBeenSet;
}

vector<PolicyGroupReceiverInfo> PolicyGroup::GetReceiverInfos() const
{
    return m_receiverInfos;
}

void PolicyGroup::SetReceiverInfos(const vector<PolicyGroupReceiverInfo>& _receiverInfos)
{
    m_receiverInfos = _receiverInfos;
    m_receiverInfosHasBeenSet = true;
}

bool PolicyGroup::ReceiverInfosHasBeenSet() const
{
    return m_receiverInfosHasBeenSet;
}

string PolicyGroup::GetRemark() const
{
    return m_remark;
}

void PolicyGroup::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool PolicyGroup::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t PolicyGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void PolicyGroup::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PolicyGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t PolicyGroup::GetTotalInstanceCount() const
{
    return m_totalInstanceCount;
}

void PolicyGroup::SetTotalInstanceCount(const int64_t& _totalInstanceCount)
{
    m_totalInstanceCount = _totalInstanceCount;
    m_totalInstanceCountHasBeenSet = true;
}

bool PolicyGroup::TotalInstanceCountHasBeenSet() const
{
    return m_totalInstanceCountHasBeenSet;
}

string PolicyGroup::GetViewName() const
{
    return m_viewName;
}

void PolicyGroup::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool PolicyGroup::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

int64_t PolicyGroup::GetIsUnionRule() const
{
    return m_isUnionRule;
}

void PolicyGroup::SetIsUnionRule(const int64_t& _isUnionRule)
{
    m_isUnionRule = _isUnionRule;
    m_isUnionRuleHasBeenSet = true;
}

bool PolicyGroup::IsUnionRuleHasBeenSet() const
{
    return m_isUnionRuleHasBeenSet;
}

