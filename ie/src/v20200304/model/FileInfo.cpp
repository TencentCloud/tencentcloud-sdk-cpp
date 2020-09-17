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

#include <tencentcloud/ie/v20200304/model/FileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace rapidjson;
using namespace std;

FileInfo::FileInfo() :
    m_fileSizeHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_videoInfoResultHasBeenSet(false),
    m_audioInfoResultHasBeenSet(false)
{
}

CoreInternalOutcome FileInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `FileInfo.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileInfo.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `FileInfo.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `FileInfo.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("VideoInfoResult") && !value["VideoInfoResult"].IsNull())
    {
        if (!value["VideoInfoResult"].IsArray())
            return CoreInternalOutcome(Error("response `FileInfo.VideoInfoResult` is not array type"));

        const Value &tmpValue = value["VideoInfoResult"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VideoInfoResultItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_videoInfoResult.push_back(item);
        }
        m_videoInfoResultHasBeenSet = true;
    }

    if (value.HasMember("AudioInfoResult") && !value["AudioInfoResult"].IsNull())
    {
        if (!value["AudioInfoResult"].IsArray())
            return CoreInternalOutcome(Error("response `FileInfo.AudioInfoResult` is not array type"));

        const Value &tmpValue = value["AudioInfoResult"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioInfoResultItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioInfoResult.push_back(item);
        }
        m_audioInfoResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_fileSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_durationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_videoInfoResultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoInfoResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoInfoResult.begin(); itr != m_videoInfoResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_audioInfoResultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioInfoResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioInfoResult.begin(); itr != m_audioInfoResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t FileInfo::GetFileSize() const
{
    return m_fileSize;
}

void FileInfo::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool FileInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string FileInfo::GetFileType() const
{
    return m_fileType;
}

void FileInfo::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool FileInfo::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

int64_t FileInfo::GetBitrate() const
{
    return m_bitrate;
}

void FileInfo::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool FileInfo::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

int64_t FileInfo::GetDuration() const
{
    return m_duration;
}

void FileInfo::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool FileInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<VideoInfoResultItem> FileInfo::GetVideoInfoResult() const
{
    return m_videoInfoResult;
}

void FileInfo::SetVideoInfoResult(const vector<VideoInfoResultItem>& _videoInfoResult)
{
    m_videoInfoResult = _videoInfoResult;
    m_videoInfoResultHasBeenSet = true;
}

bool FileInfo::VideoInfoResultHasBeenSet() const
{
    return m_videoInfoResultHasBeenSet;
}

vector<AudioInfoResultItem> FileInfo::GetAudioInfoResult() const
{
    return m_audioInfoResult;
}

void FileInfo::SetAudioInfoResult(const vector<AudioInfoResultItem>& _audioInfoResult)
{
    m_audioInfoResult = _audioInfoResult;
    m_audioInfoResultHasBeenSet = true;
}

bool FileInfo::AudioInfoResultHasBeenSet() const
{
    return m_audioInfoResultHasBeenSet;
}

