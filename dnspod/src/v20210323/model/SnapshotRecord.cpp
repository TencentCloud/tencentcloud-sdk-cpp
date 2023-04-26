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

#include <tencentcloud/dnspod/v20210323/model/SnapshotRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

SnapshotRecord::SnapshotRecord() :
    m_subDomainHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_recordLineHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_mXHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubDomain") && !value["SubDomain"].IsNull())
    {
        if (!value["SubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotRecord.SubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subDomain = string(value["SubDomain"].GetString());
        m_subDomainHasBeenSet = true;
    }

    if (value.HasMember("RecordType") && !value["RecordType"].IsNull())
    {
        if (!value["RecordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotRecord.RecordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordType = string(value["RecordType"].GetString());
        m_recordTypeHasBeenSet = true;
    }

    if (value.HasMember("RecordLine") && !value["RecordLine"].IsNull())
    {
        if (!value["RecordLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotRecord.RecordLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordLine = string(value["RecordLine"].GetString());
        m_recordLineHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotRecord.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("TTL") && !value["TTL"].IsNull())
    {
        if (!value["TTL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotRecord.TTL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tTL = string(value["TTL"].GetString());
        m_tTLHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotRecord.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("MX") && !value["MX"].IsNull())
    {
        if (!value["MX"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotRecord.MX` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mX = string(value["MX"].GetString());
        m_mXHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotRecord.Weight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weight = string(value["Weight"].GetString());
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotRecord.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_tTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tTL.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_mXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mX.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weight.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


string SnapshotRecord::GetSubDomain() const
{
    return m_subDomain;
}

void SnapshotRecord::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool SnapshotRecord::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string SnapshotRecord::GetRecordType() const
{
    return m_recordType;
}

void SnapshotRecord::SetRecordType(const string& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool SnapshotRecord::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string SnapshotRecord::GetRecordLine() const
{
    return m_recordLine;
}

void SnapshotRecord::SetRecordLine(const string& _recordLine)
{
    m_recordLine = _recordLine;
    m_recordLineHasBeenSet = true;
}

bool SnapshotRecord::RecordLineHasBeenSet() const
{
    return m_recordLineHasBeenSet;
}

string SnapshotRecord::GetValue() const
{
    return m_value;
}

void SnapshotRecord::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool SnapshotRecord::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string SnapshotRecord::GetTTL() const
{
    return m_tTL;
}

void SnapshotRecord::SetTTL(const string& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool SnapshotRecord::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

string SnapshotRecord::GetRecordId() const
{
    return m_recordId;
}

void SnapshotRecord::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool SnapshotRecord::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string SnapshotRecord::GetMX() const
{
    return m_mX;
}

void SnapshotRecord::SetMX(const string& _mX)
{
    m_mX = _mX;
    m_mXHasBeenSet = true;
}

bool SnapshotRecord::MXHasBeenSet() const
{
    return m_mXHasBeenSet;
}

string SnapshotRecord::GetWeight() const
{
    return m_weight;
}

void SnapshotRecord::SetWeight(const string& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool SnapshotRecord::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string SnapshotRecord::GetReason() const
{
    return m_reason;
}

void SnapshotRecord::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool SnapshotRecord::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

