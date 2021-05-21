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

#include <tencentcloud/dnspod/v20210323/model/DescribeBatchTaskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace rapidjson;
using namespace std;

DescribeBatchTaskDetail::DescribeBatchTaskDetail() :
    m_recordListHasBeenSet(false),
    m_idHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_domainGradeHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBatchTaskDetail::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordList") && !value["RecordList"].IsNull())
    {
        if (!value["RecordList"].IsArray())
            return CoreInternalOutcome(Error("response `DescribeBatchTaskDetail.RecordList` is not array type"));

        const Value &tmpValue = value["RecordList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BatchRecordInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recordList.push_back(item);
        }
        m_recordListHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DescribeBatchTaskDetail.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `DescribeBatchTaskDetail.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DomainGrade") && !value["DomainGrade"].IsNull())
    {
        if (!value["DomainGrade"].IsString())
        {
            return CoreInternalOutcome(Error("response `DescribeBatchTaskDetail.DomainGrade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainGrade = string(value["DomainGrade"].GetString());
        m_domainGradeHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `DescribeBatchTaskDetail.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `DescribeBatchTaskDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Error("response `DescribeBatchTaskDetail.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DescribeBatchTaskDetail.DomainId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = value["DomainId"].GetUint64();
        m_domainIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeBatchTaskDetail::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_recordListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recordList.begin(); itr != m_recordList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainGradeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainGrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domainGrade.c_str(), allocator).Move(), allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainId, allocator);
    }

}


vector<BatchRecordInfo> DescribeBatchTaskDetail::GetRecordList() const
{
    return m_recordList;
}

void DescribeBatchTaskDetail::SetRecordList(const vector<BatchRecordInfo>& _recordList)
{
    m_recordList = _recordList;
    m_recordListHasBeenSet = true;
}

bool DescribeBatchTaskDetail::RecordListHasBeenSet() const
{
    return m_recordListHasBeenSet;
}

uint64_t DescribeBatchTaskDetail::GetId() const
{
    return m_id;
}

void DescribeBatchTaskDetail::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeBatchTaskDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeBatchTaskDetail::GetDomain() const
{
    return m_domain;
}

void DescribeBatchTaskDetail::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeBatchTaskDetail::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeBatchTaskDetail::GetDomainGrade() const
{
    return m_domainGrade;
}

void DescribeBatchTaskDetail::SetDomainGrade(const string& _domainGrade)
{
    m_domainGrade = _domainGrade;
    m_domainGradeHasBeenSet = true;
}

bool DescribeBatchTaskDetail::DomainGradeHasBeenSet() const
{
    return m_domainGradeHasBeenSet;
}

string DescribeBatchTaskDetail::GetErrMsg() const
{
    return m_errMsg;
}

void DescribeBatchTaskDetail::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool DescribeBatchTaskDetail::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

string DescribeBatchTaskDetail::GetStatus() const
{
    return m_status;
}

void DescribeBatchTaskDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeBatchTaskDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeBatchTaskDetail::GetOperation() const
{
    return m_operation;
}

void DescribeBatchTaskDetail::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool DescribeBatchTaskDetail::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

uint64_t DescribeBatchTaskDetail::GetDomainId() const
{
    return m_domainId;
}

void DescribeBatchTaskDetail::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DescribeBatchTaskDetail::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

