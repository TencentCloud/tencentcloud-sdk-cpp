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

#include <tencentcloud/trro/v20220325/model/StartPublishLiveStreamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

StartPublishLiveStreamRequest::StartPublishLiveStreamRequest() :
    m_withTranscodingHasBeenSet(false),
    m_maxIdleTimeHasBeenSet(false),
    m_videoParamsHasBeenSet(false),
    m_publishParamsHasBeenSet(false)
{
}

string StartPublishLiveStreamRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_withTranscodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithTranscoding";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withTranscoding, allocator);
    }

    if (m_maxIdleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxIdleTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxIdleTime, allocator);
    }

    if (m_videoParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_publishParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_publishParams.begin(); itr != m_publishParams.end(); ++itr, ++i)
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


int64_t StartPublishLiveStreamRequest::GetWithTranscoding() const
{
    return m_withTranscoding;
}

void StartPublishLiveStreamRequest::SetWithTranscoding(const int64_t& _withTranscoding)
{
    m_withTranscoding = _withTranscoding;
    m_withTranscodingHasBeenSet = true;
}

bool StartPublishLiveStreamRequest::WithTranscodingHasBeenSet() const
{
    return m_withTranscodingHasBeenSet;
}

int64_t StartPublishLiveStreamRequest::GetMaxIdleTime() const
{
    return m_maxIdleTime;
}

void StartPublishLiveStreamRequest::SetMaxIdleTime(const int64_t& _maxIdleTime)
{
    m_maxIdleTime = _maxIdleTime;
    m_maxIdleTimeHasBeenSet = true;
}

bool StartPublishLiveStreamRequest::MaxIdleTimeHasBeenSet() const
{
    return m_maxIdleTimeHasBeenSet;
}

VideoParams StartPublishLiveStreamRequest::GetVideoParams() const
{
    return m_videoParams;
}

void StartPublishLiveStreamRequest::SetVideoParams(const VideoParams& _videoParams)
{
    m_videoParams = _videoParams;
    m_videoParamsHasBeenSet = true;
}

bool StartPublishLiveStreamRequest::VideoParamsHasBeenSet() const
{
    return m_videoParamsHasBeenSet;
}

vector<PublishParams> StartPublishLiveStreamRequest::GetPublishParams() const
{
    return m_publishParams;
}

void StartPublishLiveStreamRequest::SetPublishParams(const vector<PublishParams>& _publishParams)
{
    m_publishParams = _publishParams;
    m_publishParamsHasBeenSet = true;
}

bool StartPublishLiveStreamRequest::PublishParamsHasBeenSet() const
{
    return m_publishParamsHasBeenSet;
}


