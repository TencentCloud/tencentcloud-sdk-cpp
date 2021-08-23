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

#include <tencentcloud/domain/v20180808/model/DomainList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

DomainList::DomainList() :
    m_isPremiumHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_tldHasBeenSet(false),
    m_codeTldHasBeenSet(false),
    m_buyStatusHasBeenSet(false)
{
}

CoreInternalOutcome DomainList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsPremium") && !value["IsPremium"].IsNull())
    {
        if (!value["IsPremium"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DomainList.IsPremium` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPremium = value["IsPremium"].GetBool();
        m_isPremiumHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainList.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainList.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("AutoRenew") && !value["AutoRenew"].IsNull())
    {
        if (!value["AutoRenew"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainList.AutoRenew` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenew = value["AutoRenew"].GetUint64();
        m_autoRenewHasBeenSet = true;
    }

    if (value.HasMember("CreationDate") && !value["CreationDate"].IsNull())
    {
        if (!value["CreationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainList.CreationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationDate = string(value["CreationDate"].GetString());
        m_creationDateHasBeenSet = true;
    }

    if (value.HasMember("ExpirationDate") && !value["ExpirationDate"].IsNull())
    {
        if (!value["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainList.ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(value["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (value.HasMember("Tld") && !value["Tld"].IsNull())
    {
        if (!value["Tld"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainList.Tld` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tld = string(value["Tld"].GetString());
        m_tldHasBeenSet = true;
    }

    if (value.HasMember("CodeTld") && !value["CodeTld"].IsNull())
    {
        if (!value["CodeTld"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainList.CodeTld` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeTld = string(value["CodeTld"].GetString());
        m_codeTldHasBeenSet = true;
    }

    if (value.HasMember("BuyStatus") && !value["BuyStatus"].IsNull())
    {
        if (!value["BuyStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainList.BuyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyStatus = string(value["BuyStatus"].GetString());
        m_buyStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isPremiumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPremium";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPremium, allocator);
    }

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

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenew, allocator);
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

    if (m_tldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tld";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tld.c_str(), allocator).Move(), allocator);
    }

    if (m_codeTldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeTld";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeTld.c_str(), allocator).Move(), allocator);
    }

    if (m_buyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyStatus.c_str(), allocator).Move(), allocator);
    }

}


bool DomainList::GetIsPremium() const
{
    return m_isPremium;
}

void DomainList::SetIsPremium(const bool& _isPremium)
{
    m_isPremium = _isPremium;
    m_isPremiumHasBeenSet = true;
}

bool DomainList::IsPremiumHasBeenSet() const
{
    return m_isPremiumHasBeenSet;
}

string DomainList::GetDomainId() const
{
    return m_domainId;
}

void DomainList::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DomainList::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string DomainList::GetDomainName() const
{
    return m_domainName;
}

void DomainList::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool DomainList::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

uint64_t DomainList::GetAutoRenew() const
{
    return m_autoRenew;
}

void DomainList::SetAutoRenew(const uint64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool DomainList::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

string DomainList::GetCreationDate() const
{
    return m_creationDate;
}

void DomainList::SetCreationDate(const string& _creationDate)
{
    m_creationDate = _creationDate;
    m_creationDateHasBeenSet = true;
}

bool DomainList::CreationDateHasBeenSet() const
{
    return m_creationDateHasBeenSet;
}

string DomainList::GetExpirationDate() const
{
    return m_expirationDate;
}

void DomainList::SetExpirationDate(const string& _expirationDate)
{
    m_expirationDate = _expirationDate;
    m_expirationDateHasBeenSet = true;
}

bool DomainList::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

string DomainList::GetTld() const
{
    return m_tld;
}

void DomainList::SetTld(const string& _tld)
{
    m_tld = _tld;
    m_tldHasBeenSet = true;
}

bool DomainList::TldHasBeenSet() const
{
    return m_tldHasBeenSet;
}

string DomainList::GetCodeTld() const
{
    return m_codeTld;
}

void DomainList::SetCodeTld(const string& _codeTld)
{
    m_codeTld = _codeTld;
    m_codeTldHasBeenSet = true;
}

bool DomainList::CodeTldHasBeenSet() const
{
    return m_codeTldHasBeenSet;
}

string DomainList::GetBuyStatus() const
{
    return m_buyStatus;
}

void DomainList::SetBuyStatus(const string& _buyStatus)
{
    m_buyStatus = _buyStatus;
    m_buyStatusHasBeenSet = true;
}

bool DomainList::BuyStatusHasBeenSet() const
{
    return m_buyStatusHasBeenSet;
}

