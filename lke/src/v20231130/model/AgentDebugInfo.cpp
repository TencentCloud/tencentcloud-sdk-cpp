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

#include <tencentcloud/lke/v20231130/model/AgentDebugInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentDebugInfo::AgentDebugInfo() :
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false)
{
}

CoreInternalOutcome AgentDebugInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDebugInfo.Input` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_input = string(value["Input"].GetString());
        m_inputHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDebugInfo.Output` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_output = string(value["Output"].GetString());
        m_outputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentDebugInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_input.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_output.c_str(), allocator).Move(), allocator);
    }

}


string AgentDebugInfo::GetInput() const
{
    return m_input;
}

void AgentDebugInfo::SetInput(const string& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool AgentDebugInfo::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

string AgentDebugInfo::GetOutput() const
{
    return m_output;
}

void AgentDebugInfo::SetOutput(const string& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool AgentDebugInfo::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

