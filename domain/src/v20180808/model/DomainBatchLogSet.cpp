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

#include <tencentcloud/domain/v20180808/model/DomainBatchLogSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace rapidjson;
using namespace std;

DomainBatchLogSet::DomainBatchLogSet() :
    m_logIdHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdOnHasBeenSet(false)
{
}

CoreInternalOutcome DomainBatchLogSet::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("LogId") && !value["LogId"].IsNull())
    {
        if (!value["LogId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DomainBatchLogSet.LogId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logId = value["LogId"].GetInt64();
        m_logIdHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DomainBatchLogSet.Number` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_number = value["Number"].GetInt64();
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBatchLogSet.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainBatchLogSet.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainBatchLogSet::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_logIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logId, allocator);
    }

    if (m_numberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_number, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

}


int64_t DomainBatchLogSet::GetLogId() const
{
    return m_logId;
}

void DomainBatchLogSet::SetLogId(const int64_t& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool DomainBatchLogSet::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

int64_t DomainBatchLogSet::GetNumber() const
{
    return m_number;
}

void DomainBatchLogSet::SetNumber(const int64_t& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool DomainBatchLogSet::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string DomainBatchLogSet::GetStatus() const
{
    return m_status;
}

void DomainBatchLogSet::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DomainBatchLogSet::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DomainBatchLogSet::GetCreatedOn() const
{
    return m_createdOn;
}

void DomainBatchLogSet::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool DomainBatchLogSet::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

