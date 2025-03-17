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
using namespace std;

DomainBatchLogSet::DomainBatchLogSet() :
    m_logIdHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_successHasBeenSet(false),
    m_doingHasBeenSet(false),
    m_failedHasBeenSet(false),
    m_payStatusHasBeenSet(false),
    m_bigDealIdHasBeenSet(false)
{
}

CoreInternalOutcome DomainBatchLogSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogId") && !value["LogId"].IsNull())
    {
        if (!value["LogId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainBatchLogSet.LogId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logId = value["LogId"].GetInt64();
        m_logIdHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainBatchLogSet.Number` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_number = value["Number"].GetInt64();
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainBatchLogSet.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainBatchLogSet.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("Success") && !value["Success"].IsNull())
    {
        if (!value["Success"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainBatchLogSet.Success` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_success = value["Success"].GetInt64();
        m_successHasBeenSet = true;
    }

    if (value.HasMember("Doing") && !value["Doing"].IsNull())
    {
        if (!value["Doing"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainBatchLogSet.Doing` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_doing = value["Doing"].GetInt64();
        m_doingHasBeenSet = true;
    }

    if (value.HasMember("Failed") && !value["Failed"].IsNull())
    {
        if (!value["Failed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainBatchLogSet.Failed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failed = value["Failed"].GetInt64();
        m_failedHasBeenSet = true;
    }

    if (value.HasMember("PayStatus") && !value["PayStatus"].IsNull())
    {
        if (!value["PayStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DomainBatchLogSet.PayStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_payStatus = value["PayStatus"].GetBool();
        m_payStatusHasBeenSet = true;
    }

    if (value.HasMember("BigDealId") && !value["BigDealId"].IsNull())
    {
        if (!value["BigDealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainBatchLogSet.BigDealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bigDealId = string(value["BigDealId"].GetString());
        m_bigDealIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainBatchLogSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logId, allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_number, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_success, allocator);
    }

    if (m_doingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Doing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_doing, allocator);
    }

    if (m_failedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Failed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failed, allocator);
    }

    if (m_payStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payStatus, allocator);
    }

    if (m_bigDealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigDealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bigDealId.c_str(), allocator).Move(), allocator);
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

int64_t DomainBatchLogSet::GetSuccess() const
{
    return m_success;
}

void DomainBatchLogSet::SetSuccess(const int64_t& _success)
{
    m_success = _success;
    m_successHasBeenSet = true;
}

bool DomainBatchLogSet::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

int64_t DomainBatchLogSet::GetDoing() const
{
    return m_doing;
}

void DomainBatchLogSet::SetDoing(const int64_t& _doing)
{
    m_doing = _doing;
    m_doingHasBeenSet = true;
}

bool DomainBatchLogSet::DoingHasBeenSet() const
{
    return m_doingHasBeenSet;
}

int64_t DomainBatchLogSet::GetFailed() const
{
    return m_failed;
}

void DomainBatchLogSet::SetFailed(const int64_t& _failed)
{
    m_failed = _failed;
    m_failedHasBeenSet = true;
}

bool DomainBatchLogSet::FailedHasBeenSet() const
{
    return m_failedHasBeenSet;
}

bool DomainBatchLogSet::GetPayStatus() const
{
    return m_payStatus;
}

void DomainBatchLogSet::SetPayStatus(const bool& _payStatus)
{
    m_payStatus = _payStatus;
    m_payStatusHasBeenSet = true;
}

bool DomainBatchLogSet::PayStatusHasBeenSet() const
{
    return m_payStatusHasBeenSet;
}

string DomainBatchLogSet::GetBigDealId() const
{
    return m_bigDealId;
}

void DomainBatchLogSet::SetBigDealId(const string& _bigDealId)
{
    m_bigDealId = _bigDealId;
    m_bigDealIdHasBeenSet = true;
}

bool DomainBatchLogSet::BigDealIdHasBeenSet() const
{
    return m_bigDealIdHasBeenSet;
}

