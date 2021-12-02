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

#include <tencentcloud/cme/v20191029/model/VideoExportExtensionArgs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

VideoExportExtensionArgs::VideoExportExtensionArgs() :
    m_containerHasBeenSet(false),
    m_shortEdgeHasBeenSet(false),
    m_videoBitrateHasBeenSet(false),
    m_frameRateHasBeenSet(false),
    m_removeVideoHasBeenSet(false),
    m_removeAudioHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome VideoExportExtensionArgs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoExportExtensionArgs.Container` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_container = string(value["Container"].GetString());
        m_containerHasBeenSet = true;
    }

    if (value.HasMember("ShortEdge") && !value["ShortEdge"].IsNull())
    {
        if (!value["ShortEdge"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoExportExtensionArgs.ShortEdge` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shortEdge = value["ShortEdge"].GetUint64();
        m_shortEdgeHasBeenSet = true;
    }

    if (value.HasMember("VideoBitrate") && !value["VideoBitrate"].IsNull())
    {
        if (!value["VideoBitrate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoExportExtensionArgs.VideoBitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoBitrate = value["VideoBitrate"].GetUint64();
        m_videoBitrateHasBeenSet = true;
    }

    if (value.HasMember("FrameRate") && !value["FrameRate"].IsNull())
    {
        if (!value["FrameRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VideoExportExtensionArgs.FrameRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_frameRate = value["FrameRate"].GetDouble();
        m_frameRateHasBeenSet = true;
    }

    if (value.HasMember("RemoveVideo") && !value["RemoveVideo"].IsNull())
    {
        if (!value["RemoveVideo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoExportExtensionArgs.RemoveVideo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removeVideo = value["RemoveVideo"].GetInt64();
        m_removeVideoHasBeenSet = true;
    }

    if (value.HasMember("RemoveAudio") && !value["RemoveAudio"].IsNull())
    {
        if (!value["RemoveAudio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoExportExtensionArgs.RemoveAudio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removeAudio = value["RemoveAudio"].GetInt64();
        m_removeAudioHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoExportExtensionArgs.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoExportExtensionArgs.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoExportExtensionArgs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_container.c_str(), allocator).Move(), allocator);
    }

    if (m_shortEdgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortEdge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shortEdge, allocator);
    }

    if (m_videoBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoBitrate, allocator);
    }

    if (m_frameRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frameRate, allocator);
    }

    if (m_removeVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removeVideo, allocator);
    }

    if (m_removeAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removeAudio, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

}


string VideoExportExtensionArgs::GetContainer() const
{
    return m_container;
}

void VideoExportExtensionArgs::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool VideoExportExtensionArgs::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

uint64_t VideoExportExtensionArgs::GetShortEdge() const
{
    return m_shortEdge;
}

void VideoExportExtensionArgs::SetShortEdge(const uint64_t& _shortEdge)
{
    m_shortEdge = _shortEdge;
    m_shortEdgeHasBeenSet = true;
}

bool VideoExportExtensionArgs::ShortEdgeHasBeenSet() const
{
    return m_shortEdgeHasBeenSet;
}

uint64_t VideoExportExtensionArgs::GetVideoBitrate() const
{
    return m_videoBitrate;
}

void VideoExportExtensionArgs::SetVideoBitrate(const uint64_t& _videoBitrate)
{
    m_videoBitrate = _videoBitrate;
    m_videoBitrateHasBeenSet = true;
}

bool VideoExportExtensionArgs::VideoBitrateHasBeenSet() const
{
    return m_videoBitrateHasBeenSet;
}

double VideoExportExtensionArgs::GetFrameRate() const
{
    return m_frameRate;
}

void VideoExportExtensionArgs::SetFrameRate(const double& _frameRate)
{
    m_frameRate = _frameRate;
    m_frameRateHasBeenSet = true;
}

bool VideoExportExtensionArgs::FrameRateHasBeenSet() const
{
    return m_frameRateHasBeenSet;
}

int64_t VideoExportExtensionArgs::GetRemoveVideo() const
{
    return m_removeVideo;
}

void VideoExportExtensionArgs::SetRemoveVideo(const int64_t& _removeVideo)
{
    m_removeVideo = _removeVideo;
    m_removeVideoHasBeenSet = true;
}

bool VideoExportExtensionArgs::RemoveVideoHasBeenSet() const
{
    return m_removeVideoHasBeenSet;
}

int64_t VideoExportExtensionArgs::GetRemoveAudio() const
{
    return m_removeAudio;
}

void VideoExportExtensionArgs::SetRemoveAudio(const int64_t& _removeAudio)
{
    m_removeAudio = _removeAudio;
    m_removeAudioHasBeenSet = true;
}

bool VideoExportExtensionArgs::RemoveAudioHasBeenSet() const
{
    return m_removeAudioHasBeenSet;
}

int64_t VideoExportExtensionArgs::GetStartTime() const
{
    return m_startTime;
}

void VideoExportExtensionArgs::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool VideoExportExtensionArgs::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t VideoExportExtensionArgs::GetEndTime() const
{
    return m_endTime;
}

void VideoExportExtensionArgs::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool VideoExportExtensionArgs::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

