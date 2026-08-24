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

#include <tencentcloud/bdrc/v20260330/model/BackupGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

BackupGroup::BackupGroup() :
    m_backupGroupIdHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_backupBindDiskHasBeenSet(false),
    m_backupGroupNameHasBeenSet(false),
    m_backupGroupStateHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_isPermanentHasBeenSet(false),
    m_deadlineTimeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceDetailsHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_accountUinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_autoBackupPolicyIdHasBeenSet(false)
{
}

CoreInternalOutcome BackupGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupGroupId") && !value["BackupGroupId"].IsNull())
    {
        if (!value["BackupGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroup.BackupGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupGroupId = string(value["BackupGroupId"].GetString());
        m_backupGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroup.Percent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetUint64();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("BackupBindDisk") && !value["BackupBindDisk"].IsNull())
    {
        if (!value["BackupBindDisk"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupGroup.BackupBindDisk` is not array type"));

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

    if (value.HasMember("BackupGroupName") && !value["BackupGroupName"].IsNull())
    {
        if (!value["BackupGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroup.BackupGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupGroupName = string(value["BackupGroupName"].GetString());
        m_backupGroupNameHasBeenSet = true;
    }

    if (value.HasMember("BackupGroupState") && !value["BackupGroupState"].IsNull())
    {
        if (!value["BackupGroupState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroup.BackupGroupState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupGroupState = string(value["BackupGroupState"].GetString());
        m_backupGroupStateHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroup.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroup.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("IsPermanent") && !value["IsPermanent"].IsNull())
    {
        if (!value["IsPermanent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroup.IsPermanent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPermanent = value["IsPermanent"].GetBool();
        m_isPermanentHasBeenSet = true;
    }

    if (value.HasMember("DeadlineTime") && !value["DeadlineTime"].IsNull())
    {
        if (!value["DeadlineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroup.DeadlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineTime = string(value["DeadlineTime"].GetString());
        m_deadlineTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroup.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceDetails") && !value["InstanceDetails"].IsNull())
    {
        if (!value["InstanceDetails"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroup.InstanceDetails` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceDetails = string(value["InstanceDetails"].GetString());
        m_instanceDetailsHasBeenSet = true;
    }

    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroup.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("AccountUin") && !value["AccountUin"].IsNull())
    {
        if (!value["AccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroup.AccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountUin = string(value["AccountUin"].GetString());
        m_accountUinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroup.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("AutoBackupPolicyId") && !value["AutoBackupPolicyId"].IsNull())
    {
        if (!value["AutoBackupPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroup.AutoBackupPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupPolicyId = string(value["AutoBackupPolicyId"].GetString());
        m_autoBackupPolicyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
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

    if (m_backupGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupGroupStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupGroupState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupGroupState.c_str(), allocator).Move(), allocator);
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

    if (m_isPermanentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPermanent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPermanent, allocator);
    }

    if (m_deadlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceDetails.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_autoBackupPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoBackupPolicyId.c_str(), allocator).Move(), allocator);
    }

}


string BackupGroup::GetBackupGroupId() const
{
    return m_backupGroupId;
}

void BackupGroup::SetBackupGroupId(const string& _backupGroupId)
{
    m_backupGroupId = _backupGroupId;
    m_backupGroupIdHasBeenSet = true;
}

bool BackupGroup::BackupGroupIdHasBeenSet() const
{
    return m_backupGroupIdHasBeenSet;
}

uint64_t BackupGroup::GetPercent() const
{
    return m_percent;
}

void BackupGroup::SetPercent(const uint64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool BackupGroup::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

vector<ApplyDisk> BackupGroup::GetBackupBindDisk() const
{
    return m_backupBindDisk;
}

void BackupGroup::SetBackupBindDisk(const vector<ApplyDisk>& _backupBindDisk)
{
    m_backupBindDisk = _backupBindDisk;
    m_backupBindDiskHasBeenSet = true;
}

bool BackupGroup::BackupBindDiskHasBeenSet() const
{
    return m_backupBindDiskHasBeenSet;
}

string BackupGroup::GetBackupGroupName() const
{
    return m_backupGroupName;
}

void BackupGroup::SetBackupGroupName(const string& _backupGroupName)
{
    m_backupGroupName = _backupGroupName;
    m_backupGroupNameHasBeenSet = true;
}

bool BackupGroup::BackupGroupNameHasBeenSet() const
{
    return m_backupGroupNameHasBeenSet;
}

string BackupGroup::GetBackupGroupState() const
{
    return m_backupGroupState;
}

void BackupGroup::SetBackupGroupState(const string& _backupGroupState)
{
    m_backupGroupState = _backupGroupState;
    m_backupGroupStateHasBeenSet = true;
}

bool BackupGroup::BackupGroupStateHasBeenSet() const
{
    return m_backupGroupStateHasBeenSet;
}

string BackupGroup::GetModifyTime() const
{
    return m_modifyTime;
}

void BackupGroup::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool BackupGroup::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string BackupGroup::GetCreateTime() const
{
    return m_createTime;
}

void BackupGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BackupGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t BackupGroup::GetAppId() const
{
    return m_appId;
}

void BackupGroup::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool BackupGroup::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

bool BackupGroup::GetIsPermanent() const
{
    return m_isPermanent;
}

void BackupGroup::SetIsPermanent(const bool& _isPermanent)
{
    m_isPermanent = _isPermanent;
    m_isPermanentHasBeenSet = true;
}

bool BackupGroup::IsPermanentHasBeenSet() const
{
    return m_isPermanentHasBeenSet;
}

string BackupGroup::GetDeadlineTime() const
{
    return m_deadlineTime;
}

void BackupGroup::SetDeadlineTime(const string& _deadlineTime)
{
    m_deadlineTime = _deadlineTime;
    m_deadlineTimeHasBeenSet = true;
}

bool BackupGroup::DeadlineTimeHasBeenSet() const
{
    return m_deadlineTimeHasBeenSet;
}

string BackupGroup::GetInstanceId() const
{
    return m_instanceId;
}

void BackupGroup::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BackupGroup::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string BackupGroup::GetInstanceDetails() const
{
    return m_instanceDetails;
}

void BackupGroup::SetInstanceDetails(const string& _instanceDetails)
{
    m_instanceDetails = _instanceDetails;
    m_instanceDetailsHasBeenSet = true;
}

bool BackupGroup::InstanceDetailsHasBeenSet() const
{
    return m_instanceDetailsHasBeenSet;
}

string BackupGroup::GetAccountName() const
{
    return m_accountName;
}

void BackupGroup::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool BackupGroup::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string BackupGroup::GetAccountUin() const
{
    return m_accountUin;
}

void BackupGroup::SetAccountUin(const string& _accountUin)
{
    m_accountUin = _accountUin;
    m_accountUinHasBeenSet = true;
}

bool BackupGroup::AccountUinHasBeenSet() const
{
    return m_accountUinHasBeenSet;
}

string BackupGroup::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void BackupGroup::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool BackupGroup::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string BackupGroup::GetAutoBackupPolicyId() const
{
    return m_autoBackupPolicyId;
}

void BackupGroup::SetAutoBackupPolicyId(const string& _autoBackupPolicyId)
{
    m_autoBackupPolicyId = _autoBackupPolicyId;
    m_autoBackupPolicyIdHasBeenSet = true;
}

bool BackupGroup::AutoBackupPolicyIdHasBeenSet() const
{
    return m_autoBackupPolicyIdHasBeenSet;
}

