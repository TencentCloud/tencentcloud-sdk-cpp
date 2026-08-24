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

#include <tencentcloud/bdrc/v20260330/model/BackupPlan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

BackupPlan::BackupPlan() :
    m_instanceIdHasBeenSet(false),
    m_autoBackupPolicyIdHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_backupCountHasBeenSet(false),
    m_lastTriggerTimeHasBeenSet(false),
    m_lastTriggerErrorHasBeenSet(false)
{
}

CoreInternalOutcome BackupPlan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AutoBackupPolicyId") && !value["AutoBackupPolicyId"].IsNull())
    {
        if (!value["AutoBackupPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.AutoBackupPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupPolicyId = string(value["AutoBackupPolicyId"].GetString());
        m_autoBackupPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("BackupCount") && !value["BackupCount"].IsNull())
    {
        if (!value["BackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.BackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupCount = value["BackupCount"].GetUint64();
        m_backupCountHasBeenSet = true;
    }

    if (value.HasMember("LastTriggerTime") && !value["LastTriggerTime"].IsNull())
    {
        if (!value["LastTriggerTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.LastTriggerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTriggerTime = string(value["LastTriggerTime"].GetString());
        m_lastTriggerTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTriggerError") && !value["LastTriggerError"].IsNull())
    {
        if (!value["LastTriggerError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.LastTriggerError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTriggerError = string(value["LastTriggerError"].GetString());
        m_lastTriggerErrorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupPlan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoBackupPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoBackupPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_backupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupCount, allocator);
    }

    if (m_lastTriggerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTriggerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTriggerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTriggerErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTriggerError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTriggerError.c_str(), allocator).Move(), allocator);
    }

}


string BackupPlan::GetInstanceId() const
{
    return m_instanceId;
}

void BackupPlan::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BackupPlan::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string BackupPlan::GetAutoBackupPolicyId() const
{
    return m_autoBackupPolicyId;
}

void BackupPlan::SetAutoBackupPolicyId(const string& _autoBackupPolicyId)
{
    m_autoBackupPolicyId = _autoBackupPolicyId;
    m_autoBackupPolicyIdHasBeenSet = true;
}

bool BackupPlan::AutoBackupPolicyIdHasBeenSet() const
{
    return m_autoBackupPolicyIdHasBeenSet;
}

string BackupPlan::GetModifyTime() const
{
    return m_modifyTime;
}

void BackupPlan::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool BackupPlan::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string BackupPlan::GetCreateTime() const
{
    return m_createTime;
}

void BackupPlan::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BackupPlan::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t BackupPlan::GetAppId() const
{
    return m_appId;
}

void BackupPlan::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool BackupPlan::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

uint64_t BackupPlan::GetBackupCount() const
{
    return m_backupCount;
}

void BackupPlan::SetBackupCount(const uint64_t& _backupCount)
{
    m_backupCount = _backupCount;
    m_backupCountHasBeenSet = true;
}

bool BackupPlan::BackupCountHasBeenSet() const
{
    return m_backupCountHasBeenSet;
}

string BackupPlan::GetLastTriggerTime() const
{
    return m_lastTriggerTime;
}

void BackupPlan::SetLastTriggerTime(const string& _lastTriggerTime)
{
    m_lastTriggerTime = _lastTriggerTime;
    m_lastTriggerTimeHasBeenSet = true;
}

bool BackupPlan::LastTriggerTimeHasBeenSet() const
{
    return m_lastTriggerTimeHasBeenSet;
}

string BackupPlan::GetLastTriggerError() const
{
    return m_lastTriggerError;
}

void BackupPlan::SetLastTriggerError(const string& _lastTriggerError)
{
    m_lastTriggerError = _lastTriggerError;
    m_lastTriggerErrorHasBeenSet = true;
}

bool BackupPlan::LastTriggerErrorHasBeenSet() const
{
    return m_lastTriggerErrorHasBeenSet;
}

