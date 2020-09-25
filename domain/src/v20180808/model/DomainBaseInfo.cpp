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

#include <tencentcloud/domain/v20180808/model/DomainBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace rapidjson;
using namespace std;

DomainBaseInfo::DomainBaseInfo() :
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
    m_registrarTypeHasBeenSet(false)
{
}

CoreInternalOutcome DomainBaseInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBaseInfo.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBaseInfo.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("RealNameAuditStatus") && !value["RealNameAuditStatus"].IsNull())
    {
        if (!value["RealNameAuditStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBaseInfo.RealNameAuditStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realNameAuditStatus = string(value["RealNameAuditStatus"].GetString());
        m_realNameAuditStatusHasBeenSet = true;
    }

    if (value.HasMember("RealNameAuditUnpassReason") && !value["RealNameAuditUnpassReason"].IsNull())
    {
        if (!value["RealNameAuditUnpassReason"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBaseInfo.RealNameAuditUnpassReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realNameAuditUnpassReason = string(value["RealNameAuditUnpassReason"].GetString());
        m_realNameAuditUnpassReasonHasBeenSet = true;
    }

    if (value.HasMember("DomainNameAuditStatus") && !value["DomainNameAuditStatus"].IsNull())
    {
        if (!value["DomainNameAuditStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBaseInfo.DomainNameAuditStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainNameAuditStatus = string(value["DomainNameAuditStatus"].GetString());
        m_domainNameAuditStatusHasBeenSet = true;
    }

    if (value.HasMember("DomainNameAuditUnpassReason") && !value["DomainNameAuditUnpassReason"].IsNull())
    {
        if (!value["DomainNameAuditUnpassReason"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBaseInfo.DomainNameAuditUnpassReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainNameAuditUnpassReason = string(value["DomainNameAuditUnpassReason"].GetString());
        m_domainNameAuditUnpassReasonHasBeenSet = true;
    }

    if (value.HasMember("CreationDate") && !value["CreationDate"].IsNull())
    {
        if (!value["CreationDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBaseInfo.CreationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationDate = string(value["CreationDate"].GetString());
        m_creationDateHasBeenSet = true;
    }

    if (value.HasMember("ExpirationDate") && !value["ExpirationDate"].IsNull())
    {
        if (!value["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBaseInfo.ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(value["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (value.HasMember("DomainStatus") && !value["DomainStatus"].IsNull())
    {
        if (!value["DomainStatus"].IsArray())
            return CoreInternalOutcome(Error("response `DomainBaseInfo.DomainStatus` is not array type"));

        const Value &tmpValue = value["DomainStatus"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domainStatus.push_back((*itr).GetString());
        }
        m_domainStatusHasBeenSet = true;
    }

    if (value.HasMember("BuyStatus") && !value["BuyStatus"].IsNull())
    {
        if (!value["BuyStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBaseInfo.BuyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyStatus = string(value["BuyStatus"].GetString());
        m_buyStatusHasBeenSet = true;
    }

    if (value.HasMember("RegistrarType") && !value["RegistrarType"].IsNull())
    {
        if (!value["RegistrarType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBaseInfo.RegistrarType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrarType = string(value["RegistrarType"].GetString());
        m_registrarTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainBaseInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_domainIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_realNameAuditStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealNameAuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realNameAuditStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_realNameAuditUnpassReasonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealNameAuditUnpassReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realNameAuditUnpassReason.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameAuditStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainNameAuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domainNameAuditStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameAuditUnpassReasonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainNameAuditUnpassReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domainNameAuditUnpassReason.c_str(), allocator).Move(), allocator);
    }

    if (m_creationDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_creationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpirationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_expirationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_domainStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_domainStatus.begin(); itr != m_domainStatus.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_buyStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BuyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_buyStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_registrarTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegistrarType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_registrarType.c_str(), allocator).Move(), allocator);
    }

}


string DomainBaseInfo::GetDomainId() const
{
    return m_domainId;
}

void DomainBaseInfo::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DomainBaseInfo::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string DomainBaseInfo::GetDomainName() const
{
    return m_domainName;
}

void DomainBaseInfo::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool DomainBaseInfo::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string DomainBaseInfo::GetRealNameAuditStatus() const
{
    return m_realNameAuditStatus;
}

void DomainBaseInfo::SetRealNameAuditStatus(const string& _realNameAuditStatus)
{
    m_realNameAuditStatus = _realNameAuditStatus;
    m_realNameAuditStatusHasBeenSet = true;
}

bool DomainBaseInfo::RealNameAuditStatusHasBeenSet() const
{
    return m_realNameAuditStatusHasBeenSet;
}

string DomainBaseInfo::GetRealNameAuditUnpassReason() const
{
    return m_realNameAuditUnpassReason;
}

void DomainBaseInfo::SetRealNameAuditUnpassReason(const string& _realNameAuditUnpassReason)
{
    m_realNameAuditUnpassReason = _realNameAuditUnpassReason;
    m_realNameAuditUnpassReasonHasBeenSet = true;
}

bool DomainBaseInfo::RealNameAuditUnpassReasonHasBeenSet() const
{
    return m_realNameAuditUnpassReasonHasBeenSet;
}

string DomainBaseInfo::GetDomainNameAuditStatus() const
{
    return m_domainNameAuditStatus;
}

void DomainBaseInfo::SetDomainNameAuditStatus(const string& _domainNameAuditStatus)
{
    m_domainNameAuditStatus = _domainNameAuditStatus;
    m_domainNameAuditStatusHasBeenSet = true;
}

bool DomainBaseInfo::DomainNameAuditStatusHasBeenSet() const
{
    return m_domainNameAuditStatusHasBeenSet;
}

string DomainBaseInfo::GetDomainNameAuditUnpassReason() const
{
    return m_domainNameAuditUnpassReason;
}

void DomainBaseInfo::SetDomainNameAuditUnpassReason(const string& _domainNameAuditUnpassReason)
{
    m_domainNameAuditUnpassReason = _domainNameAuditUnpassReason;
    m_domainNameAuditUnpassReasonHasBeenSet = true;
}

bool DomainBaseInfo::DomainNameAuditUnpassReasonHasBeenSet() const
{
    return m_domainNameAuditUnpassReasonHasBeenSet;
}

string DomainBaseInfo::GetCreationDate() const
{
    return m_creationDate;
}

void DomainBaseInfo::SetCreationDate(const string& _creationDate)
{
    m_creationDate = _creationDate;
    m_creationDateHasBeenSet = true;
}

bool DomainBaseInfo::CreationDateHasBeenSet() const
{
    return m_creationDateHasBeenSet;
}

string DomainBaseInfo::GetExpirationDate() const
{
    return m_expirationDate;
}

void DomainBaseInfo::SetExpirationDate(const string& _expirationDate)
{
    m_expirationDate = _expirationDate;
    m_expirationDateHasBeenSet = true;
}

bool DomainBaseInfo::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

vector<string> DomainBaseInfo::GetDomainStatus() const
{
    return m_domainStatus;
}

void DomainBaseInfo::SetDomainStatus(const vector<string>& _domainStatus)
{
    m_domainStatus = _domainStatus;
    m_domainStatusHasBeenSet = true;
}

bool DomainBaseInfo::DomainStatusHasBeenSet() const
{
    return m_domainStatusHasBeenSet;
}

string DomainBaseInfo::GetBuyStatus() const
{
    return m_buyStatus;
}

void DomainBaseInfo::SetBuyStatus(const string& _buyStatus)
{
    m_buyStatus = _buyStatus;
    m_buyStatusHasBeenSet = true;
}

bool DomainBaseInfo::BuyStatusHasBeenSet() const
{
    return m_buyStatusHasBeenSet;
}

string DomainBaseInfo::GetRegistrarType() const
{
    return m_registrarType;
}

void DomainBaseInfo::SetRegistrarType(const string& _registrarType)
{
    m_registrarType = _registrarType;
    m_registrarTypeHasBeenSet = true;
}

bool DomainBaseInfo::RegistrarTypeHasBeenSet() const
{
    return m_registrarTypeHasBeenSet;
}

