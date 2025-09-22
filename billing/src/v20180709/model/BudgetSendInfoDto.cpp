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

#include <tencentcloud/billing/v20180709/model/BudgetSendInfoDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BudgetSendInfoDto::BudgetSendInfoDto() :
    m_weekDaysHasBeenSet(false),
    m_receiverTypeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_budgetIdHasBeenSet(false),
    m_noticeWaysHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_receiverIdsHasBeenSet(false)
{
}

CoreInternalOutcome BudgetSendInfoDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WeekDays") && !value["WeekDays"].IsNull())
    {
        if (!value["WeekDays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetSendInfoDto.WeekDays` is not array type"));

        const rapidjson::Value &tmpValue = value["WeekDays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_weekDays.push_back((*itr).GetUint64());
        }
        m_weekDaysHasBeenSet = true;
    }

    if (value.HasMember("ReceiverType") && !value["ReceiverType"].IsNull())
    {
        if (!value["ReceiverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetSendInfoDto.ReceiverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiverType = string(value["ReceiverType"].GetString());
        m_receiverTypeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetSendInfoDto.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("BudgetId") && !value["BudgetId"].IsNull())
    {
        if (!value["BudgetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetSendInfoDto.BudgetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_budgetId = value["BudgetId"].GetInt64();
        m_budgetIdHasBeenSet = true;
    }

    if (value.HasMember("NoticeWays") && !value["NoticeWays"].IsNull())
    {
        if (!value["NoticeWays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetSendInfoDto.NoticeWays` is not array type"));

        const rapidjson::Value &tmpValue = value["NoticeWays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_noticeWays.push_back((*itr).GetString());
        }
        m_noticeWaysHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetSendInfoDto.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetSendInfoDto.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ReceiverIds") && !value["ReceiverIds"].IsNull())
    {
        if (!value["ReceiverIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetSendInfoDto.ReceiverIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiverIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiverIds.push_back((*itr).GetUint64());
        }
        m_receiverIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BudgetSendInfoDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_weekDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weekDays.begin(); itr != m_weekDays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_receiverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiverType.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_budgetId, allocator);
    }

    if (m_noticeWaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeWays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_noticeWays.begin(); itr != m_noticeWays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiverIds.begin(); itr != m_receiverIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


vector<uint64_t> BudgetSendInfoDto::GetWeekDays() const
{
    return m_weekDays;
}

void BudgetSendInfoDto::SetWeekDays(const vector<uint64_t>& _weekDays)
{
    m_weekDays = _weekDays;
    m_weekDaysHasBeenSet = true;
}

bool BudgetSendInfoDto::WeekDaysHasBeenSet() const
{
    return m_weekDaysHasBeenSet;
}

string BudgetSendInfoDto::GetReceiverType() const
{
    return m_receiverType;
}

void BudgetSendInfoDto::SetReceiverType(const string& _receiverType)
{
    m_receiverType = _receiverType;
    m_receiverTypeHasBeenSet = true;
}

bool BudgetSendInfoDto::ReceiverTypeHasBeenSet() const
{
    return m_receiverTypeHasBeenSet;
}

string BudgetSendInfoDto::GetEndTime() const
{
    return m_endTime;
}

void BudgetSendInfoDto::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BudgetSendInfoDto::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t BudgetSendInfoDto::GetBudgetId() const
{
    return m_budgetId;
}

void BudgetSendInfoDto::SetBudgetId(const int64_t& _budgetId)
{
    m_budgetId = _budgetId;
    m_budgetIdHasBeenSet = true;
}

bool BudgetSendInfoDto::BudgetIdHasBeenSet() const
{
    return m_budgetIdHasBeenSet;
}

vector<string> BudgetSendInfoDto::GetNoticeWays() const
{
    return m_noticeWays;
}

void BudgetSendInfoDto::SetNoticeWays(const vector<string>& _noticeWays)
{
    m_noticeWays = _noticeWays;
    m_noticeWaysHasBeenSet = true;
}

bool BudgetSendInfoDto::NoticeWaysHasBeenSet() const
{
    return m_noticeWaysHasBeenSet;
}

string BudgetSendInfoDto::GetStartTime() const
{
    return m_startTime;
}

void BudgetSendInfoDto::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BudgetSendInfoDto::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BudgetSendInfoDto::GetId() const
{
    return m_id;
}

void BudgetSendInfoDto::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BudgetSendInfoDto::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<uint64_t> BudgetSendInfoDto::GetReceiverIds() const
{
    return m_receiverIds;
}

void BudgetSendInfoDto::SetReceiverIds(const vector<uint64_t>& _receiverIds)
{
    m_receiverIds = _receiverIds;
    m_receiverIdsHasBeenSet = true;
}

bool BudgetSendInfoDto::ReceiverIdsHasBeenSet() const
{
    return m_receiverIdsHasBeenSet;
}

