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

#include <tencentcloud/tat/v20201028/model/ModifyInvokerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

ModifyInvokerRequest::ModifyInvokerRequest() :
    m_invokerIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_commandIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_scheduleSettingsHasBeenSet(false)
{
}

string ModifyInvokerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_invokerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_invokerId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_commandIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commandId.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parameters.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scheduleSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scheduleSettings.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInvokerRequest::GetInvokerId() const
{
    return m_invokerId;
}

void ModifyInvokerRequest::SetInvokerId(const string& _invokerId)
{
    m_invokerId = _invokerId;
    m_invokerIdHasBeenSet = true;
}

bool ModifyInvokerRequest::InvokerIdHasBeenSet() const
{
    return m_invokerIdHasBeenSet;
}

string ModifyInvokerRequest::GetName() const
{
    return m_name;
}

void ModifyInvokerRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyInvokerRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyInvokerRequest::GetType() const
{
    return m_type;
}

void ModifyInvokerRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyInvokerRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyInvokerRequest::GetCommandId() const
{
    return m_commandId;
}

void ModifyInvokerRequest::SetCommandId(const string& _commandId)
{
    m_commandId = _commandId;
    m_commandIdHasBeenSet = true;
}

bool ModifyInvokerRequest::CommandIdHasBeenSet() const
{
    return m_commandIdHasBeenSet;
}

string ModifyInvokerRequest::GetUsername() const
{
    return m_username;
}

void ModifyInvokerRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool ModifyInvokerRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string ModifyInvokerRequest::GetParameters() const
{
    return m_parameters;
}

void ModifyInvokerRequest::SetParameters(const string& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool ModifyInvokerRequest::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

vector<string> ModifyInvokerRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ModifyInvokerRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ModifyInvokerRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

ScheduleSettings ModifyInvokerRequest::GetScheduleSettings() const
{
    return m_scheduleSettings;
}

void ModifyInvokerRequest::SetScheduleSettings(const ScheduleSettings& _scheduleSettings)
{
    m_scheduleSettings = _scheduleSettings;
    m_scheduleSettingsHasBeenSet = true;
}

bool ModifyInvokerRequest::ScheduleSettingsHasBeenSet() const
{
    return m_scheduleSettingsHasBeenSet;
}


