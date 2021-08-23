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

#include <tencentcloud/dnspod/v20210323/model/RecordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

RecordInfo::RecordInfo() :
    m_idHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_recordLineHasBeenSet(false),
    m_recordLineIdHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_mXHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_monitorStatusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_updatedOnHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

CoreInternalOutcome RecordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SubDomain") && !value["SubDomain"].IsNull())
    {
        if (!value["SubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.SubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subDomain = string(value["SubDomain"].GetString());
        m_subDomainHasBeenSet = true;
    }

    if (value.HasMember("RecordType") && !value["RecordType"].IsNull())
    {
        if (!value["RecordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.RecordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordType = string(value["RecordType"].GetString());
        m_recordTypeHasBeenSet = true;
    }

    if (value.HasMember("RecordLine") && !value["RecordLine"].IsNull())
    {
        if (!value["RecordLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.RecordLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordLine = string(value["RecordLine"].GetString());
        m_recordLineHasBeenSet = true;
    }

    if (value.HasMember("RecordLineId") && !value["RecordLineId"].IsNull())
    {
        if (!value["RecordLineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.RecordLineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordLineId = string(value["RecordLineId"].GetString());
        m_recordLineIdHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("MX") && !value["MX"].IsNull())
    {
        if (!value["MX"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.MX` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mX = value["MX"].GetUint64();
        m_mXHasBeenSet = true;
    }

    if (value.HasMember("TTL") && !value["TTL"].IsNull())
    {
        if (!value["TTL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.TTL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tTL = value["TTL"].GetUint64();
        m_tTLHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.Enabled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetUint64();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("MonitorStatus") && !value["MonitorStatus"].IsNull())
    {
        if (!value["MonitorStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.MonitorStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorStatus = string(value["MonitorStatus"].GetString());
        m_monitorStatusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.DomainId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = value["DomainId"].GetUint64();
        m_domainIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
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

    if (m_recordLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordLine.c_str(), allocator).Move(), allocator);
    }

    if (m_recordLineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordLineId.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_mXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mX, allocator);
    }

    if (m_tTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tTL, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_monitorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainId, allocator);
    }

}


uint64_t RecordInfo::GetId() const
{
    return m_id;
}

void RecordInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RecordInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RecordInfo::GetSubDomain() const
{
    return m_subDomain;
}

void RecordInfo::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool RecordInfo::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string RecordInfo::GetRecordType() const
{
    return m_recordType;
}

void RecordInfo::SetRecordType(const string& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool RecordInfo::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string RecordInfo::GetRecordLine() const
{
    return m_recordLine;
}

void RecordInfo::SetRecordLine(const string& _recordLine)
{
    m_recordLine = _recordLine;
    m_recordLineHasBeenSet = true;
}

bool RecordInfo::RecordLineHasBeenSet() const
{
    return m_recordLineHasBeenSet;
}

string RecordInfo::GetRecordLineId() const
{
    return m_recordLineId;
}

void RecordInfo::SetRecordLineId(const string& _recordLineId)
{
    m_recordLineId = _recordLineId;
    m_recordLineIdHasBeenSet = true;
}

bool RecordInfo::RecordLineIdHasBeenSet() const
{
    return m_recordLineIdHasBeenSet;
}

string RecordInfo::GetValue() const
{
    return m_value;
}

void RecordInfo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool RecordInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

uint64_t RecordInfo::GetWeight() const
{
    return m_weight;
}

void RecordInfo::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool RecordInfo::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

uint64_t RecordInfo::GetMX() const
{
    return m_mX;
}

void RecordInfo::SetMX(const uint64_t& _mX)
{
    m_mX = _mX;
    m_mXHasBeenSet = true;
}

bool RecordInfo::MXHasBeenSet() const
{
    return m_mXHasBeenSet;
}

uint64_t RecordInfo::GetTTL() const
{
    return m_tTL;
}

void RecordInfo::SetTTL(const uint64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool RecordInfo::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

uint64_t RecordInfo::GetEnabled() const
{
    return m_enabled;
}

void RecordInfo::SetEnabled(const uint64_t& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool RecordInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string RecordInfo::GetMonitorStatus() const
{
    return m_monitorStatus;
}

void RecordInfo::SetMonitorStatus(const string& _monitorStatus)
{
    m_monitorStatus = _monitorStatus;
    m_monitorStatusHasBeenSet = true;
}

bool RecordInfo::MonitorStatusHasBeenSet() const
{
    return m_monitorStatusHasBeenSet;
}

string RecordInfo::GetRemark() const
{
    return m_remark;
}

void RecordInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RecordInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RecordInfo::GetUpdatedOn() const
{
    return m_updatedOn;
}

void RecordInfo::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool RecordInfo::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

uint64_t RecordInfo::GetDomainId() const
{
    return m_domainId;
}

void RecordInfo::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool RecordInfo::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

