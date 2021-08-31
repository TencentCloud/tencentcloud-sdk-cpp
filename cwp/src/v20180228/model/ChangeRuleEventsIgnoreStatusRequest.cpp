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

#include <tencentcloud/cwp/v20180228/model/ChangeRuleEventsIgnoreStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ChangeRuleEventsIgnoreStatusRequest::ChangeRuleEventsIgnoreStatusRequest() :
    m_ignoreStatusHasBeenSet(false),
    m_ruleIdListHasBeenSet(false),
    m_eventIdListHasBeenSet(false)
{
}

string ChangeRuleEventsIgnoreStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ignoreStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ignoreStatus, allocator);
    }

    if (m_ruleIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIdList.begin(); itr != m_ruleIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_eventIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventIdList.begin(); itr != m_eventIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ChangeRuleEventsIgnoreStatusRequest::GetIgnoreStatus() const
{
    return m_ignoreStatus;
}

void ChangeRuleEventsIgnoreStatusRequest::SetIgnoreStatus(const uint64_t& _ignoreStatus)
{
    m_ignoreStatus = _ignoreStatus;
    m_ignoreStatusHasBeenSet = true;
}

bool ChangeRuleEventsIgnoreStatusRequest::IgnoreStatusHasBeenSet() const
{
    return m_ignoreStatusHasBeenSet;
}

vector<uint64_t> ChangeRuleEventsIgnoreStatusRequest::GetRuleIdList() const
{
    return m_ruleIdList;
}

void ChangeRuleEventsIgnoreStatusRequest::SetRuleIdList(const vector<uint64_t>& _ruleIdList)
{
    m_ruleIdList = _ruleIdList;
    m_ruleIdListHasBeenSet = true;
}

bool ChangeRuleEventsIgnoreStatusRequest::RuleIdListHasBeenSet() const
{
    return m_ruleIdListHasBeenSet;
}

vector<uint64_t> ChangeRuleEventsIgnoreStatusRequest::GetEventIdList() const
{
    return m_eventIdList;
}

void ChangeRuleEventsIgnoreStatusRequest::SetEventIdList(const vector<uint64_t>& _eventIdList)
{
    m_eventIdList = _eventIdList;
    m_eventIdListHasBeenSet = true;
}

bool ChangeRuleEventsIgnoreStatusRequest::EventIdListHasBeenSet() const
{
    return m_eventIdListHasBeenSet;
}


