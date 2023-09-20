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

#include <tencentcloud/cynosdb/v20190107/model/ModifyBackupConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyBackupConfigRequest::ModifyBackupConfigRequest() :
    m_clusterIdHasBeenSet(false),
    m_backupTimeBegHasBeenSet(false),
    m_backupTimeEndHasBeenSet(false),
    m_reserveDurationHasBeenSet(false),
    m_backupFreqHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_logicBackupConfigHasBeenSet(false),
    m_deleteAutoLogicBackupHasBeenSet(false)
{
}

string ModifyBackupConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTimeBegHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTimeBeg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupTimeBeg, allocator);
    }

    if (m_backupTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupTimeEnd, allocator);
    }

    if (m_reserveDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reserveDuration, allocator);
    }

    if (m_backupFreqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupFreq";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupFreq.begin(); itr != m_backupFreq.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_logicBackupConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicBackupConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logicBackupConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deleteAutoLogicBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteAutoLogicBackup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteAutoLogicBackup, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBackupConfigRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyBackupConfigRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyBackupConfigRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t ModifyBackupConfigRequest::GetBackupTimeBeg() const
{
    return m_backupTimeBeg;
}

void ModifyBackupConfigRequest::SetBackupTimeBeg(const uint64_t& _backupTimeBeg)
{
    m_backupTimeBeg = _backupTimeBeg;
    m_backupTimeBegHasBeenSet = true;
}

bool ModifyBackupConfigRequest::BackupTimeBegHasBeenSet() const
{
    return m_backupTimeBegHasBeenSet;
}

uint64_t ModifyBackupConfigRequest::GetBackupTimeEnd() const
{
    return m_backupTimeEnd;
}

void ModifyBackupConfigRequest::SetBackupTimeEnd(const uint64_t& _backupTimeEnd)
{
    m_backupTimeEnd = _backupTimeEnd;
    m_backupTimeEndHasBeenSet = true;
}

bool ModifyBackupConfigRequest::BackupTimeEndHasBeenSet() const
{
    return m_backupTimeEndHasBeenSet;
}

uint64_t ModifyBackupConfigRequest::GetReserveDuration() const
{
    return m_reserveDuration;
}

void ModifyBackupConfigRequest::SetReserveDuration(const uint64_t& _reserveDuration)
{
    m_reserveDuration = _reserveDuration;
    m_reserveDurationHasBeenSet = true;
}

bool ModifyBackupConfigRequest::ReserveDurationHasBeenSet() const
{
    return m_reserveDurationHasBeenSet;
}

vector<string> ModifyBackupConfigRequest::GetBackupFreq() const
{
    return m_backupFreq;
}

void ModifyBackupConfigRequest::SetBackupFreq(const vector<string>& _backupFreq)
{
    m_backupFreq = _backupFreq;
    m_backupFreqHasBeenSet = true;
}

bool ModifyBackupConfigRequest::BackupFreqHasBeenSet() const
{
    return m_backupFreqHasBeenSet;
}

string ModifyBackupConfigRequest::GetBackupType() const
{
    return m_backupType;
}

void ModifyBackupConfigRequest::SetBackupType(const string& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool ModifyBackupConfigRequest::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

LogicBackupConfigInfo ModifyBackupConfigRequest::GetLogicBackupConfig() const
{
    return m_logicBackupConfig;
}

void ModifyBackupConfigRequest::SetLogicBackupConfig(const LogicBackupConfigInfo& _logicBackupConfig)
{
    m_logicBackupConfig = _logicBackupConfig;
    m_logicBackupConfigHasBeenSet = true;
}

bool ModifyBackupConfigRequest::LogicBackupConfigHasBeenSet() const
{
    return m_logicBackupConfigHasBeenSet;
}

bool ModifyBackupConfigRequest::GetDeleteAutoLogicBackup() const
{
    return m_deleteAutoLogicBackup;
}

void ModifyBackupConfigRequest::SetDeleteAutoLogicBackup(const bool& _deleteAutoLogicBackup)
{
    m_deleteAutoLogicBackup = _deleteAutoLogicBackup;
    m_deleteAutoLogicBackupHasBeenSet = true;
}

bool ModifyBackupConfigRequest::DeleteAutoLogicBackupHasBeenSet() const
{
    return m_deleteAutoLogicBackupHasBeenSet;
}


