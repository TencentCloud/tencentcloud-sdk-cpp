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

#include <tencentcloud/aai/v20180522/model/SimultaneousInterpretingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aai::V20180522::Model;
using namespace std;

SimultaneousInterpretingRequest::SimultaneousInterpretingRequest() :
    m_projectIdHasBeenSet(false),
    m_subServiceTypeHasBeenSet(false),
    m_recEngineModelTypeHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_dataLenHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_isEndHasBeenSet(false),
    m_voiceFormatHasBeenSet(false),
    m_openTranslateHasBeenSet(false),
    m_sourceLanguageHasBeenSet(false),
    m_targetLanguageHasBeenSet(false),
    m_seqHasBeenSet(false)
{
}

string SimultaneousInterpretingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_subServiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subServiceType, allocator);
    }

    if (m_recEngineModelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecEngineModelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recEngineModelType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }

    if (m_dataLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataLen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataLen, allocator);
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_isEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnd, allocator);
    }

    if (m_voiceFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceFormat, allocator);
    }

    if (m_openTranslateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenTranslate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_openTranslate, allocator);
    }

    if (m_sourceLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_targetLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_seqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seq";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_seq, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SimultaneousInterpretingRequest::GetProjectId() const
{
    return m_projectId;
}

void SimultaneousInterpretingRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SimultaneousInterpretingRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t SimultaneousInterpretingRequest::GetSubServiceType() const
{
    return m_subServiceType;
}

void SimultaneousInterpretingRequest::SetSubServiceType(const uint64_t& _subServiceType)
{
    m_subServiceType = _subServiceType;
    m_subServiceTypeHasBeenSet = true;
}

bool SimultaneousInterpretingRequest::SubServiceTypeHasBeenSet() const
{
    return m_subServiceTypeHasBeenSet;
}

string SimultaneousInterpretingRequest::GetRecEngineModelType() const
{
    return m_recEngineModelType;
}

void SimultaneousInterpretingRequest::SetRecEngineModelType(const string& _recEngineModelType)
{
    m_recEngineModelType = _recEngineModelType;
    m_recEngineModelTypeHasBeenSet = true;
}

bool SimultaneousInterpretingRequest::RecEngineModelTypeHasBeenSet() const
{
    return m_recEngineModelTypeHasBeenSet;
}

string SimultaneousInterpretingRequest::GetData() const
{
    return m_data;
}

void SimultaneousInterpretingRequest::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool SimultaneousInterpretingRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

uint64_t SimultaneousInterpretingRequest::GetDataLen() const
{
    return m_dataLen;
}

void SimultaneousInterpretingRequest::SetDataLen(const uint64_t& _dataLen)
{
    m_dataLen = _dataLen;
    m_dataLenHasBeenSet = true;
}

bool SimultaneousInterpretingRequest::DataLenHasBeenSet() const
{
    return m_dataLenHasBeenSet;
}

string SimultaneousInterpretingRequest::GetVoiceId() const
{
    return m_voiceId;
}

void SimultaneousInterpretingRequest::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool SimultaneousInterpretingRequest::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

uint64_t SimultaneousInterpretingRequest::GetIsEnd() const
{
    return m_isEnd;
}

void SimultaneousInterpretingRequest::SetIsEnd(const uint64_t& _isEnd)
{
    m_isEnd = _isEnd;
    m_isEndHasBeenSet = true;
}

bool SimultaneousInterpretingRequest::IsEndHasBeenSet() const
{
    return m_isEndHasBeenSet;
}

uint64_t SimultaneousInterpretingRequest::GetVoiceFormat() const
{
    return m_voiceFormat;
}

void SimultaneousInterpretingRequest::SetVoiceFormat(const uint64_t& _voiceFormat)
{
    m_voiceFormat = _voiceFormat;
    m_voiceFormatHasBeenSet = true;
}

bool SimultaneousInterpretingRequest::VoiceFormatHasBeenSet() const
{
    return m_voiceFormatHasBeenSet;
}

uint64_t SimultaneousInterpretingRequest::GetOpenTranslate() const
{
    return m_openTranslate;
}

void SimultaneousInterpretingRequest::SetOpenTranslate(const uint64_t& _openTranslate)
{
    m_openTranslate = _openTranslate;
    m_openTranslateHasBeenSet = true;
}

bool SimultaneousInterpretingRequest::OpenTranslateHasBeenSet() const
{
    return m_openTranslateHasBeenSet;
}

string SimultaneousInterpretingRequest::GetSourceLanguage() const
{
    return m_sourceLanguage;
}

void SimultaneousInterpretingRequest::SetSourceLanguage(const string& _sourceLanguage)
{
    m_sourceLanguage = _sourceLanguage;
    m_sourceLanguageHasBeenSet = true;
}

bool SimultaneousInterpretingRequest::SourceLanguageHasBeenSet() const
{
    return m_sourceLanguageHasBeenSet;
}

string SimultaneousInterpretingRequest::GetTargetLanguage() const
{
    return m_targetLanguage;
}

void SimultaneousInterpretingRequest::SetTargetLanguage(const string& _targetLanguage)
{
    m_targetLanguage = _targetLanguage;
    m_targetLanguageHasBeenSet = true;
}

bool SimultaneousInterpretingRequest::TargetLanguageHasBeenSet() const
{
    return m_targetLanguageHasBeenSet;
}

uint64_t SimultaneousInterpretingRequest::GetSeq() const
{
    return m_seq;
}

void SimultaneousInterpretingRequest::SetSeq(const uint64_t& _seq)
{
    m_seq = _seq;
    m_seqHasBeenSet = true;
}

bool SimultaneousInterpretingRequest::SeqHasBeenSet() const
{
    return m_seqHasBeenSet;
}


