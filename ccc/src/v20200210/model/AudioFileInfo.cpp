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

#include <tencentcloud/ccc/v20200210/model/AudioFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AudioFileInfo::AudioFileInfo() :
    m_fileIdHasBeenSet(false),
    m_customFileNameHasBeenSet(false),
    m_audioFileNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome AudioFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioFileInfo.FileId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = value["FileId"].GetUint64();
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("CustomFileName") && !value["CustomFileName"].IsNull())
    {
        if (!value["CustomFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioFileInfo.CustomFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customFileName = string(value["CustomFileName"].GetString());
        m_customFileNameHasBeenSet = true;
    }

    if (value.HasMember("AudioFileName") && !value["AudioFileName"].IsNull())
    {
        if (!value["AudioFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioFileInfo.AudioFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioFileName = string(value["AudioFileName"].GetString());
        m_audioFileNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioFileInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileId, allocator);
    }

    if (m_customFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_audioFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


uint64_t AudioFileInfo::GetFileId() const
{
    return m_fileId;
}

void AudioFileInfo::SetFileId(const uint64_t& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool AudioFileInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string AudioFileInfo::GetCustomFileName() const
{
    return m_customFileName;
}

void AudioFileInfo::SetCustomFileName(const string& _customFileName)
{
    m_customFileName = _customFileName;
    m_customFileNameHasBeenSet = true;
}

bool AudioFileInfo::CustomFileNameHasBeenSet() const
{
    return m_customFileNameHasBeenSet;
}

string AudioFileInfo::GetAudioFileName() const
{
    return m_audioFileName;
}

void AudioFileInfo::SetAudioFileName(const string& _audioFileName)
{
    m_audioFileName = _audioFileName;
    m_audioFileNameHasBeenSet = true;
}

bool AudioFileInfo::AudioFileNameHasBeenSet() const
{
    return m_audioFileNameHasBeenSet;
}

int64_t AudioFileInfo::GetStatus() const
{
    return m_status;
}

void AudioFileInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AudioFileInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

