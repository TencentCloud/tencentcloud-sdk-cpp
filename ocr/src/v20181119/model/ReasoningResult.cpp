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

#include <tencentcloud/ocr/v20181119/model/ReasoningResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ReasoningResult::ReasoningResult() :
    m_outputModeHasBeenSet(false),
    m_enumValueHasBeenSet(false),
    m_textValueHasBeenSet(false),
    m_rawOutputHasBeenSet(false),
    m_renderedPromptHasBeenSet(false)
{
}

CoreInternalOutcome ReasoningResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputMode") && !value["OutputMode"].IsNull())
    {
        if (!value["OutputMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReasoningResult.OutputMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputMode = string(value["OutputMode"].GetString());
        m_outputModeHasBeenSet = true;
    }

    if (value.HasMember("EnumValue") && !value["EnumValue"].IsNull())
    {
        if (!value["EnumValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReasoningResult.EnumValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enumValue = string(value["EnumValue"].GetString());
        m_enumValueHasBeenSet = true;
    }

    if (value.HasMember("TextValue") && !value["TextValue"].IsNull())
    {
        if (!value["TextValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReasoningResult.TextValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textValue = string(value["TextValue"].GetString());
        m_textValueHasBeenSet = true;
    }

    if (value.HasMember("RawOutput") && !value["RawOutput"].IsNull())
    {
        if (!value["RawOutput"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReasoningResult.RawOutput` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rawOutput = string(value["RawOutput"].GetString());
        m_rawOutputHasBeenSet = true;
    }

    if (value.HasMember("RenderedPrompt") && !value["RenderedPrompt"].IsNull())
    {
        if (!value["RenderedPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReasoningResult.RenderedPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renderedPrompt = string(value["RenderedPrompt"].GetString());
        m_renderedPromptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReasoningResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputMode.c_str(), allocator).Move(), allocator);
    }

    if (m_enumValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnumValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enumValue.c_str(), allocator).Move(), allocator);
    }

    if (m_textValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_textValue.c_str(), allocator).Move(), allocator);
    }

    if (m_rawOutputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawOutput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rawOutput.c_str(), allocator).Move(), allocator);
    }

    if (m_renderedPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenderedPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renderedPrompt.c_str(), allocator).Move(), allocator);
    }

}


string ReasoningResult::GetOutputMode() const
{
    return m_outputMode;
}

void ReasoningResult::SetOutputMode(const string& _outputMode)
{
    m_outputMode = _outputMode;
    m_outputModeHasBeenSet = true;
}

bool ReasoningResult::OutputModeHasBeenSet() const
{
    return m_outputModeHasBeenSet;
}

string ReasoningResult::GetEnumValue() const
{
    return m_enumValue;
}

void ReasoningResult::SetEnumValue(const string& _enumValue)
{
    m_enumValue = _enumValue;
    m_enumValueHasBeenSet = true;
}

bool ReasoningResult::EnumValueHasBeenSet() const
{
    return m_enumValueHasBeenSet;
}

string ReasoningResult::GetTextValue() const
{
    return m_textValue;
}

void ReasoningResult::SetTextValue(const string& _textValue)
{
    m_textValue = _textValue;
    m_textValueHasBeenSet = true;
}

bool ReasoningResult::TextValueHasBeenSet() const
{
    return m_textValueHasBeenSet;
}

string ReasoningResult::GetRawOutput() const
{
    return m_rawOutput;
}

void ReasoningResult::SetRawOutput(const string& _rawOutput)
{
    m_rawOutput = _rawOutput;
    m_rawOutputHasBeenSet = true;
}

bool ReasoningResult::RawOutputHasBeenSet() const
{
    return m_rawOutputHasBeenSet;
}

string ReasoningResult::GetRenderedPrompt() const
{
    return m_renderedPrompt;
}

void ReasoningResult::SetRenderedPrompt(const string& _renderedPrompt)
{
    m_renderedPrompt = _renderedPrompt;
    m_renderedPromptHasBeenSet = true;
}

bool ReasoningResult::RenderedPromptHasBeenSet() const
{
    return m_renderedPromptHasBeenSet;
}

