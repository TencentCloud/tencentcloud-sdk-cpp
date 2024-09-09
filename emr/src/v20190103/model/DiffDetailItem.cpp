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

#include <tencentcloud/emr/v20190103/model/DiffDetailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DiffDetailItem::DiffDetailItem() :
    m_attributeHasBeenSet(false),
    m_inEffectHasBeenSet(false),
    m_pendingEffectivenessHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_configSetHasBeenSet(false),
    m_labelNameHasBeenSet(false),
    m_inEffectIndexHasBeenSet(false),
    m_pendingEffectIndexHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

CoreInternalOutcome DiffDetailItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Attribute") && !value["Attribute"].IsNull())
    {
        if (!value["Attribute"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffDetailItem.Attribute` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attribute = string(value["Attribute"].GetString());
        m_attributeHasBeenSet = true;
    }

    if (value.HasMember("InEffect") && !value["InEffect"].IsNull())
    {
        if (!value["InEffect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffDetailItem.InEffect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inEffect = string(value["InEffect"].GetString());
        m_inEffectHasBeenSet = true;
    }

    if (value.HasMember("PendingEffectiveness") && !value["PendingEffectiveness"].IsNull())
    {
        if (!value["PendingEffectiveness"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffDetailItem.PendingEffectiveness` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pendingEffectiveness = string(value["PendingEffectiveness"].GetString());
        m_pendingEffectivenessHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffDetailItem.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("Queue") && !value["Queue"].IsNull())
    {
        if (!value["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffDetailItem.Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(value["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (value.HasMember("ConfigSet") && !value["ConfigSet"].IsNull())
    {
        if (!value["ConfigSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffDetailItem.ConfigSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configSet = string(value["ConfigSet"].GetString());
        m_configSetHasBeenSet = true;
    }

    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffDetailItem.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }

    if (value.HasMember("InEffectIndex") && !value["InEffectIndex"].IsNull())
    {
        if (!value["InEffectIndex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffDetailItem.InEffectIndex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inEffectIndex = string(value["InEffectIndex"].GetString());
        m_inEffectIndexHasBeenSet = true;
    }

    if (value.HasMember("PendingEffectIndex") && !value["PendingEffectIndex"].IsNull())
    {
        if (!value["PendingEffectIndex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffDetailItem.PendingEffectIndex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pendingEffectIndex = string(value["PendingEffectIndex"].GetString());
        m_pendingEffectIndexHasBeenSet = true;
    }

    if (value.HasMember("PlanName") && !value["PlanName"].IsNull())
    {
        if (!value["PlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffDetailItem.PlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planName = string(value["PlanName"].GetString());
        m_planNameHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffDetailItem.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffDetailItem.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffDetailItem.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiffDetailItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attribute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attribute.c_str(), allocator).Move(), allocator);
    }

    if (m_inEffectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InEffect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inEffect.c_str(), allocator).Move(), allocator);
    }

    if (m_pendingEffectivenessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PendingEffectiveness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pendingEffectiveness.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_configSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configSet.c_str(), allocator).Move(), allocator);
    }

    if (m_labelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelName.c_str(), allocator).Move(), allocator);
    }

    if (m_inEffectIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InEffectIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inEffectIndex.c_str(), allocator).Move(), allocator);
    }

    if (m_pendingEffectIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PendingEffectIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pendingEffectIndex.c_str(), allocator).Move(), allocator);
    }

    if (m_planNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

}


string DiffDetailItem::GetAttribute() const
{
    return m_attribute;
}

void DiffDetailItem::SetAttribute(const string& _attribute)
{
    m_attribute = _attribute;
    m_attributeHasBeenSet = true;
}

bool DiffDetailItem::AttributeHasBeenSet() const
{
    return m_attributeHasBeenSet;
}

string DiffDetailItem::GetInEffect() const
{
    return m_inEffect;
}

void DiffDetailItem::SetInEffect(const string& _inEffect)
{
    m_inEffect = _inEffect;
    m_inEffectHasBeenSet = true;
}

bool DiffDetailItem::InEffectHasBeenSet() const
{
    return m_inEffectHasBeenSet;
}

string DiffDetailItem::GetPendingEffectiveness() const
{
    return m_pendingEffectiveness;
}

void DiffDetailItem::SetPendingEffectiveness(const string& _pendingEffectiveness)
{
    m_pendingEffectiveness = _pendingEffectiveness;
    m_pendingEffectivenessHasBeenSet = true;
}

bool DiffDetailItem::PendingEffectivenessHasBeenSet() const
{
    return m_pendingEffectivenessHasBeenSet;
}

string DiffDetailItem::GetOperation() const
{
    return m_operation;
}

void DiffDetailItem::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool DiffDetailItem::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string DiffDetailItem::GetQueue() const
{
    return m_queue;
}

void DiffDetailItem::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool DiffDetailItem::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string DiffDetailItem::GetConfigSet() const
{
    return m_configSet;
}

void DiffDetailItem::SetConfigSet(const string& _configSet)
{
    m_configSet = _configSet;
    m_configSetHasBeenSet = true;
}

bool DiffDetailItem::ConfigSetHasBeenSet() const
{
    return m_configSetHasBeenSet;
}

string DiffDetailItem::GetLabelName() const
{
    return m_labelName;
}

void DiffDetailItem::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool DiffDetailItem::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

string DiffDetailItem::GetInEffectIndex() const
{
    return m_inEffectIndex;
}

void DiffDetailItem::SetInEffectIndex(const string& _inEffectIndex)
{
    m_inEffectIndex = _inEffectIndex;
    m_inEffectIndexHasBeenSet = true;
}

bool DiffDetailItem::InEffectIndexHasBeenSet() const
{
    return m_inEffectIndexHasBeenSet;
}

string DiffDetailItem::GetPendingEffectIndex() const
{
    return m_pendingEffectIndex;
}

void DiffDetailItem::SetPendingEffectIndex(const string& _pendingEffectIndex)
{
    m_pendingEffectIndex = _pendingEffectIndex;
    m_pendingEffectIndexHasBeenSet = true;
}

bool DiffDetailItem::PendingEffectIndexHasBeenSet() const
{
    return m_pendingEffectIndexHasBeenSet;
}

string DiffDetailItem::GetPlanName() const
{
    return m_planName;
}

void DiffDetailItem::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool DiffDetailItem::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

string DiffDetailItem::GetLabel() const
{
    return m_label;
}

void DiffDetailItem::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool DiffDetailItem::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string DiffDetailItem::GetRuleName() const
{
    return m_ruleName;
}

void DiffDetailItem::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool DiffDetailItem::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string DiffDetailItem::GetUserName() const
{
    return m_userName;
}

void DiffDetailItem::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DiffDetailItem::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

