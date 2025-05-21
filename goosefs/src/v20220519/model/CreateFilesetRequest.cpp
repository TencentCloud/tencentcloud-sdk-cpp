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

#include <tencentcloud/goosefs/v20220519/model/CreateFilesetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

CreateFilesetRequest::CreateFilesetRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_fsetNameHasBeenSet(false),
    m_fsetDirHasBeenSet(false),
    m_quotaSizeLimitHasBeenSet(false),
    m_quotaFilesLimitHasBeenSet(false),
    m_auditStateHasBeenSet(false)
{
}

string CreateFilesetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_fsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_fsetDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsetDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fsetDir.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaSizeLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaSizeLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quotaSizeLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaFilesLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaFilesLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quotaFilesLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_auditStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_auditState.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFilesetRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void CreateFilesetRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool CreateFilesetRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string CreateFilesetRequest::GetFsetName() const
{
    return m_fsetName;
}

void CreateFilesetRequest::SetFsetName(const string& _fsetName)
{
    m_fsetName = _fsetName;
    m_fsetNameHasBeenSet = true;
}

bool CreateFilesetRequest::FsetNameHasBeenSet() const
{
    return m_fsetNameHasBeenSet;
}

string CreateFilesetRequest::GetFsetDir() const
{
    return m_fsetDir;
}

void CreateFilesetRequest::SetFsetDir(const string& _fsetDir)
{
    m_fsetDir = _fsetDir;
    m_fsetDirHasBeenSet = true;
}

bool CreateFilesetRequest::FsetDirHasBeenSet() const
{
    return m_fsetDirHasBeenSet;
}

string CreateFilesetRequest::GetQuotaSizeLimit() const
{
    return m_quotaSizeLimit;
}

void CreateFilesetRequest::SetQuotaSizeLimit(const string& _quotaSizeLimit)
{
    m_quotaSizeLimit = _quotaSizeLimit;
    m_quotaSizeLimitHasBeenSet = true;
}

bool CreateFilesetRequest::QuotaSizeLimitHasBeenSet() const
{
    return m_quotaSizeLimitHasBeenSet;
}

string CreateFilesetRequest::GetQuotaFilesLimit() const
{
    return m_quotaFilesLimit;
}

void CreateFilesetRequest::SetQuotaFilesLimit(const string& _quotaFilesLimit)
{
    m_quotaFilesLimit = _quotaFilesLimit;
    m_quotaFilesLimitHasBeenSet = true;
}

bool CreateFilesetRequest::QuotaFilesLimitHasBeenSet() const
{
    return m_quotaFilesLimitHasBeenSet;
}

string CreateFilesetRequest::GetAuditState() const
{
    return m_auditState;
}

void CreateFilesetRequest::SetAuditState(const string& _auditState)
{
    m_auditState = _auditState;
    m_auditStateHasBeenSet = true;
}

bool CreateFilesetRequest::AuditStateHasBeenSet() const
{
    return m_auditStateHasBeenSet;
}


