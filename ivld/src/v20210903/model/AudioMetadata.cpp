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

#include <tencentcloud/ivld/v20210903/model/AudioMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

AudioMetadata::AudioMetadata() :
    m_fileSizeHasBeenSet(false),
    m_mD5HasBeenSet(false),
    m_durationHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_bitRateHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_bitDepthHasBeenSet(false),
    m_shortFormatHasBeenSet(false)
{
}

CoreInternalOutcome AudioMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioMetadata.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("MD5") && !value["MD5"].IsNull())
    {
        if (!value["MD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioMetadata.MD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mD5 = string(value["MD5"].GetString());
        m_mD5HasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AudioMetadata.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("SampleRate") && !value["SampleRate"].IsNull())
    {
        if (!value["SampleRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AudioMetadata.SampleRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sampleRate = value["SampleRate"].GetDouble();
        m_sampleRateHasBeenSet = true;
    }

    if (value.HasMember("BitRate") && !value["BitRate"].IsNull())
    {
        if (!value["BitRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioMetadata.BitRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitRate = value["BitRate"].GetInt64();
        m_bitRateHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioMetadata.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("BitDepth") && !value["BitDepth"].IsNull())
    {
        if (!value["BitDepth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioMetadata.BitDepth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitDepth = value["BitDepth"].GetInt64();
        m_bitDepthHasBeenSet = true;
    }

    if (value.HasMember("ShortFormat") && !value["ShortFormat"].IsNull())
    {
        if (!value["ShortFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioMetadata.ShortFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shortFormat = string(value["ShortFormat"].GetString());
        m_shortFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_bitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BitRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitRate, allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_bitDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BitDepth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitDepth, allocator);
    }

    if (m_shortFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shortFormat.c_str(), allocator).Move(), allocator);
    }

}


int64_t AudioMetadata::GetFileSize() const
{
    return m_fileSize;
}

void AudioMetadata::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool AudioMetadata::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string AudioMetadata::GetMD5() const
{
    return m_mD5;
}

void AudioMetadata::SetMD5(const string& _mD5)
{
    m_mD5 = _mD5;
    m_mD5HasBeenSet = true;
}

bool AudioMetadata::MD5HasBeenSet() const
{
    return m_mD5HasBeenSet;
}

double AudioMetadata::GetDuration() const
{
    return m_duration;
}

void AudioMetadata::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool AudioMetadata::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

double AudioMetadata::GetSampleRate() const
{
    return m_sampleRate;
}

void AudioMetadata::SetSampleRate(const double& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool AudioMetadata::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

int64_t AudioMetadata::GetBitRate() const
{
    return m_bitRate;
}

void AudioMetadata::SetBitRate(const int64_t& _bitRate)
{
    m_bitRate = _bitRate;
    m_bitRateHasBeenSet = true;
}

bool AudioMetadata::BitRateHasBeenSet() const
{
    return m_bitRateHasBeenSet;
}

string AudioMetadata::GetFormat() const
{
    return m_format;
}

void AudioMetadata::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool AudioMetadata::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

int64_t AudioMetadata::GetBitDepth() const
{
    return m_bitDepth;
}

void AudioMetadata::SetBitDepth(const int64_t& _bitDepth)
{
    m_bitDepth = _bitDepth;
    m_bitDepthHasBeenSet = true;
}

bool AudioMetadata::BitDepthHasBeenSet() const
{
    return m_bitDepthHasBeenSet;
}

string AudioMetadata::GetShortFormat() const
{
    return m_shortFormat;
}

void AudioMetadata::SetShortFormat(const string& _shortFormat)
{
    m_shortFormat = _shortFormat;
    m_shortFormatHasBeenSet = true;
}

bool AudioMetadata::ShortFormatHasBeenSet() const
{
    return m_shortFormatHasBeenSet;
}

