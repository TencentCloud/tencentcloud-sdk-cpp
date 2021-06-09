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

#include <tencentcloud/tci/v20190318/model/TransmitAudioStreamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

TransmitAudioStreamRequest::TransmitAudioStreamRequest() :
    m_functionsHasBeenSet(false),
    m_seqIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_userVoiceDataHasBeenSet(false),
    m_voiceEncodeTypeHasBeenSet(false),
    m_voiceFileTypeHasBeenSet(false),
    m_isEndHasBeenSet(false),
    m_langHasBeenSet(false),
    m_storageModeHasBeenSet(false),
    m_vocabLibNameListHasBeenSet(false)
{
}

string TransmitAudioStreamRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Functions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_functions.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_seqIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeqId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_seqId, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_userVoiceDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVoiceData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userVoiceData.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceEncodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceEncodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceEncodeType, allocator);
    }

    if (m_voiceFileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceFileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceFileType, allocator);
    }

    if (m_isEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnd, allocator);
    }

    if (m_langHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lang";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lang, allocator);
    }

    if (m_storageModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageMode, allocator);
    }

    if (m_vocabLibNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VocabLibNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vocabLibNameList.begin(); itr != m_vocabLibNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Function TransmitAudioStreamRequest::GetFunctions() const
{
    return m_functions;
}

void TransmitAudioStreamRequest::SetFunctions(const Function& _functions)
{
    m_functions = _functions;
    m_functionsHasBeenSet = true;
}

bool TransmitAudioStreamRequest::FunctionsHasBeenSet() const
{
    return m_functionsHasBeenSet;
}

int64_t TransmitAudioStreamRequest::GetSeqId() const
{
    return m_seqId;
}

void TransmitAudioStreamRequest::SetSeqId(const int64_t& _seqId)
{
    m_seqId = _seqId;
    m_seqIdHasBeenSet = true;
}

bool TransmitAudioStreamRequest::SeqIdHasBeenSet() const
{
    return m_seqIdHasBeenSet;
}

string TransmitAudioStreamRequest::GetSessionId() const
{
    return m_sessionId;
}

void TransmitAudioStreamRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool TransmitAudioStreamRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string TransmitAudioStreamRequest::GetUserVoiceData() const
{
    return m_userVoiceData;
}

void TransmitAudioStreamRequest::SetUserVoiceData(const string& _userVoiceData)
{
    m_userVoiceData = _userVoiceData;
    m_userVoiceDataHasBeenSet = true;
}

bool TransmitAudioStreamRequest::UserVoiceDataHasBeenSet() const
{
    return m_userVoiceDataHasBeenSet;
}

int64_t TransmitAudioStreamRequest::GetVoiceEncodeType() const
{
    return m_voiceEncodeType;
}

void TransmitAudioStreamRequest::SetVoiceEncodeType(const int64_t& _voiceEncodeType)
{
    m_voiceEncodeType = _voiceEncodeType;
    m_voiceEncodeTypeHasBeenSet = true;
}

bool TransmitAudioStreamRequest::VoiceEncodeTypeHasBeenSet() const
{
    return m_voiceEncodeTypeHasBeenSet;
}

int64_t TransmitAudioStreamRequest::GetVoiceFileType() const
{
    return m_voiceFileType;
}

void TransmitAudioStreamRequest::SetVoiceFileType(const int64_t& _voiceFileType)
{
    m_voiceFileType = _voiceFileType;
    m_voiceFileTypeHasBeenSet = true;
}

bool TransmitAudioStreamRequest::VoiceFileTypeHasBeenSet() const
{
    return m_voiceFileTypeHasBeenSet;
}

int64_t TransmitAudioStreamRequest::GetIsEnd() const
{
    return m_isEnd;
}

void TransmitAudioStreamRequest::SetIsEnd(const int64_t& _isEnd)
{
    m_isEnd = _isEnd;
    m_isEndHasBeenSet = true;
}

bool TransmitAudioStreamRequest::IsEndHasBeenSet() const
{
    return m_isEndHasBeenSet;
}

int64_t TransmitAudioStreamRequest::GetLang() const
{
    return m_lang;
}

void TransmitAudioStreamRequest::SetLang(const int64_t& _lang)
{
    m_lang = _lang;
    m_langHasBeenSet = true;
}

bool TransmitAudioStreamRequest::LangHasBeenSet() const
{
    return m_langHasBeenSet;
}

int64_t TransmitAudioStreamRequest::GetStorageMode() const
{
    return m_storageMode;
}

void TransmitAudioStreamRequest::SetStorageMode(const int64_t& _storageMode)
{
    m_storageMode = _storageMode;
    m_storageModeHasBeenSet = true;
}

bool TransmitAudioStreamRequest::StorageModeHasBeenSet() const
{
    return m_storageModeHasBeenSet;
}

vector<string> TransmitAudioStreamRequest::GetVocabLibNameList() const
{
    return m_vocabLibNameList;
}

void TransmitAudioStreamRequest::SetVocabLibNameList(const vector<string>& _vocabLibNameList)
{
    m_vocabLibNameList = _vocabLibNameList;
    m_vocabLibNameListHasBeenSet = true;
}

bool TransmitAudioStreamRequest::VocabLibNameListHasBeenSet() const
{
    return m_vocabLibNameListHasBeenSet;
}


