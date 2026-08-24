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

#include <tencentcloud/bdrc/v20260330/model/BackupInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

BackupInstance::BackupInstance() :
    m_autoBackupPolicyIdSetHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_latestBackupTimeHasBeenSet(false),
    m_backupGroupIdSetHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_instanceNameHasBeenSet(false)
{
}

CoreInternalOutcome BackupInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoBackupPolicyIdSet") && !value["AutoBackupPolicyIdSet"].IsNull())
    {
        if (!value["AutoBackupPolicyIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupInstance.AutoBackupPolicyIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AutoBackupPolicyIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_autoBackupPolicyIdSet.push_back((*itr).GetString());
        }
        m_autoBackupPolicyIdSetHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInstance.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("LatestBackupTime") && !value["LatestBackupTime"].IsNull())
    {
        if (!value["LatestBackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInstance.LatestBackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestBackupTime = string(value["LatestBackupTime"].GetString());
        m_latestBackupTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupGroupIdSet") && !value["BackupGroupIdSet"].IsNull())
    {
        if (!value["BackupGroupIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupInstance.BackupGroupIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupGroupIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_backupGroupIdSet.push_back((*itr).GetString());
        }
        m_backupGroupIdSetHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInstance.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoBackupPolicyIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupPolicyIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_autoBackupPolicyIdSet.begin(); itr != m_autoBackupPolicyIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_latestBackupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestBackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestBackupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupGroupIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupGroupIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupGroupIdSet.begin(); itr != m_backupGroupIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

}


vector<string> BackupInstance::GetAutoBackupPolicyIdSet() const
{
    return m_autoBackupPolicyIdSet;
}

void BackupInstance::SetAutoBackupPolicyIdSet(const vector<string>& _autoBackupPolicyIdSet)
{
    m_autoBackupPolicyIdSet = _autoBackupPolicyIdSet;
    m_autoBackupPolicyIdSetHasBeenSet = true;
}

bool BackupInstance::AutoBackupPolicyIdSetHasBeenSet() const
{
    return m_autoBackupPolicyIdSetHasBeenSet;
}

string BackupInstance::GetInstanceId() const
{
    return m_instanceId;
}

void BackupInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BackupInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t BackupInstance::GetAppId() const
{
    return m_appId;
}

void BackupInstance::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool BackupInstance::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string BackupInstance::GetLatestBackupTime() const
{
    return m_latestBackupTime;
}

void BackupInstance::SetLatestBackupTime(const string& _latestBackupTime)
{
    m_latestBackupTime = _latestBackupTime;
    m_latestBackupTimeHasBeenSet = true;
}

bool BackupInstance::LatestBackupTimeHasBeenSet() const
{
    return m_latestBackupTimeHasBeenSet;
}

vector<string> BackupInstance::GetBackupGroupIdSet() const
{
    return m_backupGroupIdSet;
}

void BackupInstance::SetBackupGroupIdSet(const vector<string>& _backupGroupIdSet)
{
    m_backupGroupIdSet = _backupGroupIdSet;
    m_backupGroupIdSetHasBeenSet = true;
}

bool BackupInstance::BackupGroupIdSetHasBeenSet() const
{
    return m_backupGroupIdSetHasBeenSet;
}

string BackupInstance::GetModifyTime() const
{
    return m_modifyTime;
}

void BackupInstance::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool BackupInstance::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string BackupInstance::GetCreateTime() const
{
    return m_createTime;
}

void BackupInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BackupInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BackupInstance::GetInstanceName() const
{
    return m_instanceName;
}

void BackupInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool BackupInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

