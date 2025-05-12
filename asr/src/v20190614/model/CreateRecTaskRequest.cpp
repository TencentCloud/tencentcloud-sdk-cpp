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

#include <tencentcloud/asr/v20190614/model/CreateRecTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

CreateRecTaskRequest::CreateRecTaskRequest() :
    m_engineModelTypeHasBeenSet(false),
    m_channelNumHasBeenSet(false),
    m_resTextFormatHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_dataLenHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_speakerDiarizationHasBeenSet(false),
    m_speakerNumberHasBeenSet(false),
    m_hotwordIdHasBeenSet(false),
    m_reinforceHotwordHasBeenSet(false),
    m_customizationIdHasBeenSet(false),
    m_emotionRecognitionHasBeenSet(false),
    m_emotionalEnergyHasBeenSet(false),
    m_convertNumModeHasBeenSet(false),
    m_filterDirtyHasBeenSet(false),
    m_filterPuncHasBeenSet(false),
    m_filterModalHasBeenSet(false),
    m_sentenceMaxLengthHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_hotwordListHasBeenSet(false),
    m_keyWordLibIdListHasBeenSet(false),
    m_replaceTextIdHasBeenSet(false)
{
}

string CreateRecTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_engineModelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineModelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineModelType.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelNum, allocator);
    }

    if (m_resTextFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResTextFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resTextFormat, allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceType, allocator);
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

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_speakerDiarizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeakerDiarization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_speakerDiarization, allocator);
    }

    if (m_speakerNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeakerNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_speakerNumber, allocator);
    }

    if (m_hotwordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotwordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hotwordId.c_str(), allocator).Move(), allocator);
    }

    if (m_reinforceHotwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReinforceHotword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reinforceHotword, allocator);
    }

    if (m_customizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomizationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_emotionRecognitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmotionRecognition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_emotionRecognition, allocator);
    }

    if (m_emotionalEnergyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmotionalEnergy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_emotionalEnergy, allocator);
    }

    if (m_convertNumModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConvertNumMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_convertNumMode, allocator);
    }

    if (m_filterDirtyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterDirty";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterDirty, allocator);
    }

    if (m_filterPuncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterPunc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterPunc, allocator);
    }

    if (m_filterModalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterModal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterModal, allocator);
    }

    if (m_sentenceMaxLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentenceMaxLength";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sentenceMaxLength, allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_hotwordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotwordList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hotwordList.c_str(), allocator).Move(), allocator);
    }

    if (m_keyWordLibIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWordLibIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keyWordLibIdList.begin(); itr != m_keyWordLibIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_replaceTextIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplaceTextId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_replaceTextId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRecTaskRequest::GetEngineModelType() const
{
    return m_engineModelType;
}

void CreateRecTaskRequest::SetEngineModelType(const string& _engineModelType)
{
    m_engineModelType = _engineModelType;
    m_engineModelTypeHasBeenSet = true;
}

bool CreateRecTaskRequest::EngineModelTypeHasBeenSet() const
{
    return m_engineModelTypeHasBeenSet;
}

uint64_t CreateRecTaskRequest::GetChannelNum() const
{
    return m_channelNum;
}

void CreateRecTaskRequest::SetChannelNum(const uint64_t& _channelNum)
{
    m_channelNum = _channelNum;
    m_channelNumHasBeenSet = true;
}

bool CreateRecTaskRequest::ChannelNumHasBeenSet() const
{
    return m_channelNumHasBeenSet;
}

uint64_t CreateRecTaskRequest::GetResTextFormat() const
{
    return m_resTextFormat;
}

void CreateRecTaskRequest::SetResTextFormat(const uint64_t& _resTextFormat)
{
    m_resTextFormat = _resTextFormat;
    m_resTextFormatHasBeenSet = true;
}

bool CreateRecTaskRequest::ResTextFormatHasBeenSet() const
{
    return m_resTextFormatHasBeenSet;
}

uint64_t CreateRecTaskRequest::GetSourceType() const
{
    return m_sourceType;
}

void CreateRecTaskRequest::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateRecTaskRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string CreateRecTaskRequest::GetData() const
{
    return m_data;
}

void CreateRecTaskRequest::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool CreateRecTaskRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

uint64_t CreateRecTaskRequest::GetDataLen() const
{
    return m_dataLen;
}

void CreateRecTaskRequest::SetDataLen(const uint64_t& _dataLen)
{
    m_dataLen = _dataLen;
    m_dataLenHasBeenSet = true;
}

bool CreateRecTaskRequest::DataLenHasBeenSet() const
{
    return m_dataLenHasBeenSet;
}

string CreateRecTaskRequest::GetUrl() const
{
    return m_url;
}

void CreateRecTaskRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreateRecTaskRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string CreateRecTaskRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateRecTaskRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateRecTaskRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

int64_t CreateRecTaskRequest::GetSpeakerDiarization() const
{
    return m_speakerDiarization;
}

void CreateRecTaskRequest::SetSpeakerDiarization(const int64_t& _speakerDiarization)
{
    m_speakerDiarization = _speakerDiarization;
    m_speakerDiarizationHasBeenSet = true;
}

bool CreateRecTaskRequest::SpeakerDiarizationHasBeenSet() const
{
    return m_speakerDiarizationHasBeenSet;
}

int64_t CreateRecTaskRequest::GetSpeakerNumber() const
{
    return m_speakerNumber;
}

void CreateRecTaskRequest::SetSpeakerNumber(const int64_t& _speakerNumber)
{
    m_speakerNumber = _speakerNumber;
    m_speakerNumberHasBeenSet = true;
}

bool CreateRecTaskRequest::SpeakerNumberHasBeenSet() const
{
    return m_speakerNumberHasBeenSet;
}

string CreateRecTaskRequest::GetHotwordId() const
{
    return m_hotwordId;
}

void CreateRecTaskRequest::SetHotwordId(const string& _hotwordId)
{
    m_hotwordId = _hotwordId;
    m_hotwordIdHasBeenSet = true;
}

bool CreateRecTaskRequest::HotwordIdHasBeenSet() const
{
    return m_hotwordIdHasBeenSet;
}

int64_t CreateRecTaskRequest::GetReinforceHotword() const
{
    return m_reinforceHotword;
}

void CreateRecTaskRequest::SetReinforceHotword(const int64_t& _reinforceHotword)
{
    m_reinforceHotword = _reinforceHotword;
    m_reinforceHotwordHasBeenSet = true;
}

bool CreateRecTaskRequest::ReinforceHotwordHasBeenSet() const
{
    return m_reinforceHotwordHasBeenSet;
}

string CreateRecTaskRequest::GetCustomizationId() const
{
    return m_customizationId;
}

void CreateRecTaskRequest::SetCustomizationId(const string& _customizationId)
{
    m_customizationId = _customizationId;
    m_customizationIdHasBeenSet = true;
}

bool CreateRecTaskRequest::CustomizationIdHasBeenSet() const
{
    return m_customizationIdHasBeenSet;
}

int64_t CreateRecTaskRequest::GetEmotionRecognition() const
{
    return m_emotionRecognition;
}

void CreateRecTaskRequest::SetEmotionRecognition(const int64_t& _emotionRecognition)
{
    m_emotionRecognition = _emotionRecognition;
    m_emotionRecognitionHasBeenSet = true;
}

bool CreateRecTaskRequest::EmotionRecognitionHasBeenSet() const
{
    return m_emotionRecognitionHasBeenSet;
}

int64_t CreateRecTaskRequest::GetEmotionalEnergy() const
{
    return m_emotionalEnergy;
}

void CreateRecTaskRequest::SetEmotionalEnergy(const int64_t& _emotionalEnergy)
{
    m_emotionalEnergy = _emotionalEnergy;
    m_emotionalEnergyHasBeenSet = true;
}

bool CreateRecTaskRequest::EmotionalEnergyHasBeenSet() const
{
    return m_emotionalEnergyHasBeenSet;
}

int64_t CreateRecTaskRequest::GetConvertNumMode() const
{
    return m_convertNumMode;
}

void CreateRecTaskRequest::SetConvertNumMode(const int64_t& _convertNumMode)
{
    m_convertNumMode = _convertNumMode;
    m_convertNumModeHasBeenSet = true;
}

bool CreateRecTaskRequest::ConvertNumModeHasBeenSet() const
{
    return m_convertNumModeHasBeenSet;
}

int64_t CreateRecTaskRequest::GetFilterDirty() const
{
    return m_filterDirty;
}

void CreateRecTaskRequest::SetFilterDirty(const int64_t& _filterDirty)
{
    m_filterDirty = _filterDirty;
    m_filterDirtyHasBeenSet = true;
}

bool CreateRecTaskRequest::FilterDirtyHasBeenSet() const
{
    return m_filterDirtyHasBeenSet;
}

int64_t CreateRecTaskRequest::GetFilterPunc() const
{
    return m_filterPunc;
}

void CreateRecTaskRequest::SetFilterPunc(const int64_t& _filterPunc)
{
    m_filterPunc = _filterPunc;
    m_filterPuncHasBeenSet = true;
}

bool CreateRecTaskRequest::FilterPuncHasBeenSet() const
{
    return m_filterPuncHasBeenSet;
}

int64_t CreateRecTaskRequest::GetFilterModal() const
{
    return m_filterModal;
}

void CreateRecTaskRequest::SetFilterModal(const int64_t& _filterModal)
{
    m_filterModal = _filterModal;
    m_filterModalHasBeenSet = true;
}

bool CreateRecTaskRequest::FilterModalHasBeenSet() const
{
    return m_filterModalHasBeenSet;
}

int64_t CreateRecTaskRequest::GetSentenceMaxLength() const
{
    return m_sentenceMaxLength;
}

void CreateRecTaskRequest::SetSentenceMaxLength(const int64_t& _sentenceMaxLength)
{
    m_sentenceMaxLength = _sentenceMaxLength;
    m_sentenceMaxLengthHasBeenSet = true;
}

bool CreateRecTaskRequest::SentenceMaxLengthHasBeenSet() const
{
    return m_sentenceMaxLengthHasBeenSet;
}

string CreateRecTaskRequest::GetExtra() const
{
    return m_extra;
}

void CreateRecTaskRequest::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool CreateRecTaskRequest::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

string CreateRecTaskRequest::GetHotwordList() const
{
    return m_hotwordList;
}

void CreateRecTaskRequest::SetHotwordList(const string& _hotwordList)
{
    m_hotwordList = _hotwordList;
    m_hotwordListHasBeenSet = true;
}

bool CreateRecTaskRequest::HotwordListHasBeenSet() const
{
    return m_hotwordListHasBeenSet;
}

vector<string> CreateRecTaskRequest::GetKeyWordLibIdList() const
{
    return m_keyWordLibIdList;
}

void CreateRecTaskRequest::SetKeyWordLibIdList(const vector<string>& _keyWordLibIdList)
{
    m_keyWordLibIdList = _keyWordLibIdList;
    m_keyWordLibIdListHasBeenSet = true;
}

bool CreateRecTaskRequest::KeyWordLibIdListHasBeenSet() const
{
    return m_keyWordLibIdListHasBeenSet;
}

string CreateRecTaskRequest::GetReplaceTextId() const
{
    return m_replaceTextId;
}

void CreateRecTaskRequest::SetReplaceTextId(const string& _replaceTextId)
{
    m_replaceTextId = _replaceTextId;
    m_replaceTextIdHasBeenSet = true;
}

bool CreateRecTaskRequest::ReplaceTextIdHasBeenSet() const
{
    return m_replaceTextIdHasBeenSet;
}


