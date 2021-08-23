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

#include <tencentcloud/vod/v20180717/model/ComposeMediaOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ComposeMediaOutput::ComposeMediaOutput() :
    m_fileNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_videoStreamHasBeenSet(false),
    m_audioStreamHasBeenSet(false),
    m_removeVideoHasBeenSet(false),
    m_removeAudioHasBeenSet(false)
{
}

CoreInternalOutcome ComposeMediaOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaOutput.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaOutput.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ClassId") && !value["ClassId"].IsNull())
    {
        if (!value["ClassId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaOutput.ClassId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_classId = value["ClassId"].GetInt64();
        m_classIdHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaOutput.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaOutput.Container` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_container = string(value["Container"].GetString());
        m_containerHasBeenSet = true;
    }

    if (value.HasMember("VideoStream") && !value["VideoStream"].IsNull())
    {
        if (!value["VideoStream"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaOutput.VideoStream` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoStream.Deserialize(value["VideoStream"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoStreamHasBeenSet = true;
    }

    if (value.HasMember("AudioStream") && !value["AudioStream"].IsNull())
    {
        if (!value["AudioStream"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaOutput.AudioStream` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioStream.Deserialize(value["AudioStream"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioStreamHasBeenSet = true;
    }

    if (value.HasMember("RemoveVideo") && !value["RemoveVideo"].IsNull())
    {
        if (!value["RemoveVideo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaOutput.RemoveVideo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removeVideo = value["RemoveVideo"].GetInt64();
        m_removeVideoHasBeenSet = true;
    }

    if (value.HasMember("RemoveAudio") && !value["RemoveAudio"].IsNull())
    {
        if (!value["RemoveAudio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaOutput.RemoveAudio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removeAudio = value["RemoveAudio"].GetInt64();
        m_removeAudioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComposeMediaOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_classIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_classId, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_container.c_str(), allocator).Move(), allocator);
    }

    if (m_videoStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoStream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoStream.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioStream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioStream.ToJsonObject(value[key.c_str()], allocator);
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

}


string ComposeMediaOutput::GetFileName() const
{
    return m_fileName;
}

void ComposeMediaOutput::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ComposeMediaOutput::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ComposeMediaOutput::GetDescription() const
{
    return m_description;
}

void ComposeMediaOutput::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ComposeMediaOutput::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ComposeMediaOutput::GetClassId() const
{
    return m_classId;
}

void ComposeMediaOutput::SetClassId(const int64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool ComposeMediaOutput::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

string ComposeMediaOutput::GetExpireTime() const
{
    return m_expireTime;
}

void ComposeMediaOutput::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ComposeMediaOutput::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string ComposeMediaOutput::GetContainer() const
{
    return m_container;
}

void ComposeMediaOutput::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool ComposeMediaOutput::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

OutputVideoStream ComposeMediaOutput::GetVideoStream() const
{
    return m_videoStream;
}

void ComposeMediaOutput::SetVideoStream(const OutputVideoStream& _videoStream)
{
    m_videoStream = _videoStream;
    m_videoStreamHasBeenSet = true;
}

bool ComposeMediaOutput::VideoStreamHasBeenSet() const
{
    return m_videoStreamHasBeenSet;
}

OutputAudioStream ComposeMediaOutput::GetAudioStream() const
{
    return m_audioStream;
}

void ComposeMediaOutput::SetAudioStream(const OutputAudioStream& _audioStream)
{
    m_audioStream = _audioStream;
    m_audioStreamHasBeenSet = true;
}

bool ComposeMediaOutput::AudioStreamHasBeenSet() const
{
    return m_audioStreamHasBeenSet;
}

int64_t ComposeMediaOutput::GetRemoveVideo() const
{
    return m_removeVideo;
}

void ComposeMediaOutput::SetRemoveVideo(const int64_t& _removeVideo)
{
    m_removeVideo = _removeVideo;
    m_removeVideoHasBeenSet = true;
}

bool ComposeMediaOutput::RemoveVideoHasBeenSet() const
{
    return m_removeVideoHasBeenSet;
}

int64_t ComposeMediaOutput::GetRemoveAudio() const
{
    return m_removeAudio;
}

void ComposeMediaOutput::SetRemoveAudio(const int64_t& _removeAudio)
{
    m_removeAudio = _removeAudio;
    m_removeAudioHasBeenSet = true;
}

bool ComposeMediaOutput::RemoveAudioHasBeenSet() const
{
    return m_removeAudioHasBeenSet;
}

