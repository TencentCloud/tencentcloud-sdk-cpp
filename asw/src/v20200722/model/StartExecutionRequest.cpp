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

#include <tencentcloud/asw/v20200722/model/StartExecutionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asw::V20200722::Model;
using namespace std;

StartExecutionRequest::StartExecutionRequest() :
    m_stateMachineResourceNameHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string StartExecutionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_stateMachineResourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateMachineResourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stateMachineResourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_input.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
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


