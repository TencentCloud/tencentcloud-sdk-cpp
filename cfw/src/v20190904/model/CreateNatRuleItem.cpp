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

#include <tencentcloud/cfw/v20190904/model/CreateNatRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CreateNatRuleItem::CreateNatRuleItem() :
    m_sourceContentHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_targetContentHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_portHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_orderIndexHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome CreateNatRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceContent") && !value["SourceContent"].IsNull())
    {
        if (!value["SourceContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateNatRuleItem.SourceContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContent = string(value["SourceContent"].GetString());
        m_sourceContentHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateNatRuleItem.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetContent") && !value["TargetContent"].IsNull())
    {
        if (!value["TargetContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateNatRuleItem.TargetContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetContent = string(value["TargetContent"].GetString());
        m_targetContentHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateNatRuleItem.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateNatRuleItem.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateNatRuleItem.RuleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleAction = string(value["RuleAction"].GetString());
        m_ruleActionHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateNatRuleItem.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateNatRuleItem.Direction` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetUint64();
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateNatRuleItem.OrderIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetInt64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateNatRuleItem.Enable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enable = string(value["Enable"].GetString());
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateNatRuleItem.Uuid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = value["Uuid"].GetInt64();
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateNatRuleItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateNatRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enable.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uuid, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string CreateNatRuleItem::GetSourceContent() const
{
    return m_sourceContent;
}

void CreateNatRuleItem::SetSourceContent(const string& _sourceContent)
{
    m_sourceContent = _sourceContent;
    m_sourceContentHasBeenSet = true;
}

bool CreateNatRuleItem::SourceContentHasBeenSet() const
{
    return m_sourceContentHasBeenSet;
}

string CreateNatRuleItem::GetSourceType() const
{
    return m_sourceType;
}

void CreateNatRuleItem::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateNatRuleItem::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string CreateNatRuleItem::GetTargetContent() const
{
    return m_targetContent;
}

void CreateNatRuleItem::SetTargetContent(const string& _targetContent)
{
    m_targetContent = _targetContent;
    m_targetContentHasBeenSet = true;
}

bool CreateNatRuleItem::TargetContentHasBeenSet() const
{
    return m_targetContentHasBeenSet;
}

string CreateNatRuleItem::GetTargetType() const
{
    return m_targetType;
}

void CreateNatRuleItem::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool CreateNatRuleItem::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string CreateNatRuleItem::GetProtocol() const
{
    return m_protocol;
}

void CreateNatRuleItem::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateNatRuleItem::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateNatRuleItem::GetRuleAction() const
{
    return m_ruleAction;
}

void CreateNatRuleItem::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool CreateNatRuleItem::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

string CreateNatRuleItem::GetPort() const
{
    return m_port;
}

void CreateNatRuleItem::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateNatRuleItem::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t CreateNatRuleItem::GetDirection() const
{
    return m_direction;
}

void CreateNatRuleItem::SetDirection(const uint64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool CreateNatRuleItem::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

int64_t CreateNatRuleItem::GetOrderIndex() const
{
    return m_orderIndex;
}

void CreateNatRuleItem::SetOrderIndex(const int64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool CreateNatRuleItem::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

string CreateNatRuleItem::GetEnable() const
{
    return m_enable;
}

void CreateNatRuleItem::SetEnable(const string& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CreateNatRuleItem::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t CreateNatRuleItem::GetUuid() const
{
    return m_uuid;
}

void CreateNatRuleItem::SetUuid(const int64_t& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool CreateNatRuleItem::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string CreateNatRuleItem::GetDescription() const
{
    return m_description;
}

void CreateNatRuleItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateNatRuleItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

