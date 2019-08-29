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

#include <tencentcloud/gaap/v20180529/model/DescribeRealServerStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

DescribeRealServerStatisticsRequest::DescribeRealServerStatisticsRequest() :
    m_realServerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_withinTimeHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

string DescribeRealServerStatisticsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_realServerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_realServerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_withinTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WithinTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withinTime, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRealServerStatisticsRequest::GetRealServerId() const
{
    return m_realServerId;
}

void DescribeRealServerStatisticsRequest::SetRealServerId(const string& _realServerId)
{
    m_realServerId = _realServerId;
    m_realServerIdHasBeenSet = true;
}

bool DescribeRealServerStatisticsRequest::RealServerIdHasBeenSet() const
{
    return m_realServerIdHasBeenSet;
}

string DescribeRealServerStatisticsRequest::GetListenerId() const
{
    return m_listenerId;
}

void DescribeRealServerStatisticsRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool DescribeRealServerStatisticsRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

uint64_t DescribeRealServerStatisticsRequest::GetWithinTime() const
{
    return m_withinTime;
}

void DescribeRealServerStatisticsRequest::SetWithinTime(const uint64_t& _withinTime)
{
    m_withinTime = _withinTime;
    m_withinTimeHasBeenSet = true;
}

bool DescribeRealServerStatisticsRequest::WithinTimeHasBeenSet() const
{
    return m_withinTimeHasBeenSet;
}

string DescribeRealServerStatisticsRequest::GetRuleId() const
{
    return m_ruleId;
}

void DescribeRealServerStatisticsRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DescribeRealServerStatisticsRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}


