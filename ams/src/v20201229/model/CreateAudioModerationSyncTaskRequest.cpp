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

#include <tencentcloud/ams/v20201229/model/CreateAudioModerationSyncTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ams::V20201229::Model;
using namespace std;

CreateAudioModerationSyncTaskRequest::CreateAudioModerationSyncTaskRequest() :
    m_bizTypeHasBeenSet(false),
    m_dataIdHasBeenSet(false),
    m_fileFormatHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_fileUrlHasBeenSet(false)
{
}

string CreateAudioModerationSyncTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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


string CreateAudioModerationSyncTaskRequest::GetBizType() const
{
    return m_bizType;
}

void CreateAudioModerationSyncTaskRequest::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool CreateAudioModerationSyncTaskRequest::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string CreateAudioModerationSyncTaskRequest::GetDataId() const
{
    return m_dataId;
}

void CreateAudioModerationSyncTaskRequest::SetDataId(const string& _dataId)
{
    m_dataId = _dataId;
    m_dataIdHasBeenSet = true;
}

bool CreateAudioModerationSyncTaskRequest::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string CreateAudioModerationSyncTaskRequest::GetFileFormat() const
{
    return m_fileFormat;
}

void CreateAudioModerationSyncTaskRequest::SetFileFormat(const string& _fileFormat)
{
    m_fileFormat = _fileFormat;
    m_fileFormatHasBeenSet = true;
}

bool CreateAudioModerationSyncTaskRequest::FileFormatHasBeenSet() const
{
    return m_fileFormatHasBeenSet;
}

string CreateAudioModerationSyncTaskRequest::GetName() const
{
    return m_name;
}

void CreateAudioModerationSyncTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAudioModerationSyncTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAudioModerationSyncTaskRequest::GetFileContent() const
{
    return m_fileContent;
}

void CreateAudioModerationSyncTaskRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool CreateAudioModerationSyncTaskRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string CreateAudioModerationSyncTaskRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void CreateAudioModerationSyncTaskRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool CreateAudioModerationSyncTaskRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}


