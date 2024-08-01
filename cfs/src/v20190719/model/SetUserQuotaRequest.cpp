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

#include <tencentcloud/cfs/v20190719/model/SetUserQuotaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

SetUserQuotaRequest::SetUserQuotaRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_capacityHardLimitHasBeenSet(false),
    m_fileHardLimitHasBeenSet(false),
    m_directoryPathHasBeenSet(false)
{
}

string SetUserQuotaRequest::ToJsonString() const
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

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityHardLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityHardLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_capacityHardLimit, allocator);
    }

    if (m_fileHardLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileHardLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileHardLimit, allocator);
    }

    if (m_directoryPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectoryPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_directoryPath.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetUserQuotaRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void SetUserQuotaRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool SetUserQuotaRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string SetUserQuotaRequest::GetUserType() const
{
    return m_userType;
}

void SetUserQuotaRequest::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool SetUserQuotaRequest::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string SetUserQuotaRequest::GetUserId() const
{
    return m_userId;
}

void SetUserQuotaRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SetUserQuotaRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t SetUserQuotaRequest::GetCapacityHardLimit() const
{
    return m_capacityHardLimit;
}

void SetUserQuotaRequest::SetCapacityHardLimit(const uint64_t& _capacityHardLimit)
{
    m_capacityHardLimit = _capacityHardLimit;
    m_capacityHardLimitHasBeenSet = true;
}

bool SetUserQuotaRequest::CapacityHardLimitHasBeenSet() const
{
    return m_capacityHardLimitHasBeenSet;
}

uint64_t SetUserQuotaRequest::GetFileHardLimit() const
{
    return m_fileHardLimit;
}

void SetUserQuotaRequest::SetFileHardLimit(const uint64_t& _fileHardLimit)
{
    m_fileHardLimit = _fileHardLimit;
    m_fileHardLimitHasBeenSet = true;
}

bool SetUserQuotaRequest::FileHardLimitHasBeenSet() const
{
    return m_fileHardLimitHasBeenSet;
}

string SetUserQuotaRequest::GetDirectoryPath() const
{
    return m_directoryPath;
}

void SetUserQuotaRequest::SetDirectoryPath(const string& _directoryPath)
{
    m_directoryPath = _directoryPath;
    m_directoryPathHasBeenSet = true;
}

bool SetUserQuotaRequest::DirectoryPathHasBeenSet() const
{
    return m_directoryPathHasBeenSet;
}


