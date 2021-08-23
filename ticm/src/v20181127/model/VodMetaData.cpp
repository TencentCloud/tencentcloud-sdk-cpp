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

#include <tencentcloud/ticm/v20181127/model/VodMetaData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ticm::V20181127::Model;
using namespace std;

VodMetaData::VodMetaData() :
    m_sizeHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_rotateHasBeenSet(false),
    m_videoStreamSetHasBeenSet(false),
    m_audioStreamSetHasBeenSet(false),
    m_videoDurationHasBeenSet(false),
    m_audioDurationHasBeenSet(false)
{
}

CoreInternalOutcome VodMetaData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VodMetaData.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VodMetaData.Container` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_container = string(value["Container"].GetString());
        m_containerHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VodMetaData.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VodMetaData.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VodMetaData.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VodMetaData.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Rotate") && !value["Rotate"].IsNull())
    {
        if (!value["Rotate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VodMetaData.Rotate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rotate = value["Rotate"].GetInt64();
        m_rotateHasBeenSet = true;
    }

    if (value.HasMember("VideoStreamSet") && !value["VideoStreamSet"].IsNull())
    {
        if (!value["VideoStreamSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VodMetaData.VideoStreamSet` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoStreamSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VodVideoStreamItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_videoStreamSet.push_back(item);
        }
        m_videoStreamSetHasBeenSet = true;
    }

    if (value.HasMember("AudioStreamSet") && !value["AudioStreamSet"].IsNull())
    {
        if (!value["AudioStreamSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VodMetaData.AudioStreamSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioStreamSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VodAudioStreamItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioStreamSet.push_back(item);
        }
        m_audioStreamSetHasBeenSet = true;
    }

    if (value.HasMember("VideoDuration") && !value["VideoDuration"].IsNull())
    {
        if (!value["VideoDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VodMetaData.VideoDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_videoDuration = value["VideoDuration"].GetDouble();
        m_videoDurationHasBeenSet = true;
    }

    if (value.HasMember("AudioDuration") && !value["AudioDuration"].IsNull())
    {
        if (!value["AudioDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VodMetaData.AudioDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_audioDuration = value["AudioDuration"].GetDouble();
        m_audioDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VodMetaData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_videoStreamSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoStreamSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoStreamSet.begin(); itr != m_videoStreamSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_audioStreamSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioStreamSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioStreamSet.begin(); itr != m_audioStreamSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_videoDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoDuration, allocator);
    }

    if (m_audioDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioDuration, allocator);
    }

}


int64_t VodMetaData::GetSize() const
{
    return m_size;
}

void VodMetaData::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool VodMetaData::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string VodMetaData::GetContainer() const
{
    return m_container;
}

void VodMetaData::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool VodMetaData::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

int64_t VodMetaData::GetBitrate() const
{
    return m_bitrate;
}

void VodMetaData::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool VodMetaData::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

int64_t VodMetaData::GetHeight() const
{
    return m_height;
}

void VodMetaData::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool VodMetaData::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t VodMetaData::GetWidth() const
{
    return m_width;
}

void VodMetaData::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool VodMetaData::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

double VodMetaData::GetDuration() const
{
    return m_duration;
}

void VodMetaData::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool VodMetaData::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t VodMetaData::GetRotate() const
{
    return m_rotate;
}

void VodMetaData::SetRotate(const int64_t& _rotate)
{
    m_rotate = _rotate;
    m_rotateHasBeenSet = true;
}

bool VodMetaData::RotateHasBeenSet() const
{
    return m_rotateHasBeenSet;
}

vector<VodVideoStreamItem> VodMetaData::GetVideoStreamSet() const
{
    return m_videoStreamSet;
}

void VodMetaData::SetVideoStreamSet(const vector<VodVideoStreamItem>& _videoStreamSet)
{
    m_videoStreamSet = _videoStreamSet;
    m_videoStreamSetHasBeenSet = true;
}

bool VodMetaData::VideoStreamSetHasBeenSet() const
{
    return m_videoStreamSetHasBeenSet;
}

vector<VodAudioStreamItem> VodMetaData::GetAudioStreamSet() const
{
    return m_audioStreamSet;
}

void VodMetaData::SetAudioStreamSet(const vector<VodAudioStreamItem>& _audioStreamSet)
{
    m_audioStreamSet = _audioStreamSet;
    m_audioStreamSetHasBeenSet = true;
}

bool VodMetaData::AudioStreamSetHasBeenSet() const
{
    return m_audioStreamSetHasBeenSet;
}

double VodMetaData::GetVideoDuration() const
{
    return m_videoDuration;
}

void VodMetaData::SetVideoDuration(const double& _videoDuration)
{
    m_videoDuration = _videoDuration;
    m_videoDurationHasBeenSet = true;
}

bool VodMetaData::VideoDurationHasBeenSet() const
{
    return m_videoDurationHasBeenSet;
}

double VodMetaData::GetAudioDuration() const
{
    return m_audioDuration;
}

void VodMetaData::SetAudioDuration(const double& _audioDuration)
{
    m_audioDuration = _audioDuration;
    m_audioDurationHasBeenSet = true;
}

bool VodMetaData::AudioDurationHasBeenSet() const
{
    return m_audioDurationHasBeenSet;
}

