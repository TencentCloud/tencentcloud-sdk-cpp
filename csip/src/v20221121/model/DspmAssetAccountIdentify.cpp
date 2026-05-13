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

#include <tencentcloud/csip/v20221121/model/DspmAssetAccountIdentify.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmAssetAccountIdentify::DspmAssetAccountIdentify() :
    m_assetIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_isManagerHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_privilegeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_validateFromHasBeenSet(false),
    m_validateToHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_personApplyCountHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_identifyTypeHasBeenSet(false),
    m_personHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_presetPrivilegeHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_identifyIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome DspmAssetAccountIdentify::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.OwnerUin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ownerUin.Deserialize(value["OwnerUin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("IsManager") && !value["IsManager"].IsNull())
    {
        if (!value["IsManager"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.IsManager` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isManager = value["IsManager"].GetInt64();
        m_isManagerHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.AccountType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = value["AccountType"].GetInt64();
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("Privilege") && !value["Privilege"].IsNull())
    {
        if (!value["Privilege"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.Privilege` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ValidateFrom") && !value["ValidateFrom"].IsNull())
    {
        if (!value["ValidateFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.ValidateFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validateFrom = string(value["ValidateFrom"].GetString());
        m_validateFromHasBeenSet = true;
    }

    if (value.HasMember("ValidateTo") && !value["ValidateTo"].IsNull())
    {
        if (!value["ValidateTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.ValidateTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validateTo = string(value["ValidateTo"].GetString());
        m_validateToHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("PersonApplyCount") && !value["PersonApplyCount"].IsNull())
    {
        if (!value["PersonApplyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.PersonApplyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_personApplyCount = value["PersonApplyCount"].GetInt64();
        m_personApplyCountHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.RiskCount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_riskCount.Deserialize(value["RiskCount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("IdentifyType") && !value["IdentifyType"].IsNull())
    {
        if (!value["IdentifyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.IdentifyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identifyType = value["IdentifyType"].GetInt64();
        m_identifyTypeHasBeenSet = true;
    }

    if (value.HasMember("Person") && !value["Person"].IsNull())
    {
        if (!value["Person"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.Person` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_person.Deserialize(value["Person"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.CreatorUin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_creatorUin.Deserialize(value["CreatorUin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("PresetPrivilege") && !value["PresetPrivilege"].IsNull())
    {
        if (!value["PresetPrivilege"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.PresetPrivilege` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_presetPrivilege.Deserialize(value["PresetPrivilege"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_presetPrivilegeHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("IdentifyId") && !value["IdentifyId"].IsNull())
    {
        if (!value["IdentifyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.IdentifyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifyId = string(value["IdentifyId"].GetString());
        m_identifyIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccountIdentify.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmAssetAccountIdentify::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ownerUin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isManager, allocator);
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

    if (m_personApplyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonApplyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_personApplyCount, allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_riskCount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_identifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identifyType, allocator);
    }

    if (m_personHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Person";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_person.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_creatorUin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_presetPrivilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetPrivilege";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_presetPrivilege.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_identifyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifyId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

}


string DspmAssetAccountIdentify::GetAssetId() const
{
    return m_assetId;
}

void DspmAssetAccountIdentify::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DspmAssetAccountIdentify::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

DspmUinUser DspmAssetAccountIdentify::GetOwnerUin() const
{
    return m_ownerUin;
}

void DspmAssetAccountIdentify::SetOwnerUin(const DspmUinUser& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool DspmAssetAccountIdentify::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

int64_t DspmAssetAccountIdentify::GetIsManager() const
{
    return m_isManager;
}

void DspmAssetAccountIdentify::SetIsManager(const int64_t& _isManager)
{
    m_isManager = _isManager;
    m_isManagerHasBeenSet = true;
}

bool DspmAssetAccountIdentify::IsManagerHasBeenSet() const
{
    return m_isManagerHasBeenSet;
}

string DspmAssetAccountIdentify::GetHost() const
{
    return m_host;
}

void DspmAssetAccountIdentify::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DspmAssetAccountIdentify::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

int64_t DspmAssetAccountIdentify::GetAccountType() const
{
    return m_accountType;
}

void DspmAssetAccountIdentify::SetAccountType(const int64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool DspmAssetAccountIdentify::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

DspmDbAccountPrivilege DspmAssetAccountIdentify::GetPrivilege() const
{
    return m_privilege;
}

void DspmAssetAccountIdentify::SetPrivilege(const DspmDbAccountPrivilege& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool DspmAssetAccountIdentify::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

int64_t DspmAssetAccountIdentify::GetStatus() const
{
    return m_status;
}

void DspmAssetAccountIdentify::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspmAssetAccountIdentify::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DspmAssetAccountIdentify::GetCreateTime() const
{
    return m_createTime;
}

void DspmAssetAccountIdentify::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DspmAssetAccountIdentify::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DspmAssetAccountIdentify::GetValidateFrom() const
{
    return m_validateFrom;
}

void DspmAssetAccountIdentify::SetValidateFrom(const string& _validateFrom)
{
    m_validateFrom = _validateFrom;
    m_validateFromHasBeenSet = true;
}

bool DspmAssetAccountIdentify::ValidateFromHasBeenSet() const
{
    return m_validateFromHasBeenSet;
}

string DspmAssetAccountIdentify::GetValidateTo() const
{
    return m_validateTo;
}

void DspmAssetAccountIdentify::SetValidateTo(const string& _validateTo)
{
    m_validateTo = _validateTo;
    m_validateToHasBeenSet = true;
}

bool DspmAssetAccountIdentify::ValidateToHasBeenSet() const
{
    return m_validateToHasBeenSet;
}

string DspmAssetAccountIdentify::GetRemark() const
{
    return m_remark;
}

void DspmAssetAccountIdentify::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DspmAssetAccountIdentify::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t DspmAssetAccountIdentify::GetPersonApplyCount() const
{
    return m_personApplyCount;
}

void DspmAssetAccountIdentify::SetPersonApplyCount(const int64_t& _personApplyCount)
{
    m_personApplyCount = _personApplyCount;
    m_personApplyCountHasBeenSet = true;
}

bool DspmAssetAccountIdentify::PersonApplyCountHasBeenSet() const
{
    return m_personApplyCountHasBeenSet;
}

string DspmAssetAccountIdentify::GetAssetName() const
{
    return m_assetName;
}

void DspmAssetAccountIdentify::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool DspmAssetAccountIdentify::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string DspmAssetAccountIdentify::GetAssetType() const
{
    return m_assetType;
}

void DspmAssetAccountIdentify::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DspmAssetAccountIdentify::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string DspmAssetAccountIdentify::GetRegion() const
{
    return m_region;
}

void DspmAssetAccountIdentify::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DspmAssetAccountIdentify::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

DspmRiskCount DspmAssetAccountIdentify::GetRiskCount() const
{
    return m_riskCount;
}

void DspmAssetAccountIdentify::SetRiskCount(const DspmRiskCount& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool DspmAssetAccountIdentify::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

int64_t DspmAssetAccountIdentify::GetIdentifyType() const
{
    return m_identifyType;
}

void DspmAssetAccountIdentify::SetIdentifyType(const int64_t& _identifyType)
{
    m_identifyType = _identifyType;
    m_identifyTypeHasBeenSet = true;
}

bool DspmAssetAccountIdentify::IdentifyTypeHasBeenSet() const
{
    return m_identifyTypeHasBeenSet;
}

DspmPersonUser DspmAssetAccountIdentify::GetPerson() const
{
    return m_person;
}

void DspmAssetAccountIdentify::SetPerson(const DspmPersonUser& _person)
{
    m_person = _person;
    m_personHasBeenSet = true;
}

bool DspmAssetAccountIdentify::PersonHasBeenSet() const
{
    return m_personHasBeenSet;
}

DspmUinUser DspmAssetAccountIdentify::GetCreatorUin() const
{
    return m_creatorUin;
}

void DspmAssetAccountIdentify::SetCreatorUin(const DspmUinUser& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool DspmAssetAccountIdentify::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

DspmDbAccountPrivilege DspmAssetAccountIdentify::GetPresetPrivilege() const
{
    return m_presetPrivilege;
}

void DspmAssetAccountIdentify::SetPresetPrivilege(const DspmDbAccountPrivilege& _presetPrivilege)
{
    m_presetPrivilege = _presetPrivilege;
    m_presetPrivilegeHasBeenSet = true;
}

bool DspmAssetAccountIdentify::PresetPrivilegeHasBeenSet() const
{
    return m_presetPrivilegeHasBeenSet;
}

string DspmAssetAccountIdentify::GetPrivateIp() const
{
    return m_privateIp;
}

void DspmAssetAccountIdentify::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool DspmAssetAccountIdentify::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string DspmAssetAccountIdentify::GetIdentifyId() const
{
    return m_identifyId;
}

void DspmAssetAccountIdentify::SetIdentifyId(const string& _identifyId)
{
    m_identifyId = _identifyId;
    m_identifyIdHasBeenSet = true;
}

bool DspmAssetAccountIdentify::IdentifyIdHasBeenSet() const
{
    return m_identifyIdHasBeenSet;
}

uint64_t DspmAssetAccountIdentify::GetAppId() const
{
    return m_appId;
}

void DspmAssetAccountIdentify::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DspmAssetAccountIdentify::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DspmAssetAccountIdentify::GetNickName() const
{
    return m_nickName;
}

void DspmAssetAccountIdentify::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool DspmAssetAccountIdentify::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string DspmAssetAccountIdentify::GetUin() const
{
    return m_uin;
}

void DspmAssetAccountIdentify::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DspmAssetAccountIdentify::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

