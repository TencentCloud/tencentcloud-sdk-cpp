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

#include <tencentcloud/dnspod/v20210323/model/WhoisInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

WhoisInfo::WhoisInfo() :
    m_contactsHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_isQcloudHasBeenSet(false),
    m_isQcloudOwnerHasBeenSet(false),
    m_nameServersHasBeenSet(false),
    m_rawHasBeenSet(false),
    m_registrarHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_updatedDateHasBeenSet(false),
    m_dnssecHasBeenSet(false)
{
}

CoreInternalOutcome WhoisInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Contacts") && !value["Contacts"].IsNull())
    {
        if (!value["Contacts"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisInfo.Contacts` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_contacts.Deserialize(value["Contacts"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contactsHasBeenSet = true;
    }

    if (value.HasMember("CreationDate") && !value["CreationDate"].IsNull())
    {
        if (!value["CreationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisInfo.CreationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationDate = string(value["CreationDate"].GetString());
        m_creationDateHasBeenSet = true;
    }

    if (value.HasMember("ExpirationDate") && !value["ExpirationDate"].IsNull())
    {
        if (!value["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisInfo.ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(value["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (value.HasMember("IsQcloud") && !value["IsQcloud"].IsNull())
    {
        if (!value["IsQcloud"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisInfo.IsQcloud` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isQcloud = value["IsQcloud"].GetBool();
        m_isQcloudHasBeenSet = true;
    }

    if (value.HasMember("IsQcloudOwner") && !value["IsQcloudOwner"].IsNull())
    {
        if (!value["IsQcloudOwner"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisInfo.IsQcloudOwner` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isQcloudOwner = value["IsQcloudOwner"].GetBool();
        m_isQcloudOwnerHasBeenSet = true;
    }

    if (value.HasMember("NameServers") && !value["NameServers"].IsNull())
    {
        if (!value["NameServers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WhoisInfo.NameServers` is not array type"));

        const rapidjson::Value &tmpValue = value["NameServers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nameServers.push_back((*itr).GetString());
        }
        m_nameServersHasBeenSet = true;
    }

    if (value.HasMember("Raw") && !value["Raw"].IsNull())
    {
        if (!value["Raw"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WhoisInfo.Raw` is not array type"));

        const rapidjson::Value &tmpValue = value["Raw"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_raw.push_back((*itr).GetString());
        }
        m_rawHasBeenSet = true;
    }

    if (value.HasMember("Registrar") && !value["Registrar"].IsNull())
    {
        if (!value["Registrar"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WhoisInfo.Registrar` is not array type"));

        const rapidjson::Value &tmpValue = value["Registrar"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_registrar.push_back((*itr).GetString());
        }
        m_registrarHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WhoisInfo.Status` is not array type"));

        const rapidjson::Value &tmpValue = value["Status"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_status.push_back((*itr).GetString());
        }
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UpdatedDate") && !value["UpdatedDate"].IsNull())
    {
        if (!value["UpdatedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisInfo.UpdatedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedDate = string(value["UpdatedDate"].GetString());
        m_updatedDateHasBeenSet = true;
    }

    if (value.HasMember("Dnssec") && !value["Dnssec"].IsNull())
    {
        if (!value["Dnssec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisInfo.Dnssec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnssec = string(value["Dnssec"].GetString());
        m_dnssecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WhoisInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contactsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contacts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contacts.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_isQcloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQcloud";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isQcloud, allocator);
    }

    if (m_isQcloudOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQcloudOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isQcloudOwner, allocator);
    }

    if (m_nameServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nameServers.begin(); itr != m_nameServers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rawHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Raw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_raw.begin(); itr != m_raw.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_registrarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Registrar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_registrar.begin(); itr != m_registrar.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_updatedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedDate.c_str(), allocator).Move(), allocator);
    }

    if (m_dnssecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dnssec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnssec.c_str(), allocator).Move(), allocator);
    }

}


WhoisContact WhoisInfo::GetContacts() const
{
    return m_contacts;
}

void WhoisInfo::SetContacts(const WhoisContact& _contacts)
{
    m_contacts = _contacts;
    m_contactsHasBeenSet = true;
}

bool WhoisInfo::ContactsHasBeenSet() const
{
    return m_contactsHasBeenSet;
}

string WhoisInfo::GetCreationDate() const
{
    return m_creationDate;
}

void WhoisInfo::SetCreationDate(const string& _creationDate)
{
    m_creationDate = _creationDate;
    m_creationDateHasBeenSet = true;
}

bool WhoisInfo::CreationDateHasBeenSet() const
{
    return m_creationDateHasBeenSet;
}

string WhoisInfo::GetExpirationDate() const
{
    return m_expirationDate;
}

void WhoisInfo::SetExpirationDate(const string& _expirationDate)
{
    m_expirationDate = _expirationDate;
    m_expirationDateHasBeenSet = true;
}

bool WhoisInfo::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

bool WhoisInfo::GetIsQcloud() const
{
    return m_isQcloud;
}

void WhoisInfo::SetIsQcloud(const bool& _isQcloud)
{
    m_isQcloud = _isQcloud;
    m_isQcloudHasBeenSet = true;
}

bool WhoisInfo::IsQcloudHasBeenSet() const
{
    return m_isQcloudHasBeenSet;
}

bool WhoisInfo::GetIsQcloudOwner() const
{
    return m_isQcloudOwner;
}

void WhoisInfo::SetIsQcloudOwner(const bool& _isQcloudOwner)
{
    m_isQcloudOwner = _isQcloudOwner;
    m_isQcloudOwnerHasBeenSet = true;
}

bool WhoisInfo::IsQcloudOwnerHasBeenSet() const
{
    return m_isQcloudOwnerHasBeenSet;
}

vector<string> WhoisInfo::GetNameServers() const
{
    return m_nameServers;
}

void WhoisInfo::SetNameServers(const vector<string>& _nameServers)
{
    m_nameServers = _nameServers;
    m_nameServersHasBeenSet = true;
}

bool WhoisInfo::NameServersHasBeenSet() const
{
    return m_nameServersHasBeenSet;
}

vector<string> WhoisInfo::GetRaw() const
{
    return m_raw;
}

void WhoisInfo::SetRaw(const vector<string>& _raw)
{
    m_raw = _raw;
    m_rawHasBeenSet = true;
}

bool WhoisInfo::RawHasBeenSet() const
{
    return m_rawHasBeenSet;
}

vector<string> WhoisInfo::GetRegistrar() const
{
    return m_registrar;
}

void WhoisInfo::SetRegistrar(const vector<string>& _registrar)
{
    m_registrar = _registrar;
    m_registrarHasBeenSet = true;
}

bool WhoisInfo::RegistrarHasBeenSet() const
{
    return m_registrarHasBeenSet;
}

vector<string> WhoisInfo::GetStatus() const
{
    return m_status;
}

void WhoisInfo::SetStatus(const vector<string>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WhoisInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string WhoisInfo::GetUpdatedDate() const
{
    return m_updatedDate;
}

void WhoisInfo::SetUpdatedDate(const string& _updatedDate)
{
    m_updatedDate = _updatedDate;
    m_updatedDateHasBeenSet = true;
}

bool WhoisInfo::UpdatedDateHasBeenSet() const
{
    return m_updatedDateHasBeenSet;
}

string WhoisInfo::GetDnssec() const
{
    return m_dnssec;
}

void WhoisInfo::SetDnssec(const string& _dnssec)
{
    m_dnssec = _dnssec;
    m_dnssecHasBeenSet = true;
}

bool WhoisInfo::DnssecHasBeenSet() const
{
    return m_dnssecHasBeenSet;
}

