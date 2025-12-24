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

#include <tencentcloud/dbs/v20211108/model/BackupPlanInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

BackupPlanInfo::BackupPlanInfo() :
    m_regionHasBeenSet(false),
    m_backupPlanIdHasBeenSet(false),
    m_backupPlanNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_databaseTypeHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_sourceInfoHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_offlineTimeHasBeenSet(false),
    m_instanceClassHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_enableIncrementHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_setSourceInfoHasBeenSet(false)
{
}

CoreInternalOutcome BackupPlanInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("BackupPlanId") && !value["BackupPlanId"].IsNull())
    {
        if (!value["BackupPlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.BackupPlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupPlanId = string(value["BackupPlanId"].GetString());
        m_backupPlanIdHasBeenSet = true;
    }

    if (value.HasMember("BackupPlanName") && !value["BackupPlanName"].IsNull())
    {
        if (!value["BackupPlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.BackupPlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupPlanName = string(value["BackupPlanName"].GetString());
        m_backupPlanNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DatabaseType") && !value["DatabaseType"].IsNull())
    {
        if (!value["DatabaseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.DatabaseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseType = string(value["DatabaseType"].GetString());
        m_databaseTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceInfo") && !value["SourceInfo"].IsNull())
    {
        if (!value["SourceInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.SourceInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceInfo.push_back((*itr).GetString());
        }
        m_sourceInfoHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("OfflineTime") && !value["OfflineTime"].IsNull())
    {
        if (!value["OfflineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.OfflineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineTime = string(value["OfflineTime"].GetString());
        m_offlineTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceClass") && !value["InstanceClass"].IsNull())
    {
        if (!value["InstanceClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.InstanceClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceClass = string(value["InstanceClass"].GetString());
        m_instanceClassHasBeenSet = true;
    }

    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(value["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("EnableIncrement") && !value["EnableIncrement"].IsNull())
    {
        if (!value["EnableIncrement"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.EnableIncrement` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableIncrement = value["EnableIncrement"].GetBool();
        m_enableIncrementHasBeenSet = true;
    }

    if (value.HasMember("PayType") && !value["PayType"].IsNull())
    {
        if (!value["PayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.PayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payType = string(value["PayType"].GetString());
        m_payTypeHasBeenSet = true;
    }

    if (value.HasMember("SetSourceInfo") && !value["SetSourceInfo"].IsNull())
    {
        if (!value["SetSourceInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupPlanInfo.SetSourceInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["SetSourceInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_setSourceInfo.push_back((*itr).GetString());
        }
        m_setSourceInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupPlanInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupPlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPlanNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPlanName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupPlanName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceInfo.begin(); itr != m_sourceInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_offlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceClass.c_str(), allocator).Move(), allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_enableIncrementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableIncrement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableIncrement, allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payType.c_str(), allocator).Move(), allocator);
    }

    if (m_setSourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetSourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_setSourceInfo.begin(); itr != m_setSourceInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string BackupPlanInfo::GetRegion() const
{
    return m_region;
}

void BackupPlanInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BackupPlanInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string BackupPlanInfo::GetBackupPlanId() const
{
    return m_backupPlanId;
}

void BackupPlanInfo::SetBackupPlanId(const string& _backupPlanId)
{
    m_backupPlanId = _backupPlanId;
    m_backupPlanIdHasBeenSet = true;
}

bool BackupPlanInfo::BackupPlanIdHasBeenSet() const
{
    return m_backupPlanIdHasBeenSet;
}

string BackupPlanInfo::GetBackupPlanName() const
{
    return m_backupPlanName;
}

void BackupPlanInfo::SetBackupPlanName(const string& _backupPlanName)
{
    m_backupPlanName = _backupPlanName;
    m_backupPlanNameHasBeenSet = true;
}

bool BackupPlanInfo::BackupPlanNameHasBeenSet() const
{
    return m_backupPlanNameHasBeenSet;
}

string BackupPlanInfo::GetStatus() const
{
    return m_status;
}

void BackupPlanInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BackupPlanInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BackupPlanInfo::GetDatabaseType() const
{
    return m_databaseType;
}

void BackupPlanInfo::SetDatabaseType(const string& _databaseType)
{
    m_databaseType = _databaseType;
    m_databaseTypeHasBeenSet = true;
}

bool BackupPlanInfo::DatabaseTypeHasBeenSet() const
{
    return m_databaseTypeHasBeenSet;
}

string BackupPlanInfo::GetAccessType() const
{
    return m_accessType;
}

void BackupPlanInfo::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool BackupPlanInfo::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

vector<string> BackupPlanInfo::GetSourceInfo() const
{
    return m_sourceInfo;
}

void BackupPlanInfo::SetSourceInfo(const vector<string>& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool BackupPlanInfo::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}

string BackupPlanInfo::GetCreateTime() const
{
    return m_createTime;
}

void BackupPlanInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BackupPlanInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BackupPlanInfo::GetExpireTime() const
{
    return m_expireTime;
}

void BackupPlanInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool BackupPlanInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string BackupPlanInfo::GetOfflineTime() const
{
    return m_offlineTime;
}

void BackupPlanInfo::SetOfflineTime(const string& _offlineTime)
{
    m_offlineTime = _offlineTime;
    m_offlineTimeHasBeenSet = true;
}

bool BackupPlanInfo::OfflineTimeHasBeenSet() const
{
    return m_offlineTimeHasBeenSet;
}

string BackupPlanInfo::GetInstanceClass() const
{
    return m_instanceClass;
}

void BackupPlanInfo::SetInstanceClass(const string& _instanceClass)
{
    m_instanceClass = _instanceClass;
    m_instanceClassHasBeenSet = true;
}

bool BackupPlanInfo::InstanceClassHasBeenSet() const
{
    return m_instanceClassHasBeenSet;
}

string BackupPlanInfo::GetBackupMethod() const
{
    return m_backupMethod;
}

void BackupPlanInfo::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool BackupPlanInfo::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

vector<Tag> BackupPlanInfo::GetTags() const
{
    return m_tags;
}

void BackupPlanInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool BackupPlanInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t BackupPlanInfo::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void BackupPlanInfo::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool BackupPlanInfo::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

bool BackupPlanInfo::GetEnableIncrement() const
{
    return m_enableIncrement;
}

void BackupPlanInfo::SetEnableIncrement(const bool& _enableIncrement)
{
    m_enableIncrement = _enableIncrement;
    m_enableIncrementHasBeenSet = true;
}

bool BackupPlanInfo::EnableIncrementHasBeenSet() const
{
    return m_enableIncrementHasBeenSet;
}

string BackupPlanInfo::GetPayType() const
{
    return m_payType;
}

void BackupPlanInfo::SetPayType(const string& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool BackupPlanInfo::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

vector<string> BackupPlanInfo::GetSetSourceInfo() const
{
    return m_setSourceInfo;
}

void BackupPlanInfo::SetSetSourceInfo(const vector<string>& _setSourceInfo)
{
    m_setSourceInfo = _setSourceInfo;
    m_setSourceInfoHasBeenSet = true;
}

bool BackupPlanInfo::SetSourceInfoHasBeenSet() const
{
    return m_setSourceInfoHasBeenSet;
}

