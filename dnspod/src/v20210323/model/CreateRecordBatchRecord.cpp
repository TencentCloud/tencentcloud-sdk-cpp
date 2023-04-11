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

#include <tencentcloud/dnspod/v20210323/model/CreateRecordBatchRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

CreateRecordBatchRecord::CreateRecordBatchRecord() :
    m_subDomainHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_recordLineHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_idHasBeenSet(false),
    m_mXHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

CoreInternalOutcome CreateRecordBatchRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubDomain") && !value["SubDomain"].IsNull())
    {
        if (!value["SubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRecordBatchRecord.SubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subDomain = string(value["SubDomain"].GetString());
        m_subDomainHasBeenSet = true;
    }

    if (value.HasMember("RecordType") && !value["RecordType"].IsNull())
    {
        if (!value["RecordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRecordBatchRecord.RecordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordType = string(value["RecordType"].GetString());
        m_recordTypeHasBeenSet = true;
    }

    if (value.HasMember("RecordLine") && !value["RecordLine"].IsNull())
    {
        if (!value["RecordLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRecordBatchRecord.RecordLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordLine = string(value["RecordLine"].GetString());
        m_recordLineHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRecordBatchRecord.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("TTL") && !value["TTL"].IsNull())
    {
        if (!value["TTL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRecordBatchRecord.TTL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tTL = value["TTL"].GetUint64();
        m_tTLHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRecordBatchRecord.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRecordBatchRecord.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRecordBatchRecord.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRecordBatchRecord.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MX") && !value["MX"].IsNull())
    {
        if (!value["MX"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRecordBatchRecord.MX` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mX = value["MX"].GetUint64();
        m_mXHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRecordBatchRecord.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateRecordBatchRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, m_tTL, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_mXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mX, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

}


string CreateRecordBatchRecord::GetSubDomain() const
{
    return m_subDomain;
}

void CreateRecordBatchRecord::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool CreateRecordBatchRecord::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string CreateRecordBatchRecord::GetRecordType() const
{
    return m_recordType;
}

void CreateRecordBatchRecord::SetRecordType(const string& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool CreateRecordBatchRecord::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string CreateRecordBatchRecord::GetRecordLine() const
{
    return m_recordLine;
}

void CreateRecordBatchRecord::SetRecordLine(const string& _recordLine)
{
    m_recordLine = _recordLine;
    m_recordLineHasBeenSet = true;
}

bool CreateRecordBatchRecord::RecordLineHasBeenSet() const
{
    return m_recordLineHasBeenSet;
}

string CreateRecordBatchRecord::GetValue() const
{
    return m_value;
}

void CreateRecordBatchRecord::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool CreateRecordBatchRecord::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

uint64_t CreateRecordBatchRecord::GetTTL() const
{
    return m_tTL;
}

void CreateRecordBatchRecord::SetTTL(const uint64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool CreateRecordBatchRecord::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

string CreateRecordBatchRecord::GetStatus() const
{
    return m_status;
}

void CreateRecordBatchRecord::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateRecordBatchRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateRecordBatchRecord::GetOperation() const
{
    return m_operation;
}

void CreateRecordBatchRecord::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool CreateRecordBatchRecord::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string CreateRecordBatchRecord::GetErrMsg() const
{
    return m_errMsg;
}

void CreateRecordBatchRecord::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool CreateRecordBatchRecord::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

uint64_t CreateRecordBatchRecord::GetId() const
{
    return m_id;
}

void CreateRecordBatchRecord::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateRecordBatchRecord::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t CreateRecordBatchRecord::GetMX() const
{
    return m_mX;
}

void CreateRecordBatchRecord::SetMX(const uint64_t& _mX)
{
    m_mX = _mX;
    m_mXHasBeenSet = true;
}

bool CreateRecordBatchRecord::MXHasBeenSet() const
{
    return m_mXHasBeenSet;
}

uint64_t CreateRecordBatchRecord::GetWeight() const
{
    return m_weight;
}

void CreateRecordBatchRecord::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool CreateRecordBatchRecord::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

