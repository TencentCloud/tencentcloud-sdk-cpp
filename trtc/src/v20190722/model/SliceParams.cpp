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

#include <tencentcloud/trtc/v20190722/model/SliceParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

SliceParams::SliceParams() :
    m_sliceTypeHasBeenSet(false),
    m_maxIdleTimeHasBeenSet(false),
    m_sliceAudioHasBeenSet(false),
    m_sliceVideoHasBeenSet(false),
    m_subscribeStreamUserIdsHasBeenSet(false),
    m_sliceCallbackUrlHasBeenSet(false)
{
}

CoreInternalOutcome SliceParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SliceType") && !value["SliceType"].IsNull())
    {
        if (!value["SliceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SliceParams.SliceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sliceType = value["SliceType"].GetUint64();
        m_sliceTypeHasBeenSet = true;
    }

    if (value.HasMember("MaxIdleTime") && !value["MaxIdleTime"].IsNull())
    {
        if (!value["MaxIdleTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SliceParams.MaxIdleTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxIdleTime = value["MaxIdleTime"].GetUint64();
        m_maxIdleTimeHasBeenSet = true;
    }

    if (value.HasMember("SliceAudio") && !value["SliceAudio"].IsNull())
    {
        if (!value["SliceAudio"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SliceParams.SliceAudio` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sliceAudio = value["SliceAudio"].GetUint64();
        m_sliceAudioHasBeenSet = true;
    }

    if (value.HasMember("SliceVideo") && !value["SliceVideo"].IsNull())
    {
        if (!value["SliceVideo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SliceParams.SliceVideo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sliceVideo = value["SliceVideo"].GetUint64();
        m_sliceVideoHasBeenSet = true;
    }

    if (value.HasMember("SubscribeStreamUserIds") && !value["SubscribeStreamUserIds"].IsNull())
    {
        if (!value["SubscribeStreamUserIds"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SliceParams.SubscribeStreamUserIds` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subscribeStreamUserIds.Deserialize(value["SubscribeStreamUserIds"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subscribeStreamUserIdsHasBeenSet = true;
    }

    if (value.HasMember("SliceCallbackUrl") && !value["SliceCallbackUrl"].IsNull())
    {
        if (!value["SliceCallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SliceParams.SliceCallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sliceCallbackUrl = string(value["SliceCallbackUrl"].GetString());
        m_sliceCallbackUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SliceParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sliceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SliceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sliceType, allocator);
    }

    if (m_maxIdleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxIdleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxIdleTime, allocator);
    }

    if (m_sliceAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SliceAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sliceAudio, allocator);
    }

    if (m_sliceVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SliceVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sliceVideo, allocator);
    }

    if (m_subscribeStreamUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeStreamUserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subscribeStreamUserIds.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sliceCallbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SliceCallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sliceCallbackUrl.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SliceParams::GetSliceType() const
{
    return m_sliceType;
}

void SliceParams::SetSliceType(const uint64_t& _sliceType)
{
    m_sliceType = _sliceType;
    m_sliceTypeHasBeenSet = true;
}

bool SliceParams::SliceTypeHasBeenSet() const
{
    return m_sliceTypeHasBeenSet;
}

uint64_t SliceParams::GetMaxIdleTime() const
{
    return m_maxIdleTime;
}

void SliceParams::SetMaxIdleTime(const uint64_t& _maxIdleTime)
{
    m_maxIdleTime = _maxIdleTime;
    m_maxIdleTimeHasBeenSet = true;
}

bool SliceParams::MaxIdleTimeHasBeenSet() const
{
    return m_maxIdleTimeHasBeenSet;
}

uint64_t SliceParams::GetSliceAudio() const
{
    return m_sliceAudio;
}

void SliceParams::SetSliceAudio(const uint64_t& _sliceAudio)
{
    m_sliceAudio = _sliceAudio;
    m_sliceAudioHasBeenSet = true;
}

bool SliceParams::SliceAudioHasBeenSet() const
{
    return m_sliceAudioHasBeenSet;
}

uint64_t SliceParams::GetSliceVideo() const
{
    return m_sliceVideo;
}

void SliceParams::SetSliceVideo(const uint64_t& _sliceVideo)
{
    m_sliceVideo = _sliceVideo;
    m_sliceVideoHasBeenSet = true;
}

bool SliceParams::SliceVideoHasBeenSet() const
{
    return m_sliceVideoHasBeenSet;
}

SubscribeStreamUserIds SliceParams::GetSubscribeStreamUserIds() const
{
    return m_subscribeStreamUserIds;
}

void SliceParams::SetSubscribeStreamUserIds(const SubscribeStreamUserIds& _subscribeStreamUserIds)
{
    m_subscribeStreamUserIds = _subscribeStreamUserIds;
    m_subscribeStreamUserIdsHasBeenSet = true;
}

bool SliceParams::SubscribeStreamUserIdsHasBeenSet() const
{
    return m_subscribeStreamUserIdsHasBeenSet;
}

string SliceParams::GetSliceCallbackUrl() const
{
    return m_sliceCallbackUrl;
}

void SliceParams::SetSliceCallbackUrl(const string& _sliceCallbackUrl)
{
    m_sliceCallbackUrl = _sliceCallbackUrl;
    m_sliceCallbackUrlHasBeenSet = true;
}

bool SliceParams::SliceCallbackUrlHasBeenSet() const
{
    return m_sliceCallbackUrlHasBeenSet;
}

