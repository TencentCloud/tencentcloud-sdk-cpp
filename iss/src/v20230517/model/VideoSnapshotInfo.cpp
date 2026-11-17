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

#include <tencentcloud/iss/v20230517/model/VideoSnapshotInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

VideoSnapshotInfo::VideoSnapshotInfo() :
    m_imageIdHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_imageUrlExpiresHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_fileSizeHasBeenSet(false)
{
}

CoreInternalOutcome VideoSnapshotInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotInfo.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotInfo.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotInfo.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotInfo.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotInfo.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("ImageUrlExpires") && !value["ImageUrlExpires"].IsNull())
    {
        if (!value["ImageUrlExpires"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotInfo.ImageUrlExpires` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrlExpires = value["ImageUrlExpires"].GetInt64();
        m_imageUrlExpiresHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotInfo.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotInfo.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoSnapshotInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlExpiresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrlExpires";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageUrlExpires, allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

}


string VideoSnapshotInfo::GetImageId() const
{
    return m_imageId;
}

void VideoSnapshotInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool VideoSnapshotInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string VideoSnapshotInfo::GetConfigId() const
{
    return m_configId;
}

void VideoSnapshotInfo::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool VideoSnapshotInfo::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string VideoSnapshotInfo::GetConfigName() const
{
    return m_configName;
}

void VideoSnapshotInfo::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool VideoSnapshotInfo::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string VideoSnapshotInfo::GetChannelId() const
{
    return m_channelId;
}

void VideoSnapshotInfo::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool VideoSnapshotInfo::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string VideoSnapshotInfo::GetChannelName() const
{
    return m_channelName;
}

void VideoSnapshotInfo::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool VideoSnapshotInfo::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

int64_t VideoSnapshotInfo::GetType() const
{
    return m_type;
}

void VideoSnapshotInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VideoSnapshotInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string VideoSnapshotInfo::GetImageUrl() const
{
    return m_imageUrl;
}

void VideoSnapshotInfo::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool VideoSnapshotInfo::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

int64_t VideoSnapshotInfo::GetImageUrlExpires() const
{
    return m_imageUrlExpires;
}

void VideoSnapshotInfo::SetImageUrlExpires(const int64_t& _imageUrlExpires)
{
    m_imageUrlExpires = _imageUrlExpires;
    m_imageUrlExpiresHasBeenSet = true;
}

bool VideoSnapshotInfo::ImageUrlExpiresHasBeenSet() const
{
    return m_imageUrlExpiresHasBeenSet;
}

int64_t VideoSnapshotInfo::GetTimestamp() const
{
    return m_timestamp;
}

void VideoSnapshotInfo::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool VideoSnapshotInfo::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

int64_t VideoSnapshotInfo::GetFileSize() const
{
    return m_fileSize;
}

void VideoSnapshotInfo::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool VideoSnapshotInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

