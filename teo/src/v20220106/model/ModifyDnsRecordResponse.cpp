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

#include <tencentcloud/teo/v20220106/model/ModifyDnsRecordResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

ModifyDnsRecordResponse::ModifyDnsRecordResponse() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_ttlHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_lockedHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_modifiedOnHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false)
{
}

CoreInternalOutcome ModifyDnsRecordResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(rsp["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Content") && !rsp["Content"].IsNull())
    {
        if (!rsp["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(rsp["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (rsp.HasMember("Ttl") && !rsp["Ttl"].IsNull())
    {
        if (!rsp["Ttl"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Ttl` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ttl = rsp["Ttl"].GetInt64();
        m_ttlHasBeenSet = true;
    }

    if (rsp.HasMember("Priority") && !rsp["Priority"].IsNull())
    {
        if (!rsp["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = rsp["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (rsp.HasMember("Mode") && !rsp["Mode"].IsNull())
    {
        if (!rsp["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(rsp["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Cname") && !rsp["Cname"].IsNull())
    {
        if (!rsp["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(rsp["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (rsp.HasMember("Locked") && !rsp["Locked"].IsNull())
    {
        if (!rsp["Locked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Locked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_locked = rsp["Locked"].GetBool();
        m_lockedHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedOn") && !rsp["CreatedOn"].IsNull())
    {
        if (!rsp["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(rsp["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (rsp.HasMember("ModifiedOn") && !rsp["ModifiedOn"].IsNull())
    {
        if (!rsp["ModifiedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifiedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedOn = string(rsp["ModifiedOn"].GetString());
        m_modifiedOnHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneId") && !rsp["ZoneId"].IsNull())
    {
        if (!rsp["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(rsp["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneName") && !rsp["ZoneName"].IsNull())
    {
        if (!rsp["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(rsp["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyDnsRecordResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
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

    if (m_lockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locked, allocator);
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string ModifyDnsRecordResponse::GetId() const
{
    return m_id;
}

bool ModifyDnsRecordResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyDnsRecordResponse::GetType() const
{
    return m_type;
}

bool ModifyDnsRecordResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyDnsRecordResponse::GetName() const
{
    return m_name;
}

bool ModifyDnsRecordResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyDnsRecordResponse::GetContent() const
{
    return m_content;
}

bool ModifyDnsRecordResponse::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t ModifyDnsRecordResponse::GetTtl() const
{
    return m_ttl;
}

bool ModifyDnsRecordResponse::TtlHasBeenSet() const
{
    return m_ttlHasBeenSet;
}

int64_t ModifyDnsRecordResponse::GetPriority() const
{
    return m_priority;
}

bool ModifyDnsRecordResponse::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string ModifyDnsRecordResponse::GetMode() const
{
    return m_mode;
}

bool ModifyDnsRecordResponse::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string ModifyDnsRecordResponse::GetStatus() const
{
    return m_status;
}

bool ModifyDnsRecordResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyDnsRecordResponse::GetCname() const
{
    return m_cname;
}

bool ModifyDnsRecordResponse::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

bool ModifyDnsRecordResponse::GetLocked() const
{
    return m_locked;
}

bool ModifyDnsRecordResponse::LockedHasBeenSet() const
{
    return m_lockedHasBeenSet;
}

string ModifyDnsRecordResponse::GetCreatedOn() const
{
    return m_createdOn;
}

bool ModifyDnsRecordResponse::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string ModifyDnsRecordResponse::GetModifiedOn() const
{
    return m_modifiedOn;
}

bool ModifyDnsRecordResponse::ModifiedOnHasBeenSet() const
{
    return m_modifiedOnHasBeenSet;
}

string ModifyDnsRecordResponse::GetZoneId() const
{
    return m_zoneId;
}

bool ModifyDnsRecordResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyDnsRecordResponse::GetZoneName() const
{
    return m_zoneName;
}

bool ModifyDnsRecordResponse::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}


