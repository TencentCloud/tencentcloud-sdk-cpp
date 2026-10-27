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

#include <tencentcloud/cvd/v20201104/model/CreateCommandTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

CreateCommandTaskRequest::CreateCommandTaskRequest() :
    m_commandHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_runAsBoundUserHasBeenSet(false),
    m_runForegroundHasBeenSet(false)
{
}

string CreateCommandTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

    if (m_runAsBoundUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunAsBoundUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runAsBoundUser, allocator);
    }

    if (m_runForegroundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunForeground";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runForeground, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCommandTaskRequest::GetCommand() const
{
    return m_command;
}

void CreateCommandTaskRequest::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool CreateCommandTaskRequest::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string CreateCommandTaskRequest::GetType() const
{
    return m_type;
}

void CreateCommandTaskRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateCommandTaskRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> CreateCommandTaskRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void CreateCommandTaskRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool CreateCommandTaskRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

bool CreateCommandTaskRequest::GetRunAsBoundUser() const
{
    return m_runAsBoundUser;
}

void CreateCommandTaskRequest::SetRunAsBoundUser(const bool& _runAsBoundUser)
{
    m_runAsBoundUser = _runAsBoundUser;
    m_runAsBoundUserHasBeenSet = true;
}

bool CreateCommandTaskRequest::RunAsBoundUserHasBeenSet() const
{
    return m_runAsBoundUserHasBeenSet;
}

bool CreateCommandTaskRequest::GetRunForeground() const
{
    return m_runForeground;
}

void CreateCommandTaskRequest::SetRunForeground(const bool& _runForeground)
{
    m_runForeground = _runForeground;
    m_runForegroundHasBeenSet = true;
}

bool CreateCommandTaskRequest::RunForegroundHasBeenSet() const
{
    return m_runForegroundHasBeenSet;
}


