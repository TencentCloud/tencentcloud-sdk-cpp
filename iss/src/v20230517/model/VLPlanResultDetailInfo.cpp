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

#include <tencentcloud/iss/v20230517/model/VLPlanResultDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

VLPlanResultDetailInfo::VLPlanResultDetailInfo() :
    m_vLPlanResultIdHasBeenSet(false),
    m_mediaTypeHasBeenSet(false),
    m_vLPlanIdHasBeenSet(false),
    m_vLPlanNameHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_vLResultTimestampHasBeenSet(false),
    m_snapshotTimestampHasBeenSet(false),
    m_videoStartTimestampHasBeenSet(false),
    m_videoEndTimestampHasBeenSet(false),
    m_billedFrameCountHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_imageUrlExpireHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome VLPlanResultDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VLPlanResultId") && !value["VLPlanResultId"].IsNull())
    {
        if (!value["VLPlanResultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.VLPlanResultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vLPlanResultId = string(value["VLPlanResultId"].GetString());
        m_vLPlanResultIdHasBeenSet = true;
    }

    if (value.HasMember("MediaType") && !value["MediaType"].IsNull())
    {
        if (!value["MediaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.MediaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaType = string(value["MediaType"].GetString());
        m_mediaTypeHasBeenSet = true;
    }

    if (value.HasMember("VLPlanId") && !value["VLPlanId"].IsNull())
    {
        if (!value["VLPlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.VLPlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vLPlanId = string(value["VLPlanId"].GetString());
        m_vLPlanIdHasBeenSet = true;
    }

    if (value.HasMember("VLPlanName") && !value["VLPlanName"].IsNull())
    {
        if (!value["VLPlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.VLPlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vLPlanName = string(value["VLPlanName"].GetString());
        m_vLPlanNameHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("OrganizationId") && !value["OrganizationId"].IsNull())
    {
        if (!value["OrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.OrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationId = string(value["OrganizationId"].GetString());
        m_organizationIdHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("VLResultTimestamp") && !value["VLResultTimestamp"].IsNull())
    {
        if (!value["VLResultTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.VLResultTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vLResultTimestamp = value["VLResultTimestamp"].GetInt64();
        m_vLResultTimestampHasBeenSet = true;
    }

    if (value.HasMember("SnapshotTimestamp") && !value["SnapshotTimestamp"].IsNull())
    {
        if (!value["SnapshotTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.SnapshotTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotTimestamp = value["SnapshotTimestamp"].GetInt64();
        m_snapshotTimestampHasBeenSet = true;
    }

    if (value.HasMember("VideoStartTimestamp") && !value["VideoStartTimestamp"].IsNull())
    {
        if (!value["VideoStartTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.VideoStartTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoStartTimestamp = value["VideoStartTimestamp"].GetInt64();
        m_videoStartTimestampHasBeenSet = true;
    }

    if (value.HasMember("VideoEndTimestamp") && !value["VideoEndTimestamp"].IsNull())
    {
        if (!value["VideoEndTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.VideoEndTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoEndTimestamp = value["VideoEndTimestamp"].GetInt64();
        m_videoEndTimestampHasBeenSet = true;
    }

    if (value.HasMember("BilledFrameCount") && !value["BilledFrameCount"].IsNull())
    {
        if (!value["BilledFrameCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.BilledFrameCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billedFrameCount = value["BilledFrameCount"].GetInt64();
        m_billedFrameCountHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("ImageUrlExpire") && !value["ImageUrlExpire"].IsNull())
    {
        if (!value["ImageUrlExpire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.ImageUrlExpire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrlExpire = value["ImageUrlExpire"].GetInt64();
        m_imageUrlExpireHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultDetailInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VLPlanResultDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vLPlanResultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VLPlanResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vLPlanResultId.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mediaType.c_str(), allocator).Move(), allocator);
    }

    if (m_vLPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VLPlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vLPlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_vLPlanNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VLPlanName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vLPlanName.c_str(), allocator).Move(), allocator);
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

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_vLResultTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VLResultTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vLResultTimestamp, allocator);
    }

    if (m_snapshotTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotTimestamp, allocator);
    }

    if (m_videoStartTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoStartTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoStartTimestamp, allocator);
    }

    if (m_videoEndTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoEndTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoEndTimestamp, allocator);
    }

    if (m_billedFrameCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BilledFrameCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billedFrameCount, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlExpireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrlExpire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageUrlExpire, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


string VLPlanResultDetailInfo::GetVLPlanResultId() const
{
    return m_vLPlanResultId;
}

void VLPlanResultDetailInfo::SetVLPlanResultId(const string& _vLPlanResultId)
{
    m_vLPlanResultId = _vLPlanResultId;
    m_vLPlanResultIdHasBeenSet = true;
}

bool VLPlanResultDetailInfo::VLPlanResultIdHasBeenSet() const
{
    return m_vLPlanResultIdHasBeenSet;
}

string VLPlanResultDetailInfo::GetMediaType() const
{
    return m_mediaType;
}

void VLPlanResultDetailInfo::SetMediaType(const string& _mediaType)
{
    m_mediaType = _mediaType;
    m_mediaTypeHasBeenSet = true;
}

bool VLPlanResultDetailInfo::MediaTypeHasBeenSet() const
{
    return m_mediaTypeHasBeenSet;
}

string VLPlanResultDetailInfo::GetVLPlanId() const
{
    return m_vLPlanId;
}

void VLPlanResultDetailInfo::SetVLPlanId(const string& _vLPlanId)
{
    m_vLPlanId = _vLPlanId;
    m_vLPlanIdHasBeenSet = true;
}

bool VLPlanResultDetailInfo::VLPlanIdHasBeenSet() const
{
    return m_vLPlanIdHasBeenSet;
}

string VLPlanResultDetailInfo::GetVLPlanName() const
{
    return m_vLPlanName;
}

void VLPlanResultDetailInfo::SetVLPlanName(const string& _vLPlanName)
{
    m_vLPlanName = _vLPlanName;
    m_vLPlanNameHasBeenSet = true;
}

bool VLPlanResultDetailInfo::VLPlanNameHasBeenSet() const
{
    return m_vLPlanNameHasBeenSet;
}

string VLPlanResultDetailInfo::GetChannelId() const
{
    return m_channelId;
}

void VLPlanResultDetailInfo::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool VLPlanResultDetailInfo::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string VLPlanResultDetailInfo::GetChannelName() const
{
    return m_channelName;
}

void VLPlanResultDetailInfo::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool VLPlanResultDetailInfo::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string VLPlanResultDetailInfo::GetDeviceId() const
{
    return m_deviceId;
}

void VLPlanResultDetailInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool VLPlanResultDetailInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string VLPlanResultDetailInfo::GetDeviceName() const
{
    return m_deviceName;
}

void VLPlanResultDetailInfo::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool VLPlanResultDetailInfo::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string VLPlanResultDetailInfo::GetOrganizationId() const
{
    return m_organizationId;
}

void VLPlanResultDetailInfo::SetOrganizationId(const string& _organizationId)
{
    m_organizationId = _organizationId;
    m_organizationIdHasBeenSet = true;
}

bool VLPlanResultDetailInfo::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}

string VLPlanResultDetailInfo::GetOrganizationName() const
{
    return m_organizationName;
}

void VLPlanResultDetailInfo::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool VLPlanResultDetailInfo::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

int64_t VLPlanResultDetailInfo::GetVLResultTimestamp() const
{
    return m_vLResultTimestamp;
}

void VLPlanResultDetailInfo::SetVLResultTimestamp(const int64_t& _vLResultTimestamp)
{
    m_vLResultTimestamp = _vLResultTimestamp;
    m_vLResultTimestampHasBeenSet = true;
}

bool VLPlanResultDetailInfo::VLResultTimestampHasBeenSet() const
{
    return m_vLResultTimestampHasBeenSet;
}

int64_t VLPlanResultDetailInfo::GetSnapshotTimestamp() const
{
    return m_snapshotTimestamp;
}

void VLPlanResultDetailInfo::SetSnapshotTimestamp(const int64_t& _snapshotTimestamp)
{
    m_snapshotTimestamp = _snapshotTimestamp;
    m_snapshotTimestampHasBeenSet = true;
}

bool VLPlanResultDetailInfo::SnapshotTimestampHasBeenSet() const
{
    return m_snapshotTimestampHasBeenSet;
}

int64_t VLPlanResultDetailInfo::GetVideoStartTimestamp() const
{
    return m_videoStartTimestamp;
}

void VLPlanResultDetailInfo::SetVideoStartTimestamp(const int64_t& _videoStartTimestamp)
{
    m_videoStartTimestamp = _videoStartTimestamp;
    m_videoStartTimestampHasBeenSet = true;
}

bool VLPlanResultDetailInfo::VideoStartTimestampHasBeenSet() const
{
    return m_videoStartTimestampHasBeenSet;
}

int64_t VLPlanResultDetailInfo::GetVideoEndTimestamp() const
{
    return m_videoEndTimestamp;
}

void VLPlanResultDetailInfo::SetVideoEndTimestamp(const int64_t& _videoEndTimestamp)
{
    m_videoEndTimestamp = _videoEndTimestamp;
    m_videoEndTimestampHasBeenSet = true;
}

bool VLPlanResultDetailInfo::VideoEndTimestampHasBeenSet() const
{
    return m_videoEndTimestampHasBeenSet;
}

int64_t VLPlanResultDetailInfo::GetBilledFrameCount() const
{
    return m_billedFrameCount;
}

void VLPlanResultDetailInfo::SetBilledFrameCount(const int64_t& _billedFrameCount)
{
    m_billedFrameCount = _billedFrameCount;
    m_billedFrameCountHasBeenSet = true;
}

bool VLPlanResultDetailInfo::BilledFrameCountHasBeenSet() const
{
    return m_billedFrameCountHasBeenSet;
}

string VLPlanResultDetailInfo::GetContent() const
{
    return m_content;
}

void VLPlanResultDetailInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool VLPlanResultDetailInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string VLPlanResultDetailInfo::GetImageUrl() const
{
    return m_imageUrl;
}

void VLPlanResultDetailInfo::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool VLPlanResultDetailInfo::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

int64_t VLPlanResultDetailInfo::GetImageUrlExpire() const
{
    return m_imageUrlExpire;
}

void VLPlanResultDetailInfo::SetImageUrlExpire(const int64_t& _imageUrlExpire)
{
    m_imageUrlExpire = _imageUrlExpire;
    m_imageUrlExpireHasBeenSet = true;
}

bool VLPlanResultDetailInfo::ImageUrlExpireHasBeenSet() const
{
    return m_imageUrlExpireHasBeenSet;
}

string VLPlanResultDetailInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void VLPlanResultDetailInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool VLPlanResultDetailInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string VLPlanResultDetailInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void VLPlanResultDetailInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool VLPlanResultDetailInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

