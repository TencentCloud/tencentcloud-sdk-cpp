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

#include <tencentcloud/dnspod/v20210323/model/ModifyRecordBatchDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

ModifyRecordBatchDetail::ModifyRecordBatchDetail() :
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

CoreInternalOutcome ModifyRecordBatchDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordList") && !value["RecordList"].IsNull())
    {
        if (!value["RecordList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyRecordBatchDetail.RecordList` is not array type"));

        const rapidjson::Value &tmpValue = value["RecordList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `ModifyRecordBatchDetail.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRecordBatchDetail.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DomainGrade") && !value["DomainGrade"].IsNull())
    {
        if (!value["DomainGrade"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRecordBatchDetail.DomainGrade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainGrade = string(value["DomainGrade"].GetString());
        m_domainGradeHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRecordBatchDetail.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRecordBatchDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRecordBatchDetail.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRecordBatchDetail.DomainId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = value["DomainId"].GetUint64();
        m_domainIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyRecordBatchDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recordList.begin(); itr != m_recordList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainGradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainGrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainGrade.c_str(), allocator).Move(), allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
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

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainId, allocator);
    }

}


vector<BatchRecordInfo> ModifyRecordBatchDetail::GetRecordList() const
{
    return m_recordList;
}

void ModifyRecordBatchDetail::SetRecordList(const vector<BatchRecordInfo>& _recordList)
{
    m_recordList = _recordList;
    m_recordListHasBeenSet = true;
}

bool ModifyRecordBatchDetail::RecordListHasBeenSet() const
{
    return m_recordListHasBeenSet;
}

uint64_t ModifyRecordBatchDetail::GetId() const
{
    return m_id;
}

void ModifyRecordBatchDetail::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyRecordBatchDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyRecordBatchDetail::GetDomain() const
{
    return m_domain;
}

void ModifyRecordBatchDetail::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyRecordBatchDetail::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyRecordBatchDetail::GetDomainGrade() const
{
    return m_domainGrade;
}

void ModifyRecordBatchDetail::SetDomainGrade(const string& _domainGrade)
{
    m_domainGrade = _domainGrade;
    m_domainGradeHasBeenSet = true;
}

bool ModifyRecordBatchDetail::DomainGradeHasBeenSet() const
{
    return m_domainGradeHasBeenSet;
}

string ModifyRecordBatchDetail::GetErrMsg() const
{
    return m_errMsg;
}

void ModifyRecordBatchDetail::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool ModifyRecordBatchDetail::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

string ModifyRecordBatchDetail::GetStatus() const
{
    return m_status;
}

void ModifyRecordBatchDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyRecordBatchDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyRecordBatchDetail::GetOperation() const
{
    return m_operation;
}

void ModifyRecordBatchDetail::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool ModifyRecordBatchDetail::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

uint64_t ModifyRecordBatchDetail::GetDomainId() const
{
    return m_domainId;
}

void ModifyRecordBatchDetail::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool ModifyRecordBatchDetail::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

