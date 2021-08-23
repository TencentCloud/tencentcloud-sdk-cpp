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

#include <tencentcloud/dnspod/v20210323/model/CreateDomainBatchRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

CreateDomainBatchRecord::CreateDomainBatchRecord() :
    m_subDomainHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_recordLineHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome CreateDomainBatchRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubDomain") && !value["SubDomain"].IsNull())
    {
        if (!value["SubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDomainBatchRecord.SubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subDomain = string(value["SubDomain"].GetString());
        m_subDomainHasBeenSet = true;
    }

    if (value.HasMember("RecordType") && !value["RecordType"].IsNull())
    {
        if (!value["RecordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDomainBatchRecord.RecordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordType = string(value["RecordType"].GetString());
        m_recordTypeHasBeenSet = true;
    }

    if (value.HasMember("RecordLine") && !value["RecordLine"].IsNull())
    {
        if (!value["RecordLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDomainBatchRecord.RecordLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordLine = string(value["RecordLine"].GetString());
        m_recordLineHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDomainBatchRecord.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("TTL") && !value["TTL"].IsNull())
    {
        if (!value["TTL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDomainBatchRecord.TTL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tTL = value["TTL"].GetUint64();
        m_tTLHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDomainBatchRecord.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDomainBatchRecord.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDomainBatchRecord.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDomainBatchRecord.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateDomainBatchRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string CreateDomainBatchRecord::GetSubDomain() const
{
    return m_subDomain;
}

void CreateDomainBatchRecord::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool CreateDomainBatchRecord::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string CreateDomainBatchRecord::GetRecordType() const
{
    return m_recordType;
}

void CreateDomainBatchRecord::SetRecordType(const string& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool CreateDomainBatchRecord::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string CreateDomainBatchRecord::GetRecordLine() const
{
    return m_recordLine;
}

void CreateDomainBatchRecord::SetRecordLine(const string& _recordLine)
{
    m_recordLine = _recordLine;
    m_recordLineHasBeenSet = true;
}

bool CreateDomainBatchRecord::RecordLineHasBeenSet() const
{
    return m_recordLineHasBeenSet;
}

string CreateDomainBatchRecord::GetValue() const
{
    return m_value;
}

void CreateDomainBatchRecord::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool CreateDomainBatchRecord::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

uint64_t CreateDomainBatchRecord::GetTTL() const
{
    return m_tTL;
}

void CreateDomainBatchRecord::SetTTL(const uint64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool CreateDomainBatchRecord::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

string CreateDomainBatchRecord::GetStatus() const
{
    return m_status;
}

void CreateDomainBatchRecord::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateDomainBatchRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateDomainBatchRecord::GetOperation() const
{
    return m_operation;
}

void CreateDomainBatchRecord::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool CreateDomainBatchRecord::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string CreateDomainBatchRecord::GetErrMsg() const
{
    return m_errMsg;
}

void CreateDomainBatchRecord::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool CreateDomainBatchRecord::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

uint64_t CreateDomainBatchRecord::GetId() const
{
    return m_id;
}

void CreateDomainBatchRecord::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateDomainBatchRecord::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

