/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/billing/v20180709/model/BudgetRemindRecords.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BudgetRemindRecords::BudgetRemindRecords() :
    m_dateDescHasBeenSet(false),
    m_realCostHasBeenSet(false),
    m_budgetQuotaHasBeenSet(false),
    m_alarmTypeHasBeenSet(false),
    m_messageContentHasBeenSet(false),
    m_sendTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome BudgetRemindRecords::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DateDesc") && !value["DateDesc"].IsNull())
    {
        if (!value["DateDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecords.DateDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateDesc = string(value["DateDesc"].GetString());
        m_dateDescHasBeenSet = true;
    }

    if (value.HasMember("RealCost") && !value["RealCost"].IsNull())
    {
        if (!value["RealCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecords.RealCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realCost = string(value["RealCost"].GetString());
        m_realCostHasBeenSet = true;
    }

    if (value.HasMember("BudgetQuota") && !value["BudgetQuota"].IsNull())
    {
        if (!value["BudgetQuota"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecords.BudgetQuota` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetQuota = string(value["BudgetQuota"].GetString());
        m_budgetQuotaHasBeenSet = true;
    }

    if (value.HasMember("AlarmType") && !value["AlarmType"].IsNull())
    {
        if (!value["AlarmType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecords.AlarmType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmType = string(value["AlarmType"].GetString());
        m_alarmTypeHasBeenSet = true;
    }

    if (value.HasMember("MessageContent") && !value["MessageContent"].IsNull())
    {
        if (!value["MessageContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecords.MessageContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageContent = string(value["MessageContent"].GetString());
        m_messageContentHasBeenSet = true;
    }

    if (value.HasMember("SendTime") && !value["SendTime"].IsNull())
    {
        if (!value["SendTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecords.SendTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendTime = value["SendTime"].GetInt64();
        m_sendTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetRemindRecords.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BudgetRemindRecords::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_realCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realCost.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetQuota.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmType.c_str(), allocator).Move(), allocator);
    }

    if (m_messageContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageContent.c_str(), allocator).Move(), allocator);
    }

    if (m_sendTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


string BudgetRemindRecords::GetDateDesc() const
{
    return m_dateDesc;
}

void BudgetRemindRecords::SetDateDesc(const string& _dateDesc)
{
    m_dateDesc = _dateDesc;
    m_dateDescHasBeenSet = true;
}

bool BudgetRemindRecords::DateDescHasBeenSet() const
{
    return m_dateDescHasBeenSet;
}

string BudgetRemindRecords::GetRealCost() const
{
    return m_realCost;
}

void BudgetRemindRecords::SetRealCost(const string& _realCost)
{
    m_realCost = _realCost;
    m_realCostHasBeenSet = true;
}

bool BudgetRemindRecords::RealCostHasBeenSet() const
{
    return m_realCostHasBeenSet;
}

string BudgetRemindRecords::GetBudgetQuota() const
{
    return m_budgetQuota;
}

void BudgetRemindRecords::SetBudgetQuota(const string& _budgetQuota)
{
    m_budgetQuota = _budgetQuota;
    m_budgetQuotaHasBeenSet = true;
}

bool BudgetRemindRecords::BudgetQuotaHasBeenSet() const
{
    return m_budgetQuotaHasBeenSet;
}

string BudgetRemindRecords::GetAlarmType() const
{
    return m_alarmType;
}

void BudgetRemindRecords::SetAlarmType(const string& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool BudgetRemindRecords::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}

string BudgetRemindRecords::GetMessageContent() const
{
    return m_messageContent;
}

void BudgetRemindRecords::SetMessageContent(const string& _messageContent)
{
    m_messageContent = _messageContent;
    m_messageContentHasBeenSet = true;
}

bool BudgetRemindRecords::MessageContentHasBeenSet() const
{
    return m_messageContentHasBeenSet;
}

int64_t BudgetRemindRecords::GetSendTime() const
{
    return m_sendTime;
}

void BudgetRemindRecords::SetSendTime(const int64_t& _sendTime)
{
    m_sendTime = _sendTime;
    m_sendTimeHasBeenSet = true;
}

bool BudgetRemindRecords::SendTimeHasBeenSet() const
{
    return m_sendTimeHasBeenSet;
}

int64_t BudgetRemindRecords::GetCreateTime() const
{
    return m_createTime;
}

void BudgetRemindRecords::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BudgetRemindRecords::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

