/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcb/v20180608/model/CloudAppLinkService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudAppLinkService::CloudAppLinkService() :
    m_serviceTypeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_buildContextHasBeenSet(false)
{
}

CoreInternalOutcome CloudAppLinkService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppLinkService.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppLinkService.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("Identifier") && !value["Identifier"].IsNull())
    {
        if (!value["Identifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppLinkService.Identifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifier = string(value["Identifier"].GetString());
        m_identifierHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppLinkService.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppLinkService.Command` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_command.Deserialize(value["Command"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_commandHasBeenSet = true;
    }

    if (value.HasMember("BuildContext") && !value["BuildContext"].IsNull())
    {
        if (!value["BuildContext"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppLinkService.BuildContext` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_buildContext.Deserialize(value["BuildContext"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_buildContextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudAppLinkService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_identifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Identifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifier.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_command.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_buildContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_buildContext.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CloudAppLinkService::GetServiceType() const
{
    return m_serviceType;
}

void CloudAppLinkService::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CloudAppLinkService::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string CloudAppLinkService::GetServiceName() const
{
    return m_serviceName;
}

void CloudAppLinkService::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool CloudAppLinkService::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string CloudAppLinkService::GetIdentifier() const
{
    return m_identifier;
}

void CloudAppLinkService::SetIdentifier(const string& _identifier)
{
    m_identifier = _identifier;
    m_identifierHasBeenSet = true;
}

bool CloudAppLinkService::IdentifierHasBeenSet() const
{
    return m_identifierHasBeenSet;
}

string CloudAppLinkService::GetAction() const
{
    return m_action;
}

void CloudAppLinkService::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool CloudAppLinkService::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

BuildCommands CloudAppLinkService::GetCommand() const
{
    return m_command;
}

void CloudAppLinkService::SetCommand(const BuildCommands& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool CloudAppLinkService::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

BuildContext CloudAppLinkService::GetBuildContext() const
{
    return m_buildContext;
}

void CloudAppLinkService::SetBuildContext(const BuildContext& _buildContext)
{
    m_buildContext = _buildContext;
    m_buildContextHasBeenSet = true;
}

bool CloudAppLinkService::BuildContextHasBeenSet() const
{
    return m_buildContextHasBeenSet;
}

