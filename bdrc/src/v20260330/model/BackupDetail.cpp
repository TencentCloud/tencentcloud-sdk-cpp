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

#include <tencentcloud/bdrc/v20260330/model/BackupDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

BackupDetail::BackupDetail() :
    m_backupIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_autoBackupPolicyIdHasBeenSet(false),
    m_backupBindDiskHasBeenSet(false)
{
}

CoreInternalOutcome BackupDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupId") && !value["BackupId"].IsNull())
    {
        if (!value["BackupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDetail.BackupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupId = string(value["BackupId"].GetString());
        m_backupIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoBackupPolicyId") && !value["AutoBackupPolicyId"].IsNull())
    {
        if (!value["AutoBackupPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDetail.AutoBackupPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupPolicyId = string(value["AutoBackupPolicyId"].GetString());
        m_autoBackupPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("BackupBindDisk") && !value["BackupBindDisk"].IsNull())
    {
        if (!value["BackupBindDisk"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupDetail.BackupBindDisk` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupBindDisk"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApplyDisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backupBindDisk.push_back(item);
        }
        m_backupBindDiskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoBackupPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoBackupPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupBindDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupBindDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backupBindDisk.begin(); itr != m_backupBindDisk.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BackupDetail::GetBackupId() const
{
    return m_backupId;
}

void BackupDetail::SetBackupId(const string& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool BackupDetail::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string BackupDetail::GetInstanceId() const
{
    return m_instanceId;
}

void BackupDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BackupDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string BackupDetail::GetCreateTime() const
{
    return m_createTime;
}

void BackupDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BackupDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BackupDetail::GetAutoBackupPolicyId() const
{
    return m_autoBackupPolicyId;
}

void BackupDetail::SetAutoBackupPolicyId(const string& _autoBackupPolicyId)
{
    m_autoBackupPolicyId = _autoBackupPolicyId;
    m_autoBackupPolicyIdHasBeenSet = true;
}

bool BackupDetail::AutoBackupPolicyIdHasBeenSet() const
{
    return m_autoBackupPolicyIdHasBeenSet;
}

vector<ApplyDisk> BackupDetail::GetBackupBindDisk() const
{
    return m_backupBindDisk;
}

void BackupDetail::SetBackupBindDisk(const vector<ApplyDisk>& _backupBindDisk)
{
    m_backupBindDisk = _backupBindDisk;
    m_backupBindDiskHasBeenSet = true;
}

bool BackupDetail::BackupBindDiskHasBeenSet() const
{
    return m_backupBindDiskHasBeenSet;
}

