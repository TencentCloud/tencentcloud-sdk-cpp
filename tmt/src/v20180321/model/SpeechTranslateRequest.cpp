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

#include <tencentcloud/tmt/v20180321/model/SpeechTranslateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tmt::V20180321::Model;
using namespace std;

SpeechTranslateRequest::SpeechTranslateRequest() :
    m_sessionUuidHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_audioFormatHasBeenSet(false),
    m_seqHasBeenSet(false),
    m_isEndHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_transTypeHasBeenSet(false)
{
}

string SpeechTranslateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sessionUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionUuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_audioFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audioFormat, allocator);
    }

    if (m_seqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seq";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_seq, allocator);
    }

    if (m_isEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnd, allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_transTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SpeechTranslateRequest::GetSessionUuid() const
{
    return m_sessionUuid;
}

void SpeechTranslateRequest::SetSessionUuid(const string& _sessionUuid)
{
    m_sessionUuid = _sessionUuid;
    m_sessionUuidHasBeenSet = true;
}

bool SpeechTranslateRequest::SessionUuidHasBeenSet() const
{
    return m_sessionUuidHasBeenSet;
}

string SpeechTranslateRequest::GetSource() const
{
    return m_source;
}

void SpeechTranslateRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool SpeechTranslateRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string SpeechTranslateRequest::GetTarget() const
{
    return m_target;
}

void SpeechTranslateRequest::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool SpeechTranslateRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

int64_t SpeechTranslateRequest::GetAudioFormat() const
{
    return m_audioFormat;
}

void SpeechTranslateRequest::SetAudioFormat(const int64_t& _audioFormat)
{
    m_audioFormat = _audioFormat;
    m_audioFormatHasBeenSet = true;
}

bool SpeechTranslateRequest::AudioFormatHasBeenSet() const
{
    return m_audioFormatHasBeenSet;
}

int64_t SpeechTranslateRequest::GetSeq() const
{
    return m_seq;
}

void SpeechTranslateRequest::SetSeq(const int64_t& _seq)
{
    m_seq = _seq;
    m_seqHasBeenSet = true;
}

bool SpeechTranslateRequest::SeqHasBeenSet() const
{
    return m_seqHasBeenSet;
}

int64_t SpeechTranslateRequest::GetIsEnd() const
{
    return m_isEnd;
}

void SpeechTranslateRequest::SetIsEnd(const int64_t& _isEnd)
{
    m_isEnd = _isEnd;
    m_isEndHasBeenSet = true;
}

bool SpeechTranslateRequest::IsEndHasBeenSet() const
{
    return m_isEndHasBeenSet;
}

string SpeechTranslateRequest::GetData() const
{
    return m_data;
}

void SpeechTranslateRequest::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool SpeechTranslateRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

int64_t SpeechTranslateRequest::GetProjectId() const
{
    return m_projectId;
}

void SpeechTranslateRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SpeechTranslateRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SpeechTranslateRequest::GetMode() const
{
    return m_mode;
}

void SpeechTranslateRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool SpeechTranslateRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t SpeechTranslateRequest::GetTransType() const
{
    return m_transType;
}

void SpeechTranslateRequest::SetTransType(const int64_t& _transType)
{
    m_transType = _transType;
    m_transTypeHasBeenSet = true;
}

bool SpeechTranslateRequest::TransTypeHasBeenSet() const
{
    return m_transTypeHasBeenSet;
}


