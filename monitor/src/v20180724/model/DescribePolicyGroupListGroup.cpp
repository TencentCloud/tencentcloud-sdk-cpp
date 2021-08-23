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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupListGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyGroupListGroup::DescribePolicyGroupListGroup() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_isOpenHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_lastEditUinHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_useSumHasBeenSet(false),
    m_noShieldedSumHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_canSetDefaultHasBeenSet(false),
    m_parentGroupIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_conditionsHasBeenSet(false),
    m_eventConditionsHasBeenSet(false),
    m_receiverInfosHasBeenSet(false),
    m_conditionsTempHasBeenSet(false),
    m_instanceGroupHasBeenSet(false),
    m_isUnionRuleHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyGroupListGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("IsOpen") && !value["IsOpen"].IsNull())
    {
        if (!value["IsOpen"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.IsOpen` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOpen = value["IsOpen"].GetBool();
        m_isOpenHasBeenSet = true;
    }

    if (value.HasMember("ViewName") && !value["ViewName"].IsNull())
    {
        if (!value["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(value["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }

    if (value.HasMember("LastEditUin") && !value["LastEditUin"].IsNull())
    {
        if (!value["LastEditUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.LastEditUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastEditUin = string(value["LastEditUin"].GetString());
        m_lastEditUinHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.InsertTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = value["InsertTime"].GetInt64();
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("UseSum") && !value["UseSum"].IsNull())
    {
        if (!value["UseSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.UseSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useSum = value["UseSum"].GetInt64();
        m_useSumHasBeenSet = true;
    }

    if (value.HasMember("NoShieldedSum") && !value["NoShieldedSum"].IsNull())
    {
        if (!value["NoShieldedSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.NoShieldedSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noShieldedSum = value["NoShieldedSum"].GetInt64();
        m_noShieldedSumHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("CanSetDefault") && !value["CanSetDefault"].IsNull())
    {
        if (!value["CanSetDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.CanSetDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canSetDefault = value["CanSetDefault"].GetBool();
        m_canSetDefaultHasBeenSet = true;
    }

    if (value.HasMember("ParentGroupId") && !value["ParentGroupId"].IsNull())
    {
        if (!value["ParentGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.ParentGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentGroupId = value["ParentGroupId"].GetInt64();
        m_parentGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Conditions") && !value["Conditions"].IsNull())
    {
        if (!value["Conditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.Conditions` is not array type"));

        const rapidjson::Value &tmpValue = value["Conditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribePolicyGroupInfoCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_conditions.push_back(item);
        }
        m_conditionsHasBeenSet = true;
    }

    if (value.HasMember("EventConditions") && !value["EventConditions"].IsNull())
    {
        if (!value["EventConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.EventConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["EventConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribePolicyGroupInfoEventCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventConditions.push_back(item);
        }
        m_eventConditionsHasBeenSet = true;
    }

    if (value.HasMember("ReceiverInfos") && !value["ReceiverInfos"].IsNull())
    {
        if (!value["ReceiverInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.ReceiverInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiverInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribePolicyGroupInfoReceiverInfo item;
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

    if (value.HasMember("ConditionsTemp") && !value["ConditionsTemp"].IsNull())
    {
        if (!value["ConditionsTemp"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.ConditionsTemp` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_conditionsTemp.Deserialize(value["ConditionsTemp"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conditionsTempHasBeenSet = true;
    }

    if (value.HasMember("InstanceGroup") && !value["InstanceGroup"].IsNull())
    {
        if (!value["InstanceGroup"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.InstanceGroup` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceGroup.Deserialize(value["InstanceGroup"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceGroupHasBeenSet = true;
    }

    if (value.HasMember("IsUnionRule") && !value["IsUnionRule"].IsNull())
    {
        if (!value["IsUnionRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroup.IsUnionRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isUnionRule = value["IsUnionRule"].GetInt64();
        m_isUnionRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicyGroupListGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_isOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOpen, allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
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

    if (m_useSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useSum, allocator);
    }

    if (m_noShieldedSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoShieldedSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noShieldedSum, allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_canSetDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanSetDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canSetDefault, allocator);
    }

    if (m_parentGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentGroupId, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_conditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conditions.begin(); itr != m_conditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eventConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventConditions.begin(); itr != m_eventConditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_conditionsTempHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionsTemp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_conditionsTemp.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceGroup.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isUnionRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUnionRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUnionRule, allocator);
    }

}


int64_t DescribePolicyGroupListGroup::GetGroupId() const
{
    return m_groupId;
}

void DescribePolicyGroupListGroup::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribePolicyGroupListGroup::GetGroupName() const
{
    return m_groupName;
}

void DescribePolicyGroupListGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

bool DescribePolicyGroupListGroup::GetIsOpen() const
{
    return m_isOpen;
}

void DescribePolicyGroupListGroup::SetIsOpen(const bool& _isOpen)
{
    m_isOpen = _isOpen;
    m_isOpenHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::IsOpenHasBeenSet() const
{
    return m_isOpenHasBeenSet;
}

string DescribePolicyGroupListGroup::GetViewName() const
{
    return m_viewName;
}

void DescribePolicyGroupListGroup::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

string DescribePolicyGroupListGroup::GetLastEditUin() const
{
    return m_lastEditUin;
}

void DescribePolicyGroupListGroup::SetLastEditUin(const string& _lastEditUin)
{
    m_lastEditUin = _lastEditUin;
    m_lastEditUinHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::LastEditUinHasBeenSet() const
{
    return m_lastEditUinHasBeenSet;
}

int64_t DescribePolicyGroupListGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void DescribePolicyGroupListGroup::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DescribePolicyGroupListGroup::GetInsertTime() const
{
    return m_insertTime;
}

void DescribePolicyGroupListGroup::SetInsertTime(const int64_t& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

int64_t DescribePolicyGroupListGroup::GetUseSum() const
{
    return m_useSum;
}

void DescribePolicyGroupListGroup::SetUseSum(const int64_t& _useSum)
{
    m_useSum = _useSum;
    m_useSumHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::UseSumHasBeenSet() const
{
    return m_useSumHasBeenSet;
}

int64_t DescribePolicyGroupListGroup::GetNoShieldedSum() const
{
    return m_noShieldedSum;
}

void DescribePolicyGroupListGroup::SetNoShieldedSum(const int64_t& _noShieldedSum)
{
    m_noShieldedSum = _noShieldedSum;
    m_noShieldedSumHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::NoShieldedSumHasBeenSet() const
{
    return m_noShieldedSumHasBeenSet;
}

int64_t DescribePolicyGroupListGroup::GetIsDefault() const
{
    return m_isDefault;
}

void DescribePolicyGroupListGroup::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

bool DescribePolicyGroupListGroup::GetCanSetDefault() const
{
    return m_canSetDefault;
}

void DescribePolicyGroupListGroup::SetCanSetDefault(const bool& _canSetDefault)
{
    m_canSetDefault = _canSetDefault;
    m_canSetDefaultHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::CanSetDefaultHasBeenSet() const
{
    return m_canSetDefaultHasBeenSet;
}

int64_t DescribePolicyGroupListGroup::GetParentGroupId() const
{
    return m_parentGroupId;
}

void DescribePolicyGroupListGroup::SetParentGroupId(const int64_t& _parentGroupId)
{
    m_parentGroupId = _parentGroupId;
    m_parentGroupIdHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::ParentGroupIdHasBeenSet() const
{
    return m_parentGroupIdHasBeenSet;
}

string DescribePolicyGroupListGroup::GetRemark() const
{
    return m_remark;
}

void DescribePolicyGroupListGroup::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t DescribePolicyGroupListGroup::GetProjectId() const
{
    return m_projectId;
}

void DescribePolicyGroupListGroup::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<DescribePolicyGroupInfoCondition> DescribePolicyGroupListGroup::GetConditions() const
{
    return m_conditions;
}

void DescribePolicyGroupListGroup::SetConditions(const vector<DescribePolicyGroupInfoCondition>& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}

vector<DescribePolicyGroupInfoEventCondition> DescribePolicyGroupListGroup::GetEventConditions() const
{
    return m_eventConditions;
}

void DescribePolicyGroupListGroup::SetEventConditions(const vector<DescribePolicyGroupInfoEventCondition>& _eventConditions)
{
    m_eventConditions = _eventConditions;
    m_eventConditionsHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::EventConditionsHasBeenSet() const
{
    return m_eventConditionsHasBeenSet;
}

vector<DescribePolicyGroupInfoReceiverInfo> DescribePolicyGroupListGroup::GetReceiverInfos() const
{
    return m_receiverInfos;
}

void DescribePolicyGroupListGroup::SetReceiverInfos(const vector<DescribePolicyGroupInfoReceiverInfo>& _receiverInfos)
{
    m_receiverInfos = _receiverInfos;
    m_receiverInfosHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::ReceiverInfosHasBeenSet() const
{
    return m_receiverInfosHasBeenSet;
}

DescribePolicyGroupInfoConditionTpl DescribePolicyGroupListGroup::GetConditionsTemp() const
{
    return m_conditionsTemp;
}

void DescribePolicyGroupListGroup::SetConditionsTemp(const DescribePolicyGroupInfoConditionTpl& _conditionsTemp)
{
    m_conditionsTemp = _conditionsTemp;
    m_conditionsTempHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::ConditionsTempHasBeenSet() const
{
    return m_conditionsTempHasBeenSet;
}

DescribePolicyGroupListGroupInstanceGroup DescribePolicyGroupListGroup::GetInstanceGroup() const
{
    return m_instanceGroup;
}

void DescribePolicyGroupListGroup::SetInstanceGroup(const DescribePolicyGroupListGroupInstanceGroup& _instanceGroup)
{
    m_instanceGroup = _instanceGroup;
    m_instanceGroupHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::InstanceGroupHasBeenSet() const
{
    return m_instanceGroupHasBeenSet;
}

int64_t DescribePolicyGroupListGroup::GetIsUnionRule() const
{
    return m_isUnionRule;
}

void DescribePolicyGroupListGroup::SetIsUnionRule(const int64_t& _isUnionRule)
{
    m_isUnionRule = _isUnionRule;
    m_isUnionRuleHasBeenSet = true;
}

bool DescribePolicyGroupListGroup::IsUnionRuleHasBeenSet() const
{
    return m_isUnionRuleHasBeenSet;
}

