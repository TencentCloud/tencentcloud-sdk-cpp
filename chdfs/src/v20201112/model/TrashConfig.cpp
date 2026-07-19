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

#include <tencentcloud/chdfs/v20201112/model/TrashConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

TrashConfig::TrashConfig() :
    m_fileSystemIdHasBeenSet(false),
    m_reservedDaysHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

CoreInternalOutcome TrashConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrashConfig.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("ReservedDays") && !value["ReservedDays"].IsNull())
    {
        if (!value["ReservedDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrashConfig.ReservedDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reservedDays = value["ReservedDays"].GetUint64();
        m_reservedDaysHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrashConfig.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrashConfig.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrashConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedDays, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

}


string TrashConfig::GetFileSystemId() const
{
    return m_fileSystemId;
}

void TrashConfig::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool TrashConfig::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

uint64_t TrashConfig::GetReservedDays() const
{
    return m_reservedDays;
}

void TrashConfig::SetReservedDays(const uint64_t& _reservedDays)
{
    m_reservedDays = _reservedDays;
    m_reservedDaysHasBeenSet = true;
}

bool TrashConfig::ReservedDaysHasBeenSet() const
{
    return m_reservedDaysHasBeenSet;
}

uint64_t TrashConfig::GetStatus() const
{
    return m_status;
}

void TrashConfig::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TrashConfig::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TrashConfig::GetPath() const
{
    return m_path;
}

void TrashConfig::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool TrashConfig::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

