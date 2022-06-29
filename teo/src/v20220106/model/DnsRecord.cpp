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

#include <tencentcloud/teo/v20220106/model/DnsRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DnsRecord::DnsRecord() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_ttlHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_modifiedOnHasBeenSet(false),
    m_lockedHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_domainStatusHasBeenSet(false)
{
}

CoreInternalOutcome DnsRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsRecord.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsRecord.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsRecord.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsRecord.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsRecord.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Ttl") && !value["Ttl"].IsNull())
    {
        if (!value["Ttl"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DnsRecord.Ttl` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ttl = value["Ttl"].GetInt64();
        m_ttlHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DnsRecord.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsRecord.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("ModifiedOn") && !value["ModifiedOn"].IsNull())
    {
        if (!value["ModifiedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsRecord.ModifiedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedOn = string(value["ModifiedOn"].GetString());
        m_modifiedOnHasBeenSet = true;
    }

    if (value.HasMember("Locked") && !value["Locked"].IsNull())
    {
        if (!value["Locked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DnsRecord.Locked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_locked = value["Locked"].GetBool();
        m_lockedHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsRecord.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsRecord.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsRecord.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsRecord.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("DomainStatus") && !value["DomainStatus"].IsNull())
    {
        if (!value["DomainStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DnsRecord.DomainStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["DomainStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domainStatus.push_back((*itr).GetString());
        }
        m_domainStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DnsRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_ttlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ttl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ttl, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_lockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locked, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
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

}


string DnsRecord::GetId() const
{
    return m_id;
}

void DnsRecord::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DnsRecord::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DnsRecord::GetType() const
{
    return m_type;
}

void DnsRecord::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DnsRecord::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DnsRecord::GetName() const
{
    return m_name;
}

void DnsRecord::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DnsRecord::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DnsRecord::GetContent() const
{
    return m_content;
}

void DnsRecord::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DnsRecord::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string DnsRecord::GetMode() const
{
    return m_mode;
}

void DnsRecord::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DnsRecord::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t DnsRecord::GetTtl() const
{
    return m_ttl;
}

void DnsRecord::SetTtl(const int64_t& _ttl)
{
    m_ttl = _ttl;
    m_ttlHasBeenSet = true;
}

bool DnsRecord::TtlHasBeenSet() const
{
    return m_ttlHasBeenSet;
}

int64_t DnsRecord::GetPriority() const
{
    return m_priority;
}

void DnsRecord::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool DnsRecord::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string DnsRecord::GetCreatedOn() const
{
    return m_createdOn;
}

void DnsRecord::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool DnsRecord::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string DnsRecord::GetModifiedOn() const
{
    return m_modifiedOn;
}

void DnsRecord::SetModifiedOn(const string& _modifiedOn)
{
    m_modifiedOn = _modifiedOn;
    m_modifiedOnHasBeenSet = true;
}

bool DnsRecord::ModifiedOnHasBeenSet() const
{
    return m_modifiedOnHasBeenSet;
}

bool DnsRecord::GetLocked() const
{
    return m_locked;
}

void DnsRecord::SetLocked(const bool& _locked)
{
    m_locked = _locked;
    m_lockedHasBeenSet = true;
}

bool DnsRecord::LockedHasBeenSet() const
{
    return m_lockedHasBeenSet;
}

string DnsRecord::GetZoneId() const
{
    return m_zoneId;
}

void DnsRecord::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DnsRecord::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DnsRecord::GetZoneName() const
{
    return m_zoneName;
}

void DnsRecord::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool DnsRecord::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string DnsRecord::GetStatus() const
{
    return m_status;
}

void DnsRecord::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DnsRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DnsRecord::GetCname() const
{
    return m_cname;
}

void DnsRecord::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool DnsRecord::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

vector<string> DnsRecord::GetDomainStatus() const
{
    return m_domainStatus;
}

void DnsRecord::SetDomainStatus(const vector<string>& _domainStatus)
{
    m_domainStatus = _domainStatus;
    m_domainStatusHasBeenSet = true;
}

bool DnsRecord::DomainStatusHasBeenSet() const
{
    return m_domainStatusHasBeenSet;
}

