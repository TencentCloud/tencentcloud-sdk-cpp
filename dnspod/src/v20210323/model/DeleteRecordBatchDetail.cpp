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

#include <tencentcloud/dnspod/v20210323/model/DeleteRecordBatchDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DeleteRecordBatchDetail::DeleteRecordBatchDetail() :
    m_domainIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_recordListHasBeenSet(false)
{
}

CoreInternalOutcome DeleteRecordBatchDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteRecordBatchDetail.DomainId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = value["DomainId"].GetUint64();
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteRecordBatchDetail.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteRecordBatchDetail.Error` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_error = string(value["Error"].GetString());
        m_errorHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteRecordBatchDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteRecordBatchDetail.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("RecordList") && !value["RecordList"].IsNull())
    {
        if (!value["RecordList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteRecordBatchDetail.RecordList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordList = string(value["RecordList"].GetString());
        m_recordListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteRecordBatchDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainId, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_error.c_str(), allocator).Move(), allocator);
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

    if (m_recordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordList.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DeleteRecordBatchDetail::GetDomainId() const
{
    return m_domainId;
}

void DeleteRecordBatchDetail::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DeleteRecordBatchDetail::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string DeleteRecordBatchDetail::GetDomain() const
{
    return m_domain;
}

void DeleteRecordBatchDetail::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DeleteRecordBatchDetail::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DeleteRecordBatchDetail::GetError() const
{
    return m_error;
}

void DeleteRecordBatchDetail::SetError(const string& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool DeleteRecordBatchDetail::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

string DeleteRecordBatchDetail::GetStatus() const
{
    return m_status;
}

void DeleteRecordBatchDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeleteRecordBatchDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeleteRecordBatchDetail::GetOperation() const
{
    return m_operation;
}

void DeleteRecordBatchDetail::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool DeleteRecordBatchDetail::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string DeleteRecordBatchDetail::GetRecordList() const
{
    return m_recordList;
}

void DeleteRecordBatchDetail::SetRecordList(const string& _recordList)
{
    m_recordList = _recordList;
    m_recordListHasBeenSet = true;
}

bool DeleteRecordBatchDetail::RecordListHasBeenSet() const
{
    return m_recordListHasBeenSet;
}

