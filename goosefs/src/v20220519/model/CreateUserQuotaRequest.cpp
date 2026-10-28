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

#include <tencentcloud/goosefs/v20220519/model/CreateUserQuotaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

CreateUserQuotaRequest::CreateUserQuotaRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_quotaTypeHasBeenSet(false),
    m_quotaObjectNameHasBeenSet(false),
    m_quotaSizeLimitHasBeenSet(false),
    m_quotaFilesLimitHasBeenSet(false)
{
}

string CreateUserQuotaRequest::ToJsonString() const
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

    if (m_quotaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quotaType.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaObjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaObjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quotaObjectName.c_str(), allocator).Move(), allocator);
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


string CreateUserQuotaRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void CreateUserQuotaRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool CreateUserQuotaRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string CreateUserQuotaRequest::GetQuotaType() const
{
    return m_quotaType;
}

void CreateUserQuotaRequest::SetQuotaType(const string& _quotaType)
{
    m_quotaType = _quotaType;
    m_quotaTypeHasBeenSet = true;
}

bool CreateUserQuotaRequest::QuotaTypeHasBeenSet() const
{
    return m_quotaTypeHasBeenSet;
}

string CreateUserQuotaRequest::GetQuotaObjectName() const
{
    return m_quotaObjectName;
}

void CreateUserQuotaRequest::SetQuotaObjectName(const string& _quotaObjectName)
{
    m_quotaObjectName = _quotaObjectName;
    m_quotaObjectNameHasBeenSet = true;
}

bool CreateUserQuotaRequest::QuotaObjectNameHasBeenSet() const
{
    return m_quotaObjectNameHasBeenSet;
}

string CreateUserQuotaRequest::GetQuotaSizeLimit() const
{
    return m_quotaSizeLimit;
}

void CreateUserQuotaRequest::SetQuotaSizeLimit(const string& _quotaSizeLimit)
{
    m_quotaSizeLimit = _quotaSizeLimit;
    m_quotaSizeLimitHasBeenSet = true;
}

bool CreateUserQuotaRequest::QuotaSizeLimitHasBeenSet() const
{
    return m_quotaSizeLimitHasBeenSet;
}

string CreateUserQuotaRequest::GetQuotaFilesLimit() const
{
    return m_quotaFilesLimit;
}

void CreateUserQuotaRequest::SetQuotaFilesLimit(const string& _quotaFilesLimit)
{
    m_quotaFilesLimit = _quotaFilesLimit;
    m_quotaFilesLimitHasBeenSet = true;
}

bool CreateUserQuotaRequest::QuotaFilesLimitHasBeenSet() const
{
    return m_quotaFilesLimitHasBeenSet;
}


