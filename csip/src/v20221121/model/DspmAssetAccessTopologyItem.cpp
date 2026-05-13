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

#include <tencentcloud/csip/v20221121/model/DspmAssetAccessTopologyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmAssetAccessTopologyItem::DspmAssetAccessTopologyItem() :
    m_assetIdHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetAccountHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_assetIpHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_sourceIpTypeHasBeenSet(false),
    m_accessFrequencyHasBeenSet(false),
    m_execSQLFrequencyHasBeenSet(false),
    m_accessBeginTimeHasBeenSet(false),
    m_accessEndTimeHasBeenSet(false),
    m_accountRiskHasBeenSet(false),
    m_assetRiskHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_identifyTypeHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_personHasBeenSet(false),
    m_accountAlarmHasBeenSet(false),
    m_assetAlarmHasBeenSet(false)
{
}

CoreInternalOutcome DspmAssetAccessTopologyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetAccount") && !value["AssetAccount"].IsNull())
    {
        if (!value["AssetAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.AssetAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetAccount = string(value["AssetAccount"].GetString());
        m_assetAccountHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.AccountType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = value["AccountType"].GetInt64();
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetIp") && !value["AssetIp"].IsNull())
    {
        if (!value["AssetIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.AssetIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetIp = string(value["AssetIp"].GetString());
        m_assetIpHasBeenSet = true;
    }

    if (value.HasMember("SourceIp") && !value["SourceIp"].IsNull())
    {
        if (!value["SourceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.SourceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIp = string(value["SourceIp"].GetString());
        m_sourceIpHasBeenSet = true;
    }

    if (value.HasMember("SourceIpType") && !value["SourceIpType"].IsNull())
    {
        if (!value["SourceIpType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.SourceIpType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIpType = string(value["SourceIpType"].GetString());
        m_sourceIpTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessFrequency") && !value["AccessFrequency"].IsNull())
    {
        if (!value["AccessFrequency"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.AccessFrequency` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accessFrequency.Deserialize(value["AccessFrequency"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accessFrequencyHasBeenSet = true;
    }

    if (value.HasMember("ExecSQLFrequency") && !value["ExecSQLFrequency"].IsNull())
    {
        if (!value["ExecSQLFrequency"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.ExecSQLFrequency` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_execSQLFrequency.Deserialize(value["ExecSQLFrequency"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_execSQLFrequencyHasBeenSet = true;
    }

    if (value.HasMember("AccessBeginTime") && !value["AccessBeginTime"].IsNull())
    {
        if (!value["AccessBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.AccessBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessBeginTime = string(value["AccessBeginTime"].GetString());
        m_accessBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("AccessEndTime") && !value["AccessEndTime"].IsNull())
    {
        if (!value["AccessEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.AccessEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessEndTime = string(value["AccessEndTime"].GetString());
        m_accessEndTimeHasBeenSet = true;
    }

    if (value.HasMember("AccountRisk") && !value["AccountRisk"].IsNull())
    {
        if (!value["AccountRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.AccountRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountRisk = value["AccountRisk"].GetInt64();
        m_accountRiskHasBeenSet = true;
    }

    if (value.HasMember("AssetRisk") && !value["AssetRisk"].IsNull())
    {
        if (!value["AssetRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.AssetRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetRisk = value["AssetRisk"].GetInt64();
        m_assetRiskHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("IdentifyType") && !value["IdentifyType"].IsNull())
    {
        if (!value["IdentifyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.IdentifyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identifyType = value["IdentifyType"].GetInt64();
        m_identifyTypeHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.OwnerUin` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.Person` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_person.Deserialize(value["Person"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personHasBeenSet = true;
    }

    if (value.HasMember("AccountAlarm") && !value["AccountAlarm"].IsNull())
    {
        if (!value["AccountAlarm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.AccountAlarm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountAlarm = value["AccountAlarm"].GetInt64();
        m_accountAlarmHasBeenSet = true;
    }

    if (value.HasMember("AssetAlarm") && !value["AssetAlarm"].IsNull())
    {
        if (!value["AssetAlarm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetAccessTopologyItem.AssetAlarm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetAlarm = value["AssetAlarm"].GetInt64();
        m_assetAlarmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmAssetAccessTopologyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetAccount.c_str(), allocator).Move(), allocator);
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

    if (m_assetIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetIp.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIpType.c_str(), allocator).Move(), allocator);
    }

    if (m_accessFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accessFrequency.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_execSQLFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecSQLFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_execSQLFrequency.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accessBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_accessEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_accountRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountRisk, allocator);
    }

    if (m_assetRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetRisk, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
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

    if (m_accountAlarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountAlarm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountAlarm, allocator);
    }

    if (m_assetAlarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetAlarm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetAlarm, allocator);
    }

}


string DspmAssetAccessTopologyItem::GetAssetId() const
{
    return m_assetId;
}

void DspmAssetAccessTopologyItem::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DspmAssetAccessTopologyItem::GetAssetType() const
{
    return m_assetType;
}

void DspmAssetAccessTopologyItem::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string DspmAssetAccessTopologyItem::GetAssetName() const
{
    return m_assetName;
}

void DspmAssetAccessTopologyItem::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string DspmAssetAccessTopologyItem::GetAssetAccount() const
{
    return m_assetAccount;
}

void DspmAssetAccessTopologyItem::SetAssetAccount(const string& _assetAccount)
{
    m_assetAccount = _assetAccount;
    m_assetAccountHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::AssetAccountHasBeenSet() const
{
    return m_assetAccountHasBeenSet;
}

string DspmAssetAccessTopologyItem::GetHost() const
{
    return m_host;
}

void DspmAssetAccessTopologyItem::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

int64_t DspmAssetAccessTopologyItem::GetAccountType() const
{
    return m_accountType;
}

void DspmAssetAccessTopologyItem::SetAccountType(const int64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string DspmAssetAccessTopologyItem::GetAssetIp() const
{
    return m_assetIp;
}

void DspmAssetAccessTopologyItem::SetAssetIp(const string& _assetIp)
{
    m_assetIp = _assetIp;
    m_assetIpHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::AssetIpHasBeenSet() const
{
    return m_assetIpHasBeenSet;
}

string DspmAssetAccessTopologyItem::GetSourceIp() const
{
    return m_sourceIp;
}

void DspmAssetAccessTopologyItem::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

string DspmAssetAccessTopologyItem::GetSourceIpType() const
{
    return m_sourceIpType;
}

void DspmAssetAccessTopologyItem::SetSourceIpType(const string& _sourceIpType)
{
    m_sourceIpType = _sourceIpType;
    m_sourceIpTypeHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::SourceIpTypeHasBeenSet() const
{
    return m_sourceIpTypeHasBeenSet;
}

DspmFrequency DspmAssetAccessTopologyItem::GetAccessFrequency() const
{
    return m_accessFrequency;
}

void DspmAssetAccessTopologyItem::SetAccessFrequency(const DspmFrequency& _accessFrequency)
{
    m_accessFrequency = _accessFrequency;
    m_accessFrequencyHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::AccessFrequencyHasBeenSet() const
{
    return m_accessFrequencyHasBeenSet;
}

DspmFrequency DspmAssetAccessTopologyItem::GetExecSQLFrequency() const
{
    return m_execSQLFrequency;
}

void DspmAssetAccessTopologyItem::SetExecSQLFrequency(const DspmFrequency& _execSQLFrequency)
{
    m_execSQLFrequency = _execSQLFrequency;
    m_execSQLFrequencyHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::ExecSQLFrequencyHasBeenSet() const
{
    return m_execSQLFrequencyHasBeenSet;
}

string DspmAssetAccessTopologyItem::GetAccessBeginTime() const
{
    return m_accessBeginTime;
}

void DspmAssetAccessTopologyItem::SetAccessBeginTime(const string& _accessBeginTime)
{
    m_accessBeginTime = _accessBeginTime;
    m_accessBeginTimeHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::AccessBeginTimeHasBeenSet() const
{
    return m_accessBeginTimeHasBeenSet;
}

string DspmAssetAccessTopologyItem::GetAccessEndTime() const
{
    return m_accessEndTime;
}

void DspmAssetAccessTopologyItem::SetAccessEndTime(const string& _accessEndTime)
{
    m_accessEndTime = _accessEndTime;
    m_accessEndTimeHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::AccessEndTimeHasBeenSet() const
{
    return m_accessEndTimeHasBeenSet;
}

int64_t DspmAssetAccessTopologyItem::GetAccountRisk() const
{
    return m_accountRisk;
}

void DspmAssetAccessTopologyItem::SetAccountRisk(const int64_t& _accountRisk)
{
    m_accountRisk = _accountRisk;
    m_accountRiskHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::AccountRiskHasBeenSet() const
{
    return m_accountRiskHasBeenSet;
}

int64_t DspmAssetAccessTopologyItem::GetAssetRisk() const
{
    return m_assetRisk;
}

void DspmAssetAccessTopologyItem::SetAssetRisk(const int64_t& _assetRisk)
{
    m_assetRisk = _assetRisk;
    m_assetRiskHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::AssetRiskHasBeenSet() const
{
    return m_assetRiskHasBeenSet;
}

string DspmAssetAccessTopologyItem::GetRegion() const
{
    return m_region;
}

void DspmAssetAccessTopologyItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t DspmAssetAccessTopologyItem::GetIdentifyType() const
{
    return m_identifyType;
}

void DspmAssetAccessTopologyItem::SetIdentifyType(const int64_t& _identifyType)
{
    m_identifyType = _identifyType;
    m_identifyTypeHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::IdentifyTypeHasBeenSet() const
{
    return m_identifyTypeHasBeenSet;
}

DspmUinUser DspmAssetAccessTopologyItem::GetOwnerUin() const
{
    return m_ownerUin;
}

void DspmAssetAccessTopologyItem::SetOwnerUin(const DspmUinUser& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

DspmPersonUser DspmAssetAccessTopologyItem::GetPerson() const
{
    return m_person;
}

void DspmAssetAccessTopologyItem::SetPerson(const DspmPersonUser& _person)
{
    m_person = _person;
    m_personHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::PersonHasBeenSet() const
{
    return m_personHasBeenSet;
}

int64_t DspmAssetAccessTopologyItem::GetAccountAlarm() const
{
    return m_accountAlarm;
}

void DspmAssetAccessTopologyItem::SetAccountAlarm(const int64_t& _accountAlarm)
{
    m_accountAlarm = _accountAlarm;
    m_accountAlarmHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::AccountAlarmHasBeenSet() const
{
    return m_accountAlarmHasBeenSet;
}

int64_t DspmAssetAccessTopologyItem::GetAssetAlarm() const
{
    return m_assetAlarm;
}

void DspmAssetAccessTopologyItem::SetAssetAlarm(const int64_t& _assetAlarm)
{
    m_assetAlarm = _assetAlarm;
    m_assetAlarmHasBeenSet = true;
}

bool DspmAssetAccessTopologyItem::AssetAlarmHasBeenSet() const
{
    return m_assetAlarmHasBeenSet;
}

