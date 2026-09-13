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

#include <tencentcloud/trtc/v20190722/model/CreateAudioModerationSyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

CreateAudioModerationSyncRequest::CreateAudioModerationSyncRequest() :
    m_sdkappidHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_dataIdHasBeenSet(false),
    m_fileFormatHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_fileUrlHasBeenSet(false)
{
}

string CreateAudioModerationSyncRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkappidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sdkappid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkappid, allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateAudioModerationSyncRequest::GetSdkappid() const
{
    return m_sdkappid;
}

void CreateAudioModerationSyncRequest::SetSdkappid(const int64_t& _sdkappid)
{
    m_sdkappid = _sdkappid;
    m_sdkappidHasBeenSet = true;
}

bool CreateAudioModerationSyncRequest::SdkappidHasBeenSet() const
{
    return m_sdkappidHasBeenSet;
}

string CreateAudioModerationSyncRequest::GetBizType() const
{
    return m_bizType;
}

void CreateAudioModerationSyncRequest::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool CreateAudioModerationSyncRequest::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string CreateAudioModerationSyncRequest::GetDataId() const
{
    return m_dataId;
}

void CreateAudioModerationSyncRequest::SetDataId(const string& _dataId)
{
    m_dataId = _dataId;
    m_dataIdHasBeenSet = true;
}

bool CreateAudioModerationSyncRequest::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string CreateAudioModerationSyncRequest::GetFileFormat() const
{
    return m_fileFormat;
}

void CreateAudioModerationSyncRequest::SetFileFormat(const string& _fileFormat)
{
    m_fileFormat = _fileFormat;
    m_fileFormatHasBeenSet = true;
}

bool CreateAudioModerationSyncRequest::FileFormatHasBeenSet() const
{
    return m_fileFormatHasBeenSet;
}

string CreateAudioModerationSyncRequest::GetFileName() const
{
    return m_fileName;
}

void CreateAudioModerationSyncRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CreateAudioModerationSyncRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string CreateAudioModerationSyncRequest::GetFileContent() const
{
    return m_fileContent;
}

void CreateAudioModerationSyncRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool CreateAudioModerationSyncRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string CreateAudioModerationSyncRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void CreateAudioModerationSyncRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool CreateAudioModerationSyncRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}


