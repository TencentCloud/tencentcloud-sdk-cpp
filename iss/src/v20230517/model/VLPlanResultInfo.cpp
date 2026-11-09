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

#include <tencentcloud/iss/v20230517/model/VLPlanResultInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

VLPlanResultInfo::VLPlanResultInfo() :
    m_vLPlanResultIdHasBeenSet(false),
    m_vLPlanIdHasBeenSet(false),
    m_vLPlanNameHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_analysisModeHasBeenSet(false),
    m_vLResultTimestampHasBeenSet(false),
    m_snapshotTimestampHasBeenSet(false),
    m_videoStartTimestampHasBeenSet(false),
    m_videoEndTimestampHasBeenSet(false),
    m_billedFrameCountHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome VLPlanResultInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VLPlanResultId") && !value["VLPlanResultId"].IsNull())
    {
        if (!value["VLPlanResultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultInfo.VLPlanResultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vLPlanResultId = string(value["VLPlanResultId"].GetString());
        m_vLPlanResultIdHasBeenSet = true;
    }

    if (value.HasMember("VLPlanId") && !value["VLPlanId"].IsNull())
    {
        if (!value["VLPlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultInfo.VLPlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vLPlanId = string(value["VLPlanId"].GetString());
        m_vLPlanIdHasBeenSet = true;
    }

    if (value.HasMember("VLPlanName") && !value["VLPlanName"].IsNull())
    {
        if (!value["VLPlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultInfo.VLPlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vLPlanName = string(value["VLPlanName"].GetString());
        m_vLPlanNameHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultInfo.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultInfo.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("AnalysisMode") && !value["AnalysisMode"].IsNull())
    {
        if (!value["AnalysisMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultInfo.AnalysisMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_analysisMode = string(value["AnalysisMode"].GetString());
        m_analysisModeHasBeenSet = true;
    }

    if (value.HasMember("VLResultTimestamp") && !value["VLResultTimestamp"].IsNull())
    {
        if (!value["VLResultTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultInfo.VLResultTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vLResultTimestamp = value["VLResultTimestamp"].GetInt64();
        m_vLResultTimestampHasBeenSet = true;
    }

    if (value.HasMember("SnapshotTimestamp") && !value["SnapshotTimestamp"].IsNull())
    {
        if (!value["SnapshotTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultInfo.SnapshotTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotTimestamp = value["SnapshotTimestamp"].GetInt64();
        m_snapshotTimestampHasBeenSet = true;
    }

    if (value.HasMember("VideoStartTimestamp") && !value["VideoStartTimestamp"].IsNull())
    {
        if (!value["VideoStartTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultInfo.VideoStartTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoStartTimestamp = value["VideoStartTimestamp"].GetInt64();
        m_videoStartTimestampHasBeenSet = true;
    }

    if (value.HasMember("VideoEndTimestamp") && !value["VideoEndTimestamp"].IsNull())
    {
        if (!value["VideoEndTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultInfo.VideoEndTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoEndTimestamp = value["VideoEndTimestamp"].GetInt64();
        m_videoEndTimestampHasBeenSet = true;
    }

    if (value.HasMember("BilledFrameCount") && !value["BilledFrameCount"].IsNull())
    {
        if (!value["BilledFrameCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultInfo.BilledFrameCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billedFrameCount = value["BilledFrameCount"].GetInt64();
        m_billedFrameCountHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VLPlanResultInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vLPlanResultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VLPlanResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vLPlanResultId.c_str(), allocator).Move(), allocator);
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

    if (m_analysisModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_analysisMode.c_str(), allocator).Move(), allocator);
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


string VLPlanResultInfo::GetVLPlanResultId() const
{
    return m_vLPlanResultId;
}

void VLPlanResultInfo::SetVLPlanResultId(const string& _vLPlanResultId)
{
    m_vLPlanResultId = _vLPlanResultId;
    m_vLPlanResultIdHasBeenSet = true;
}

bool VLPlanResultInfo::VLPlanResultIdHasBeenSet() const
{
    return m_vLPlanResultIdHasBeenSet;
}

string VLPlanResultInfo::GetVLPlanId() const
{
    return m_vLPlanId;
}

void VLPlanResultInfo::SetVLPlanId(const string& _vLPlanId)
{
    m_vLPlanId = _vLPlanId;
    m_vLPlanIdHasBeenSet = true;
}

bool VLPlanResultInfo::VLPlanIdHasBeenSet() const
{
    return m_vLPlanIdHasBeenSet;
}

string VLPlanResultInfo::GetVLPlanName() const
{
    return m_vLPlanName;
}

void VLPlanResultInfo::SetVLPlanName(const string& _vLPlanName)
{
    m_vLPlanName = _vLPlanName;
    m_vLPlanNameHasBeenSet = true;
}

bool VLPlanResultInfo::VLPlanNameHasBeenSet() const
{
    return m_vLPlanNameHasBeenSet;
}

string VLPlanResultInfo::GetChannelId() const
{
    return m_channelId;
}

void VLPlanResultInfo::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool VLPlanResultInfo::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string VLPlanResultInfo::GetChannelName() const
{
    return m_channelName;
}

void VLPlanResultInfo::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool VLPlanResultInfo::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string VLPlanResultInfo::GetAnalysisMode() const
{
    return m_analysisMode;
}

void VLPlanResultInfo::SetAnalysisMode(const string& _analysisMode)
{
    m_analysisMode = _analysisMode;
    m_analysisModeHasBeenSet = true;
}

bool VLPlanResultInfo::AnalysisModeHasBeenSet() const
{
    return m_analysisModeHasBeenSet;
}

int64_t VLPlanResultInfo::GetVLResultTimestamp() const
{
    return m_vLResultTimestamp;
}

void VLPlanResultInfo::SetVLResultTimestamp(const int64_t& _vLResultTimestamp)
{
    m_vLResultTimestamp = _vLResultTimestamp;
    m_vLResultTimestampHasBeenSet = true;
}

bool VLPlanResultInfo::VLResultTimestampHasBeenSet() const
{
    return m_vLResultTimestampHasBeenSet;
}

int64_t VLPlanResultInfo::GetSnapshotTimestamp() const
{
    return m_snapshotTimestamp;
}

void VLPlanResultInfo::SetSnapshotTimestamp(const int64_t& _snapshotTimestamp)
{
    m_snapshotTimestamp = _snapshotTimestamp;
    m_snapshotTimestampHasBeenSet = true;
}

bool VLPlanResultInfo::SnapshotTimestampHasBeenSet() const
{
    return m_snapshotTimestampHasBeenSet;
}

int64_t VLPlanResultInfo::GetVideoStartTimestamp() const
{
    return m_videoStartTimestamp;
}

void VLPlanResultInfo::SetVideoStartTimestamp(const int64_t& _videoStartTimestamp)
{
    m_videoStartTimestamp = _videoStartTimestamp;
    m_videoStartTimestampHasBeenSet = true;
}

bool VLPlanResultInfo::VideoStartTimestampHasBeenSet() const
{
    return m_videoStartTimestampHasBeenSet;
}

int64_t VLPlanResultInfo::GetVideoEndTimestamp() const
{
    return m_videoEndTimestamp;
}

void VLPlanResultInfo::SetVideoEndTimestamp(const int64_t& _videoEndTimestamp)
{
    m_videoEndTimestamp = _videoEndTimestamp;
    m_videoEndTimestampHasBeenSet = true;
}

bool VLPlanResultInfo::VideoEndTimestampHasBeenSet() const
{
    return m_videoEndTimestampHasBeenSet;
}

int64_t VLPlanResultInfo::GetBilledFrameCount() const
{
    return m_billedFrameCount;
}

void VLPlanResultInfo::SetBilledFrameCount(const int64_t& _billedFrameCount)
{
    m_billedFrameCount = _billedFrameCount;
    m_billedFrameCountHasBeenSet = true;
}

bool VLPlanResultInfo::BilledFrameCountHasBeenSet() const
{
    return m_billedFrameCountHasBeenSet;
}

string VLPlanResultInfo::GetContent() const
{
    return m_content;
}

void VLPlanResultInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool VLPlanResultInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string VLPlanResultInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void VLPlanResultInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool VLPlanResultInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string VLPlanResultInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void VLPlanResultInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool VLPlanResultInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

