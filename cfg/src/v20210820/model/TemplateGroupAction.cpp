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

#include <tencentcloud/cfg/v20210820/model/TemplateGroupAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TemplateGroupAction::TemplateGroupAction() :
    m_templateGroupActionIdHasBeenSet(false),
    m_actionIdHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_generalConfigurationHasBeenSet(false),
    m_customConfigurationHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_actionTitleHasBeenSet(false),
    m_randomIdHasBeenSet(false),
    m_recoverIdHasBeenSet(false),
    m_executeIdHasBeenSet(false),
    m_actionApiTypeHasBeenSet(false),
    m_actionAttributeHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_actionRiskHasBeenSet(false),
    m_failurePerformanceHasBeenSet(false)
{
}

CoreInternalOutcome TemplateGroupAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateGroupActionId") && !value["TemplateGroupActionId"].IsNull())
    {
        if (!value["TemplateGroupActionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.TemplateGroupActionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateGroupActionId = value["TemplateGroupActionId"].GetInt64();
        m_templateGroupActionIdHasBeenSet = true;
    }

    if (value.HasMember("ActionId") && !value["ActionId"].IsNull())
    {
        if (!value["ActionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.ActionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionId = value["ActionId"].GetInt64();
        m_actionIdHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("GeneralConfiguration") && !value["GeneralConfiguration"].IsNull())
    {
        if (!value["GeneralConfiguration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.GeneralConfiguration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_generalConfiguration = string(value["GeneralConfiguration"].GetString());
        m_generalConfigurationHasBeenSet = true;
    }

    if (value.HasMember("CustomConfiguration") && !value["CustomConfiguration"].IsNull())
    {
        if (!value["CustomConfiguration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.CustomConfiguration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customConfiguration = string(value["CustomConfiguration"].GetString());
        m_customConfigurationHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ActionTitle") && !value["ActionTitle"].IsNull())
    {
        if (!value["ActionTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.ActionTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTitle = string(value["ActionTitle"].GetString());
        m_actionTitleHasBeenSet = true;
    }

    if (value.HasMember("RandomId") && !value["RandomId"].IsNull())
    {
        if (!value["RandomId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.RandomId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_randomId = value["RandomId"].GetInt64();
        m_randomIdHasBeenSet = true;
    }

    if (value.HasMember("RecoverId") && !value["RecoverId"].IsNull())
    {
        if (!value["RecoverId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.RecoverId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recoverId = value["RecoverId"].GetInt64();
        m_recoverIdHasBeenSet = true;
    }

    if (value.HasMember("ExecuteId") && !value["ExecuteId"].IsNull())
    {
        if (!value["ExecuteId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.ExecuteId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executeId = value["ExecuteId"].GetInt64();
        m_executeIdHasBeenSet = true;
    }

    if (value.HasMember("ActionApiType") && !value["ActionApiType"].IsNull())
    {
        if (!value["ActionApiType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.ActionApiType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionApiType = value["ActionApiType"].GetInt64();
        m_actionApiTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionAttribute") && !value["ActionAttribute"].IsNull())
    {
        if (!value["ActionAttribute"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.ActionAttribute` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionAttribute = value["ActionAttribute"].GetInt64();
        m_actionAttributeHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionRisk") && !value["ActionRisk"].IsNull())
    {
        if (!value["ActionRisk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.ActionRisk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionRisk = string(value["ActionRisk"].GetString());
        m_actionRiskHasBeenSet = true;
    }

    if (value.HasMember("FailurePerformance") && !value["FailurePerformance"].IsNull())
    {
        if (!value["FailurePerformance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroupAction.FailurePerformance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failurePerformance = string(value["FailurePerformance"].GetString());
        m_failurePerformanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateGroupAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateGroupActionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateGroupActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateGroupActionId, allocator);
    }

    if (m_actionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionId, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

    if (m_generalConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneralConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_generalConfiguration.c_str(), allocator).Move(), allocator);
    }

    if (m_customConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customConfiguration.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_randomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RandomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_randomId, allocator);
    }

    if (m_recoverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoverId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recoverId, allocator);
    }

    if (m_executeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executeId, allocator);
    }

    if (m_actionApiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionApiType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionApiType, allocator);
    }

    if (m_actionAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionAttribute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionAttribute, allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionRisk.c_str(), allocator).Move(), allocator);
    }

    if (m_failurePerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailurePerformance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failurePerformance.c_str(), allocator).Move(), allocator);
    }

}


int64_t TemplateGroupAction::GetTemplateGroupActionId() const
{
    return m_templateGroupActionId;
}

void TemplateGroupAction::SetTemplateGroupActionId(const int64_t& _templateGroupActionId)
{
    m_templateGroupActionId = _templateGroupActionId;
    m_templateGroupActionIdHasBeenSet = true;
}

bool TemplateGroupAction::TemplateGroupActionIdHasBeenSet() const
{
    return m_templateGroupActionIdHasBeenSet;
}

int64_t TemplateGroupAction::GetActionId() const
{
    return m_actionId;
}

void TemplateGroupAction::SetActionId(const int64_t& _actionId)
{
    m_actionId = _actionId;
    m_actionIdHasBeenSet = true;
}

bool TemplateGroupAction::ActionIdHasBeenSet() const
{
    return m_actionIdHasBeenSet;
}

int64_t TemplateGroupAction::GetOrder() const
{
    return m_order;
}

void TemplateGroupAction::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool TemplateGroupAction::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string TemplateGroupAction::GetGeneralConfiguration() const
{
    return m_generalConfiguration;
}

void TemplateGroupAction::SetGeneralConfiguration(const string& _generalConfiguration)
{
    m_generalConfiguration = _generalConfiguration;
    m_generalConfigurationHasBeenSet = true;
}

bool TemplateGroupAction::GeneralConfigurationHasBeenSet() const
{
    return m_generalConfigurationHasBeenSet;
}

string TemplateGroupAction::GetCustomConfiguration() const
{
    return m_customConfiguration;
}

void TemplateGroupAction::SetCustomConfiguration(const string& _customConfiguration)
{
    m_customConfiguration = _customConfiguration;
    m_customConfigurationHasBeenSet = true;
}

bool TemplateGroupAction::CustomConfigurationHasBeenSet() const
{
    return m_customConfigurationHasBeenSet;
}

string TemplateGroupAction::GetCreateTime() const
{
    return m_createTime;
}

void TemplateGroupAction::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TemplateGroupAction::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TemplateGroupAction::GetUpdateTime() const
{
    return m_updateTime;
}

void TemplateGroupAction::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TemplateGroupAction::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TemplateGroupAction::GetActionTitle() const
{
    return m_actionTitle;
}

void TemplateGroupAction::SetActionTitle(const string& _actionTitle)
{
    m_actionTitle = _actionTitle;
    m_actionTitleHasBeenSet = true;
}

bool TemplateGroupAction::ActionTitleHasBeenSet() const
{
    return m_actionTitleHasBeenSet;
}

int64_t TemplateGroupAction::GetRandomId() const
{
    return m_randomId;
}

void TemplateGroupAction::SetRandomId(const int64_t& _randomId)
{
    m_randomId = _randomId;
    m_randomIdHasBeenSet = true;
}

bool TemplateGroupAction::RandomIdHasBeenSet() const
{
    return m_randomIdHasBeenSet;
}

int64_t TemplateGroupAction::GetRecoverId() const
{
    return m_recoverId;
}

void TemplateGroupAction::SetRecoverId(const int64_t& _recoverId)
{
    m_recoverId = _recoverId;
    m_recoverIdHasBeenSet = true;
}

bool TemplateGroupAction::RecoverIdHasBeenSet() const
{
    return m_recoverIdHasBeenSet;
}

int64_t TemplateGroupAction::GetExecuteId() const
{
    return m_executeId;
}

void TemplateGroupAction::SetExecuteId(const int64_t& _executeId)
{
    m_executeId = _executeId;
    m_executeIdHasBeenSet = true;
}

bool TemplateGroupAction::ExecuteIdHasBeenSet() const
{
    return m_executeIdHasBeenSet;
}

int64_t TemplateGroupAction::GetActionApiType() const
{
    return m_actionApiType;
}

void TemplateGroupAction::SetActionApiType(const int64_t& _actionApiType)
{
    m_actionApiType = _actionApiType;
    m_actionApiTypeHasBeenSet = true;
}

bool TemplateGroupAction::ActionApiTypeHasBeenSet() const
{
    return m_actionApiTypeHasBeenSet;
}

int64_t TemplateGroupAction::GetActionAttribute() const
{
    return m_actionAttribute;
}

void TemplateGroupAction::SetActionAttribute(const int64_t& _actionAttribute)
{
    m_actionAttribute = _actionAttribute;
    m_actionAttributeHasBeenSet = true;
}

bool TemplateGroupAction::ActionAttributeHasBeenSet() const
{
    return m_actionAttributeHasBeenSet;
}

string TemplateGroupAction::GetActionType() const
{
    return m_actionType;
}

void TemplateGroupAction::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool TemplateGroupAction::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string TemplateGroupAction::GetActionRisk() const
{
    return m_actionRisk;
}

void TemplateGroupAction::SetActionRisk(const string& _actionRisk)
{
    m_actionRisk = _actionRisk;
    m_actionRiskHasBeenSet = true;
}

bool TemplateGroupAction::ActionRiskHasBeenSet() const
{
    return m_actionRiskHasBeenSet;
}

string TemplateGroupAction::GetFailurePerformance() const
{
    return m_failurePerformance;
}

void TemplateGroupAction::SetFailurePerformance(const string& _failurePerformance)
{
    m_failurePerformance = _failurePerformance;
    m_failurePerformanceHasBeenSet = true;
}

bool TemplateGroupAction::FailurePerformanceHasBeenSet() const
{
    return m_failurePerformanceHasBeenSet;
}

