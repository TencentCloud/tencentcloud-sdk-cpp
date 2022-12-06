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

#include <tencentcloud/trtc/v20190722/model/UpdatePublishCdnStreamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

UpdatePublishCdnStreamRequest::UpdatePublishCdnStreamRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_sequenceNumberHasBeenSet(false),
    m_withTranscodingHasBeenSet(false),
    m_audioParamsHasBeenSet(false),
    m_videoParamsHasBeenSet(false),
    m_singleSubscribeParamsHasBeenSet(false),
    m_publishCdnParamsHasBeenSet(false),
    m_seiParamsHasBeenSet(false),
    m_feedBackRoomParamsHasBeenSet(false)
{
}

string UpdatePublishCdnStreamRequest::ToJsonString() const
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

    if (m_withTranscodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithTranscoding";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withTranscoding, allocator);
    }

    if (m_audioParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_videoParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_singleSubscribeParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingleSubscribeParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_singleSubscribeParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_publishCdnParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishCdnParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_publishCdnParams.begin(); itr != m_publishCdnParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_seiParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeiParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_seiParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_feedBackRoomParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeedBackRoomParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_feedBackRoomParams.begin(); itr != m_feedBackRoomParams.end(); ++itr, ++i)
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


uint64_t UpdatePublishCdnStreamRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void UpdatePublishCdnStreamRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool UpdatePublishCdnStreamRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string UpdatePublishCdnStreamRequest::GetTaskId() const
{
    return m_taskId;
}

void UpdatePublishCdnStreamRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool UpdatePublishCdnStreamRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t UpdatePublishCdnStreamRequest::GetSequenceNumber() const
{
    return m_sequenceNumber;
}

void UpdatePublishCdnStreamRequest::SetSequenceNumber(const uint64_t& _sequenceNumber)
{
    m_sequenceNumber = _sequenceNumber;
    m_sequenceNumberHasBeenSet = true;
}

bool UpdatePublishCdnStreamRequest::SequenceNumberHasBeenSet() const
{
    return m_sequenceNumberHasBeenSet;
}

uint64_t UpdatePublishCdnStreamRequest::GetWithTranscoding() const
{
    return m_withTranscoding;
}

void UpdatePublishCdnStreamRequest::SetWithTranscoding(const uint64_t& _withTranscoding)
{
    m_withTranscoding = _withTranscoding;
    m_withTranscodingHasBeenSet = true;
}

bool UpdatePublishCdnStreamRequest::WithTranscodingHasBeenSet() const
{
    return m_withTranscodingHasBeenSet;
}

McuAudioParams UpdatePublishCdnStreamRequest::GetAudioParams() const
{
    return m_audioParams;
}

void UpdatePublishCdnStreamRequest::SetAudioParams(const McuAudioParams& _audioParams)
{
    m_audioParams = _audioParams;
    m_audioParamsHasBeenSet = true;
}

bool UpdatePublishCdnStreamRequest::AudioParamsHasBeenSet() const
{
    return m_audioParamsHasBeenSet;
}

McuVideoParams UpdatePublishCdnStreamRequest::GetVideoParams() const
{
    return m_videoParams;
}

void UpdatePublishCdnStreamRequest::SetVideoParams(const McuVideoParams& _videoParams)
{
    m_videoParams = _videoParams;
    m_videoParamsHasBeenSet = true;
}

bool UpdatePublishCdnStreamRequest::VideoParamsHasBeenSet() const
{
    return m_videoParamsHasBeenSet;
}

SingleSubscribeParams UpdatePublishCdnStreamRequest::GetSingleSubscribeParams() const
{
    return m_singleSubscribeParams;
}

void UpdatePublishCdnStreamRequest::SetSingleSubscribeParams(const SingleSubscribeParams& _singleSubscribeParams)
{
    m_singleSubscribeParams = _singleSubscribeParams;
    m_singleSubscribeParamsHasBeenSet = true;
}

bool UpdatePublishCdnStreamRequest::SingleSubscribeParamsHasBeenSet() const
{
    return m_singleSubscribeParamsHasBeenSet;
}

vector<McuPublishCdnParam> UpdatePublishCdnStreamRequest::GetPublishCdnParams() const
{
    return m_publishCdnParams;
}

void UpdatePublishCdnStreamRequest::SetPublishCdnParams(const vector<McuPublishCdnParam>& _publishCdnParams)
{
    m_publishCdnParams = _publishCdnParams;
    m_publishCdnParamsHasBeenSet = true;
}

bool UpdatePublishCdnStreamRequest::PublishCdnParamsHasBeenSet() const
{
    return m_publishCdnParamsHasBeenSet;
}

McuSeiParams UpdatePublishCdnStreamRequest::GetSeiParams() const
{
    return m_seiParams;
}

void UpdatePublishCdnStreamRequest::SetSeiParams(const McuSeiParams& _seiParams)
{
    m_seiParams = _seiParams;
    m_seiParamsHasBeenSet = true;
}

bool UpdatePublishCdnStreamRequest::SeiParamsHasBeenSet() const
{
    return m_seiParamsHasBeenSet;
}

vector<McuFeedBackRoomParams> UpdatePublishCdnStreamRequest::GetFeedBackRoomParams() const
{
    return m_feedBackRoomParams;
}

void UpdatePublishCdnStreamRequest::SetFeedBackRoomParams(const vector<McuFeedBackRoomParams>& _feedBackRoomParams)
{
    m_feedBackRoomParams = _feedBackRoomParams;
    m_feedBackRoomParamsHasBeenSet = true;
}

bool UpdatePublishCdnStreamRequest::FeedBackRoomParamsHasBeenSet() const
{
    return m_feedBackRoomParamsHasBeenSet;
}


