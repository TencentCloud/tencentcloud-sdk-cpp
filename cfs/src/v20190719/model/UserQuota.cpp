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

#include <tencentcloud/cfs/v20190719/model/UserQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

UserQuota::UserQuota() :
    m_userTypeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_capacityHardLimitHasBeenSet(false),
    m_fileHardLimitHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_capacityUsedHasBeenSet(false),
    m_fileUsedHasBeenSet(false),
    m_directoryPathHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome UserQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.UserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userType = string(value["UserType"].GetString());
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("CapacityHardLimit") && !value["CapacityHardLimit"].IsNull())
    {
        if (!value["CapacityHardLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.CapacityHardLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_capacityHardLimit = value["CapacityHardLimit"].GetUint64();
        m_capacityHardLimitHasBeenSet = true;
    }

    if (value.HasMember("FileHardLimit") && !value["FileHardLimit"].IsNull())
    {
        if (!value["FileHardLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.FileHardLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileHardLimit = value["FileHardLimit"].GetUint64();
        m_fileHardLimitHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("CapacityUsed") && !value["CapacityUsed"].IsNull())
    {
        if (!value["CapacityUsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.CapacityUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_capacityUsed = value["CapacityUsed"].GetUint64();
        m_capacityUsedHasBeenSet = true;
    }

    if (value.HasMember("FileUsed") && !value["FileUsed"].IsNull())
    {
        if (!value["FileUsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.FileUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileUsed = value["FileUsed"].GetUint64();
        m_fileUsedHasBeenSet = true;
    }

    if (value.HasMember("DirectoryPath") && !value["DirectoryPath"].IsNull())
    {
        if (!value["DirectoryPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.DirectoryPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directoryPath = string(value["DirectoryPath"].GetString());
        m_directoryPathHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityHardLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityHardLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacityHardLimit, allocator);
    }

    if (m_fileHardLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileHardLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileHardLimit, allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacityUsed, allocator);
    }

    if (m_fileUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileUsed, allocator);
    }

    if (m_directoryPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectoryPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directoryPath.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string UserQuota::GetUserType() const
{
    return m_userType;
}

void UserQuota::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool UserQuota::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string UserQuota::GetUserId() const
{
    return m_userId;
}

void UserQuota::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UserQuota::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t UserQuota::GetCapacityHardLimit() const
{
    return m_capacityHardLimit;
}

void UserQuota::SetCapacityHardLimit(const uint64_t& _capacityHardLimit)
{
    m_capacityHardLimit = _capacityHardLimit;
    m_capacityHardLimitHasBeenSet = true;
}

bool UserQuota::CapacityHardLimitHasBeenSet() const
{
    return m_capacityHardLimitHasBeenSet;
}

uint64_t UserQuota::GetFileHardLimit() const
{
    return m_fileHardLimit;
}

void UserQuota::SetFileHardLimit(const uint64_t& _fileHardLimit)
{
    m_fileHardLimit = _fileHardLimit;
    m_fileHardLimitHasBeenSet = true;
}

bool UserQuota::FileHardLimitHasBeenSet() const
{
    return m_fileHardLimitHasBeenSet;
}

string UserQuota::GetFileSystemId() const
{
    return m_fileSystemId;
}

void UserQuota::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool UserQuota::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

uint64_t UserQuota::GetCapacityUsed() const
{
    return m_capacityUsed;
}

void UserQuota::SetCapacityUsed(const uint64_t& _capacityUsed)
{
    m_capacityUsed = _capacityUsed;
    m_capacityUsedHasBeenSet = true;
}

bool UserQuota::CapacityUsedHasBeenSet() const
{
    return m_capacityUsedHasBeenSet;
}

uint64_t UserQuota::GetFileUsed() const
{
    return m_fileUsed;
}

void UserQuota::SetFileUsed(const uint64_t& _fileUsed)
{
    m_fileUsed = _fileUsed;
    m_fileUsedHasBeenSet = true;
}

bool UserQuota::FileUsedHasBeenSet() const
{
    return m_fileUsedHasBeenSet;
}

string UserQuota::GetDirectoryPath() const
{
    return m_directoryPath;
}

void UserQuota::SetDirectoryPath(const string& _directoryPath)
{
    m_directoryPath = _directoryPath;
    m_directoryPathHasBeenSet = true;
}

bool UserQuota::DirectoryPathHasBeenSet() const
{
    return m_directoryPathHasBeenSet;
}

string UserQuota::GetStatus() const
{
    return m_status;
}

void UserQuota::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UserQuota::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

