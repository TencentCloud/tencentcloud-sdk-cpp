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

#include <tencentcloud/cfw/v20190904/model/DescribeCfwAlertsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeCfwAlertsRequest::DescribeCfwAlertsRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_actionStatusHasBeenSet(false),
    m_killChainHasBeenSet(false),
    m_attackResultHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_dstIpHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

string DescribeCfwAlertsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_actionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actionStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_killChainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KillChain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_killChain.c_str(), allocator).Move(), allocator);
    }

    if (m_attackResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attackResult.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strategy.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstIp.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCfwAlertsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCfwAlertsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeCfwAlertsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCfwAlertsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeCfwAlertsRequest::GetLevel() const
{
    return m_level;
}

void DescribeCfwAlertsRequest::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DescribeCfwAlertsRequest::GetDirection() const
{
    return m_direction;
}

void DescribeCfwAlertsRequest::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string DescribeCfwAlertsRequest::GetActionStatus() const
{
    return m_actionStatus;
}

void DescribeCfwAlertsRequest::SetActionStatus(const string& _actionStatus)
{
    m_actionStatus = _actionStatus;
    m_actionStatusHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::ActionStatusHasBeenSet() const
{
    return m_actionStatusHasBeenSet;
}

string DescribeCfwAlertsRequest::GetKillChain() const
{
    return m_killChain;
}

void DescribeCfwAlertsRequest::SetKillChain(const string& _killChain)
{
    m_killChain = _killChain;
    m_killChainHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::KillChainHasBeenSet() const
{
    return m_killChainHasBeenSet;
}

string DescribeCfwAlertsRequest::GetAttackResult() const
{
    return m_attackResult;
}

void DescribeCfwAlertsRequest::SetAttackResult(const string& _attackResult)
{
    m_attackResult = _attackResult;
    m_attackResultHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::AttackResultHasBeenSet() const
{
    return m_attackResultHasBeenSet;
}

string DescribeCfwAlertsRequest::GetStrategy() const
{
    return m_strategy;
}

void DescribeCfwAlertsRequest::SetStrategy(const string& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

string DescribeCfwAlertsRequest::GetEventName() const
{
    return m_eventName;
}

void DescribeCfwAlertsRequest::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string DescribeCfwAlertsRequest::GetEventId() const
{
    return m_eventId;
}

void DescribeCfwAlertsRequest::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string DescribeCfwAlertsRequest::GetSrcIp() const
{
    return m_srcIp;
}

void DescribeCfwAlertsRequest::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string DescribeCfwAlertsRequest::GetDstIp() const
{
    return m_dstIp;
}

void DescribeCfwAlertsRequest::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

string DescribeCfwAlertsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeCfwAlertsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeCfwAlertsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCfwAlertsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeCfwAlertsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCfwAlertsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeCfwAlertsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeCfwAlertsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeCfwAlertsRequest::GetOrder() const
{
    return m_order;
}

void DescribeCfwAlertsRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeCfwAlertsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}


