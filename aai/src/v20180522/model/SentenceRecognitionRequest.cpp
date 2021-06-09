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

#include <tencentcloud/aai/v20180522/model/SentenceRecognitionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aai::V20180522::Model;
using namespace std;

SentenceRecognitionRequest::SentenceRecognitionRequest() :
    m_projectIdHasBeenSet(false),
    m_subServiceTypeHasBeenSet(false),
    m_engSerViceTypeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_voiceFormatHasBeenSet(false),
    m_usrAudioKeyHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_dataLenHasBeenSet(false)
{
}

string SentenceRecognitionRequest::ToJsonString() const
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

    if (m_engSerViceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngSerViceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engSerViceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_voiceFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_usrAudioKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsrAudioKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_usrAudioKey.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SentenceRecognitionRequest::GetProjectId() const
{
    return m_projectId;
}

void SentenceRecognitionRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SentenceRecognitionRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t SentenceRecognitionRequest::GetSubServiceType() const
{
    return m_subServiceType;
}

void SentenceRecognitionRequest::SetSubServiceType(const uint64_t& _subServiceType)
{
    m_subServiceType = _subServiceType;
    m_subServiceTypeHasBeenSet = true;
}

bool SentenceRecognitionRequest::SubServiceTypeHasBeenSet() const
{
    return m_subServiceTypeHasBeenSet;
}

string SentenceRecognitionRequest::GetEngSerViceType() const
{
    return m_engSerViceType;
}

void SentenceRecognitionRequest::SetEngSerViceType(const string& _engSerViceType)
{
    m_engSerViceType = _engSerViceType;
    m_engSerViceTypeHasBeenSet = true;
}

bool SentenceRecognitionRequest::EngSerViceTypeHasBeenSet() const
{
    return m_engSerViceTypeHasBeenSet;
}

uint64_t SentenceRecognitionRequest::GetSourceType() const
{
    return m_sourceType;
}

void SentenceRecognitionRequest::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool SentenceRecognitionRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string SentenceRecognitionRequest::GetVoiceFormat() const
{
    return m_voiceFormat;
}

void SentenceRecognitionRequest::SetVoiceFormat(const string& _voiceFormat)
{
    m_voiceFormat = _voiceFormat;
    m_voiceFormatHasBeenSet = true;
}

bool SentenceRecognitionRequest::VoiceFormatHasBeenSet() const
{
    return m_voiceFormatHasBeenSet;
}

string SentenceRecognitionRequest::GetUsrAudioKey() const
{
    return m_usrAudioKey;
}

void SentenceRecognitionRequest::SetUsrAudioKey(const string& _usrAudioKey)
{
    m_usrAudioKey = _usrAudioKey;
    m_usrAudioKeyHasBeenSet = true;
}

bool SentenceRecognitionRequest::UsrAudioKeyHasBeenSet() const
{
    return m_usrAudioKeyHasBeenSet;
}

string SentenceRecognitionRequest::GetUrl() const
{
    return m_url;
}

void SentenceRecognitionRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SentenceRecognitionRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string SentenceRecognitionRequest::GetData() const
{
    return m_data;
}

void SentenceRecognitionRequest::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool SentenceRecognitionRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

int64_t SentenceRecognitionRequest::GetDataLen() const
{
    return m_dataLen;
}

void SentenceRecognitionRequest::SetDataLen(const int64_t& _dataLen)
{
    m_dataLen = _dataLen;
    m_dataLenHasBeenSet = true;
}

bool SentenceRecognitionRequest::DataLenHasBeenSet() const
{
    return m_dataLenHasBeenSet;
}


