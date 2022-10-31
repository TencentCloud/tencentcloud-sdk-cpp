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

#include <tencentcloud/soe/v20180724/model/InitOralProcessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Soe::V20180724::Model;
using namespace std;

InitOralProcessRequest::InitOralProcessRequest() :
    m_sessionIdHasBeenSet(false),
    m_refTextHasBeenSet(false),
    m_workModeHasBeenSet(false),
    m_evalModeHasBeenSet(false),
    m_scoreCoeffHasBeenSet(false),
    m_soeAppIdHasBeenSet(false),
    m_isLongLifeSessionHasBeenSet(false),
    m_storageModeHasBeenSet(false),
    m_sentenceInfoEnabledHasBeenSet(false),
    m_serverTypeHasBeenSet(false),
    m_isAsyncHasBeenSet(false),
    m_textModeHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string InitOralProcessRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_isLongLifeSessionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLongLifeSession";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isLongLifeSession, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InitOralProcessRequest::GetSessionId() const
{
    return m_sessionId;
}

void InitOralProcessRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool InitOralProcessRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string InitOralProcessRequest::GetRefText() const
{
    return m_refText;
}

void InitOralProcessRequest::SetRefText(const string& _refText)
{
    m_refText = _refText;
    m_refTextHasBeenSet = true;
}

bool InitOralProcessRequest::RefTextHasBeenSet() const
{
    return m_refTextHasBeenSet;
}

int64_t InitOralProcessRequest::GetWorkMode() const
{
    return m_workMode;
}

void InitOralProcessRequest::SetWorkMode(const int64_t& _workMode)
{
    m_workMode = _workMode;
    m_workModeHasBeenSet = true;
}

bool InitOralProcessRequest::WorkModeHasBeenSet() const
{
    return m_workModeHasBeenSet;
}

int64_t InitOralProcessRequest::GetEvalMode() const
{
    return m_evalMode;
}

void InitOralProcessRequest::SetEvalMode(const int64_t& _evalMode)
{
    m_evalMode = _evalMode;
    m_evalModeHasBeenSet = true;
}

bool InitOralProcessRequest::EvalModeHasBeenSet() const
{
    return m_evalModeHasBeenSet;
}

double InitOralProcessRequest::GetScoreCoeff() const
{
    return m_scoreCoeff;
}

void InitOralProcessRequest::SetScoreCoeff(const double& _scoreCoeff)
{
    m_scoreCoeff = _scoreCoeff;
    m_scoreCoeffHasBeenSet = true;
}

bool InitOralProcessRequest::ScoreCoeffHasBeenSet() const
{
    return m_scoreCoeffHasBeenSet;
}

string InitOralProcessRequest::GetSoeAppId() const
{
    return m_soeAppId;
}

void InitOralProcessRequest::SetSoeAppId(const string& _soeAppId)
{
    m_soeAppId = _soeAppId;
    m_soeAppIdHasBeenSet = true;
}

bool InitOralProcessRequest::SoeAppIdHasBeenSet() const
{
    return m_soeAppIdHasBeenSet;
}

int64_t InitOralProcessRequest::GetIsLongLifeSession() const
{
    return m_isLongLifeSession;
}

void InitOralProcessRequest::SetIsLongLifeSession(const int64_t& _isLongLifeSession)
{
    m_isLongLifeSession = _isLongLifeSession;
    m_isLongLifeSessionHasBeenSet = true;
}

bool InitOralProcessRequest::IsLongLifeSessionHasBeenSet() const
{
    return m_isLongLifeSessionHasBeenSet;
}

int64_t InitOralProcessRequest::GetStorageMode() const
{
    return m_storageMode;
}

void InitOralProcessRequest::SetStorageMode(const int64_t& _storageMode)
{
    m_storageMode = _storageMode;
    m_storageModeHasBeenSet = true;
}

bool InitOralProcessRequest::StorageModeHasBeenSet() const
{
    return m_storageModeHasBeenSet;
}

int64_t InitOralProcessRequest::GetSentenceInfoEnabled() const
{
    return m_sentenceInfoEnabled;
}

void InitOralProcessRequest::SetSentenceInfoEnabled(const int64_t& _sentenceInfoEnabled)
{
    m_sentenceInfoEnabled = _sentenceInfoEnabled;
    m_sentenceInfoEnabledHasBeenSet = true;
}

bool InitOralProcessRequest::SentenceInfoEnabledHasBeenSet() const
{
    return m_sentenceInfoEnabledHasBeenSet;
}

int64_t InitOralProcessRequest::GetServerType() const
{
    return m_serverType;
}

void InitOralProcessRequest::SetServerType(const int64_t& _serverType)
{
    m_serverType = _serverType;
    m_serverTypeHasBeenSet = true;
}

bool InitOralProcessRequest::ServerTypeHasBeenSet() const
{
    return m_serverTypeHasBeenSet;
}

int64_t InitOralProcessRequest::GetIsAsync() const
{
    return m_isAsync;
}

void InitOralProcessRequest::SetIsAsync(const int64_t& _isAsync)
{
    m_isAsync = _isAsync;
    m_isAsyncHasBeenSet = true;
}

bool InitOralProcessRequest::IsAsyncHasBeenSet() const
{
    return m_isAsyncHasBeenSet;
}

int64_t InitOralProcessRequest::GetTextMode() const
{
    return m_textMode;
}

void InitOralProcessRequest::SetTextMode(const int64_t& _textMode)
{
    m_textMode = _textMode;
    m_textModeHasBeenSet = true;
}

bool InitOralProcessRequest::TextModeHasBeenSet() const
{
    return m_textModeHasBeenSet;
}

string InitOralProcessRequest::GetKeyword() const
{
    return m_keyword;
}

void InitOralProcessRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool InitOralProcessRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


