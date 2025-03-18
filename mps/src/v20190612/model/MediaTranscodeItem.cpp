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

#include <tencentcloud/mps/v20190612/model/MediaTranscodeItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

MediaTranscodeItem::MediaTranscodeItem() :
    m_outputStorageHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_audioStreamSetHasBeenSet(false),
    m_videoStreamSetHasBeenSet(false),
    m_callBackExtInfoHasBeenSet(false)
{
}

CoreInternalOutcome MediaTranscodeItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTranscodeItem.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTranscodeItem.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTranscodeItem.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTranscodeItem.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTranscodeItem.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTranscodeItem.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTranscodeItem.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTranscodeItem.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTranscodeItem.Container` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_container = string(value["Container"].GetString());
        m_containerHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTranscodeItem.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("AudioStreamSet") && !value["AudioStreamSet"].IsNull())
    {
        if (!value["AudioStreamSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaTranscodeItem.AudioStreamSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioStreamSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaAudioStreamItem item;
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

    if (value.HasMember("VideoStreamSet") && !value["VideoStreamSet"].IsNull())
    {
        if (!value["VideoStreamSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaTranscodeItem.VideoStreamSet` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoStreamSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaVideoStreamItem item;
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

    if (value.HasMember("CallBackExtInfo") && !value["CallBackExtInfo"].IsNull())
    {
        if (!value["CallBackExtInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTranscodeItem.CallBackExtInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callBackExtInfo = string(value["CallBackExtInfo"].GetString());
        m_callBackExtInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaTranscodeItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
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

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_container.c_str(), allocator).Move(), allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
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

    if (m_callBackExtInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallBackExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callBackExtInfo.c_str(), allocator).Move(), allocator);
    }

}


TaskOutputStorage MediaTranscodeItem::GetOutputStorage() const
{
    return m_outputStorage;
}

void MediaTranscodeItem::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool MediaTranscodeItem::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string MediaTranscodeItem::GetPath() const
{
    return m_path;
}

void MediaTranscodeItem::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool MediaTranscodeItem::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

int64_t MediaTranscodeItem::GetDefinition() const
{
    return m_definition;
}

void MediaTranscodeItem::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool MediaTranscodeItem::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

int64_t MediaTranscodeItem::GetBitrate() const
{
    return m_bitrate;
}

void MediaTranscodeItem::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool MediaTranscodeItem::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

int64_t MediaTranscodeItem::GetHeight() const
{
    return m_height;
}

void MediaTranscodeItem::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool MediaTranscodeItem::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t MediaTranscodeItem::GetWidth() const
{
    return m_width;
}

void MediaTranscodeItem::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool MediaTranscodeItem::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t MediaTranscodeItem::GetSize() const
{
    return m_size;
}

void MediaTranscodeItem::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool MediaTranscodeItem::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

double MediaTranscodeItem::GetDuration() const
{
    return m_duration;
}

void MediaTranscodeItem::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool MediaTranscodeItem::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string MediaTranscodeItem::GetContainer() const
{
    return m_container;
}

void MediaTranscodeItem::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool MediaTranscodeItem::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

string MediaTranscodeItem::GetMd5() const
{
    return m_md5;
}

void MediaTranscodeItem::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool MediaTranscodeItem::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

vector<MediaAudioStreamItem> MediaTranscodeItem::GetAudioStreamSet() const
{
    return m_audioStreamSet;
}

void MediaTranscodeItem::SetAudioStreamSet(const vector<MediaAudioStreamItem>& _audioStreamSet)
{
    m_audioStreamSet = _audioStreamSet;
    m_audioStreamSetHasBeenSet = true;
}

bool MediaTranscodeItem::AudioStreamSetHasBeenSet() const
{
    return m_audioStreamSetHasBeenSet;
}

vector<MediaVideoStreamItem> MediaTranscodeItem::GetVideoStreamSet() const
{
    return m_videoStreamSet;
}

void MediaTranscodeItem::SetVideoStreamSet(const vector<MediaVideoStreamItem>& _videoStreamSet)
{
    m_videoStreamSet = _videoStreamSet;
    m_videoStreamSetHasBeenSet = true;
}

bool MediaTranscodeItem::VideoStreamSetHasBeenSet() const
{
    return m_videoStreamSetHasBeenSet;
}

string MediaTranscodeItem::GetCallBackExtInfo() const
{
    return m_callBackExtInfo;
}

void MediaTranscodeItem::SetCallBackExtInfo(const string& _callBackExtInfo)
{
    m_callBackExtInfo = _callBackExtInfo;
    m_callBackExtInfoHasBeenSet = true;
}

bool MediaTranscodeItem::CallBackExtInfoHasBeenSet() const
{
    return m_callBackExtInfoHasBeenSet;
}

