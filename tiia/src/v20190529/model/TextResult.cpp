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

#include <tencentcloud/tiia/v20190529/model/TextResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace rapidjson;
using namespace std;

TextResult::TextResult() :
    m_codeHasBeenSet(false),
    m_msgHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_advancedInfoHasBeenSet(false)
{
}

CoreInternalOutcome TextResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TextResult.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Msg") && !value["Msg"].IsNull())
    {
        if (!value["Msg"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextResult.Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(value["Msg"].GetString());
        m_msgHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextResult.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TextResult.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Error("response `TextResult.Keywords` is not array type"));

        const Value &tmpValue = value["Keywords"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AdvancedInfo") && !value["AdvancedInfo"].IsNull())
    {
        if (!value["AdvancedInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextResult.AdvancedInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedInfo = string(value["AdvancedInfo"].GetString());
        m_advancedInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_msgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_msg.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AdvancedInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_advancedInfo.c_str(), allocator).Move(), allocator);
    }

}


int64_t TextResult::GetCode() const
{
    return m_code;
}

void TextResult::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool TextResult::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string TextResult::GetMsg() const
{
    return m_msg;
}

void TextResult::SetMsg(const string& _msg)
{
    m_msg = _msg;
    m_msgHasBeenSet = true;
}

bool TextResult::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

string TextResult::GetSuggestion() const
{
    return m_suggestion;
}

void TextResult::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool TextResult::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

int64_t TextResult::GetConfidence() const
{
    return m_confidence;
}

void TextResult::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool TextResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<string> TextResult::GetKeywords() const
{
    return m_keywords;
}

void TextResult::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool TextResult::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

string TextResult::GetType() const
{
    return m_type;
}

void TextResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TextResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TextResult::GetAdvancedInfo() const
{
    return m_advancedInfo;
}

void TextResult::SetAdvancedInfo(const string& _advancedInfo)
{
    m_advancedInfo = _advancedInfo;
    m_advancedInfoHasBeenSet = true;
}

bool TextResult::AdvancedInfoHasBeenSet() const
{
    return m_advancedInfoHasBeenSet;
}

