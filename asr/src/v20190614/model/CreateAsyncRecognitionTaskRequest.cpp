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

#include <tencentcloud/asr/v20190614/model/CreateAsyncRecognitionTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

CreateAsyncRecognitionTaskRequest::CreateAsyncRecognitionTaskRequest() :
    m_engineTypeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_signTokenHasBeenSet(false),
    m_filterDirtyHasBeenSet(false),
    m_filterModalHasBeenSet(false),
    m_filterPuncHasBeenSet(false),
    m_convertNumModeHasBeenSet(false),
    m_wordInfoHasBeenSet(false),
    m_hotwordIdHasBeenSet(false),
    m_audioDataHasBeenSet(false)
{
}

string CreateAsyncRecognitionTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
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

    if (m_signTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signToken.c_str(), allocator).Move(), allocator);
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

    if (m_wordInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_wordInfo, allocator);
    }

    if (m_hotwordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotwordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hotwordId.c_str(), allocator).Move(), allocator);
    }

    if (m_audioDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audioData, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAsyncRecognitionTaskRequest::GetEngineType() const
{
    return m_engineType;
}

void CreateAsyncRecognitionTaskRequest::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool CreateAsyncRecognitionTaskRequest::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

string CreateAsyncRecognitionTaskRequest::GetUrl() const
{
    return m_url;
}

void CreateAsyncRecognitionTaskRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreateAsyncRecognitionTaskRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string CreateAsyncRecognitionTaskRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateAsyncRecognitionTaskRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateAsyncRecognitionTaskRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string CreateAsyncRecognitionTaskRequest::GetSignToken() const
{
    return m_signToken;
}

void CreateAsyncRecognitionTaskRequest::SetSignToken(const string& _signToken)
{
    m_signToken = _signToken;
    m_signTokenHasBeenSet = true;
}

bool CreateAsyncRecognitionTaskRequest::SignTokenHasBeenSet() const
{
    return m_signTokenHasBeenSet;
}

int64_t CreateAsyncRecognitionTaskRequest::GetFilterDirty() const
{
    return m_filterDirty;
}

void CreateAsyncRecognitionTaskRequest::SetFilterDirty(const int64_t& _filterDirty)
{
    m_filterDirty = _filterDirty;
    m_filterDirtyHasBeenSet = true;
}

bool CreateAsyncRecognitionTaskRequest::FilterDirtyHasBeenSet() const
{
    return m_filterDirtyHasBeenSet;
}

int64_t CreateAsyncRecognitionTaskRequest::GetFilterModal() const
{
    return m_filterModal;
}

void CreateAsyncRecognitionTaskRequest::SetFilterModal(const int64_t& _filterModal)
{
    m_filterModal = _filterModal;
    m_filterModalHasBeenSet = true;
}

bool CreateAsyncRecognitionTaskRequest::FilterModalHasBeenSet() const
{
    return m_filterModalHasBeenSet;
}

int64_t CreateAsyncRecognitionTaskRequest::GetFilterPunc() const
{
    return m_filterPunc;
}

void CreateAsyncRecognitionTaskRequest::SetFilterPunc(const int64_t& _filterPunc)
{
    m_filterPunc = _filterPunc;
    m_filterPuncHasBeenSet = true;
}

bool CreateAsyncRecognitionTaskRequest::FilterPuncHasBeenSet() const
{
    return m_filterPuncHasBeenSet;
}

int64_t CreateAsyncRecognitionTaskRequest::GetConvertNumMode() const
{
    return m_convertNumMode;
}

void CreateAsyncRecognitionTaskRequest::SetConvertNumMode(const int64_t& _convertNumMode)
{
    m_convertNumMode = _convertNumMode;
    m_convertNumModeHasBeenSet = true;
}

bool CreateAsyncRecognitionTaskRequest::ConvertNumModeHasBeenSet() const
{
    return m_convertNumModeHasBeenSet;
}

int64_t CreateAsyncRecognitionTaskRequest::GetWordInfo() const
{
    return m_wordInfo;
}

void CreateAsyncRecognitionTaskRequest::SetWordInfo(const int64_t& _wordInfo)
{
    m_wordInfo = _wordInfo;
    m_wordInfoHasBeenSet = true;
}

bool CreateAsyncRecognitionTaskRequest::WordInfoHasBeenSet() const
{
    return m_wordInfoHasBeenSet;
}

string CreateAsyncRecognitionTaskRequest::GetHotwordId() const
{
    return m_hotwordId;
}

void CreateAsyncRecognitionTaskRequest::SetHotwordId(const string& _hotwordId)
{
    m_hotwordId = _hotwordId;
    m_hotwordIdHasBeenSet = true;
}

bool CreateAsyncRecognitionTaskRequest::HotwordIdHasBeenSet() const
{
    return m_hotwordIdHasBeenSet;
}

bool CreateAsyncRecognitionTaskRequest::GetAudioData() const
{
    return m_audioData;
}

void CreateAsyncRecognitionTaskRequest::SetAudioData(const bool& _audioData)
{
    m_audioData = _audioData;
    m_audioDataHasBeenSet = true;
}

bool CreateAsyncRecognitionTaskRequest::AudioDataHasBeenSet() const
{
    return m_audioDataHasBeenSet;
}


