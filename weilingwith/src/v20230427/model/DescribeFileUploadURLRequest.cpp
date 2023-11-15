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

#include <tencentcloud/weilingwith/v20230427/model/DescribeFileUploadURLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeFileUploadURLRequest::DescribeFileUploadURLRequest() :
    m_workspaceIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_fileMD5HasBeenSet(false),
    m_saveTypeHasBeenSet(false),
    m_fileExpireTimeHasBeenSet(false),
    m_noExpireFlagHasBeenSet(false)
{
}

string DescribeFileUploadURLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMD5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileMD5.c_str(), allocator).Move(), allocator);
    }

    if (m_saveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_saveType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileExpireTime, allocator);
    }

    if (m_noExpireFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoExpireFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_noExpireFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeFileUploadURLRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribeFileUploadURLRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribeFileUploadURLRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string DescribeFileUploadURLRequest::GetFileName() const
{
    return m_fileName;
}

void DescribeFileUploadURLRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DescribeFileUploadURLRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t DescribeFileUploadURLRequest::GetFileSize() const
{
    return m_fileSize;
}

void DescribeFileUploadURLRequest::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool DescribeFileUploadURLRequest::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string DescribeFileUploadURLRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeFileUploadURLRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeFileUploadURLRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

string DescribeFileUploadURLRequest::GetFileMD5() const
{
    return m_fileMD5;
}

void DescribeFileUploadURLRequest::SetFileMD5(const string& _fileMD5)
{
    m_fileMD5 = _fileMD5;
    m_fileMD5HasBeenSet = true;
}

bool DescribeFileUploadURLRequest::FileMD5HasBeenSet() const
{
    return m_fileMD5HasBeenSet;
}

string DescribeFileUploadURLRequest::GetSaveType() const
{
    return m_saveType;
}

void DescribeFileUploadURLRequest::SetSaveType(const string& _saveType)
{
    m_saveType = _saveType;
    m_saveTypeHasBeenSet = true;
}

bool DescribeFileUploadURLRequest::SaveTypeHasBeenSet() const
{
    return m_saveTypeHasBeenSet;
}

int64_t DescribeFileUploadURLRequest::GetFileExpireTime() const
{
    return m_fileExpireTime;
}

void DescribeFileUploadURLRequest::SetFileExpireTime(const int64_t& _fileExpireTime)
{
    m_fileExpireTime = _fileExpireTime;
    m_fileExpireTimeHasBeenSet = true;
}

bool DescribeFileUploadURLRequest::FileExpireTimeHasBeenSet() const
{
    return m_fileExpireTimeHasBeenSet;
}

bool DescribeFileUploadURLRequest::GetNoExpireFlag() const
{
    return m_noExpireFlag;
}

void DescribeFileUploadURLRequest::SetNoExpireFlag(const bool& _noExpireFlag)
{
    m_noExpireFlag = _noExpireFlag;
    m_noExpireFlagHasBeenSet = true;
}

bool DescribeFileUploadURLRequest::NoExpireFlagHasBeenSet() const
{
    return m_noExpireFlagHasBeenSet;
}


