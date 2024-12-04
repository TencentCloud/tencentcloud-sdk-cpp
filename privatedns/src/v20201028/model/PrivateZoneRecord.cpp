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

#include <tencentcloud/privatedns/v20201028/model/PrivateZoneRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

PrivateZoneRecord::PrivateZoneRecord() :
    m_recordIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_recordValueHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_mXHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome PrivateZoneRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZoneRecord.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZoneRecord.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("SubDomain") && !value["SubDomain"].IsNull())
    {
        if (!value["SubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZoneRecord.SubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subDomain = string(value["SubDomain"].GetString());
        m_subDomainHasBeenSet = true;
    }

    if (value.HasMember("RecordType") && !value["RecordType"].IsNull())
    {
        if (!value["RecordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZoneRecord.RecordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordType = string(value["RecordType"].GetString());
        m_recordTypeHasBeenSet = true;
    }

    if (value.HasMember("RecordValue") && !value["RecordValue"].IsNull())
    {
        if (!value["RecordValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZoneRecord.RecordValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordValue = string(value["RecordValue"].GetString());
        m_recordValueHasBeenSet = true;
    }

    if (value.HasMember("TTL") && !value["TTL"].IsNull())
    {
        if (!value["TTL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZoneRecord.TTL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tTL = value["TTL"].GetInt64();
        m_tTLHasBeenSet = true;
    }

    if (value.HasMember("MX") && !value["MX"].IsNull())
    {
        if (!value["MX"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZoneRecord.MX` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mX = value["MX"].GetInt64();
        m_mXHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZoneRecord.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZoneRecord.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZoneRecord.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZoneRecord.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }

    if (value.HasMember("Extra") && !value["Extra"].IsNull())
    {
        if (!value["Extra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZoneRecord.Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(value["Extra"].GetString());
        m_extraHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZoneRecord.Enabled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetUint64();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateZoneRecord.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivateZoneRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_subDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordType.c_str(), allocator).Move(), allocator);
    }

    if (m_recordValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordValue.c_str(), allocator).Move(), allocator);
    }

    if (m_tTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tTL, allocator);
    }

    if (m_mXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mX, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
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

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string PrivateZoneRecord::GetRecordId() const
{
    return m_recordId;
}

void PrivateZoneRecord::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool PrivateZoneRecord::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string PrivateZoneRecord::GetZoneId() const
{
    return m_zoneId;
}

void PrivateZoneRecord::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool PrivateZoneRecord::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string PrivateZoneRecord::GetSubDomain() const
{
    return m_subDomain;
}

void PrivateZoneRecord::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool PrivateZoneRecord::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string PrivateZoneRecord::GetRecordType() const
{
    return m_recordType;
}

void PrivateZoneRecord::SetRecordType(const string& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool PrivateZoneRecord::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string PrivateZoneRecord::GetRecordValue() const
{
    return m_recordValue;
}

void PrivateZoneRecord::SetRecordValue(const string& _recordValue)
{
    m_recordValue = _recordValue;
    m_recordValueHasBeenSet = true;
}

bool PrivateZoneRecord::RecordValueHasBeenSet() const
{
    return m_recordValueHasBeenSet;
}

int64_t PrivateZoneRecord::GetTTL() const
{
    return m_tTL;
}

void PrivateZoneRecord::SetTTL(const int64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool PrivateZoneRecord::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

int64_t PrivateZoneRecord::GetMX() const
{
    return m_mX;
}

void PrivateZoneRecord::SetMX(const int64_t& _mX)
{
    m_mX = _mX;
    m_mXHasBeenSet = true;
}

bool PrivateZoneRecord::MXHasBeenSet() const
{
    return m_mXHasBeenSet;
}

string PrivateZoneRecord::GetStatus() const
{
    return m_status;
}

void PrivateZoneRecord::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PrivateZoneRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t PrivateZoneRecord::GetWeight() const
{
    return m_weight;
}

void PrivateZoneRecord::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool PrivateZoneRecord::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string PrivateZoneRecord::GetCreatedOn() const
{
    return m_createdOn;
}

void PrivateZoneRecord::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool PrivateZoneRecord::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string PrivateZoneRecord::GetUpdatedOn() const
{
    return m_updatedOn;
}

void PrivateZoneRecord::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool PrivateZoneRecord::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

string PrivateZoneRecord::GetExtra() const
{
    return m_extra;
}

void PrivateZoneRecord::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool PrivateZoneRecord::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

uint64_t PrivateZoneRecord::GetEnabled() const
{
    return m_enabled;
}

void PrivateZoneRecord::SetEnabled(const uint64_t& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool PrivateZoneRecord::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string PrivateZoneRecord::GetRemark() const
{
    return m_remark;
}

void PrivateZoneRecord::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool PrivateZoneRecord::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

