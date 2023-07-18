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

#include <tencentcloud/asr/v20190614/model/SentenceRecognitionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

SentenceRecognitionRequest::SentenceRecognitionRequest() :
    m_engSerViceTypeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_voiceFormatHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_subServiceTypeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_usrAudioKeyHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_dataLenHasBeenSet(false),
    m_wordInfoHasBeenSet(false),
    m_filterDirtyHasBeenSet(false),
    m_filterModalHasBeenSet(false),
    m_filterPuncHasBeenSet(false),
    m_convertNumModeHasBeenSet(false),
    m_hotwordIdHasBeenSet(false),
    m_customizationIdHasBeenSet(false),
    m_reinforceHotwordHasBeenSet(false),
    m_hotwordListHasBeenSet(false),
    m_inputSampleRateHasBeenSet(false)
{
}

string SentenceRecognitionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_usrAudioKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsrAudioKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_usrAudioKey.c_str(), allocator).Move(), allocator);
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

    if (m_wordInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_wordInfo, allocator);
    }

    if (m_filterDirtyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterDirty";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterDirty, allocator);
    }

    if (m_filterModalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterModal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterModal, allocator);
    }

    if (m_filterPuncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterPunc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterPunc, allocator);
    }

    if (m_convertNumModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConvertNumMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_convertNumMode, allocator);
    }

    if (m_hotwordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotwordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hotwordId.c_str(), allocator).Move(), allocator);
    }

    if (m_customizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomizationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_reinforceHotwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReinforceHotword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reinforceHotword, allocator);
    }

    if (m_hotwordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotwordList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hotwordList.c_str(), allocator).Move(), allocator);
    }

    if (m_inputSampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputSampleRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_inputSampleRate, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
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

int64_t SentenceRecognitionRequest::GetWordInfo() const
{
    return m_wordInfo;
}

void SentenceRecognitionRequest::SetWordInfo(const int64_t& _wordInfo)
{
    m_wordInfo = _wordInfo;
    m_wordInfoHasBeenSet = true;
}

bool SentenceRecognitionRequest::WordInfoHasBeenSet() const
{
    return m_wordInfoHasBeenSet;
}

int64_t SentenceRecognitionRequest::GetFilterDirty() const
{
    return m_filterDirty;
}

void SentenceRecognitionRequest::SetFilterDirty(const int64_t& _filterDirty)
{
    m_filterDirty = _filterDirty;
    m_filterDirtyHasBeenSet = true;
}

bool SentenceRecognitionRequest::FilterDirtyHasBeenSet() const
{
    return m_filterDirtyHasBeenSet;
}

int64_t SentenceRecognitionRequest::GetFilterModal() const
{
    return m_filterModal;
}

void SentenceRecognitionRequest::SetFilterModal(const int64_t& _filterModal)
{
    m_filterModal = _filterModal;
    m_filterModalHasBeenSet = true;
}

bool SentenceRecognitionRequest::FilterModalHasBeenSet() const
{
    return m_filterModalHasBeenSet;
}

int64_t SentenceRecognitionRequest::GetFilterPunc() const
{
    return m_filterPunc;
}

void SentenceRecognitionRequest::SetFilterPunc(const int64_t& _filterPunc)
{
    m_filterPunc = _filterPunc;
    m_filterPuncHasBeenSet = true;
}

bool SentenceRecognitionRequest::FilterPuncHasBeenSet() const
{
    return m_filterPuncHasBeenSet;
}

int64_t SentenceRecognitionRequest::GetConvertNumMode() const
{
    return m_convertNumMode;
}

void SentenceRecognitionRequest::SetConvertNumMode(const int64_t& _convertNumMode)
{
    m_convertNumMode = _convertNumMode;
    m_convertNumModeHasBeenSet = true;
}

bool SentenceRecognitionRequest::ConvertNumModeHasBeenSet() const
{
    return m_convertNumModeHasBeenSet;
}

string SentenceRecognitionRequest::GetHotwordId() const
{
    return m_hotwordId;
}

void SentenceRecognitionRequest::SetHotwordId(const string& _hotwordId)
{
    m_hotwordId = _hotwordId;
    m_hotwordIdHasBeenSet = true;
}

bool SentenceRecognitionRequest::HotwordIdHasBeenSet() const
{
    return m_hotwordIdHasBeenSet;
}

string SentenceRecognitionRequest::GetCustomizationId() const
{
    return m_customizationId;
}

void SentenceRecognitionRequest::SetCustomizationId(const string& _customizationId)
{
    m_customizationId = _customizationId;
    m_customizationIdHasBeenSet = true;
}

bool SentenceRecognitionRequest::CustomizationIdHasBeenSet() const
{
    return m_customizationIdHasBeenSet;
}

int64_t SentenceRecognitionRequest::GetReinforceHotword() const
{
    return m_reinforceHotword;
}

void SentenceRecognitionRequest::SetReinforceHotword(const int64_t& _reinforceHotword)
{
    m_reinforceHotword = _reinforceHotword;
    m_reinforceHotwordHasBeenSet = true;
}

bool SentenceRecognitionRequest::ReinforceHotwordHasBeenSet() const
{
    return m_reinforceHotwordHasBeenSet;
}

string SentenceRecognitionRequest::GetHotwordList() const
{
    return m_hotwordList;
}

void SentenceRecognitionRequest::SetHotwordList(const string& _hotwordList)
{
    m_hotwordList = _hotwordList;
    m_hotwordListHasBeenSet = true;
}

bool SentenceRecognitionRequest::HotwordListHasBeenSet() const
{
    return m_hotwordListHasBeenSet;
}

int64_t SentenceRecognitionRequest::GetInputSampleRate() const
{
    return m_inputSampleRate;
}

void SentenceRecognitionRequest::SetInputSampleRate(const int64_t& _inputSampleRate)
{
    m_inputSampleRate = _inputSampleRate;
    m_inputSampleRateHasBeenSet = true;
}

bool SentenceRecognitionRequest::InputSampleRateHasBeenSet() const
{
    return m_inputSampleRateHasBeenSet;
}


