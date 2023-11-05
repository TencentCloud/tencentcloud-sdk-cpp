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

#include <tencentcloud/sqlserver/v20180328/model/DbNormalDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DbNormalDetail::DbNormalDetail() :
    m_isSubscribedHasBeenSet(false),
    m_collationNameHasBeenSet(false),
    m_isAutoCleanupOnHasBeenSet(false),
    m_isBrokerEnabledHasBeenSet(false),
    m_isCdcEnabledHasBeenSet(false),
    m_isDbChainingOnHasBeenSet(false),
    m_isEncryptedHasBeenSet(false),
    m_isFulltextEnabledHasBeenSet(false),
    m_isMirroringHasBeenSet(false),
    m_isPublishedHasBeenSet(false),
    m_isReadCommittedSnapshotOnHasBeenSet(false),
    m_isTrustworthyOnHasBeenSet(false),
    m_mirroringStateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_recoveryModelDescHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false),
    m_stateDescHasBeenSet(false),
    m_userAccessDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isFullTextEnabledHasBeenSet(false)
{
}

CoreInternalOutcome DbNormalDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsSubscribed") && !value["IsSubscribed"].IsNull())
    {
        if (!value["IsSubscribed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.IsSubscribed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isSubscribed = string(value["IsSubscribed"].GetString());
        m_isSubscribedHasBeenSet = true;
    }

    if (value.HasMember("CollationName") && !value["CollationName"].IsNull())
    {
        if (!value["CollationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.CollationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collationName = string(value["CollationName"].GetString());
        m_collationNameHasBeenSet = true;
    }

    if (value.HasMember("IsAutoCleanupOn") && !value["IsAutoCleanupOn"].IsNull())
    {
        if (!value["IsAutoCleanupOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.IsAutoCleanupOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoCleanupOn = string(value["IsAutoCleanupOn"].GetString());
        m_isAutoCleanupOnHasBeenSet = true;
    }

    if (value.HasMember("IsBrokerEnabled") && !value["IsBrokerEnabled"].IsNull())
    {
        if (!value["IsBrokerEnabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.IsBrokerEnabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isBrokerEnabled = string(value["IsBrokerEnabled"].GetString());
        m_isBrokerEnabledHasBeenSet = true;
    }

    if (value.HasMember("IsCdcEnabled") && !value["IsCdcEnabled"].IsNull())
    {
        if (!value["IsCdcEnabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.IsCdcEnabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isCdcEnabled = string(value["IsCdcEnabled"].GetString());
        m_isCdcEnabledHasBeenSet = true;
    }

    if (value.HasMember("IsDbChainingOn") && !value["IsDbChainingOn"].IsNull())
    {
        if (!value["IsDbChainingOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.IsDbChainingOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isDbChainingOn = string(value["IsDbChainingOn"].GetString());
        m_isDbChainingOnHasBeenSet = true;
    }

    if (value.HasMember("IsEncrypted") && !value["IsEncrypted"].IsNull())
    {
        if (!value["IsEncrypted"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.IsEncrypted` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isEncrypted = string(value["IsEncrypted"].GetString());
        m_isEncryptedHasBeenSet = true;
    }

    if (value.HasMember("IsFulltextEnabled") && !value["IsFulltextEnabled"].IsNull())
    {
        if (!value["IsFulltextEnabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.IsFulltextEnabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isFulltextEnabled = string(value["IsFulltextEnabled"].GetString());
        m_isFulltextEnabledHasBeenSet = true;
    }

    if (value.HasMember("IsMirroring") && !value["IsMirroring"].IsNull())
    {
        if (!value["IsMirroring"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.IsMirroring` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isMirroring = string(value["IsMirroring"].GetString());
        m_isMirroringHasBeenSet = true;
    }

    if (value.HasMember("IsPublished") && !value["IsPublished"].IsNull())
    {
        if (!value["IsPublished"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.IsPublished` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isPublished = string(value["IsPublished"].GetString());
        m_isPublishedHasBeenSet = true;
    }

    if (value.HasMember("IsReadCommittedSnapshotOn") && !value["IsReadCommittedSnapshotOn"].IsNull())
    {
        if (!value["IsReadCommittedSnapshotOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.IsReadCommittedSnapshotOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isReadCommittedSnapshotOn = string(value["IsReadCommittedSnapshotOn"].GetString());
        m_isReadCommittedSnapshotOnHasBeenSet = true;
    }

    if (value.HasMember("IsTrustworthyOn") && !value["IsTrustworthyOn"].IsNull())
    {
        if (!value["IsTrustworthyOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.IsTrustworthyOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isTrustworthyOn = string(value["IsTrustworthyOn"].GetString());
        m_isTrustworthyOnHasBeenSet = true;
    }

    if (value.HasMember("MirroringState") && !value["MirroringState"].IsNull())
    {
        if (!value["MirroringState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.MirroringState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mirroringState = string(value["MirroringState"].GetString());
        m_mirroringStateHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RecoveryModelDesc") && !value["RecoveryModelDesc"].IsNull())
    {
        if (!value["RecoveryModelDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.RecoveryModelDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recoveryModelDesc = string(value["RecoveryModelDesc"].GetString());
        m_recoveryModelDescHasBeenSet = true;
    }

    if (value.HasMember("RetentionPeriod") && !value["RetentionPeriod"].IsNull())
    {
        if (!value["RetentionPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.RetentionPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retentionPeriod = string(value["RetentionPeriod"].GetString());
        m_retentionPeriodHasBeenSet = true;
    }

    if (value.HasMember("StateDesc") && !value["StateDesc"].IsNull())
    {
        if (!value["StateDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.StateDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateDesc = string(value["StateDesc"].GetString());
        m_stateDescHasBeenSet = true;
    }

    if (value.HasMember("UserAccessDesc") && !value["UserAccessDesc"].IsNull())
    {
        if (!value["UserAccessDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.UserAccessDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAccessDesc = string(value["UserAccessDesc"].GetString());
        m_userAccessDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IsFullTextEnabled") && !value["IsFullTextEnabled"].IsNull())
    {
        if (!value["IsFullTextEnabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbNormalDetail.IsFullTextEnabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isFullTextEnabled = string(value["IsFullTextEnabled"].GetString());
        m_isFullTextEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DbNormalDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isSubscribedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSubscribed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isSubscribed.c_str(), allocator).Move(), allocator);
    }

    if (m_collationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collationName.c_str(), allocator).Move(), allocator);
    }

    if (m_isAutoCleanupOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoCleanupOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isAutoCleanupOn.c_str(), allocator).Move(), allocator);
    }

    if (m_isBrokerEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBrokerEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isBrokerEnabled.c_str(), allocator).Move(), allocator);
    }

    if (m_isCdcEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCdcEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isCdcEnabled.c_str(), allocator).Move(), allocator);
    }

    if (m_isDbChainingOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDbChainingOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isDbChainingOn.c_str(), allocator).Move(), allocator);
    }

    if (m_isEncryptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEncrypted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isEncrypted.c_str(), allocator).Move(), allocator);
    }

    if (m_isFulltextEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFulltextEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isFulltextEnabled.c_str(), allocator).Move(), allocator);
    }

    if (m_isMirroringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMirroring";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isMirroring.c_str(), allocator).Move(), allocator);
    }

    if (m_isPublishedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublished";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isPublished.c_str(), allocator).Move(), allocator);
    }

    if (m_isReadCommittedSnapshotOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReadCommittedSnapshotOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isReadCommittedSnapshotOn.c_str(), allocator).Move(), allocator);
    }

    if (m_isTrustworthyOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTrustworthyOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isTrustworthyOn.c_str(), allocator).Move(), allocator);
    }

    if (m_mirroringStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MirroringState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mirroringState.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_recoveryModelDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoveryModelDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recoveryModelDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_retentionPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_stateDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_userAccessDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAccessDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAccessDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isFullTextEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFullTextEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isFullTextEnabled.c_str(), allocator).Move(), allocator);
    }

}


string DbNormalDetail::GetIsSubscribed() const
{
    return m_isSubscribed;
}

void DbNormalDetail::SetIsSubscribed(const string& _isSubscribed)
{
    m_isSubscribed = _isSubscribed;
    m_isSubscribedHasBeenSet = true;
}

bool DbNormalDetail::IsSubscribedHasBeenSet() const
{
    return m_isSubscribedHasBeenSet;
}

string DbNormalDetail::GetCollationName() const
{
    return m_collationName;
}

void DbNormalDetail::SetCollationName(const string& _collationName)
{
    m_collationName = _collationName;
    m_collationNameHasBeenSet = true;
}

bool DbNormalDetail::CollationNameHasBeenSet() const
{
    return m_collationNameHasBeenSet;
}

string DbNormalDetail::GetIsAutoCleanupOn() const
{
    return m_isAutoCleanupOn;
}

void DbNormalDetail::SetIsAutoCleanupOn(const string& _isAutoCleanupOn)
{
    m_isAutoCleanupOn = _isAutoCleanupOn;
    m_isAutoCleanupOnHasBeenSet = true;
}

bool DbNormalDetail::IsAutoCleanupOnHasBeenSet() const
{
    return m_isAutoCleanupOnHasBeenSet;
}

string DbNormalDetail::GetIsBrokerEnabled() const
{
    return m_isBrokerEnabled;
}

void DbNormalDetail::SetIsBrokerEnabled(const string& _isBrokerEnabled)
{
    m_isBrokerEnabled = _isBrokerEnabled;
    m_isBrokerEnabledHasBeenSet = true;
}

bool DbNormalDetail::IsBrokerEnabledHasBeenSet() const
{
    return m_isBrokerEnabledHasBeenSet;
}

string DbNormalDetail::GetIsCdcEnabled() const
{
    return m_isCdcEnabled;
}

void DbNormalDetail::SetIsCdcEnabled(const string& _isCdcEnabled)
{
    m_isCdcEnabled = _isCdcEnabled;
    m_isCdcEnabledHasBeenSet = true;
}

bool DbNormalDetail::IsCdcEnabledHasBeenSet() const
{
    return m_isCdcEnabledHasBeenSet;
}

string DbNormalDetail::GetIsDbChainingOn() const
{
    return m_isDbChainingOn;
}

void DbNormalDetail::SetIsDbChainingOn(const string& _isDbChainingOn)
{
    m_isDbChainingOn = _isDbChainingOn;
    m_isDbChainingOnHasBeenSet = true;
}

bool DbNormalDetail::IsDbChainingOnHasBeenSet() const
{
    return m_isDbChainingOnHasBeenSet;
}

string DbNormalDetail::GetIsEncrypted() const
{
    return m_isEncrypted;
}

void DbNormalDetail::SetIsEncrypted(const string& _isEncrypted)
{
    m_isEncrypted = _isEncrypted;
    m_isEncryptedHasBeenSet = true;
}

bool DbNormalDetail::IsEncryptedHasBeenSet() const
{
    return m_isEncryptedHasBeenSet;
}

string DbNormalDetail::GetIsFulltextEnabled() const
{
    return m_isFulltextEnabled;
}

void DbNormalDetail::SetIsFulltextEnabled(const string& _isFulltextEnabled)
{
    m_isFulltextEnabled = _isFulltextEnabled;
    m_isFulltextEnabledHasBeenSet = true;
}

bool DbNormalDetail::IsFulltextEnabledHasBeenSet() const
{
    return m_isFulltextEnabledHasBeenSet;
}

string DbNormalDetail::GetIsMirroring() const
{
    return m_isMirroring;
}

void DbNormalDetail::SetIsMirroring(const string& _isMirroring)
{
    m_isMirroring = _isMirroring;
    m_isMirroringHasBeenSet = true;
}

bool DbNormalDetail::IsMirroringHasBeenSet() const
{
    return m_isMirroringHasBeenSet;
}

string DbNormalDetail::GetIsPublished() const
{
    return m_isPublished;
}

void DbNormalDetail::SetIsPublished(const string& _isPublished)
{
    m_isPublished = _isPublished;
    m_isPublishedHasBeenSet = true;
}

bool DbNormalDetail::IsPublishedHasBeenSet() const
{
    return m_isPublishedHasBeenSet;
}

string DbNormalDetail::GetIsReadCommittedSnapshotOn() const
{
    return m_isReadCommittedSnapshotOn;
}

void DbNormalDetail::SetIsReadCommittedSnapshotOn(const string& _isReadCommittedSnapshotOn)
{
    m_isReadCommittedSnapshotOn = _isReadCommittedSnapshotOn;
    m_isReadCommittedSnapshotOnHasBeenSet = true;
}

bool DbNormalDetail::IsReadCommittedSnapshotOnHasBeenSet() const
{
    return m_isReadCommittedSnapshotOnHasBeenSet;
}

string DbNormalDetail::GetIsTrustworthyOn() const
{
    return m_isTrustworthyOn;
}

void DbNormalDetail::SetIsTrustworthyOn(const string& _isTrustworthyOn)
{
    m_isTrustworthyOn = _isTrustworthyOn;
    m_isTrustworthyOnHasBeenSet = true;
}

bool DbNormalDetail::IsTrustworthyOnHasBeenSet() const
{
    return m_isTrustworthyOnHasBeenSet;
}

string DbNormalDetail::GetMirroringState() const
{
    return m_mirroringState;
}

void DbNormalDetail::SetMirroringState(const string& _mirroringState)
{
    m_mirroringState = _mirroringState;
    m_mirroringStateHasBeenSet = true;
}

bool DbNormalDetail::MirroringStateHasBeenSet() const
{
    return m_mirroringStateHasBeenSet;
}

string DbNormalDetail::GetName() const
{
    return m_name;
}

void DbNormalDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DbNormalDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DbNormalDetail::GetRecoveryModelDesc() const
{
    return m_recoveryModelDesc;
}

void DbNormalDetail::SetRecoveryModelDesc(const string& _recoveryModelDesc)
{
    m_recoveryModelDesc = _recoveryModelDesc;
    m_recoveryModelDescHasBeenSet = true;
}

bool DbNormalDetail::RecoveryModelDescHasBeenSet() const
{
    return m_recoveryModelDescHasBeenSet;
}

string DbNormalDetail::GetRetentionPeriod() const
{
    return m_retentionPeriod;
}

void DbNormalDetail::SetRetentionPeriod(const string& _retentionPeriod)
{
    m_retentionPeriod = _retentionPeriod;
    m_retentionPeriodHasBeenSet = true;
}

bool DbNormalDetail::RetentionPeriodHasBeenSet() const
{
    return m_retentionPeriodHasBeenSet;
}

string DbNormalDetail::GetStateDesc() const
{
    return m_stateDesc;
}

void DbNormalDetail::SetStateDesc(const string& _stateDesc)
{
    m_stateDesc = _stateDesc;
    m_stateDescHasBeenSet = true;
}

bool DbNormalDetail::StateDescHasBeenSet() const
{
    return m_stateDescHasBeenSet;
}

string DbNormalDetail::GetUserAccessDesc() const
{
    return m_userAccessDesc;
}

void DbNormalDetail::SetUserAccessDesc(const string& _userAccessDesc)
{
    m_userAccessDesc = _userAccessDesc;
    m_userAccessDescHasBeenSet = true;
}

bool DbNormalDetail::UserAccessDescHasBeenSet() const
{
    return m_userAccessDescHasBeenSet;
}

string DbNormalDetail::GetCreateTime() const
{
    return m_createTime;
}

void DbNormalDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DbNormalDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DbNormalDetail::GetIsFullTextEnabled() const
{
    return m_isFullTextEnabled;
}

void DbNormalDetail::SetIsFullTextEnabled(const string& _isFullTextEnabled)
{
    m_isFullTextEnabled = _isFullTextEnabled;
    m_isFullTextEnabledHasBeenSet = true;
}

bool DbNormalDetail::IsFullTextEnabledHasBeenSet() const
{
    return m_isFullTextEnabledHasBeenSet;
}

