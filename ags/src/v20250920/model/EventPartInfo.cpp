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

#include <tencentcloud/ags/v20250920/model/EventPartInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

EventPartInfo::EventPartInfo() :
    m_textHasBeenSet(false),
    m_thoughtHasBeenSet(false),
    m_functionCallHasBeenSet(false),
    m_functionResponseHasBeenSet(false),
    m_inlineDataHasBeenSet(false)
{
}

CoreInternalOutcome EventPartInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventPartInfo.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Thought") && !value["Thought"].IsNull())
    {
        if (!value["Thought"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EventPartInfo.Thought` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_thought = value["Thought"].GetBool();
        m_thoughtHasBeenSet = true;
    }

    if (value.HasMember("FunctionCall") && !value["FunctionCall"].IsNull())
    {
        if (!value["FunctionCall"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventPartInfo.FunctionCall` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionCall = string(value["FunctionCall"].GetString());
        m_functionCallHasBeenSet = true;
    }

    if (value.HasMember("FunctionResponse") && !value["FunctionResponse"].IsNull())
    {
        if (!value["FunctionResponse"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventPartInfo.FunctionResponse` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionResponse = string(value["FunctionResponse"].GetString());
        m_functionResponseHasBeenSet = true;
    }

    if (value.HasMember("InlineData") && !value["InlineData"].IsNull())
    {
        if (!value["InlineData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventPartInfo.InlineData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inlineData.Deserialize(value["InlineData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inlineDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventPartInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_thoughtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Thought";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thought, allocator);
    }

    if (m_functionCallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionCall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionCall.c_str(), allocator).Move(), allocator);
    }

    if (m_functionResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionResponse.c_str(), allocator).Move(), allocator);
    }

    if (m_inlineDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InlineData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inlineData.ToJsonObject(value[key.c_str()], allocator);
    }

}


string EventPartInfo::GetText() const
{
    return m_text;
}

void EventPartInfo::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool EventPartInfo::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

bool EventPartInfo::GetThought() const
{
    return m_thought;
}

void EventPartInfo::SetThought(const bool& _thought)
{
    m_thought = _thought;
    m_thoughtHasBeenSet = true;
}

bool EventPartInfo::ThoughtHasBeenSet() const
{
    return m_thoughtHasBeenSet;
}

string EventPartInfo::GetFunctionCall() const
{
    return m_functionCall;
}

void EventPartInfo::SetFunctionCall(const string& _functionCall)
{
    m_functionCall = _functionCall;
    m_functionCallHasBeenSet = true;
}

bool EventPartInfo::FunctionCallHasBeenSet() const
{
    return m_functionCallHasBeenSet;
}

string EventPartInfo::GetFunctionResponse() const
{
    return m_functionResponse;
}

void EventPartInfo::SetFunctionResponse(const string& _functionResponse)
{
    m_functionResponse = _functionResponse;
    m_functionResponseHasBeenSet = true;
}

bool EventPartInfo::FunctionResponseHasBeenSet() const
{
    return m_functionResponseHasBeenSet;
}

InlineDataInfo EventPartInfo::GetInlineData() const
{
    return m_inlineData;
}

void EventPartInfo::SetInlineData(const InlineDataInfo& _inlineData)
{
    m_inlineData = _inlineData;
    m_inlineDataHasBeenSet = true;
}

bool EventPartInfo::InlineDataHasBeenSet() const
{
    return m_inlineDataHasBeenSet;
}

