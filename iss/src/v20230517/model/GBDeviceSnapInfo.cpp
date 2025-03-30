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

#include <tencentcloud/iss/v20230517/model/GBDeviceSnapInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

GBDeviceSnapInfo::GBDeviceSnapInfo() :
    m_fileNameHasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_imageSizeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_receivedTimeHasBeenSet(false),
    m_previewUrlHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

CoreInternalOutcome GBDeviceSnapInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GBDeviceSnapInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("DownloadUrl") && !value["DownloadUrl"].IsNull())
    {
        if (!value["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GBDeviceSnapInfo.DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(value["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (value.HasMember("ImageSize") && !value["ImageSize"].IsNull())
    {
        if (!value["ImageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GBDeviceSnapInfo.ImageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageSize = value["ImageSize"].GetInt64();
        m_imageSizeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GBDeviceSnapInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ReceivedTime") && !value["ReceivedTime"].IsNull())
    {
        if (!value["ReceivedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GBDeviceSnapInfo.ReceivedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receivedTime = string(value["ReceivedTime"].GetString());
        m_receivedTimeHasBeenSet = true;
    }

    if (value.HasMember("PreviewUrl") && !value["PreviewUrl"].IsNull())
    {
        if (!value["PreviewUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GBDeviceSnapInfo.PreviewUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewUrl = string(value["PreviewUrl"].GetString());
        m_previewUrlHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GBDeviceSnapInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GBDeviceSnapInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageSize, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_receivedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceivedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receivedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_previewUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

}


string GBDeviceSnapInfo::GetFileName() const
{
    return m_fileName;
}

void GBDeviceSnapInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool GBDeviceSnapInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string GBDeviceSnapInfo::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void GBDeviceSnapInfo::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool GBDeviceSnapInfo::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

int64_t GBDeviceSnapInfo::GetImageSize() const
{
    return m_imageSize;
}

void GBDeviceSnapInfo::SetImageSize(const int64_t& _imageSize)
{
    m_imageSize = _imageSize;
    m_imageSizeHasBeenSet = true;
}

bool GBDeviceSnapInfo::ImageSizeHasBeenSet() const
{
    return m_imageSizeHasBeenSet;
}

string GBDeviceSnapInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void GBDeviceSnapInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool GBDeviceSnapInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string GBDeviceSnapInfo::GetReceivedTime() const
{
    return m_receivedTime;
}

void GBDeviceSnapInfo::SetReceivedTime(const string& _receivedTime)
{
    m_receivedTime = _receivedTime;
    m_receivedTimeHasBeenSet = true;
}

bool GBDeviceSnapInfo::ReceivedTimeHasBeenSet() const
{
    return m_receivedTimeHasBeenSet;
}

string GBDeviceSnapInfo::GetPreviewUrl() const
{
    return m_previewUrl;
}

void GBDeviceSnapInfo::SetPreviewUrl(const string& _previewUrl)
{
    m_previewUrl = _previewUrl;
    m_previewUrlHasBeenSet = true;
}

bool GBDeviceSnapInfo::PreviewUrlHasBeenSet() const
{
    return m_previewUrlHasBeenSet;
}

string GBDeviceSnapInfo::GetSessionId() const
{
    return m_sessionId;
}

void GBDeviceSnapInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool GBDeviceSnapInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

