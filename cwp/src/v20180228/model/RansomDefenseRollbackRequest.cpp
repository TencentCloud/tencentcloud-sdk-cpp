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

#include <tencentcloud/cwp/v20180228/model/RansomDefenseRollbackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RansomDefenseRollbackRequest::RansomDefenseRollbackRequest() :
    m_backupTimeHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_diskInfoHasBeenSet(false)
{
}

string RansomDefenseRollbackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_diskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RansomDefenseRollbackRequest::GetBackupTime() const
{
    return m_backupTime;
}

void RansomDefenseRollbackRequest::SetBackupTime(const string& _backupTime)
{
    m_backupTime = _backupTime;
    m_backupTimeHasBeenSet = true;
}

bool RansomDefenseRollbackRequest::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

string RansomDefenseRollbackRequest::GetQuuid() const
{
    return m_quuid;
}

void RansomDefenseRollbackRequest::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool RansomDefenseRollbackRequest::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string RansomDefenseRollbackRequest::GetDiskInfo() const
{
    return m_diskInfo;
}

void RansomDefenseRollbackRequest::SetDiskInfo(const string& _diskInfo)
{
    m_diskInfo = _diskInfo;
    m_diskInfoHasBeenSet = true;
}

bool RansomDefenseRollbackRequest::DiskInfoHasBeenSet() const
{
    return m_diskInfoHasBeenSet;
}


