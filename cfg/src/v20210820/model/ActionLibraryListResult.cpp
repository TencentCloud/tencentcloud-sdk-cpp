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

#include <tencentcloud/cfg/v20210820/model/ActionLibraryListResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

ActionLibraryListResult::ActionLibraryListResult() :
    m_actionNameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_riskDescHasBeenSet(false),
    m_actionIdHasBeenSet(false),
    m_attributeIdHasBeenSet(false),
    m_relationActionIdHasBeenSet(false),
    m_actionCommandHasBeenSet(false),
    m_actionCommandTypeHasBeenSet(false),
    m_actionContentHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_actionDetailHasBeenSet(false),
    m_isAllowedHasBeenSet(false),
    m_actionBestCaseHasBeenSet(false),
    m_objectTypeHasBeenSet(false),
    m_metricIdListHasBeenSet(false),
    m_isNewActionHasBeenSet(false),
    m_objectTypeIdHasBeenSet(false)
{
}

CoreInternalOutcome ActionLibraryListResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionName") && !value["ActionName"].IsNull())
    {
        if (!value["ActionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.ActionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionName = string(value["ActionName"].GetString());
        m_actionNameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("RiskDesc") && !value["RiskDesc"].IsNull())
    {
        if (!value["RiskDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.RiskDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskDesc = string(value["RiskDesc"].GetString());
        m_riskDescHasBeenSet = true;
    }

    if (value.HasMember("ActionId") && !value["ActionId"].IsNull())
    {
        if (!value["ActionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.ActionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_actionId = value["ActionId"].GetUint64();
        m_actionIdHasBeenSet = true;
    }

    if (value.HasMember("AttributeId") && !value["AttributeId"].IsNull())
    {
        if (!value["AttributeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.AttributeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attributeId = value["AttributeId"].GetUint64();
        m_attributeIdHasBeenSet = true;
    }

    if (value.HasMember("RelationActionId") && !value["RelationActionId"].IsNull())
    {
        if (!value["RelationActionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.RelationActionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_relationActionId = value["RelationActionId"].GetUint64();
        m_relationActionIdHasBeenSet = true;
    }

    if (value.HasMember("ActionCommand") && !value["ActionCommand"].IsNull())
    {
        if (!value["ActionCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.ActionCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionCommand = string(value["ActionCommand"].GetString());
        m_actionCommandHasBeenSet = true;
    }

    if (value.HasMember("ActionCommandType") && !value["ActionCommandType"].IsNull())
    {
        if (!value["ActionCommandType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.ActionCommandType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_actionCommandType = value["ActionCommandType"].GetUint64();
        m_actionCommandTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionContent") && !value["ActionContent"].IsNull())
    {
        if (!value["ActionContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.ActionContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionContent = string(value["ActionContent"].GetString());
        m_actionContentHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionDetail") && !value["ActionDetail"].IsNull())
    {
        if (!value["ActionDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.ActionDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionDetail = string(value["ActionDetail"].GetString());
        m_actionDetailHasBeenSet = true;
    }

    if (value.HasMember("IsAllowed") && !value["IsAllowed"].IsNull())
    {
        if (!value["IsAllowed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.IsAllowed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowed = value["IsAllowed"].GetBool();
        m_isAllowedHasBeenSet = true;
    }

    if (value.HasMember("ActionBestCase") && !value["ActionBestCase"].IsNull())
    {
        if (!value["ActionBestCase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.ActionBestCase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionBestCase = string(value["ActionBestCase"].GetString());
        m_actionBestCaseHasBeenSet = true;
    }

    if (value.HasMember("ObjectType") && !value["ObjectType"].IsNull())
    {
        if (!value["ObjectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.ObjectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectType = string(value["ObjectType"].GetString());
        m_objectTypeHasBeenSet = true;
    }

    if (value.HasMember("MetricIdList") && !value["MetricIdList"].IsNull())
    {
        if (!value["MetricIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.MetricIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["MetricIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_metricIdList.push_back((*itr).GetUint64());
        }
        m_metricIdListHasBeenSet = true;
    }

    if (value.HasMember("IsNewAction") && !value["IsNewAction"].IsNull())
    {
        if (!value["IsNewAction"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.IsNewAction` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNewAction = value["IsNewAction"].GetBool();
        m_isNewActionHasBeenSet = true;
    }

    if (value.HasMember("ObjectTypeId") && !value["ObjectTypeId"].IsNull())
    {
        if (!value["ObjectTypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionLibraryListResult.ObjectTypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_objectTypeId = value["ObjectTypeId"].GetInt64();
        m_objectTypeIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActionLibraryListResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionName.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_riskDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_actionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionId, allocator);
    }

    if (m_attributeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attributeId, allocator);
    }

    if (m_relationActionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelationActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relationActionId, allocator);
    }

    if (m_actionCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_actionCommandTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionCommandType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionCommandType, allocator);
    }

    if (m_actionContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionContent.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_isAllowedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowed, allocator);
    }

    if (m_actionBestCaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionBestCase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionBestCase.c_str(), allocator).Move(), allocator);
    }

    if (m_objectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectType.c_str(), allocator).Move(), allocator);
    }

    if (m_metricIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metricIdList.begin(); itr != m_metricIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_isNewActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNewAction, allocator);
    }

    if (m_objectTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_objectTypeId, allocator);
    }

}


string ActionLibraryListResult::GetActionName() const
{
    return m_actionName;
}

void ActionLibraryListResult::SetActionName(const string& _actionName)
{
    m_actionName = _actionName;
    m_actionNameHasBeenSet = true;
}

bool ActionLibraryListResult::ActionNameHasBeenSet() const
{
    return m_actionNameHasBeenSet;
}

string ActionLibraryListResult::GetDesc() const
{
    return m_desc;
}

void ActionLibraryListResult::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ActionLibraryListResult::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string ActionLibraryListResult::GetActionType() const
{
    return m_actionType;
}

void ActionLibraryListResult::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool ActionLibraryListResult::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string ActionLibraryListResult::GetCreateTime() const
{
    return m_createTime;
}

void ActionLibraryListResult::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ActionLibraryListResult::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ActionLibraryListResult::GetCreator() const
{
    return m_creator;
}

void ActionLibraryListResult::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool ActionLibraryListResult::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string ActionLibraryListResult::GetUpdateTime() const
{
    return m_updateTime;
}

void ActionLibraryListResult::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ActionLibraryListResult::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ActionLibraryListResult::GetRiskDesc() const
{
    return m_riskDesc;
}

void ActionLibraryListResult::SetRiskDesc(const string& _riskDesc)
{
    m_riskDesc = _riskDesc;
    m_riskDescHasBeenSet = true;
}

bool ActionLibraryListResult::RiskDescHasBeenSet() const
{
    return m_riskDescHasBeenSet;
}

uint64_t ActionLibraryListResult::GetActionId() const
{
    return m_actionId;
}

void ActionLibraryListResult::SetActionId(const uint64_t& _actionId)
{
    m_actionId = _actionId;
    m_actionIdHasBeenSet = true;
}

bool ActionLibraryListResult::ActionIdHasBeenSet() const
{
    return m_actionIdHasBeenSet;
}

uint64_t ActionLibraryListResult::GetAttributeId() const
{
    return m_attributeId;
}

void ActionLibraryListResult::SetAttributeId(const uint64_t& _attributeId)
{
    m_attributeId = _attributeId;
    m_attributeIdHasBeenSet = true;
}

bool ActionLibraryListResult::AttributeIdHasBeenSet() const
{
    return m_attributeIdHasBeenSet;
}

uint64_t ActionLibraryListResult::GetRelationActionId() const
{
    return m_relationActionId;
}

void ActionLibraryListResult::SetRelationActionId(const uint64_t& _relationActionId)
{
    m_relationActionId = _relationActionId;
    m_relationActionIdHasBeenSet = true;
}

bool ActionLibraryListResult::RelationActionIdHasBeenSet() const
{
    return m_relationActionIdHasBeenSet;
}

string ActionLibraryListResult::GetActionCommand() const
{
    return m_actionCommand;
}

void ActionLibraryListResult::SetActionCommand(const string& _actionCommand)
{
    m_actionCommand = _actionCommand;
    m_actionCommandHasBeenSet = true;
}

bool ActionLibraryListResult::ActionCommandHasBeenSet() const
{
    return m_actionCommandHasBeenSet;
}

uint64_t ActionLibraryListResult::GetActionCommandType() const
{
    return m_actionCommandType;
}

void ActionLibraryListResult::SetActionCommandType(const uint64_t& _actionCommandType)
{
    m_actionCommandType = _actionCommandType;
    m_actionCommandTypeHasBeenSet = true;
}

bool ActionLibraryListResult::ActionCommandTypeHasBeenSet() const
{
    return m_actionCommandTypeHasBeenSet;
}

string ActionLibraryListResult::GetActionContent() const
{
    return m_actionContent;
}

void ActionLibraryListResult::SetActionContent(const string& _actionContent)
{
    m_actionContent = _actionContent;
    m_actionContentHasBeenSet = true;
}

bool ActionLibraryListResult::ActionContentHasBeenSet() const
{
    return m_actionContentHasBeenSet;
}

string ActionLibraryListResult::GetResourceType() const
{
    return m_resourceType;
}

void ActionLibraryListResult::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ActionLibraryListResult::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ActionLibraryListResult::GetActionDetail() const
{
    return m_actionDetail;
}

void ActionLibraryListResult::SetActionDetail(const string& _actionDetail)
{
    m_actionDetail = _actionDetail;
    m_actionDetailHasBeenSet = true;
}

bool ActionLibraryListResult::ActionDetailHasBeenSet() const
{
    return m_actionDetailHasBeenSet;
}

bool ActionLibraryListResult::GetIsAllowed() const
{
    return m_isAllowed;
}

void ActionLibraryListResult::SetIsAllowed(const bool& _isAllowed)
{
    m_isAllowed = _isAllowed;
    m_isAllowedHasBeenSet = true;
}

bool ActionLibraryListResult::IsAllowedHasBeenSet() const
{
    return m_isAllowedHasBeenSet;
}

string ActionLibraryListResult::GetActionBestCase() const
{
    return m_actionBestCase;
}

void ActionLibraryListResult::SetActionBestCase(const string& _actionBestCase)
{
    m_actionBestCase = _actionBestCase;
    m_actionBestCaseHasBeenSet = true;
}

bool ActionLibraryListResult::ActionBestCaseHasBeenSet() const
{
    return m_actionBestCaseHasBeenSet;
}

string ActionLibraryListResult::GetObjectType() const
{
    return m_objectType;
}

void ActionLibraryListResult::SetObjectType(const string& _objectType)
{
    m_objectType = _objectType;
    m_objectTypeHasBeenSet = true;
}

bool ActionLibraryListResult::ObjectTypeHasBeenSet() const
{
    return m_objectTypeHasBeenSet;
}

vector<uint64_t> ActionLibraryListResult::GetMetricIdList() const
{
    return m_metricIdList;
}

void ActionLibraryListResult::SetMetricIdList(const vector<uint64_t>& _metricIdList)
{
    m_metricIdList = _metricIdList;
    m_metricIdListHasBeenSet = true;
}

bool ActionLibraryListResult::MetricIdListHasBeenSet() const
{
    return m_metricIdListHasBeenSet;
}

bool ActionLibraryListResult::GetIsNewAction() const
{
    return m_isNewAction;
}

void ActionLibraryListResult::SetIsNewAction(const bool& _isNewAction)
{
    m_isNewAction = _isNewAction;
    m_isNewActionHasBeenSet = true;
}

bool ActionLibraryListResult::IsNewActionHasBeenSet() const
{
    return m_isNewActionHasBeenSet;
}

int64_t ActionLibraryListResult::GetObjectTypeId() const
{
    return m_objectTypeId;
}

void ActionLibraryListResult::SetObjectTypeId(const int64_t& _objectTypeId)
{
    m_objectTypeId = _objectTypeId;
    m_objectTypeIdHasBeenSet = true;
}

bool ActionLibraryListResult::ObjectTypeIdHasBeenSet() const
{
    return m_objectTypeIdHasBeenSet;
}

