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

#include <tencentcloud/tat/v20201028/model/CreateInvokerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

CreateInvokerRequest::CreateInvokerRequest() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_commandIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_scheduleSettingsHasBeenSet(false)
{
}

string CreateInvokerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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


string CreateInvokerRequest::GetName() const
{
    return m_name;
}

void CreateInvokerRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateInvokerRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateInvokerRequest::GetType() const
{
    return m_type;
}

void CreateInvokerRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateInvokerRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateInvokerRequest::GetCommandId() const
{
    return m_commandId;
}

void CreateInvokerRequest::SetCommandId(const string& _commandId)
{
    m_commandId = _commandId;
    m_commandIdHasBeenSet = true;
}

bool CreateInvokerRequest::CommandIdHasBeenSet() const
{
    return m_commandIdHasBeenSet;
}

vector<string> CreateInvokerRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void CreateInvokerRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool CreateInvokerRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string CreateInvokerRequest::GetUsername() const
{
    return m_username;
}

void CreateInvokerRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool CreateInvokerRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string CreateInvokerRequest::GetParameters() const
{
    return m_parameters;
}

void CreateInvokerRequest::SetParameters(const string& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool CreateInvokerRequest::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

ScheduleSettings CreateInvokerRequest::GetScheduleSettings() const
{
    return m_scheduleSettings;
}

void CreateInvokerRequest::SetScheduleSettings(const ScheduleSettings& _scheduleSettings)
{
    m_scheduleSettings = _scheduleSettings;
    m_scheduleSettingsHasBeenSet = true;
}

bool CreateInvokerRequest::ScheduleSettingsHasBeenSet() const
{
    return m_scheduleSettingsHasBeenSet;
}


