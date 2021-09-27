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

#include <tencentcloud/cfw/v20190904/model/AddAcRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

AddAcRuleRequest::AddAcRuleRequest() :
    m_orderIndexHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceContentHasBeenSet(false),
    m_destTypeHasBeenSet(false),
    m_destContentHasBeenSet(false),
    m_portHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_enableHasBeenSet(false)
{
}

string AddAcRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_orderIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderIndex.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceContent.c_str(), allocator).Move(), allocator);
    }

    if (m_destTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destType.c_str(), allocator).Move(), allocator);
    }

    if (m_destContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destContent.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enable.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddAcRuleRequest::GetOrderIndex() const
{
    return m_orderIndex;
}

void AddAcRuleRequest::SetOrderIndex(const string& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool AddAcRuleRequest::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

string AddAcRuleRequest::GetRuleAction() const
{
    return m_ruleAction;
}

void AddAcRuleRequest::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool AddAcRuleRequest::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

string AddAcRuleRequest::GetDirection() const
{
    return m_direction;
}

void AddAcRuleRequest::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool AddAcRuleRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string AddAcRuleRequest::GetDescription() const
{
    return m_description;
}

void AddAcRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AddAcRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AddAcRuleRequest::GetSourceType() const
{
    return m_sourceType;
}

void AddAcRuleRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool AddAcRuleRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string AddAcRuleRequest::GetSourceContent() const
{
    return m_sourceContent;
}

void AddAcRuleRequest::SetSourceContent(const string& _sourceContent)
{
    m_sourceContent = _sourceContent;
    m_sourceContentHasBeenSet = true;
}

bool AddAcRuleRequest::SourceContentHasBeenSet() const
{
    return m_sourceContentHasBeenSet;
}

string AddAcRuleRequest::GetDestType() const
{
    return m_destType;
}

void AddAcRuleRequest::SetDestType(const string& _destType)
{
    m_destType = _destType;
    m_destTypeHasBeenSet = true;
}

bool AddAcRuleRequest::DestTypeHasBeenSet() const
{
    return m_destTypeHasBeenSet;
}

string AddAcRuleRequest::GetDestContent() const
{
    return m_destContent;
}

void AddAcRuleRequest::SetDestContent(const string& _destContent)
{
    m_destContent = _destContent;
    m_destContentHasBeenSet = true;
}

bool AddAcRuleRequest::DestContentHasBeenSet() const
{
    return m_destContentHasBeenSet;
}

string AddAcRuleRequest::GetPort() const
{
    return m_port;
}

void AddAcRuleRequest::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AddAcRuleRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string AddAcRuleRequest::GetProtocol() const
{
    return m_protocol;
}

void AddAcRuleRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool AddAcRuleRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string AddAcRuleRequest::GetApplicationName() const
{
    return m_applicationName;
}

void AddAcRuleRequest::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool AddAcRuleRequest::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string AddAcRuleRequest::GetEnable() const
{
    return m_enable;
}

void AddAcRuleRequest::SetEnable(const string& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool AddAcRuleRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}


