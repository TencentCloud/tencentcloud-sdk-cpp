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

#include <tencentcloud/csip/v20221121/model/ModifyDspmBackupSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyDspmBackupSettingRequest::ModifyDspmBackupSettingRequest() :
    m_memberIdHasBeenSet(false),
    m_backupLogSaveTimeHasBeenSet(false),
    m_restoreLogSaveTimeHasBeenSet(false),
    m_logMaxSaveTimeHasBeenSet(false),
    m_onlineLogMaxSaveTimeHasBeenSet(false)
{
}

string ModifyDspmBackupSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupLogSaveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupLogSaveTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupLogSaveTime, allocator);
    }

    if (m_restoreLogSaveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreLogSaveTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_restoreLogSaveTime, allocator);
    }

    if (m_logMaxSaveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogMaxSaveTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logMaxSaveTime, allocator);
    }

    if (m_onlineLogMaxSaveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineLogMaxSaveTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlineLogMaxSaveTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyDspmBackupSettingRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyDspmBackupSettingRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyDspmBackupSettingRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

int64_t ModifyDspmBackupSettingRequest::GetBackupLogSaveTime() const
{
    return m_backupLogSaveTime;
}

void ModifyDspmBackupSettingRequest::SetBackupLogSaveTime(const int64_t& _backupLogSaveTime)
{
    m_backupLogSaveTime = _backupLogSaveTime;
    m_backupLogSaveTimeHasBeenSet = true;
}

bool ModifyDspmBackupSettingRequest::BackupLogSaveTimeHasBeenSet() const
{
    return m_backupLogSaveTimeHasBeenSet;
}

int64_t ModifyDspmBackupSettingRequest::GetRestoreLogSaveTime() const
{
    return m_restoreLogSaveTime;
}

void ModifyDspmBackupSettingRequest::SetRestoreLogSaveTime(const int64_t& _restoreLogSaveTime)
{
    m_restoreLogSaveTime = _restoreLogSaveTime;
    m_restoreLogSaveTimeHasBeenSet = true;
}

bool ModifyDspmBackupSettingRequest::RestoreLogSaveTimeHasBeenSet() const
{
    return m_restoreLogSaveTimeHasBeenSet;
}

int64_t ModifyDspmBackupSettingRequest::GetLogMaxSaveTime() const
{
    return m_logMaxSaveTime;
}

void ModifyDspmBackupSettingRequest::SetLogMaxSaveTime(const int64_t& _logMaxSaveTime)
{
    m_logMaxSaveTime = _logMaxSaveTime;
    m_logMaxSaveTimeHasBeenSet = true;
}

bool ModifyDspmBackupSettingRequest::LogMaxSaveTimeHasBeenSet() const
{
    return m_logMaxSaveTimeHasBeenSet;
}

int64_t ModifyDspmBackupSettingRequest::GetOnlineLogMaxSaveTime() const
{
    return m_onlineLogMaxSaveTime;
}

void ModifyDspmBackupSettingRequest::SetOnlineLogMaxSaveTime(const int64_t& _onlineLogMaxSaveTime)
{
    m_onlineLogMaxSaveTime = _onlineLogMaxSaveTime;
    m_onlineLogMaxSaveTimeHasBeenSet = true;
}

bool ModifyDspmBackupSettingRequest::OnlineLogMaxSaveTimeHasBeenSet() const
{
    return m_onlineLogMaxSaveTimeHasBeenSet;
}


