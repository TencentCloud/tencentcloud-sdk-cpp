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

#include <tencentcloud/ssa/v20180608/model/SaDivulgeDataQueryPubRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssa::V20180608::Model;
using namespace rapidjson;
using namespace std;

SaDivulgeDataQueryPubRequest::SaDivulgeDataQueryPubRequest() :
    m_queryKeyHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_divulgeSoureHasBeenSet(false),
    m_assetHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string SaDivulgeDataQueryPubRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_queryKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueryKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_queryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_divulgeSoureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DivulgeSoure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_divulgeSoure.c_str(), allocator).Move(), allocator);
    }

    if (m_assetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_asset.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_offset.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_limit.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SaDivulgeDataQueryPubRequest::GetQueryKey() const
{
    return m_queryKey;
}

void SaDivulgeDataQueryPubRequest::SetQueryKey(const string& _queryKey)
{
    m_queryKey = _queryKey;
    m_queryKeyHasBeenSet = true;
}

bool SaDivulgeDataQueryPubRequest::QueryKeyHasBeenSet() const
{
    return m_queryKeyHasBeenSet;
}

string SaDivulgeDataQueryPubRequest::GetEventName() const
{
    return m_eventName;
}

void SaDivulgeDataQueryPubRequest::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool SaDivulgeDataQueryPubRequest::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string SaDivulgeDataQueryPubRequest::GetDivulgeSoure() const
{
    return m_divulgeSoure;
}

void SaDivulgeDataQueryPubRequest::SetDivulgeSoure(const string& _divulgeSoure)
{
    m_divulgeSoure = _divulgeSoure;
    m_divulgeSoureHasBeenSet = true;
}

bool SaDivulgeDataQueryPubRequest::DivulgeSoureHasBeenSet() const
{
    return m_divulgeSoureHasBeenSet;
}

string SaDivulgeDataQueryPubRequest::GetAsset() const
{
    return m_asset;
}

void SaDivulgeDataQueryPubRequest::SetAsset(const string& _asset)
{
    m_asset = _asset;
    m_assetHasBeenSet = true;
}

bool SaDivulgeDataQueryPubRequest::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

string SaDivulgeDataQueryPubRequest::GetRuleName() const
{
    return m_ruleName;
}

void SaDivulgeDataQueryPubRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool SaDivulgeDataQueryPubRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string SaDivulgeDataQueryPubRequest::GetRuleId() const
{
    return m_ruleId;
}

void SaDivulgeDataQueryPubRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool SaDivulgeDataQueryPubRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string SaDivulgeDataQueryPubRequest::GetLevel() const
{
    return m_level;
}

void SaDivulgeDataQueryPubRequest::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool SaDivulgeDataQueryPubRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string SaDivulgeDataQueryPubRequest::GetStatus() const
{
    return m_status;
}

void SaDivulgeDataQueryPubRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SaDivulgeDataQueryPubRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SaDivulgeDataQueryPubRequest::GetStartTime() const
{
    return m_startTime;
}

void SaDivulgeDataQueryPubRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SaDivulgeDataQueryPubRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SaDivulgeDataQueryPubRequest::GetEndTime() const
{
    return m_endTime;
}

void SaDivulgeDataQueryPubRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SaDivulgeDataQueryPubRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SaDivulgeDataQueryPubRequest::GetOffset() const
{
    return m_offset;
}

void SaDivulgeDataQueryPubRequest::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SaDivulgeDataQueryPubRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string SaDivulgeDataQueryPubRequest::GetLimit() const
{
    return m_limit;
}

void SaDivulgeDataQueryPubRequest::SetLimit(const string& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SaDivulgeDataQueryPubRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


