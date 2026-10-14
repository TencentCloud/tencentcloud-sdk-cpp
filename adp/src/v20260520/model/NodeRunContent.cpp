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

#include <tencentcloud/adp/v20260520/model/NodeRunContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

NodeRunContent::NodeRunContent() :
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_originalOutputHasBeenSet(false),
    m_inputRefHasBeenSet(false),
    m_outputRefHasBeenSet(false),
    m_originalOutputRefHasBeenSet(false)
{
}

CoreInternalOutcome NodeRunContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunContent.Input` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_input = string(value["Input"].GetString());
        m_inputHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunContent.Output` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_output = string(value["Output"].GetString());
        m_outputHasBeenSet = true;
    }

    if (value.HasMember("OriginalOutput") && !value["OriginalOutput"].IsNull())
    {
        if (!value["OriginalOutput"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunContent.OriginalOutput` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalOutput = string(value["OriginalOutput"].GetString());
        m_originalOutputHasBeenSet = true;
    }

    if (value.HasMember("InputRef") && !value["InputRef"].IsNull())
    {
        if (!value["InputRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunContent.InputRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputRef = string(value["InputRef"].GetString());
        m_inputRefHasBeenSet = true;
    }

    if (value.HasMember("OutputRef") && !value["OutputRef"].IsNull())
    {
        if (!value["OutputRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunContent.OutputRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputRef = string(value["OutputRef"].GetString());
        m_outputRefHasBeenSet = true;
    }

    if (value.HasMember("OriginalOutputRef") && !value["OriginalOutputRef"].IsNull())
    {
        if (!value["OriginalOutputRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunContent.OriginalOutputRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalOutputRef = string(value["OriginalOutputRef"].GetString());
        m_originalOutputRefHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeRunContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_originalOutputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalOutput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalOutput.c_str(), allocator).Move(), allocator);
    }

    if (m_inputRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputRef.c_str(), allocator).Move(), allocator);
    }

    if (m_outputRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputRef.c_str(), allocator).Move(), allocator);
    }

    if (m_originalOutputRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalOutputRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalOutputRef.c_str(), allocator).Move(), allocator);
    }

}


string NodeRunContent::GetInput() const
{
    return m_input;
}

void NodeRunContent::SetInput(const string& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool NodeRunContent::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

string NodeRunContent::GetOutput() const
{
    return m_output;
}

void NodeRunContent::SetOutput(const string& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool NodeRunContent::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string NodeRunContent::GetOriginalOutput() const
{
    return m_originalOutput;
}

void NodeRunContent::SetOriginalOutput(const string& _originalOutput)
{
    m_originalOutput = _originalOutput;
    m_originalOutputHasBeenSet = true;
}

bool NodeRunContent::OriginalOutputHasBeenSet() const
{
    return m_originalOutputHasBeenSet;
}

string NodeRunContent::GetInputRef() const
{
    return m_inputRef;
}

void NodeRunContent::SetInputRef(const string& _inputRef)
{
    m_inputRef = _inputRef;
    m_inputRefHasBeenSet = true;
}

bool NodeRunContent::InputRefHasBeenSet() const
{
    return m_inputRefHasBeenSet;
}

string NodeRunContent::GetOutputRef() const
{
    return m_outputRef;
}

void NodeRunContent::SetOutputRef(const string& _outputRef)
{
    m_outputRef = _outputRef;
    m_outputRefHasBeenSet = true;
}

bool NodeRunContent::OutputRefHasBeenSet() const
{
    return m_outputRefHasBeenSet;
}

string NodeRunContent::GetOriginalOutputRef() const
{
    return m_originalOutputRef;
}

void NodeRunContent::SetOriginalOutputRef(const string& _originalOutputRef)
{
    m_originalOutputRef = _originalOutputRef;
    m_originalOutputRefHasBeenSet = true;
}

bool NodeRunContent::OriginalOutputRefHasBeenSet() const
{
    return m_originalOutputRefHasBeenSet;
}

