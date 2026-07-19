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

#include <tencentcloud/chdfs/v20201112/model/ModifyTrashConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

ModifyTrashConfigRequest::ModifyTrashConfigRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_reservedDaysHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyTrashConfigRequest::ToJsonString() const
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

    if (m_reservedDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reservedDays, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTrashConfigRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void ModifyTrashConfigRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool ModifyTrashConfigRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

uint64_t ModifyTrashConfigRequest::GetReservedDays() const
{
    return m_reservedDays;
}

void ModifyTrashConfigRequest::SetReservedDays(const uint64_t& _reservedDays)
{
    m_reservedDays = _reservedDays;
    m_reservedDaysHasBeenSet = true;
}

bool ModifyTrashConfigRequest::ReservedDaysHasBeenSet() const
{
    return m_reservedDaysHasBeenSet;
}

uint64_t ModifyTrashConfigRequest::GetStatus() const
{
    return m_status;
}

void ModifyTrashConfigRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyTrashConfigRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


