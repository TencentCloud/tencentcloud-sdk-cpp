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

#include <tencentcloud/csip/v20221121/model/DspmAssetAccount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmAssetAccount::DspmAssetAccount() :
    m_accountHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_privilegeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_validateFromHasBeenSet(false),
    m_validateToHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_isNewAccountHasBeenSet(false),
    m_identifyTypeHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_personHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_presetPrivilegeHasBeenSet(false)
{
}

CoreInternalOutcome DspmAssetAccount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.AccountType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = value["AccountType"].GetInt64();
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("Subject") && !value["Subject"].IsNull())
    {
        if (!value["Subject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.Subject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subject = string(value["Subject"].GetString());
        m_subjectHasBeenSet = true;
    }

    if (value.HasMember("Privilege") && !value["Privilege"].IsNull())
    {
        if (!value["Privilege"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.Privilege` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_privilege.Deserialize(value["Privilege"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_privilegeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ValidateFrom") && !value["ValidateFrom"].IsNull())
    {
        if (!value["ValidateFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.ValidateFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validateFrom = string(value["ValidateFrom"].GetString());
        m_validateFromHasBeenSet = true;
    }

    if (value.HasMember("ValidateTo") && !value["ValidateTo"].IsNull())
    {
        if (!value["ValidateTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.ValidateTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validateTo = string(value["ValidateTo"].GetString());
        m_validateToHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("IsNewAccount") && !value["IsNewAccount"].IsNull())
    {
        if (!value["IsNewAccount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.IsNewAccount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNewAccount = value["IsNewAccount"].GetInt64();
        m_isNewAccountHasBeenSet = true;
    }

    if (value.HasMember("IdentifyType") && !value["IdentifyType"].IsNull())
    {
        if (!value["IdentifyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.IdentifyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identifyType = value["IdentifyType"].GetInt64();
        m_identifyTypeHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.OwnerUin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ownerUin.Deserialize(value["OwnerUin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("Person") && !value["Person"].IsNull())
    {
        if (!value["Person"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.Person` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_person.Deserialize(value["Person"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.RiskCount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_riskCount.Deserialize(value["RiskCount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("PresetPrivilege") && !value["PresetPrivilege"].IsNull())
    {
        if (!value["PresetPrivilege"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccount.PresetPrivilege` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_presetPrivilege.Deserialize(value["PresetPrivilege"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_presetPrivilegeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmAssetAccount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountType, allocator);
    }

    if (m_subjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subject.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privilege";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_privilege.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_validateFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validateFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_validateToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validateTo.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_isNewAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNewAccount, allocator);
    }

    if (m_identifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identifyType, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ownerUin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_personHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Person";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_person.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_riskCount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_presetPrivilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetPrivilege";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_presetPrivilege.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DspmAssetAccount::GetAccount() const
{
    return m_account;
}

void DspmAssetAccount::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool DspmAssetAccount::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string DspmAssetAccount::GetHost() const
{
    return m_host;
}

void DspmAssetAccount::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DspmAssetAccount::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

int64_t DspmAssetAccount::GetAccountType() const
{
    return m_accountType;
}

void DspmAssetAccount::SetAccountType(const int64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool DspmAssetAccount::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string DspmAssetAccount::GetSubject() const
{
    return m_subject;
}

void DspmAssetAccount::SetSubject(const string& _subject)
{
    m_subject = _subject;
    m_subjectHasBeenSet = true;
}

bool DspmAssetAccount::SubjectHasBeenSet() const
{
    return m_subjectHasBeenSet;
}

DspmDbAccountPrivilege DspmAssetAccount::GetPrivilege() const
{
    return m_privilege;
}

void DspmAssetAccount::SetPrivilege(const DspmDbAccountPrivilege& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool DspmAssetAccount::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

int64_t DspmAssetAccount::GetStatus() const
{
    return m_status;
}

void DspmAssetAccount::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspmAssetAccount::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DspmAssetAccount::GetCreateTime() const
{
    return m_createTime;
}

void DspmAssetAccount::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DspmAssetAccount::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DspmAssetAccount::GetValidateFrom() const
{
    return m_validateFrom;
}

void DspmAssetAccount::SetValidateFrom(const string& _validateFrom)
{
    m_validateFrom = _validateFrom;
    m_validateFromHasBeenSet = true;
}

bool DspmAssetAccount::ValidateFromHasBeenSet() const
{
    return m_validateFromHasBeenSet;
}

string DspmAssetAccount::GetValidateTo() const
{
    return m_validateTo;
}

void DspmAssetAccount::SetValidateTo(const string& _validateTo)
{
    m_validateTo = _validateTo;
    m_validateToHasBeenSet = true;
}

bool DspmAssetAccount::ValidateToHasBeenSet() const
{
    return m_validateToHasBeenSet;
}

string DspmAssetAccount::GetRemark() const
{
    return m_remark;
}

void DspmAssetAccount::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DspmAssetAccount::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DspmAssetAccount::GetAssetId() const
{
    return m_assetId;
}

void DspmAssetAccount::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DspmAssetAccount::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

int64_t DspmAssetAccount::GetIsNewAccount() const
{
    return m_isNewAccount;
}

void DspmAssetAccount::SetIsNewAccount(const int64_t& _isNewAccount)
{
    m_isNewAccount = _isNewAccount;
    m_isNewAccountHasBeenSet = true;
}

bool DspmAssetAccount::IsNewAccountHasBeenSet() const
{
    return m_isNewAccountHasBeenSet;
}

int64_t DspmAssetAccount::GetIdentifyType() const
{
    return m_identifyType;
}

void DspmAssetAccount::SetIdentifyType(const int64_t& _identifyType)
{
    m_identifyType = _identifyType;
    m_identifyTypeHasBeenSet = true;
}

bool DspmAssetAccount::IdentifyTypeHasBeenSet() const
{
    return m_identifyTypeHasBeenSet;
}

DspmUinUser DspmAssetAccount::GetOwnerUin() const
{
    return m_ownerUin;
}

void DspmAssetAccount::SetOwnerUin(const DspmUinUser& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool DspmAssetAccount::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

DspmPersonUser DspmAssetAccount::GetPerson() const
{
    return m_person;
}

void DspmAssetAccount::SetPerson(const DspmPersonUser& _person)
{
    m_person = _person;
    m_personHasBeenSet = true;
}

bool DspmAssetAccount::PersonHasBeenSet() const
{
    return m_personHasBeenSet;
}

DspmRiskCount DspmAssetAccount::GetRiskCount() const
{
    return m_riskCount;
}

void DspmAssetAccount::SetRiskCount(const DspmRiskCount& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool DspmAssetAccount::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

DspmDbAccountPrivilege DspmAssetAccount::GetPresetPrivilege() const
{
    return m_presetPrivilege;
}

void DspmAssetAccount::SetPresetPrivilege(const DspmDbAccountPrivilege& _presetPrivilege)
{
    m_presetPrivilege = _presetPrivilege;
    m_presetPrivilegeHasBeenSet = true;
}

bool DspmAssetAccount::PresetPrivilegeHasBeenSet() const
{
    return m_presetPrivilegeHasBeenSet;
}

