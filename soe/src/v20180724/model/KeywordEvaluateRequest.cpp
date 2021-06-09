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

#include <tencentcloud/soe/v20180724/model/KeywordEvaluateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Soe::V20180724::Model;
using namespace std;

KeywordEvaluateRequest::KeywordEvaluateRequest() :
    m_seqIdHasBeenSet(false),
    m_isEndHasBeenSet(false),
    m_voiceFileTypeHasBeenSet(false),
    m_voiceEncodeTypeHasBeenSet(false),
    m_userVoiceDataHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_soeAppIdHasBeenSet(false),
    m_isQueryHasBeenSet(false)
{
}

string KeywordEvaluateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_seqIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeqId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_seqId, allocator);
    }

    if (m_isEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnd, allocator);
    }

    if (m_voiceFileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceFileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceFileType, allocator);
    }

    if (m_voiceEncodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceEncodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceEncodeType, allocator);
    }

    if (m_userVoiceDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVoiceData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userVoiceData.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_soeAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoeAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_soeAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_isQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQuery";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isQuery, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t KeywordEvaluateRequest::GetSeqId() const
{
    return m_seqId;
}

void KeywordEvaluateRequest::SetSeqId(const uint64_t& _seqId)
{
    m_seqId = _seqId;
    m_seqIdHasBeenSet = true;
}

bool KeywordEvaluateRequest::SeqIdHasBeenSet() const
{
    return m_seqIdHasBeenSet;
}

uint64_t KeywordEvaluateRequest::GetIsEnd() const
{
    return m_isEnd;
}

void KeywordEvaluateRequest::SetIsEnd(const uint64_t& _isEnd)
{
    m_isEnd = _isEnd;
    m_isEndHasBeenSet = true;
}

bool KeywordEvaluateRequest::IsEndHasBeenSet() const
{
    return m_isEndHasBeenSet;
}

uint64_t KeywordEvaluateRequest::GetVoiceFileType() const
{
    return m_voiceFileType;
}

void KeywordEvaluateRequest::SetVoiceFileType(const uint64_t& _voiceFileType)
{
    m_voiceFileType = _voiceFileType;
    m_voiceFileTypeHasBeenSet = true;
}

bool KeywordEvaluateRequest::VoiceFileTypeHasBeenSet() const
{
    return m_voiceFileTypeHasBeenSet;
}

uint64_t KeywordEvaluateRequest::GetVoiceEncodeType() const
{
    return m_voiceEncodeType;
}

void KeywordEvaluateRequest::SetVoiceEncodeType(const uint64_t& _voiceEncodeType)
{
    m_voiceEncodeType = _voiceEncodeType;
    m_voiceEncodeTypeHasBeenSet = true;
}

bool KeywordEvaluateRequest::VoiceEncodeTypeHasBeenSet() const
{
    return m_voiceEncodeTypeHasBeenSet;
}

string KeywordEvaluateRequest::GetUserVoiceData() const
{
    return m_userVoiceData;
}

void KeywordEvaluateRequest::SetUserVoiceData(const string& _userVoiceData)
{
    m_userVoiceData = _userVoiceData;
    m_userVoiceDataHasBeenSet = true;
}

bool KeywordEvaluateRequest::UserVoiceDataHasBeenSet() const
{
    return m_userVoiceDataHasBeenSet;
}

string KeywordEvaluateRequest::GetSessionId() const
{
    return m_sessionId;
}

void KeywordEvaluateRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool KeywordEvaluateRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

vector<Keyword> KeywordEvaluateRequest::GetKeywords() const
{
    return m_keywords;
}

void KeywordEvaluateRequest::SetKeywords(const vector<Keyword>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool KeywordEvaluateRequest::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

string KeywordEvaluateRequest::GetSoeAppId() const
{
    return m_soeAppId;
}

void KeywordEvaluateRequest::SetSoeAppId(const string& _soeAppId)
{
    m_soeAppId = _soeAppId;
    m_soeAppIdHasBeenSet = true;
}

bool KeywordEvaluateRequest::SoeAppIdHasBeenSet() const
{
    return m_soeAppIdHasBeenSet;
}

uint64_t KeywordEvaluateRequest::GetIsQuery() const
{
    return m_isQuery;
}

void KeywordEvaluateRequest::SetIsQuery(const uint64_t& _isQuery)
{
    m_isQuery = _isQuery;
    m_isQueryHasBeenSet = true;
}

bool KeywordEvaluateRequest::IsQueryHasBeenSet() const
{
    return m_isQueryHasBeenSet;
}


