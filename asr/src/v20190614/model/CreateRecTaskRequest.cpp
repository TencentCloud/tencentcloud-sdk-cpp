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
    m_speakerDiarizationHasBeenSet(false),
    m_speakerNumberHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_dataLenHasBeenSet(false),
    m_convertNumModeHasBeenSet(false),
    m_filterDirtyHasBeenSet(false),
    m_hotwordIdHasBeenSet(false),
    m_customizationIdHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_filterPuncHasBeenSet(false),
    m_filterModalHasBeenSet(false)
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

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
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

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
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


