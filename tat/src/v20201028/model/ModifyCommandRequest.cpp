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

#include <tencentcloud/tat/v20201028/model/ModifyCommandRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tat::V20201028::Model;
using namespace rapidjson;
using namespace std;

ModifyCommandRequest::ModifyCommandRequest() :
    m_commandIdHasBeenSet(false),
    m_commandNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_commandTypeHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_timeoutHasBeenSet(false)
{
}

string ModifyCommandRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_commandIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommandId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_commandId.c_str(), allocator).Move(), allocator);
    }

    if (m_commandNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommandName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_commandName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_commandTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommandType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_commandType.c_str(), allocator).Move(), allocator);
    }

    if (m_workingDirectoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WorkingDirectory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_workingDirectory.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCommandRequest::GetCommandId() const
{
    return m_commandId;
}

void ModifyCommandRequest::SetCommandId(const string& _commandId)
{
    m_commandId = _commandId;
    m_commandIdHasBeenSet = true;
}

bool ModifyCommandRequest::CommandIdHasBeenSet() const
{
    return m_commandIdHasBeenSet;
}

string ModifyCommandRequest::GetCommandName() const
{
    return m_commandName;
}

void ModifyCommandRequest::SetCommandName(const string& _commandName)
{
    m_commandName = _commandName;
    m_commandNameHasBeenSet = true;
}

bool ModifyCommandRequest::CommandNameHasBeenSet() const
{
    return m_commandNameHasBeenSet;
}

string ModifyCommandRequest::GetDescription() const
{
    return m_description;
}

void ModifyCommandRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyCommandRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyCommandRequest::GetContent() const
{
    return m_content;
}

void ModifyCommandRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ModifyCommandRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ModifyCommandRequest::GetCommandType() const
{
    return m_commandType;
}

void ModifyCommandRequest::SetCommandType(const string& _commandType)
{
    m_commandType = _commandType;
    m_commandTypeHasBeenSet = true;
}

bool ModifyCommandRequest::CommandTypeHasBeenSet() const
{
    return m_commandTypeHasBeenSet;
}

string ModifyCommandRequest::GetWorkingDirectory() const
{
    return m_workingDirectory;
}

void ModifyCommandRequest::SetWorkingDirectory(const string& _workingDirectory)
{
    m_workingDirectory = _workingDirectory;
    m_workingDirectoryHasBeenSet = true;
}

bool ModifyCommandRequest::WorkingDirectoryHasBeenSet() const
{
    return m_workingDirectoryHasBeenSet;
}

uint64_t ModifyCommandRequest::GetTimeout() const
{
    return m_timeout;
}

void ModifyCommandRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ModifyCommandRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}


