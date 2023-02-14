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

#include <tencentcloud/dnspod/v20210323/model/RecordListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

RecordListItem::RecordListItem() :
    m_recordIdHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_updatedOnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_lineHasBeenSet(false),
    m_lineIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_monitorStatusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_mXHasBeenSet(false),
    m_defaultNSHasBeenSet(false)
{
}

CoreInternalOutcome RecordListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordListItem.RecordId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = value["RecordId"].GetUint64();
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordListItem.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordListItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordListItem.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordListItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Line") && !value["Line"].IsNull())
    {
        if (!value["Line"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordListItem.Line` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_line = string(value["Line"].GetString());
        m_lineHasBeenSet = true;
    }

    if (value.HasMember("LineId") && !value["LineId"].IsNull())
    {
        if (!value["LineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordListItem.LineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineId = string(value["LineId"].GetString());
        m_lineIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordListItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordListItem.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("MonitorStatus") && !value["MonitorStatus"].IsNull())
    {
        if (!value["MonitorStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordListItem.MonitorStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorStatus = string(value["MonitorStatus"].GetString());
        m_monitorStatusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordListItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("TTL") && !value["TTL"].IsNull())
    {
        if (!value["TTL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordListItem.TTL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tTL = value["TTL"].GetUint64();
        m_tTLHasBeenSet = true;
    }

    if (value.HasMember("MX") && !value["MX"].IsNull())
    {
        if (!value["MX"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordListItem.MX` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mX = value["MX"].GetUint64();
        m_mXHasBeenSet = true;
    }

    if (value.HasMember("DefaultNS") && !value["DefaultNS"].IsNull())
    {
        if (!value["DefaultNS"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RecordListItem.DefaultNS` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_defaultNS = value["DefaultNS"].GetBool();
        m_defaultNSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordId, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_lineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Line";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_line.c_str(), allocator).Move(), allocator);
    }

    if (m_lineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
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

    if (m_defaultNSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultNS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultNS, allocator);
    }

}


uint64_t RecordListItem::GetRecordId() const
{
    return m_recordId;
}

void RecordListItem::SetRecordId(const uint64_t& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool RecordListItem::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string RecordListItem::GetValue() const
{
    return m_value;
}

void RecordListItem::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool RecordListItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string RecordListItem::GetStatus() const
{
    return m_status;
}

void RecordListItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RecordListItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RecordListItem::GetUpdatedOn() const
{
    return m_updatedOn;
}

void RecordListItem::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool RecordListItem::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

string RecordListItem::GetName() const
{
    return m_name;
}

void RecordListItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RecordListItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RecordListItem::GetLine() const
{
    return m_line;
}

void RecordListItem::SetLine(const string& _line)
{
    m_line = _line;
    m_lineHasBeenSet = true;
}

bool RecordListItem::LineHasBeenSet() const
{
    return m_lineHasBeenSet;
}

string RecordListItem::GetLineId() const
{
    return m_lineId;
}

void RecordListItem::SetLineId(const string& _lineId)
{
    m_lineId = _lineId;
    m_lineIdHasBeenSet = true;
}

bool RecordListItem::LineIdHasBeenSet() const
{
    return m_lineIdHasBeenSet;
}

string RecordListItem::GetType() const
{
    return m_type;
}

void RecordListItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RecordListItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t RecordListItem::GetWeight() const
{
    return m_weight;
}

void RecordListItem::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool RecordListItem::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string RecordListItem::GetMonitorStatus() const
{
    return m_monitorStatus;
}

void RecordListItem::SetMonitorStatus(const string& _monitorStatus)
{
    m_monitorStatus = _monitorStatus;
    m_monitorStatusHasBeenSet = true;
}

bool RecordListItem::MonitorStatusHasBeenSet() const
{
    return m_monitorStatusHasBeenSet;
}

string RecordListItem::GetRemark() const
{
    return m_remark;
}

void RecordListItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RecordListItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t RecordListItem::GetTTL() const
{
    return m_tTL;
}

void RecordListItem::SetTTL(const uint64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool RecordListItem::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

uint64_t RecordListItem::GetMX() const
{
    return m_mX;
}

void RecordListItem::SetMX(const uint64_t& _mX)
{
    m_mX = _mX;
    m_mXHasBeenSet = true;
}

bool RecordListItem::MXHasBeenSet() const
{
    return m_mXHasBeenSet;
}

bool RecordListItem::GetDefaultNS() const
{
    return m_defaultNS;
}

void RecordListItem::SetDefaultNS(const bool& _defaultNS)
{
    m_defaultNS = _defaultNS;
    m_defaultNSHasBeenSet = true;
}

bool RecordListItem::DefaultNSHasBeenSet() const
{
    return m_defaultNSHasBeenSet;
}

