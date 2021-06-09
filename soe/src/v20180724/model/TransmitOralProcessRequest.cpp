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

#include <tencentcloud/soe/v20180724/model/TransmitOralProcessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Soe::V20180724::Model;
using namespace std;

TransmitOralProcessRequest::TransmitOralProcessRequest() :
    m_seqIdHasBeenSet(false),
    m_isEndHasBeenSet(false),
    m_voiceFileTypeHasBeenSet(false),
    m_voiceEncodeTypeHasBeenSet(false),
    m_userVoiceDataHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_soeAppIdHasBeenSet(false),
    m_isLongLifeSessionHasBeenSet(false),
    m_isQueryHasBeenSet(false)
{
}

string TransmitOralProcessRequest::ToJsonString() const
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

    if (m_soeAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoeAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_soeAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_isLongLifeSessionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLongLifeSession";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isLongLifeSession, allocator);
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


int64_t TransmitOralProcessRequest::GetSeqId() const
{
    return m_seqId;
}

void TransmitOralProcessRequest::SetSeqId(const int64_t& _seqId)
{
    m_seqId = _seqId;
    m_seqIdHasBeenSet = true;
}

bool TransmitOralProcessRequest::SeqIdHasBeenSet() const
{
    return m_seqIdHasBeenSet;
}

int64_t TransmitOralProcessRequest::GetIsEnd() const
{
    return m_isEnd;
}

void TransmitOralProcessRequest::SetIsEnd(const int64_t& _isEnd)
{
    m_isEnd = _isEnd;
    m_isEndHasBeenSet = true;
}

bool TransmitOralProcessRequest::IsEndHasBeenSet() const
{
    return m_isEndHasBeenSet;
}

int64_t TransmitOralProcessRequest::GetVoiceFileType() const
{
    return m_voiceFileType;
}

void TransmitOralProcessRequest::SetVoiceFileType(const int64_t& _voiceFileType)
{
    m_voiceFileType = _voiceFileType;
    m_voiceFileTypeHasBeenSet = true;
}

bool TransmitOralProcessRequest::VoiceFileTypeHasBeenSet() const
{
    return m_voiceFileTypeHasBeenSet;
}

int64_t TransmitOralProcessRequest::GetVoiceEncodeType() const
{
    return m_voiceEncodeType;
}

void TransmitOralProcessRequest::SetVoiceEncodeType(const int64_t& _voiceEncodeType)
{
    m_voiceEncodeType = _voiceEncodeType;
    m_voiceEncodeTypeHasBeenSet = true;
}

bool TransmitOralProcessRequest::VoiceEncodeTypeHasBeenSet() const
{
    return m_voiceEncodeTypeHasBeenSet;
}

string TransmitOralProcessRequest::GetUserVoiceData() const
{
    return m_userVoiceData;
}

void TransmitOralProcessRequest::SetUserVoiceData(const string& _userVoiceData)
{
    m_userVoiceData = _userVoiceData;
    m_userVoiceDataHasBeenSet = true;
}

bool TransmitOralProcessRequest::UserVoiceDataHasBeenSet() const
{
    return m_userVoiceDataHasBeenSet;
}

string TransmitOralProcessRequest::GetSessionId() const
{
    return m_sessionId;
}

void TransmitOralProcessRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool TransmitOralProcessRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string TransmitOralProcessRequest::GetSoeAppId() const
{
    return m_soeAppId;
}

void TransmitOralProcessRequest::SetSoeAppId(const string& _soeAppId)
{
    m_soeAppId = _soeAppId;
    m_soeAppIdHasBeenSet = true;
}

bool TransmitOralProcessRequest::SoeAppIdHasBeenSet() const
{
    return m_soeAppIdHasBeenSet;
}

int64_t TransmitOralProcessRequest::GetIsLongLifeSession() const
{
    return m_isLongLifeSession;
}

void TransmitOralProcessRequest::SetIsLongLifeSession(const int64_t& _isLongLifeSession)
{
    m_isLongLifeSession = _isLongLifeSession;
    m_isLongLifeSessionHasBeenSet = true;
}

bool TransmitOralProcessRequest::IsLongLifeSessionHasBeenSet() const
{
    return m_isLongLifeSessionHasBeenSet;
}

int64_t TransmitOralProcessRequest::GetIsQuery() const
{
    return m_isQuery;
}

void TransmitOralProcessRequest::SetIsQuery(const int64_t& _isQuery)
{
    m_isQuery = _isQuery;
    m_isQueryHasBeenSet = true;
}

bool TransmitOralProcessRequest::IsQueryHasBeenSet() const
{
    return m_isQueryHasBeenSet;
}


