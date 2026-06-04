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

#include <tencentcloud/adp/v20260520/model/CodeToolConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CodeToolConfig::CodeToolConfig() :
    m_codeHasBeenSet(false),
    m_exampleHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_outputsHasBeenSet(false)
{
}

CoreInternalOutcome CodeToolConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeToolConfig.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Example") && !value["Example"].IsNull())
    {
        if (!value["Example"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CodeToolConfig.Example` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_example.Deserialize(value["Example"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_exampleHasBeenSet = true;
    }

    if (value.HasMember("Inputs") && !value["Inputs"].IsNull())
    {
        if (!value["Inputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CodeToolConfig.Inputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Inputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RequestParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputs.push_back(item);
        }
        m_inputsHasBeenSet = true;
    }

    if (value.HasMember("Outputs") && !value["Outputs"].IsNull())
    {
        if (!value["Outputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CodeToolConfig.Outputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Outputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResponseParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputs.push_back(item);
        }
        m_outputsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeToolConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_exampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Example";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_example.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Inputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputs.begin(); itr != m_inputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputs.begin(); itr != m_outputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CodeToolConfig::GetCode() const
{
    return m_code;
}

void CodeToolConfig::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool CodeToolConfig::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

ToolExample CodeToolConfig::GetExample() const
{
    return m_example;
}

void CodeToolConfig::SetExample(const ToolExample& _example)
{
    m_example = _example;
    m_exampleHasBeenSet = true;
}

bool CodeToolConfig::ExampleHasBeenSet() const
{
    return m_exampleHasBeenSet;
}

vector<RequestParam> CodeToolConfig::GetInputs() const
{
    return m_inputs;
}

void CodeToolConfig::SetInputs(const vector<RequestParam>& _inputs)
{
    m_inputs = _inputs;
    m_inputsHasBeenSet = true;
}

bool CodeToolConfig::InputsHasBeenSet() const
{
    return m_inputsHasBeenSet;
}

vector<ResponseParam> CodeToolConfig::GetOutputs() const
{
    return m_outputs;
}

void CodeToolConfig::SetOutputs(const vector<ResponseParam>& _outputs)
{
    m_outputs = _outputs;
    m_outputsHasBeenSet = true;
}

bool CodeToolConfig::OutputsHasBeenSet() const
{
    return m_outputsHasBeenSet;
}

