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

#include <tencentcloud/tsi/v20210325/model/TongChuanSyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsi::V20210325::Model;
using namespace std;

TongChuanSyncRequest::TongChuanSyncRequest() :
    m_sessionUuidHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_audioFormatHasBeenSet(false),
    m_seqHasBeenSet(false),
    m_utcHasBeenSet(false),
    m_isEndHasBeenSet(false),
    m_translateTimeHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_tTSHasBeenSet(false)
{
}

string TongChuanSyncRequest::ToJsonString() const
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

    if (m_utcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Utc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_utc, allocator);
    }

    if (m_isEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnd, allocator);
    }

    if (m_translateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_translateTime, allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }

    if (m_tTSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tTS.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TongChuanSyncRequest::GetSessionUuid() const
{
    return m_sessionUuid;
}

void TongChuanSyncRequest::SetSessionUuid(const string& _sessionUuid)
{
    m_sessionUuid = _sessionUuid;
    m_sessionUuidHasBeenSet = true;
}

bool TongChuanSyncRequest::SessionUuidHasBeenSet() const
{
    return m_sessionUuidHasBeenSet;
}

string TongChuanSyncRequest::GetSource() const
{
    return m_source;
}

void TongChuanSyncRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool TongChuanSyncRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string TongChuanSyncRequest::GetTarget() const
{
    return m_target;
}

void TongChuanSyncRequest::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool TongChuanSyncRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

uint64_t TongChuanSyncRequest::GetAudioFormat() const
{
    return m_audioFormat;
}

void TongChuanSyncRequest::SetAudioFormat(const uint64_t& _audioFormat)
{
    m_audioFormat = _audioFormat;
    m_audioFormatHasBeenSet = true;
}

bool TongChuanSyncRequest::AudioFormatHasBeenSet() const
{
    return m_audioFormatHasBeenSet;
}

uint64_t TongChuanSyncRequest::GetSeq() const
{
    return m_seq;
}

void TongChuanSyncRequest::SetSeq(const uint64_t& _seq)
{
    m_seq = _seq;
    m_seqHasBeenSet = true;
}

bool TongChuanSyncRequest::SeqHasBeenSet() const
{
    return m_seqHasBeenSet;
}

uint64_t TongChuanSyncRequest::GetUtc() const
{
    return m_utc;
}

void TongChuanSyncRequest::SetUtc(const uint64_t& _utc)
{
    m_utc = _utc;
    m_utcHasBeenSet = true;
}

bool TongChuanSyncRequest::UtcHasBeenSet() const
{
    return m_utcHasBeenSet;
}

uint64_t TongChuanSyncRequest::GetIsEnd() const
{
    return m_isEnd;
}

void TongChuanSyncRequest::SetIsEnd(const uint64_t& _isEnd)
{
    m_isEnd = _isEnd;
    m_isEndHasBeenSet = true;
}

bool TongChuanSyncRequest::IsEndHasBeenSet() const
{
    return m_isEndHasBeenSet;
}

uint64_t TongChuanSyncRequest::GetTranslateTime() const
{
    return m_translateTime;
}

void TongChuanSyncRequest::SetTranslateTime(const uint64_t& _translateTime)
{
    m_translateTime = _translateTime;
    m_translateTimeHasBeenSet = true;
}

bool TongChuanSyncRequest::TranslateTimeHasBeenSet() const
{
    return m_translateTimeHasBeenSet;
}

string TongChuanSyncRequest::GetData() const
{
    return m_data;
}

void TongChuanSyncRequest::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool TongChuanSyncRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

TTS TongChuanSyncRequest::GetTTS() const
{
    return m_tTS;
}

void TongChuanSyncRequest::SetTTS(const TTS& _tTS)
{
    m_tTS = _tTS;
    m_tTSHasBeenSet = true;
}

bool TongChuanSyncRequest::TTSHasBeenSet() const
{
    return m_tTSHasBeenSet;
}


