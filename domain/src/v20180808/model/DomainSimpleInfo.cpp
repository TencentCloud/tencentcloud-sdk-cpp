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

#include <tencentcloud/domain/v20180808/model/DomainSimpleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

DomainSimpleInfo::DomainSimpleInfo() :
    m_domainIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_realNameAuditStatusHasBeenSet(false),
    m_realNameAuditUnpassReasonHasBeenSet(false),
    m_domainNameAuditStatusHasBeenSet(false),
    m_domainNameAuditUnpassReasonHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_domainStatusHasBeenSet(false),
    m_buyStatusHasBeenSet(false),
    m_registrarTypeHasBeenSet(false),
    m_nameServerHasBeenSet(false),
    m_lockTransferHasBeenSet(false),
    m_lockEndTimeHasBeenSet(false),
    m_registrantTypeHasBeenSet(false),
    m_organizationNameCNHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_registrantNameCNHasBeenSet(false),
    m_registrantNameHasBeenSet(false)
{
}

CoreInternalOutcome DomainSimpleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("RealNameAuditStatus") && !value["RealNameAuditStatus"].IsNull())
    {
        if (!value["RealNameAuditStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.RealNameAuditStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realNameAuditStatus = string(value["RealNameAuditStatus"].GetString());
        m_realNameAuditStatusHasBeenSet = true;
    }

    if (value.HasMember("RealNameAuditUnpassReason") && !value["RealNameAuditUnpassReason"].IsNull())
    {
        if (!value["RealNameAuditUnpassReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.RealNameAuditUnpassReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realNameAuditUnpassReason = string(value["RealNameAuditUnpassReason"].GetString());
        m_realNameAuditUnpassReasonHasBeenSet = true;
    }

    if (value.HasMember("DomainNameAuditStatus") && !value["DomainNameAuditStatus"].IsNull())
    {
        if (!value["DomainNameAuditStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.DomainNameAuditStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainNameAuditStatus = string(value["DomainNameAuditStatus"].GetString());
        m_domainNameAuditStatusHasBeenSet = true;
    }

    if (value.HasMember("DomainNameAuditUnpassReason") && !value["DomainNameAuditUnpassReason"].IsNull())
    {
        if (!value["DomainNameAuditUnpassReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.DomainNameAuditUnpassReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainNameAuditUnpassReason = string(value["DomainNameAuditUnpassReason"].GetString());
        m_domainNameAuditUnpassReasonHasBeenSet = true;
    }

    if (value.HasMember("CreationDate") && !value["CreationDate"].IsNull())
    {
        if (!value["CreationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.CreationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationDate = string(value["CreationDate"].GetString());
        m_creationDateHasBeenSet = true;
    }

    if (value.HasMember("ExpirationDate") && !value["ExpirationDate"].IsNull())
    {
        if (!value["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(value["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (value.HasMember("DomainStatus") && !value["DomainStatus"].IsNull())
    {
        if (!value["DomainStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.DomainStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["DomainStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domainStatus.push_back((*itr).GetString());
        }
        m_domainStatusHasBeenSet = true;
    }

    if (value.HasMember("BuyStatus") && !value["BuyStatus"].IsNull())
    {
        if (!value["BuyStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.BuyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyStatus = string(value["BuyStatus"].GetString());
        m_buyStatusHasBeenSet = true;
    }

    if (value.HasMember("RegistrarType") && !value["RegistrarType"].IsNull())
    {
        if (!value["RegistrarType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.RegistrarType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrarType = string(value["RegistrarType"].GetString());
        m_registrarTypeHasBeenSet = true;
    }

    if (value.HasMember("NameServer") && !value["NameServer"].IsNull())
    {
        if (!value["NameServer"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.NameServer` is not array type"));

        const rapidjson::Value &tmpValue = value["NameServer"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nameServer.push_back((*itr).GetString());
        }
        m_nameServerHasBeenSet = true;
    }

    if (value.HasMember("LockTransfer") && !value["LockTransfer"].IsNull())
    {
        if (!value["LockTransfer"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.LockTransfer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_lockTransfer = value["LockTransfer"].GetBool();
        m_lockTransferHasBeenSet = true;
    }

    if (value.HasMember("LockEndTime") && !value["LockEndTime"].IsNull())
    {
        if (!value["LockEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.LockEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockEndTime = string(value["LockEndTime"].GetString());
        m_lockEndTimeHasBeenSet = true;
    }

    if (value.HasMember("RegistrantType") && !value["RegistrantType"].IsNull())
    {
        if (!value["RegistrantType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.RegistrantType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrantType = string(value["RegistrantType"].GetString());
        m_registrantTypeHasBeenSet = true;
    }

    if (value.HasMember("OrganizationNameCN") && !value["OrganizationNameCN"].IsNull())
    {
        if (!value["OrganizationNameCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.OrganizationNameCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationNameCN = string(value["OrganizationNameCN"].GetString());
        m_organizationNameCNHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("RegistrantNameCN") && !value["RegistrantNameCN"].IsNull())
    {
        if (!value["RegistrantNameCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.RegistrantNameCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrantNameCN = string(value["RegistrantNameCN"].GetString());
        m_registrantNameCNHasBeenSet = true;
    }

    if (value.HasMember("RegistrantName") && !value["RegistrantName"].IsNull())
    {
        if (!value["RegistrantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSimpleInfo.RegistrantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrantName = string(value["RegistrantName"].GetString());
        m_registrantNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainSimpleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_realNameAuditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealNameAuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realNameAuditStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_realNameAuditUnpassReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealNameAuditUnpassReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realNameAuditUnpassReason.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameAuditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainNameAuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainNameAuditStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameAuditUnpassReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainNameAuditUnpassReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainNameAuditUnpassReason.c_str(), allocator).Move(), allocator);
    }

    if (m_creationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expirationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_domainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainStatus.begin(); itr != m_domainStatus.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_buyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_registrarTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrarType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrarType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nameServer.begin(); itr != m_nameServer.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lockTransferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTransfer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockTransfer, allocator);
    }

    if (m_lockEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_registrantTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrantType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrantType.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationNameCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationNameCN.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_registrantNameCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrantNameCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrantNameCN.c_str(), allocator).Move(), allocator);
    }

    if (m_registrantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrantName.c_str(), allocator).Move(), allocator);
    }

}


string DomainSimpleInfo::GetDomainId() const
{
    return m_domainId;
}

void DomainSimpleInfo::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DomainSimpleInfo::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string DomainSimpleInfo::GetDomainName() const
{
    return m_domainName;
}

void DomainSimpleInfo::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool DomainSimpleInfo::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string DomainSimpleInfo::GetRealNameAuditStatus() const
{
    return m_realNameAuditStatus;
}

void DomainSimpleInfo::SetRealNameAuditStatus(const string& _realNameAuditStatus)
{
    m_realNameAuditStatus = _realNameAuditStatus;
    m_realNameAuditStatusHasBeenSet = true;
}

bool DomainSimpleInfo::RealNameAuditStatusHasBeenSet() const
{
    return m_realNameAuditStatusHasBeenSet;
}

string DomainSimpleInfo::GetRealNameAuditUnpassReason() const
{
    return m_realNameAuditUnpassReason;
}

void DomainSimpleInfo::SetRealNameAuditUnpassReason(const string& _realNameAuditUnpassReason)
{
    m_realNameAuditUnpassReason = _realNameAuditUnpassReason;
    m_realNameAuditUnpassReasonHasBeenSet = true;
}

bool DomainSimpleInfo::RealNameAuditUnpassReasonHasBeenSet() const
{
    return m_realNameAuditUnpassReasonHasBeenSet;
}

string DomainSimpleInfo::GetDomainNameAuditStatus() const
{
    return m_domainNameAuditStatus;
}

void DomainSimpleInfo::SetDomainNameAuditStatus(const string& _domainNameAuditStatus)
{
    m_domainNameAuditStatus = _domainNameAuditStatus;
    m_domainNameAuditStatusHasBeenSet = true;
}

bool DomainSimpleInfo::DomainNameAuditStatusHasBeenSet() const
{
    return m_domainNameAuditStatusHasBeenSet;
}

string DomainSimpleInfo::GetDomainNameAuditUnpassReason() const
{
    return m_domainNameAuditUnpassReason;
}

void DomainSimpleInfo::SetDomainNameAuditUnpassReason(const string& _domainNameAuditUnpassReason)
{
    m_domainNameAuditUnpassReason = _domainNameAuditUnpassReason;
    m_domainNameAuditUnpassReasonHasBeenSet = true;
}

bool DomainSimpleInfo::DomainNameAuditUnpassReasonHasBeenSet() const
{
    return m_domainNameAuditUnpassReasonHasBeenSet;
}

string DomainSimpleInfo::GetCreationDate() const
{
    return m_creationDate;
}

void DomainSimpleInfo::SetCreationDate(const string& _creationDate)
{
    m_creationDate = _creationDate;
    m_creationDateHasBeenSet = true;
}

bool DomainSimpleInfo::CreationDateHasBeenSet() const
{
    return m_creationDateHasBeenSet;
}

string DomainSimpleInfo::GetExpirationDate() const
{
    return m_expirationDate;
}

void DomainSimpleInfo::SetExpirationDate(const string& _expirationDate)
{
    m_expirationDate = _expirationDate;
    m_expirationDateHasBeenSet = true;
}

bool DomainSimpleInfo::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

vector<string> DomainSimpleInfo::GetDomainStatus() const
{
    return m_domainStatus;
}

void DomainSimpleInfo::SetDomainStatus(const vector<string>& _domainStatus)
{
    m_domainStatus = _domainStatus;
    m_domainStatusHasBeenSet = true;
}

bool DomainSimpleInfo::DomainStatusHasBeenSet() const
{
    return m_domainStatusHasBeenSet;
}

string DomainSimpleInfo::GetBuyStatus() const
{
    return m_buyStatus;
}

void DomainSimpleInfo::SetBuyStatus(const string& _buyStatus)
{
    m_buyStatus = _buyStatus;
    m_buyStatusHasBeenSet = true;
}

bool DomainSimpleInfo::BuyStatusHasBeenSet() const
{
    return m_buyStatusHasBeenSet;
}

string DomainSimpleInfo::GetRegistrarType() const
{
    return m_registrarType;
}

void DomainSimpleInfo::SetRegistrarType(const string& _registrarType)
{
    m_registrarType = _registrarType;
    m_registrarTypeHasBeenSet = true;
}

bool DomainSimpleInfo::RegistrarTypeHasBeenSet() const
{
    return m_registrarTypeHasBeenSet;
}

vector<string> DomainSimpleInfo::GetNameServer() const
{
    return m_nameServer;
}

void DomainSimpleInfo::SetNameServer(const vector<string>& _nameServer)
{
    m_nameServer = _nameServer;
    m_nameServerHasBeenSet = true;
}

bool DomainSimpleInfo::NameServerHasBeenSet() const
{
    return m_nameServerHasBeenSet;
}

bool DomainSimpleInfo::GetLockTransfer() const
{
    return m_lockTransfer;
}

void DomainSimpleInfo::SetLockTransfer(const bool& _lockTransfer)
{
    m_lockTransfer = _lockTransfer;
    m_lockTransferHasBeenSet = true;
}

bool DomainSimpleInfo::LockTransferHasBeenSet() const
{
    return m_lockTransferHasBeenSet;
}

string DomainSimpleInfo::GetLockEndTime() const
{
    return m_lockEndTime;
}

void DomainSimpleInfo::SetLockEndTime(const string& _lockEndTime)
{
    m_lockEndTime = _lockEndTime;
    m_lockEndTimeHasBeenSet = true;
}

bool DomainSimpleInfo::LockEndTimeHasBeenSet() const
{
    return m_lockEndTimeHasBeenSet;
}

string DomainSimpleInfo::GetRegistrantType() const
{
    return m_registrantType;
}

void DomainSimpleInfo::SetRegistrantType(const string& _registrantType)
{
    m_registrantType = _registrantType;
    m_registrantTypeHasBeenSet = true;
}

bool DomainSimpleInfo::RegistrantTypeHasBeenSet() const
{
    return m_registrantTypeHasBeenSet;
}

string DomainSimpleInfo::GetOrganizationNameCN() const
{
    return m_organizationNameCN;
}

void DomainSimpleInfo::SetOrganizationNameCN(const string& _organizationNameCN)
{
    m_organizationNameCN = _organizationNameCN;
    m_organizationNameCNHasBeenSet = true;
}

bool DomainSimpleInfo::OrganizationNameCNHasBeenSet() const
{
    return m_organizationNameCNHasBeenSet;
}

string DomainSimpleInfo::GetOrganizationName() const
{
    return m_organizationName;
}

void DomainSimpleInfo::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool DomainSimpleInfo::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string DomainSimpleInfo::GetRegistrantNameCN() const
{
    return m_registrantNameCN;
}

void DomainSimpleInfo::SetRegistrantNameCN(const string& _registrantNameCN)
{
    m_registrantNameCN = _registrantNameCN;
    m_registrantNameCNHasBeenSet = true;
}

bool DomainSimpleInfo::RegistrantNameCNHasBeenSet() const
{
    return m_registrantNameCNHasBeenSet;
}

string DomainSimpleInfo::GetRegistrantName() const
{
    return m_registrantName;
}

void DomainSimpleInfo::SetRegistrantName(const string& _registrantName)
{
    m_registrantName = _registrantName;
    m_registrantNameHasBeenSet = true;
}

bool DomainSimpleInfo::RegistrantNameHasBeenSet() const
{
    return m_registrantNameHasBeenSet;
}

