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

#include <tencentcloud/soe/v20180724/model/TransmitOralProcessWithInitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Soe::V20180724::Model;
using namespace std;

TransmitOralProcessWithInitRequest::TransmitOralProcessWithInitRequest() :
    m_seqIdHasBeenSet(false),
    m_isEndHasBeenSet(false),
    m_voiceFileTypeHasBeenSet(false),
    m_voiceEncodeTypeHasBeenSet(false),
    m_userVoiceDataHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_refTextHasBeenSet(false),
    m_workModeHasBeenSet(false),
    m_evalModeHasBeenSet(false),
    m_scoreCoeffHasBeenSet(false),
    m_soeAppIdHasBeenSet(false),
    m_storageModeHasBeenSet(false),
    m_sentenceInfoEnabledHasBeenSet(false),
    m_serverTypeHasBeenSet(false),
    m_isAsyncHasBeenSet(false),
    m_isQueryHasBeenSet(false),
    m_textModeHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_cOSBucketURLHasBeenSet(false)
{
}

string TransmitOralProcessWithInitRequest::ToJsonString() const
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

    if (m_refTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_refText.c_str(), allocator).Move(), allocator);
    }

    if (m_workModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workMode, allocator);
    }

    if (m_evalModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvalMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_evalMode, allocator);
    }

    if (m_scoreCoeffHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoreCoeff";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scoreCoeff, allocator);
    }

    if (m_soeAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoeAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_soeAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_storageModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageMode, allocator);
    }

    if (m_sentenceInfoEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentenceInfoEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sentenceInfoEnabled, allocator);
    }

    if (m_serverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serverType, allocator);
    }

    if (m_isAsyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAsync";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAsync, allocator);
    }

    if (m_isQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQuery";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isQuery, allocator);
    }

    if (m_textModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_textMode, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_cOSBucketURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSBucketURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cOSBucketURL.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t TransmitOralProcessWithInitRequest::GetSeqId() const
{
    return m_seqId;
}

void TransmitOralProcessWithInitRequest::SetSeqId(const int64_t& _seqId)
{
    m_seqId = _seqId;
    m_seqIdHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::SeqIdHasBeenSet() const
{
    return m_seqIdHasBeenSet;
}

int64_t TransmitOralProcessWithInitRequest::GetIsEnd() const
{
    return m_isEnd;
}

void TransmitOralProcessWithInitRequest::SetIsEnd(const int64_t& _isEnd)
{
    m_isEnd = _isEnd;
    m_isEndHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::IsEndHasBeenSet() const
{
    return m_isEndHasBeenSet;
}

int64_t TransmitOralProcessWithInitRequest::GetVoiceFileType() const
{
    return m_voiceFileType;
}

void TransmitOralProcessWithInitRequest::SetVoiceFileType(const int64_t& _voiceFileType)
{
    m_voiceFileType = _voiceFileType;
    m_voiceFileTypeHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::VoiceFileTypeHasBeenSet() const
{
    return m_voiceFileTypeHasBeenSet;
}

int64_t TransmitOralProcessWithInitRequest::GetVoiceEncodeType() const
{
    return m_voiceEncodeType;
}

void TransmitOralProcessWithInitRequest::SetVoiceEncodeType(const int64_t& _voiceEncodeType)
{
    m_voiceEncodeType = _voiceEncodeType;
    m_voiceEncodeTypeHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::VoiceEncodeTypeHasBeenSet() const
{
    return m_voiceEncodeTypeHasBeenSet;
}

string TransmitOralProcessWithInitRequest::GetUserVoiceData() const
{
    return m_userVoiceData;
}

void TransmitOralProcessWithInitRequest::SetUserVoiceData(const string& _userVoiceData)
{
    m_userVoiceData = _userVoiceData;
    m_userVoiceDataHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::UserVoiceDataHasBeenSet() const
{
    return m_userVoiceDataHasBeenSet;
}

string TransmitOralProcessWithInitRequest::GetSessionId() const
{
    return m_sessionId;
}

void TransmitOralProcessWithInitRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string TransmitOralProcessWithInitRequest::GetRefText() const
{
    return m_refText;
}

void TransmitOralProcessWithInitRequest::SetRefText(const string& _refText)
{
    m_refText = _refText;
    m_refTextHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::RefTextHasBeenSet() const
{
    return m_refTextHasBeenSet;
}

int64_t TransmitOralProcessWithInitRequest::GetWorkMode() const
{
    return m_workMode;
}

void TransmitOralProcessWithInitRequest::SetWorkMode(const int64_t& _workMode)
{
    m_workMode = _workMode;
    m_workModeHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::WorkModeHasBeenSet() const
{
    return m_workModeHasBeenSet;
}

int64_t TransmitOralProcessWithInitRequest::GetEvalMode() const
{
    return m_evalMode;
}

void TransmitOralProcessWithInitRequest::SetEvalMode(const int64_t& _evalMode)
{
    m_evalMode = _evalMode;
    m_evalModeHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::EvalModeHasBeenSet() const
{
    return m_evalModeHasBeenSet;
}

double TransmitOralProcessWithInitRequest::GetScoreCoeff() const
{
    return m_scoreCoeff;
}

void TransmitOralProcessWithInitRequest::SetScoreCoeff(const double& _scoreCoeff)
{
    m_scoreCoeff = _scoreCoeff;
    m_scoreCoeffHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::ScoreCoeffHasBeenSet() const
{
    return m_scoreCoeffHasBeenSet;
}

string TransmitOralProcessWithInitRequest::GetSoeAppId() const
{
    return m_soeAppId;
}

void TransmitOralProcessWithInitRequest::SetSoeAppId(const string& _soeAppId)
{
    m_soeAppId = _soeAppId;
    m_soeAppIdHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::SoeAppIdHasBeenSet() const
{
    return m_soeAppIdHasBeenSet;
}

int64_t TransmitOralProcessWithInitRequest::GetStorageMode() const
{
    return m_storageMode;
}

void TransmitOralProcessWithInitRequest::SetStorageMode(const int64_t& _storageMode)
{
    m_storageMode = _storageMode;
    m_storageModeHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::StorageModeHasBeenSet() const
{
    return m_storageModeHasBeenSet;
}

int64_t TransmitOralProcessWithInitRequest::GetSentenceInfoEnabled() const
{
    return m_sentenceInfoEnabled;
}

void TransmitOralProcessWithInitRequest::SetSentenceInfoEnabled(const int64_t& _sentenceInfoEnabled)
{
    m_sentenceInfoEnabled = _sentenceInfoEnabled;
    m_sentenceInfoEnabledHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::SentenceInfoEnabledHasBeenSet() const
{
    return m_sentenceInfoEnabledHasBeenSet;
}

int64_t TransmitOralProcessWithInitRequest::GetServerType() const
{
    return m_serverType;
}

void TransmitOralProcessWithInitRequest::SetServerType(const int64_t& _serverType)
{
    m_serverType = _serverType;
    m_serverTypeHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::ServerTypeHasBeenSet() const
{
    return m_serverTypeHasBeenSet;
}

int64_t TransmitOralProcessWithInitRequest::GetIsAsync() const
{
    return m_isAsync;
}

void TransmitOralProcessWithInitRequest::SetIsAsync(const int64_t& _isAsync)
{
    m_isAsync = _isAsync;
    m_isAsyncHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::IsAsyncHasBeenSet() const
{
    return m_isAsyncHasBeenSet;
}

int64_t TransmitOralProcessWithInitRequest::GetIsQuery() const
{
    return m_isQuery;
}

void TransmitOralProcessWithInitRequest::SetIsQuery(const int64_t& _isQuery)
{
    m_isQuery = _isQuery;
    m_isQueryHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::IsQueryHasBeenSet() const
{
    return m_isQueryHasBeenSet;
}

int64_t TransmitOralProcessWithInitRequest::GetTextMode() const
{
    return m_textMode;
}

void TransmitOralProcessWithInitRequest::SetTextMode(const int64_t& _textMode)
{
    m_textMode = _textMode;
    m_textModeHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::TextModeHasBeenSet() const
{
    return m_textModeHasBeenSet;
}

string TransmitOralProcessWithInitRequest::GetKeyword() const
{
    return m_keyword;
}

void TransmitOralProcessWithInitRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string TransmitOralProcessWithInitRequest::GetCOSBucketURL() const
{
    return m_cOSBucketURL;
}

void TransmitOralProcessWithInitRequest::SetCOSBucketURL(const string& _cOSBucketURL)
{
    m_cOSBucketURL = _cOSBucketURL;
    m_cOSBucketURLHasBeenSet = true;
}

bool TransmitOralProcessWithInitRequest::COSBucketURLHasBeenSet() const
{
    return m_cOSBucketURLHasBeenSet;
}


