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

#include <tencentcloud/iss/v20230517/model/VideoDownloadTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

VideoDownloadTask::VideoDownloadTask() :
    m_downloadTaskIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_channelCodeHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_deviceCodeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_videoTimeSectionHasBeenSet(false),
    m_scaleHasBeenSet(false),
    m_downloadTimeHasBeenSet(false),
    m_videoSizeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_fileDownloadUrlHasBeenSet(false),
    m_failedReasonHasBeenSet(false),
    m_expireHasBeenSet(false),
    m_previewUrlHasBeenSet(false)
{
}

CoreInternalOutcome VideoDownloadTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DownloadTaskId") && !value["DownloadTaskId"].IsNull())
    {
        if (!value["DownloadTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.DownloadTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadTaskId = string(value["DownloadTaskId"].GetString());
        m_downloadTaskIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("ChannelCode") && !value["ChannelCode"].IsNull())
    {
        if (!value["ChannelCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.ChannelCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelCode = string(value["ChannelCode"].GetString());
        m_channelCodeHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceCode") && !value["DeviceCode"].IsNull())
    {
        if (!value["DeviceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.DeviceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCode = string(value["DeviceCode"].GetString());
        m_deviceCodeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeSection") && !value["VideoTimeSection"].IsNull())
    {
        if (!value["VideoTimeSection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.VideoTimeSection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeSection = string(value["VideoTimeSection"].GetString());
        m_videoTimeSectionHasBeenSet = true;
    }

    if (value.HasMember("Scale") && !value["Scale"].IsNull())
    {
        if (!value["Scale"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.Scale` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scale = value["Scale"].GetInt64();
        m_scaleHasBeenSet = true;
    }

    if (value.HasMember("DownloadTime") && !value["DownloadTime"].IsNull())
    {
        if (!value["DownloadTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.DownloadTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_downloadTime = value["DownloadTime"].GetInt64();
        m_downloadTimeHasBeenSet = true;
    }

    if (value.HasMember("VideoSize") && !value["VideoSize"].IsNull())
    {
        if (!value["VideoSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.VideoSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoSize = value["VideoSize"].GetInt64();
        m_videoSizeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("FileDownloadUrl") && !value["FileDownloadUrl"].IsNull())
    {
        if (!value["FileDownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.FileDownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileDownloadUrl = string(value["FileDownloadUrl"].GetString());
        m_fileDownloadUrlHasBeenSet = true;
    }

    if (value.HasMember("FailedReason") && !value["FailedReason"].IsNull())
    {
        if (!value["FailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.FailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedReason = string(value["FailedReason"].GetString());
        m_failedReasonHasBeenSet = true;
    }

    if (value.HasMember("Expire") && !value["Expire"].IsNull())
    {
        if (!value["Expire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.Expire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expire = value["Expire"].GetInt64();
        m_expireHasBeenSet = true;
    }

    if (value.HasMember("PreviewUrl") && !value["PreviewUrl"].IsNull())
    {
        if (!value["PreviewUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTask.PreviewUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewUrl = string(value["PreviewUrl"].GetString());
        m_previewUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoDownloadTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_downloadTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadTaskId.c_str(), allocator).Move(), allocator);
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

    if (m_channelCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelCode.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_videoTimeSectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTimeSection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoTimeSection.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scale, allocator);
    }

    if (m_downloadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_downloadTime, allocator);
    }

    if (m_videoSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoSize, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileDownloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileDownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileDownloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_failedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedReason.c_str(), allocator).Move(), allocator);
    }

    if (m_expireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expire, allocator);
    }

    if (m_previewUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewUrl.c_str(), allocator).Move(), allocator);
    }

}


string VideoDownloadTask::GetDownloadTaskId() const
{
    return m_downloadTaskId;
}

void VideoDownloadTask::SetDownloadTaskId(const string& _downloadTaskId)
{
    m_downloadTaskId = _downloadTaskId;
    m_downloadTaskIdHasBeenSet = true;
}

bool VideoDownloadTask::DownloadTaskIdHasBeenSet() const
{
    return m_downloadTaskIdHasBeenSet;
}

string VideoDownloadTask::GetChannelId() const
{
    return m_channelId;
}

void VideoDownloadTask::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool VideoDownloadTask::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string VideoDownloadTask::GetChannelName() const
{
    return m_channelName;
}

void VideoDownloadTask::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool VideoDownloadTask::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string VideoDownloadTask::GetChannelCode() const
{
    return m_channelCode;
}

void VideoDownloadTask::SetChannelCode(const string& _channelCode)
{
    m_channelCode = _channelCode;
    m_channelCodeHasBeenSet = true;
}

bool VideoDownloadTask::ChannelCodeHasBeenSet() const
{
    return m_channelCodeHasBeenSet;
}

string VideoDownloadTask::GetDeviceName() const
{
    return m_deviceName;
}

void VideoDownloadTask::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool VideoDownloadTask::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string VideoDownloadTask::GetDeviceCode() const
{
    return m_deviceCode;
}

void VideoDownloadTask::SetDeviceCode(const string& _deviceCode)
{
    m_deviceCode = _deviceCode;
    m_deviceCodeHasBeenSet = true;
}

bool VideoDownloadTask::DeviceCodeHasBeenSet() const
{
    return m_deviceCodeHasBeenSet;
}

int64_t VideoDownloadTask::GetStatus() const
{
    return m_status;
}

void VideoDownloadTask::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VideoDownloadTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VideoDownloadTask::GetVideoTimeSection() const
{
    return m_videoTimeSection;
}

void VideoDownloadTask::SetVideoTimeSection(const string& _videoTimeSection)
{
    m_videoTimeSection = _videoTimeSection;
    m_videoTimeSectionHasBeenSet = true;
}

bool VideoDownloadTask::VideoTimeSectionHasBeenSet() const
{
    return m_videoTimeSectionHasBeenSet;
}

int64_t VideoDownloadTask::GetScale() const
{
    return m_scale;
}

void VideoDownloadTask::SetScale(const int64_t& _scale)
{
    m_scale = _scale;
    m_scaleHasBeenSet = true;
}

bool VideoDownloadTask::ScaleHasBeenSet() const
{
    return m_scaleHasBeenSet;
}

int64_t VideoDownloadTask::GetDownloadTime() const
{
    return m_downloadTime;
}

void VideoDownloadTask::SetDownloadTime(const int64_t& _downloadTime)
{
    m_downloadTime = _downloadTime;
    m_downloadTimeHasBeenSet = true;
}

bool VideoDownloadTask::DownloadTimeHasBeenSet() const
{
    return m_downloadTimeHasBeenSet;
}

int64_t VideoDownloadTask::GetVideoSize() const
{
    return m_videoSize;
}

void VideoDownloadTask::SetVideoSize(const int64_t& _videoSize)
{
    m_videoSize = _videoSize;
    m_videoSizeHasBeenSet = true;
}

bool VideoDownloadTask::VideoSizeHasBeenSet() const
{
    return m_videoSizeHasBeenSet;
}

string VideoDownloadTask::GetStartTime() const
{
    return m_startTime;
}

void VideoDownloadTask::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool VideoDownloadTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string VideoDownloadTask::GetEndTime() const
{
    return m_endTime;
}

void VideoDownloadTask::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool VideoDownloadTask::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string VideoDownloadTask::GetFileDownloadUrl() const
{
    return m_fileDownloadUrl;
}

void VideoDownloadTask::SetFileDownloadUrl(const string& _fileDownloadUrl)
{
    m_fileDownloadUrl = _fileDownloadUrl;
    m_fileDownloadUrlHasBeenSet = true;
}

bool VideoDownloadTask::FileDownloadUrlHasBeenSet() const
{
    return m_fileDownloadUrlHasBeenSet;
}

string VideoDownloadTask::GetFailedReason() const
{
    return m_failedReason;
}

void VideoDownloadTask::SetFailedReason(const string& _failedReason)
{
    m_failedReason = _failedReason;
    m_failedReasonHasBeenSet = true;
}

bool VideoDownloadTask::FailedReasonHasBeenSet() const
{
    return m_failedReasonHasBeenSet;
}

int64_t VideoDownloadTask::GetExpire() const
{
    return m_expire;
}

void VideoDownloadTask::SetExpire(const int64_t& _expire)
{
    m_expire = _expire;
    m_expireHasBeenSet = true;
}

bool VideoDownloadTask::ExpireHasBeenSet() const
{
    return m_expireHasBeenSet;
}

string VideoDownloadTask::GetPreviewUrl() const
{
    return m_previewUrl;
}

void VideoDownloadTask::SetPreviewUrl(const string& _previewUrl)
{
    m_previewUrl = _previewUrl;
    m_previewUrlHasBeenSet = true;
}

bool VideoDownloadTask::PreviewUrlHasBeenSet() const
{
    return m_previewUrlHasBeenSet;
}

