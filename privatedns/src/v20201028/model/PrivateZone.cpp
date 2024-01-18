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

#include <tencentcloud/privatedns/v20201028/model/PrivateZone.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

PrivateZone::PrivateZone() :
    m_zoneIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false),
    m_recordCountHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_vpcSetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_dnsForwardStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_accountVpcSetHasBeenSet(false),
    m_isCustomTldHasBeenSet(false),
    m_cnameSpeedupStatusHasBeenSet(false),
    m_forwardRuleNameHasBeenSet(false),
    m_forwardRuleTypeHasBeenSet(false),
    m_forwardAddressHasBeenSet(false),
    m_endPointNameHasBeenSet(false),
    m_deletedVpcSetHasBeenSet(false)
{
}

CoreInternalOutcome PrivateZone::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZone.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZone.OwnerUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = value["OwnerUin"].GetInt64();
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZone.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZone.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZone.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }

    if (value.HasMember("RecordCount") && !value["RecordCount"].IsNull())
    {
        if (!value["RecordCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZone.RecordCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordCount = value["RecordCount"].GetInt64();
        m_recordCountHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZone.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("VpcSet") && !value["VpcSet"].IsNull())
    {
        if (!value["VpcSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivateZone.VpcSet` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcSet.push_back(item);
        }
        m_vpcSetHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZone.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DnsForwardStatus") && !value["DnsForwardStatus"].IsNull())
    {
        if (!value["DnsForwardStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZone.DnsForwardStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsForwardStatus = string(value["DnsForwardStatus"].GetString());
        m_dnsForwardStatusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivateZone.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
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

    if (value.HasMember("AccountVpcSet") && !value["AccountVpcSet"].IsNull())
    {
        if (!value["AccountVpcSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivateZone.AccountVpcSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AccountVpcSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccountVpcInfoOutput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accountVpcSet.push_back(item);
        }
        m_accountVpcSetHasBeenSet = true;
    }

    if (value.HasMember("IsCustomTld") && !value["IsCustomTld"].IsNull())
    {
        if (!value["IsCustomTld"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZone.IsCustomTld` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCustomTld = value["IsCustomTld"].GetBool();
        m_isCustomTldHasBeenSet = true;
    }

    if (value.HasMember("CnameSpeedupStatus") && !value["CnameSpeedupStatus"].IsNull())
    {
        if (!value["CnameSpeedupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZone.CnameSpeedupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnameSpeedupStatus = string(value["CnameSpeedupStatus"].GetString());
        m_cnameSpeedupStatusHasBeenSet = true;
    }

    if (value.HasMember("ForwardRuleName") && !value["ForwardRuleName"].IsNull())
    {
        if (!value["ForwardRuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZone.ForwardRuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardRuleName = string(value["ForwardRuleName"].GetString());
        m_forwardRuleNameHasBeenSet = true;
    }

    if (value.HasMember("ForwardRuleType") && !value["ForwardRuleType"].IsNull())
    {
        if (!value["ForwardRuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZone.ForwardRuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardRuleType = string(value["ForwardRuleType"].GetString());
        m_forwardRuleTypeHasBeenSet = true;
    }

    if (value.HasMember("ForwardAddress") && !value["ForwardAddress"].IsNull())
    {
        if (!value["ForwardAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZone.ForwardAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardAddress = string(value["ForwardAddress"].GetString());
        m_forwardAddressHasBeenSet = true;
    }

    if (value.HasMember("EndPointName") && !value["EndPointName"].IsNull())
    {
        if (!value["EndPointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZone.EndPointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointName = string(value["EndPointName"].GetString());
        m_endPointNameHasBeenSet = true;
    }

    if (value.HasMember("DeletedVpcSet") && !value["DeletedVpcSet"].IsNull())
    {
        if (!value["DeletedVpcSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivateZone.DeletedVpcSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DeletedVpcSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deletedVpcSet.push_back(item);
        }
        m_deletedVpcSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivateZone::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerUin, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_recordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordCount, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcSet.begin(); itr != m_vpcSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsForwardStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsForwardStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsForwardStatus.c_str(), allocator).Move(), allocator);
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

    if (m_accountVpcSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountVpcSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accountVpcSet.begin(); itr != m_accountVpcSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isCustomTldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCustomTld";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCustomTld, allocator);
    }

    if (m_cnameSpeedupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnameSpeedupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnameSpeedupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardRuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardRuleName.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardRuleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardRuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardRuleType.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_deletedVpcSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletedVpcSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deletedVpcSet.begin(); itr != m_deletedVpcSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PrivateZone::GetZoneId() const
{
    return m_zoneId;
}

void PrivateZone::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool PrivateZone::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t PrivateZone::GetOwnerUin() const
{
    return m_ownerUin;
}

void PrivateZone::SetOwnerUin(const int64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool PrivateZone::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string PrivateZone::GetDomain() const
{
    return m_domain;
}

void PrivateZone::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool PrivateZone::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string PrivateZone::GetCreatedOn() const
{
    return m_createdOn;
}

void PrivateZone::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool PrivateZone::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string PrivateZone::GetUpdatedOn() const
{
    return m_updatedOn;
}

void PrivateZone::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool PrivateZone::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

int64_t PrivateZone::GetRecordCount() const
{
    return m_recordCount;
}

void PrivateZone::SetRecordCount(const int64_t& _recordCount)
{
    m_recordCount = _recordCount;
    m_recordCountHasBeenSet = true;
}

bool PrivateZone::RecordCountHasBeenSet() const
{
    return m_recordCountHasBeenSet;
}

string PrivateZone::GetRemark() const
{
    return m_remark;
}

void PrivateZone::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool PrivateZone::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<VpcInfo> PrivateZone::GetVpcSet() const
{
    return m_vpcSet;
}

void PrivateZone::SetVpcSet(const vector<VpcInfo>& _vpcSet)
{
    m_vpcSet = _vpcSet;
    m_vpcSetHasBeenSet = true;
}

bool PrivateZone::VpcSetHasBeenSet() const
{
    return m_vpcSetHasBeenSet;
}

string PrivateZone::GetStatus() const
{
    return m_status;
}

void PrivateZone::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PrivateZone::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PrivateZone::GetDnsForwardStatus() const
{
    return m_dnsForwardStatus;
}

void PrivateZone::SetDnsForwardStatus(const string& _dnsForwardStatus)
{
    m_dnsForwardStatus = _dnsForwardStatus;
    m_dnsForwardStatusHasBeenSet = true;
}

bool PrivateZone::DnsForwardStatusHasBeenSet() const
{
    return m_dnsForwardStatusHasBeenSet;
}

vector<TagInfo> PrivateZone::GetTags() const
{
    return m_tags;
}

void PrivateZone::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool PrivateZone::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<AccountVpcInfoOutput> PrivateZone::GetAccountVpcSet() const
{
    return m_accountVpcSet;
}

void PrivateZone::SetAccountVpcSet(const vector<AccountVpcInfoOutput>& _accountVpcSet)
{
    m_accountVpcSet = _accountVpcSet;
    m_accountVpcSetHasBeenSet = true;
}

bool PrivateZone::AccountVpcSetHasBeenSet() const
{
    return m_accountVpcSetHasBeenSet;
}

bool PrivateZone::GetIsCustomTld() const
{
    return m_isCustomTld;
}

void PrivateZone::SetIsCustomTld(const bool& _isCustomTld)
{
    m_isCustomTld = _isCustomTld;
    m_isCustomTldHasBeenSet = true;
}

bool PrivateZone::IsCustomTldHasBeenSet() const
{
    return m_isCustomTldHasBeenSet;
}

string PrivateZone::GetCnameSpeedupStatus() const
{
    return m_cnameSpeedupStatus;
}

void PrivateZone::SetCnameSpeedupStatus(const string& _cnameSpeedupStatus)
{
    m_cnameSpeedupStatus = _cnameSpeedupStatus;
    m_cnameSpeedupStatusHasBeenSet = true;
}

bool PrivateZone::CnameSpeedupStatusHasBeenSet() const
{
    return m_cnameSpeedupStatusHasBeenSet;
}

string PrivateZone::GetForwardRuleName() const
{
    return m_forwardRuleName;
}

void PrivateZone::SetForwardRuleName(const string& _forwardRuleName)
{
    m_forwardRuleName = _forwardRuleName;
    m_forwardRuleNameHasBeenSet = true;
}

bool PrivateZone::ForwardRuleNameHasBeenSet() const
{
    return m_forwardRuleNameHasBeenSet;
}

string PrivateZone::GetForwardRuleType() const
{
    return m_forwardRuleType;
}

void PrivateZone::SetForwardRuleType(const string& _forwardRuleType)
{
    m_forwardRuleType = _forwardRuleType;
    m_forwardRuleTypeHasBeenSet = true;
}

bool PrivateZone::ForwardRuleTypeHasBeenSet() const
{
    return m_forwardRuleTypeHasBeenSet;
}

string PrivateZone::GetForwardAddress() const
{
    return m_forwardAddress;
}

void PrivateZone::SetForwardAddress(const string& _forwardAddress)
{
    m_forwardAddress = _forwardAddress;
    m_forwardAddressHasBeenSet = true;
}

bool PrivateZone::ForwardAddressHasBeenSet() const
{
    return m_forwardAddressHasBeenSet;
}

string PrivateZone::GetEndPointName() const
{
    return m_endPointName;
}

void PrivateZone::SetEndPointName(const string& _endPointName)
{
    m_endPointName = _endPointName;
    m_endPointNameHasBeenSet = true;
}

bool PrivateZone::EndPointNameHasBeenSet() const
{
    return m_endPointNameHasBeenSet;
}

vector<VpcInfo> PrivateZone::GetDeletedVpcSet() const
{
    return m_deletedVpcSet;
}

void PrivateZone::SetDeletedVpcSet(const vector<VpcInfo>& _deletedVpcSet)
{
    m_deletedVpcSet = _deletedVpcSet;
    m_deletedVpcSetHasBeenSet = true;
}

bool PrivateZone::DeletedVpcSetHasBeenSet() const
{
    return m_deletedVpcSetHasBeenSet;
}

