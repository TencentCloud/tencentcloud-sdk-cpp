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

#include <tencentcloud/cme/v20191029/model/MediaMetaData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaMetaData::MediaMetaData() :
    m_sizeHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_rotateHasBeenSet(false),
    m_videoStreamInfoSetHasBeenSet(false),
    m_audioStreamInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome MediaMetaData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaMetaData.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaMetaData.Container` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_container = string(value["Container"].GetString());
        m_containerHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaMetaData.Bitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetUint64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaMetaData.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaMetaData.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaMetaData.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Rotate") && !value["Rotate"].IsNull())
    {
        if (!value["Rotate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaMetaData.Rotate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rotate = value["Rotate"].GetInt64();
        m_rotateHasBeenSet = true;
    }

    if (value.HasMember("VideoStreamInfoSet") && !value["VideoStreamInfoSet"].IsNull())
    {
        if (!value["VideoStreamInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaMetaData.VideoStreamInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoStreamInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VideoStreamInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_videoStreamInfoSet.push_back(item);
        }
        m_videoStreamInfoSetHasBeenSet = true;
    }

    if (value.HasMember("AudioStreamInfoSet") && !value["AudioStreamInfoSet"].IsNull())
    {
        if (!value["AudioStreamInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaMetaData.AudioStreamInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioStreamInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioStreamInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioStreamInfoSet.push_back(item);
        }
        m_audioStreamInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaMetaData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_container.c_str(), allocator).Move(), allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_rotateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rotate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotate, allocator);
    }

    if (m_videoStreamInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoStreamInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoStreamInfoSet.begin(); itr != m_videoStreamInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_audioStreamInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioStreamInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioStreamInfoSet.begin(); itr != m_audioStreamInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t MediaMetaData::GetSize() const
{
    return m_size;
}

void MediaMetaData::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool MediaMetaData::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string MediaMetaData::GetContainer() const
{
    return m_container;
}

void MediaMetaData::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool MediaMetaData::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

uint64_t MediaMetaData::GetBitrate() const
{
    return m_bitrate;
}

void MediaMetaData::SetBitrate(const uint64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool MediaMetaData::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

uint64_t MediaMetaData::GetHeight() const
{
    return m_height;
}

void MediaMetaData::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool MediaMetaData::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t MediaMetaData::GetWidth() const
{
    return m_width;
}

void MediaMetaData::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool MediaMetaData::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

double MediaMetaData::GetDuration() const
{
    return m_duration;
}

void MediaMetaData::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool MediaMetaData::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t MediaMetaData::GetRotate() const
{
    return m_rotate;
}

void MediaMetaData::SetRotate(const int64_t& _rotate)
{
    m_rotate = _rotate;
    m_rotateHasBeenSet = true;
}

bool MediaMetaData::RotateHasBeenSet() const
{
    return m_rotateHasBeenSet;
}

vector<VideoStreamInfo> MediaMetaData::GetVideoStreamInfoSet() const
{
    return m_videoStreamInfoSet;
}

void MediaMetaData::SetVideoStreamInfoSet(const vector<VideoStreamInfo>& _videoStreamInfoSet)
{
    m_videoStreamInfoSet = _videoStreamInfoSet;
    m_videoStreamInfoSetHasBeenSet = true;
}

bool MediaMetaData::VideoStreamInfoSetHasBeenSet() const
{
    return m_videoStreamInfoSetHasBeenSet;
}

vector<AudioStreamInfo> MediaMetaData::GetAudioStreamInfoSet() const
{
    return m_audioStreamInfoSet;
}

void MediaMetaData::SetAudioStreamInfoSet(const vector<AudioStreamInfo>& _audioStreamInfoSet)
{
    m_audioStreamInfoSet = _audioStreamInfoSet;
    m_audioStreamInfoSetHasBeenSet = true;
}

bool MediaMetaData::AudioStreamInfoSetHasBeenSet() const
{
    return m_audioStreamInfoSetHasBeenSet;
}

