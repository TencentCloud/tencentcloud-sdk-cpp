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

#include <tencentcloud/trtc/v20190722/model/ModifyCloudTranscriptionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

ModifyCloudTranscriptionRequest::ModifyCloudTranscriptionRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_sequenceNumberHasBeenSet(false),
    m_subscribeUserInfoHasBeenSet(false),
    m_translationParamHasBeenSet(false),
    m_tTSParamHasBeenSet(false)
{
}

string ModifyCloudTranscriptionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_sequenceNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SequenceNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sequenceNumber, allocator);
    }

    if (m_subscribeUserInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeUserInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subscribeUserInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_translationParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslationParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_translationParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tTSParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tTSParam.begin(); itr != m_tTSParam.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyCloudTranscriptionRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ModifyCloudTranscriptionRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ModifyCloudTranscriptionRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string ModifyCloudTranscriptionRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyCloudTranscriptionRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyCloudTranscriptionRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t ModifyCloudTranscriptionRequest::GetSequenceNumber() const
{
    return m_sequenceNumber;
}

void ModifyCloudTranscriptionRequest::SetSequenceNumber(const uint64_t& _sequenceNumber)
{
    m_sequenceNumber = _sequenceNumber;
    m_sequenceNumberHasBeenSet = true;
}

bool ModifyCloudTranscriptionRequest::SequenceNumberHasBeenSet() const
{
    return m_sequenceNumberHasBeenSet;
}

TranscriptionSubscribeParam ModifyCloudTranscriptionRequest::GetSubscribeUserInfo() const
{
    return m_subscribeUserInfo;
}

void ModifyCloudTranscriptionRequest::SetSubscribeUserInfo(const TranscriptionSubscribeParam& _subscribeUserInfo)
{
    m_subscribeUserInfo = _subscribeUserInfo;
    m_subscribeUserInfoHasBeenSet = true;
}

bool ModifyCloudTranscriptionRequest::SubscribeUserInfoHasBeenSet() const
{
    return m_subscribeUserInfoHasBeenSet;
}

TranslationParam ModifyCloudTranscriptionRequest::GetTranslationParam() const
{
    return m_translationParam;
}

void ModifyCloudTranscriptionRequest::SetTranslationParam(const TranslationParam& _translationParam)
{
    m_translationParam = _translationParam;
    m_translationParamHasBeenSet = true;
}

bool ModifyCloudTranscriptionRequest::TranslationParamHasBeenSet() const
{
    return m_translationParamHasBeenSet;
}

vector<TTSParam> ModifyCloudTranscriptionRequest::GetTTSParam() const
{
    return m_tTSParam;
}

void ModifyCloudTranscriptionRequest::SetTTSParam(const vector<TTSParam>& _tTSParam)
{
    m_tTSParam = _tTSParam;
    m_tTSParamHasBeenSet = true;
}

bool ModifyCloudTranscriptionRequest::TTSParamHasBeenSet() const
{
    return m_tTSParamHasBeenSet;
}


