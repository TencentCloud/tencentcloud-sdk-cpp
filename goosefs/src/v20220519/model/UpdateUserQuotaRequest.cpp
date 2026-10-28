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

#include <tencentcloud/goosefs/v20220519/model/UpdateUserQuotaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

UpdateUserQuotaRequest::UpdateUserQuotaRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_quotaIdHasBeenSet(false),
    m_quotaSizeLimitHasBeenSet(false),
    m_quotaFilesLimitHasBeenSet(false)
{
}

string UpdateUserQuotaRequest::ToJsonString() const
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

    if (m_quotaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quotaId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateUserQuotaRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void UpdateUserQuotaRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool UpdateUserQuotaRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string UpdateUserQuotaRequest::GetQuotaId() const
{
    return m_quotaId;
}

void UpdateUserQuotaRequest::SetQuotaId(const string& _quotaId)
{
    m_quotaId = _quotaId;
    m_quotaIdHasBeenSet = true;
}

bool UpdateUserQuotaRequest::QuotaIdHasBeenSet() const
{
    return m_quotaIdHasBeenSet;
}

string UpdateUserQuotaRequest::GetQuotaSizeLimit() const
{
    return m_quotaSizeLimit;
}

void UpdateUserQuotaRequest::SetQuotaSizeLimit(const string& _quotaSizeLimit)
{
    m_quotaSizeLimit = _quotaSizeLimit;
    m_quotaSizeLimitHasBeenSet = true;
}

bool UpdateUserQuotaRequest::QuotaSizeLimitHasBeenSet() const
{
    return m_quotaSizeLimitHasBeenSet;
}

string UpdateUserQuotaRequest::GetQuotaFilesLimit() const
{
    return m_quotaFilesLimit;
}

void UpdateUserQuotaRequest::SetQuotaFilesLimit(const string& _quotaFilesLimit)
{
    m_quotaFilesLimit = _quotaFilesLimit;
    m_quotaFilesLimitHasBeenSet = true;
}

bool UpdateUserQuotaRequest::QuotaFilesLimitHasBeenSet() const
{
    return m_quotaFilesLimitHasBeenSet;
}


