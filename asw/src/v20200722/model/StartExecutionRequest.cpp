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

#include <tencentcloud/asw/v20200722/model/StartExecutionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asw::V20200722::Model;
using namespace rapidjson;
using namespace std;

StartExecutionRequest::StartExecutionRequest() :
    m_stateMachineResourceNameHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string StartExecutionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_stateMachineResourceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StateMachineResourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_stateMachineResourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_inputHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_input.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartExecutionRequest::GetStateMachineResourceName() const
{
    return m_stateMachineResourceName;
}

void StartExecutionRequest::SetStateMachineResourceName(const string& _stateMachineResourceName)
{
    m_stateMachineResourceName = _stateMachineResourceName;
    m_stateMachineResourceNameHasBeenSet = true;
}

bool StartExecutionRequest::StateMachineResourceNameHasBeenSet() const
{
    return m_stateMachineResourceNameHasBeenSet;
}

string StartExecutionRequest::GetInput() const
{
    return m_input;
}

void StartExecutionRequest::SetInput(const string& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool StartExecutionRequest::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

string StartExecutionRequest::GetName() const
{
    return m_name;
}

void StartExecutionRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool StartExecutionRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


