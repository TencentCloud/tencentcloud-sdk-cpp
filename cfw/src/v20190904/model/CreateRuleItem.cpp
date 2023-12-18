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

#include <tencentcloud/cfw/v20190904/model/CreateRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CreateRuleItem::CreateRuleItem() :
    m_sourceContentHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_targetContentHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_portHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_orderIndexHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_ruleSourceHasBeenSet(false),
    m_logIdHasBeenSet(false),
    m_paramTemplateIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceContent") && !value["SourceContent"].IsNull())
    {
        if (!value["SourceContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.SourceContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContent = string(value["SourceContent"].GetString());
        m_sourceContentHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetContent") && !value["TargetContent"].IsNull())
    {
        if (!value["TargetContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.TargetContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetContent = string(value["TargetContent"].GetString());
        m_targetContentHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.RuleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleAction = string(value["RuleAction"].GetString());
        m_ruleActionHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.Direction` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetUint64();
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.OrderIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetInt64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.Uuid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = value["Uuid"].GetInt64();
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.Enable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enable = string(value["Enable"].GetString());
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("RuleSource") && !value["RuleSource"].IsNull())
    {
        if (!value["RuleSource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.RuleSource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleSource = value["RuleSource"].GetInt64();
        m_ruleSourceHasBeenSet = true;
    }

    if (value.HasMember("LogId") && !value["LogId"].IsNull())
    {
        if (!value["LogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.LogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logId = string(value["LogId"].GetString());
        m_logIdHasBeenSet = true;
    }

    if (value.HasMember("ParamTemplateId") && !value["ParamTemplateId"].IsNull())
    {
        if (!value["ParamTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRuleItem.ParamTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramTemplateId = string(value["ParamTemplateId"].GetString());
        m_paramTemplateIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceContent.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetContent.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_direction, allocator);
    }

    if (m_orderIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderIndex, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uuid, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enable.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleSource, allocator);
    }

    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramTemplateId.c_str(), allocator).Move(), allocator);
    }

}


string CreateRuleItem::GetSourceContent() const
{
    return m_sourceContent;
}

void CreateRuleItem::SetSourceContent(const string& _sourceContent)
{
    m_sourceContent = _sourceContent;
    m_sourceContentHasBeenSet = true;
}

bool CreateRuleItem::SourceContentHasBeenSet() const
{
    return m_sourceContentHasBeenSet;
}

string CreateRuleItem::GetSourceType() const
{
    return m_sourceType;
}

void CreateRuleItem::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateRuleItem::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string CreateRuleItem::GetTargetContent() const
{
    return m_targetContent;
}

void CreateRuleItem::SetTargetContent(const string& _targetContent)
{
    m_targetContent = _targetContent;
    m_targetContentHasBeenSet = true;
}

bool CreateRuleItem::TargetContentHasBeenSet() const
{
    return m_targetContentHasBeenSet;
}

string CreateRuleItem::GetTargetType() const
{
    return m_targetType;
}

void CreateRuleItem::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool CreateRuleItem::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string CreateRuleItem::GetProtocol() const
{
    return m_protocol;
}

void CreateRuleItem::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateRuleItem::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateRuleItem::GetRuleAction() const
{
    return m_ruleAction;
}

void CreateRuleItem::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool CreateRuleItem::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

string CreateRuleItem::GetPort() const
{
    return m_port;
}

void CreateRuleItem::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateRuleItem::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t CreateRuleItem::GetDirection() const
{
    return m_direction;
}

void CreateRuleItem::SetDirection(const uint64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool CreateRuleItem::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

int64_t CreateRuleItem::GetOrderIndex() const
{
    return m_orderIndex;
}

void CreateRuleItem::SetOrderIndex(const int64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool CreateRuleItem::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

int64_t CreateRuleItem::GetUuid() const
{
    return m_uuid;
}

void CreateRuleItem::SetUuid(const int64_t& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool CreateRuleItem::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string CreateRuleItem::GetEnable() const
{
    return m_enable;
}

void CreateRuleItem::SetEnable(const string& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CreateRuleItem::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string CreateRuleItem::GetDescription() const
{
    return m_description;
}

void CreateRuleItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRuleItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateRuleItem::GetScope() const
{
    return m_scope;
}

void CreateRuleItem::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool CreateRuleItem::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

int64_t CreateRuleItem::GetRuleSource() const
{
    return m_ruleSource;
}

void CreateRuleItem::SetRuleSource(const int64_t& _ruleSource)
{
    m_ruleSource = _ruleSource;
    m_ruleSourceHasBeenSet = true;
}

bool CreateRuleItem::RuleSourceHasBeenSet() const
{
    return m_ruleSourceHasBeenSet;
}

string CreateRuleItem::GetLogId() const
{
    return m_logId;
}

void CreateRuleItem::SetLogId(const string& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool CreateRuleItem::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

string CreateRuleItem::GetParamTemplateId() const
{
    return m_paramTemplateId;
}

void CreateRuleItem::SetParamTemplateId(const string& _paramTemplateId)
{
    m_paramTemplateId = _paramTemplateId;
    m_paramTemplateIdHasBeenSet = true;
}

bool CreateRuleItem::ParamTemplateIdHasBeenSet() const
{
    return m_paramTemplateIdHasBeenSet;
}

