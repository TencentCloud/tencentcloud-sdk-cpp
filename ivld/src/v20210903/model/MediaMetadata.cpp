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

#include <tencentcloud/ivld/v20210903/model/MediaMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

MediaMetadata::MediaMetadata() :
    m_fileSizeHasBeenSet(false),
    m_mD5HasBeenSet(false),
    m_durationHasBeenSet(false),
    m_numFramesHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_fPSHasBeenSet(false),
    m_bitRateHasBeenSet(false)
{
}

CoreInternalOutcome MediaMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaMetadata.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("MD5") && !value["MD5"].IsNull())
    {
        if (!value["MD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaMetadata.MD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mD5 = string(value["MD5"].GetString());
        m_mD5HasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaMetadata.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("NumFrames") && !value["NumFrames"].IsNull())
    {
        if (!value["NumFrames"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaMetadata.NumFrames` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numFrames = value["NumFrames"].GetInt64();
        m_numFramesHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaMetadata.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaMetadata.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("FPS") && !value["FPS"].IsNull())
    {
        if (!value["FPS"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaMetadata.FPS` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fPS = value["FPS"].GetDouble();
        m_fPSHasBeenSet = true;
    }

    if (value.HasMember("BitRate") && !value["BitRate"].IsNull())
    {
        if (!value["BitRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaMetadata.BitRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitRate = value["BitRate"].GetInt64();
        m_bitRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_mD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mD5.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_numFramesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumFrames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numFrames, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_fPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fPS, allocator);
    }

    if (m_bitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BitRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitRate, allocator);
    }

}


int64_t MediaMetadata::GetFileSize() const
{
    return m_fileSize;
}

void MediaMetadata::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool MediaMetadata::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string MediaMetadata::GetMD5() const
{
    return m_mD5;
}

void MediaMetadata::SetMD5(const string& _mD5)
{
    m_mD5 = _mD5;
    m_mD5HasBeenSet = true;
}

bool MediaMetadata::MD5HasBeenSet() const
{
    return m_mD5HasBeenSet;
}

double MediaMetadata::GetDuration() const
{
    return m_duration;
}

void MediaMetadata::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool MediaMetadata::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t MediaMetadata::GetNumFrames() const
{
    return m_numFrames;
}

void MediaMetadata::SetNumFrames(const int64_t& _numFrames)
{
    m_numFrames = _numFrames;
    m_numFramesHasBeenSet = true;
}

bool MediaMetadata::NumFramesHasBeenSet() const
{
    return m_numFramesHasBeenSet;
}

int64_t MediaMetadata::GetWidth() const
{
    return m_width;
}

void MediaMetadata::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool MediaMetadata::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t MediaMetadata::GetHeight() const
{
    return m_height;
}

void MediaMetadata::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool MediaMetadata::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

double MediaMetadata::GetFPS() const
{
    return m_fPS;
}

void MediaMetadata::SetFPS(const double& _fPS)
{
    m_fPS = _fPS;
    m_fPSHasBeenSet = true;
}

bool MediaMetadata::FPSHasBeenSet() const
{
    return m_fPSHasBeenSet;
}

int64_t MediaMetadata::GetBitRate() const
{
    return m_bitRate;
}

void MediaMetadata::SetBitRate(const int64_t& _bitRate)
{
    m_bitRate = _bitRate;
    m_bitRateHasBeenSet = true;
}

bool MediaMetadata::BitRateHasBeenSet() const
{
    return m_bitRateHasBeenSet;
}

