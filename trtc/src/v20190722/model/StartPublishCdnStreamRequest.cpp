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

#include <tencentcloud/trtc/v20190722/model/StartPublishCdnStreamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

StartPublishCdnStreamRequest::StartPublishCdnStreamRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_roomIdTypeHasBeenSet(false),
    m_agentParamsHasBeenSet(false),
    m_withTranscodingHasBeenSet(false),
    m_audioParamsHasBeenSet(false),
    m_videoParamsHasBeenSet(false),
    m_singleSubscribeParamsHasBeenSet(false),
    m_publishCdnParamsHasBeenSet(false),
    m_seiParamsHasBeenSet(false),
    m_feedBackRoomParamsHasBeenSet(false),
    m_recordParamsHasBeenSet(false)
{
}

string StartPublishCdnStreamRequest::ToJsonString() const
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

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomIdType, allocator);
    }

    if (m_agentParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentParams.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_recordParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_recordParams.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t StartPublishCdnStreamRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void StartPublishCdnStreamRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool StartPublishCdnStreamRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string StartPublishCdnStreamRequest::GetRoomId() const
{
    return m_roomId;
}

void StartPublishCdnStreamRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool StartPublishCdnStreamRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t StartPublishCdnStreamRequest::GetRoomIdType() const
{
    return m_roomIdType;
}

void StartPublishCdnStreamRequest::SetRoomIdType(const uint64_t& _roomIdType)
{
    m_roomIdType = _roomIdType;
    m_roomIdTypeHasBeenSet = true;
}

bool StartPublishCdnStreamRequest::RoomIdTypeHasBeenSet() const
{
    return m_roomIdTypeHasBeenSet;
}

AgentParams StartPublishCdnStreamRequest::GetAgentParams() const
{
    return m_agentParams;
}

void StartPublishCdnStreamRequest::SetAgentParams(const AgentParams& _agentParams)
{
    m_agentParams = _agentParams;
    m_agentParamsHasBeenSet = true;
}

bool StartPublishCdnStreamRequest::AgentParamsHasBeenSet() const
{
    return m_agentParamsHasBeenSet;
}

uint64_t StartPublishCdnStreamRequest::GetWithTranscoding() const
{
    return m_withTranscoding;
}

void StartPublishCdnStreamRequest::SetWithTranscoding(const uint64_t& _withTranscoding)
{
    m_withTranscoding = _withTranscoding;
    m_withTranscodingHasBeenSet = true;
}

bool StartPublishCdnStreamRequest::WithTranscodingHasBeenSet() const
{
    return m_withTranscodingHasBeenSet;
}

McuAudioParams StartPublishCdnStreamRequest::GetAudioParams() const
{
    return m_audioParams;
}

void StartPublishCdnStreamRequest::SetAudioParams(const McuAudioParams& _audioParams)
{
    m_audioParams = _audioParams;
    m_audioParamsHasBeenSet = true;
}

bool StartPublishCdnStreamRequest::AudioParamsHasBeenSet() const
{
    return m_audioParamsHasBeenSet;
}

McuVideoParams StartPublishCdnStreamRequest::GetVideoParams() const
{
    return m_videoParams;
}

void StartPublishCdnStreamRequest::SetVideoParams(const McuVideoParams& _videoParams)
{
    m_videoParams = _videoParams;
    m_videoParamsHasBeenSet = true;
}

bool StartPublishCdnStreamRequest::VideoParamsHasBeenSet() const
{
    return m_videoParamsHasBeenSet;
}

SingleSubscribeParams StartPublishCdnStreamRequest::GetSingleSubscribeParams() const
{
    return m_singleSubscribeParams;
}

void StartPublishCdnStreamRequest::SetSingleSubscribeParams(const SingleSubscribeParams& _singleSubscribeParams)
{
    m_singleSubscribeParams = _singleSubscribeParams;
    m_singleSubscribeParamsHasBeenSet = true;
}

bool StartPublishCdnStreamRequest::SingleSubscribeParamsHasBeenSet() const
{
    return m_singleSubscribeParamsHasBeenSet;
}

vector<McuPublishCdnParam> StartPublishCdnStreamRequest::GetPublishCdnParams() const
{
    return m_publishCdnParams;
}

void StartPublishCdnStreamRequest::SetPublishCdnParams(const vector<McuPublishCdnParam>& _publishCdnParams)
{
    m_publishCdnParams = _publishCdnParams;
    m_publishCdnParamsHasBeenSet = true;
}

bool StartPublishCdnStreamRequest::PublishCdnParamsHasBeenSet() const
{
    return m_publishCdnParamsHasBeenSet;
}

McuSeiParams StartPublishCdnStreamRequest::GetSeiParams() const
{
    return m_seiParams;
}

void StartPublishCdnStreamRequest::SetSeiParams(const McuSeiParams& _seiParams)
{
    m_seiParams = _seiParams;
    m_seiParamsHasBeenSet = true;
}

bool StartPublishCdnStreamRequest::SeiParamsHasBeenSet() const
{
    return m_seiParamsHasBeenSet;
}

vector<McuFeedBackRoomParams> StartPublishCdnStreamRequest::GetFeedBackRoomParams() const
{
    return m_feedBackRoomParams;
}

void StartPublishCdnStreamRequest::SetFeedBackRoomParams(const vector<McuFeedBackRoomParams>& _feedBackRoomParams)
{
    m_feedBackRoomParams = _feedBackRoomParams;
    m_feedBackRoomParamsHasBeenSet = true;
}

bool StartPublishCdnStreamRequest::FeedBackRoomParamsHasBeenSet() const
{
    return m_feedBackRoomParamsHasBeenSet;
}

McuRecordParams StartPublishCdnStreamRequest::GetRecordParams() const
{
    return m_recordParams;
}

void StartPublishCdnStreamRequest::SetRecordParams(const McuRecordParams& _recordParams)
{
    m_recordParams = _recordParams;
    m_recordParamsHasBeenSet = true;
}

bool StartPublishCdnStreamRequest::RecordParamsHasBeenSet() const
{
    return m_recordParamsHasBeenSet;
}


