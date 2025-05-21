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

#include <tencentcloud/goosefs/v20220519/model/UpdateFilesetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

UpdateFilesetRequest::UpdateFilesetRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_fsetIdHasBeenSet(false),
    m_quotaSizeLimitHasBeenSet(false),
    m_quotaFilesLimitHasBeenSet(false),
    m_auditStateHasBeenSet(false)
{
}

string UpdateFilesetRequest::ToJsonString() const
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

    if (m_fsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fsetId.c_str(), allocator).Move(), allocator);
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


string UpdateFilesetRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void UpdateFilesetRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool UpdateFilesetRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string UpdateFilesetRequest::GetFsetId() const
{
    return m_fsetId;
}

void UpdateFilesetRequest::SetFsetId(const string& _fsetId)
{
    m_fsetId = _fsetId;
    m_fsetIdHasBeenSet = true;
}

bool UpdateFilesetRequest::FsetIdHasBeenSet() const
{
    return m_fsetIdHasBeenSet;
}

string UpdateFilesetRequest::GetQuotaSizeLimit() const
{
    return m_quotaSizeLimit;
}

void UpdateFilesetRequest::SetQuotaSizeLimit(const string& _quotaSizeLimit)
{
    m_quotaSizeLimit = _quotaSizeLimit;
    m_quotaSizeLimitHasBeenSet = true;
}

bool UpdateFilesetRequest::QuotaSizeLimitHasBeenSet() const
{
    return m_quotaSizeLimitHasBeenSet;
}

string UpdateFilesetRequest::GetQuotaFilesLimit() const
{
    return m_quotaFilesLimit;
}

void UpdateFilesetRequest::SetQuotaFilesLimit(const string& _quotaFilesLimit)
{
    m_quotaFilesLimit = _quotaFilesLimit;
    m_quotaFilesLimitHasBeenSet = true;
}

bool UpdateFilesetRequest::QuotaFilesLimitHasBeenSet() const
{
    return m_quotaFilesLimitHasBeenSet;
}

string UpdateFilesetRequest::GetAuditState() const
{
    return m_auditState;
}

void UpdateFilesetRequest::SetAuditState(const string& _auditState)
{
    m_auditState = _auditState;
    m_auditStateHasBeenSet = true;
}

bool UpdateFilesetRequest::AuditStateHasBeenSet() const
{
    return m_auditStateHasBeenSet;
}


