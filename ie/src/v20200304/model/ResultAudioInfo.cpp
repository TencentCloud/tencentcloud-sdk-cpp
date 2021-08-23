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

#include <tencentcloud/ie/v20200304/model/ResultAudioInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

ResultAudioInfo::ResultAudioInfo() :
    m_streamIdHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome ResultAudioInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamId") && !value["StreamId"].IsNull())
    {
        if (!value["StreamId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResultAudioInfo.StreamId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_streamId = value["StreamId"].GetInt64();
        m_streamIdHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResultAudioInfo.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResultAudioInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamId, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

}


int64_t ResultAudioInfo::GetStreamId() const
{
    return m_streamId;
}

void ResultAudioInfo::SetStreamId(const int64_t& _streamId)
{
    m_streamId = _streamId;
    m_streamIdHasBeenSet = true;
}

bool ResultAudioInfo::StreamIdHasBeenSet() const
{
    return m_streamIdHasBeenSet;
}

uint64_t ResultAudioInfo::GetDuration() const
{
    return m_duration;
}

void ResultAudioInfo::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool ResultAudioInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

