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

#include <tencentcloud/dbs/v20211108/model/ResumeBackupPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

ResumeBackupPlanRequest::ResumeBackupPlanRequest() :
    m_backupPlanIdHasBeenSet(false),
    m_backupNowHasBeenSet(false)
{
}

string ResumeBackupPlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_backupPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupPlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupNow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupNow, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResumeBackupPlanRequest::GetBackupPlanId() const
{
    return m_backupPlanId;
}

void ResumeBackupPlanRequest::SetBackupPlanId(const string& _backupPlanId)
{
    m_backupPlanId = _backupPlanId;
    m_backupPlanIdHasBeenSet = true;
}

bool ResumeBackupPlanRequest::BackupPlanIdHasBeenSet() const
{
    return m_backupPlanIdHasBeenSet;
}

int64_t ResumeBackupPlanRequest::GetBackupNow() const
{
    return m_backupNow;
}

void ResumeBackupPlanRequest::SetBackupNow(const int64_t& _backupNow)
{
    m_backupNow = _backupNow;
    m_backupNowHasBeenSet = true;
}

bool ResumeBackupPlanRequest::BackupNowHasBeenSet() const
{
    return m_backupNowHasBeenSet;
}


