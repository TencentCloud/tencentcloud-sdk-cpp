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

#include <tencentcloud/eb/v20210416/model/UpdateTargetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

UpdateTargetRequest::UpdateTargetRequest() :
    m_eventBusIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_enableBatchDeliveryHasBeenSet(false),
    m_batchTimeoutHasBeenSet(false),
    m_batchEventCountHasBeenSet(false)
{
}

string UpdateTargetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventBusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventBusId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableBatchDeliveryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBatchDelivery";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableBatchDelivery, allocator);
    }

    if (m_batchTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_batchTimeout, allocator);
    }

    if (m_batchEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchEventCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_batchEventCount, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateTargetRequest::GetEventBusId() const
{
    return m_eventBusId;
}

void UpdateTargetRequest::SetEventBusId(const string& _eventBusId)
{
    m_eventBusId = _eventBusId;
    m_eventBusIdHasBeenSet = true;
}

bool UpdateTargetRequest::EventBusIdHasBeenSet() const
{
    return m_eventBusIdHasBeenSet;
}

string UpdateTargetRequest::GetRuleId() const
{
    return m_ruleId;
}

void UpdateTargetRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool UpdateTargetRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string UpdateTargetRequest::GetTargetId() const
{
    return m_targetId;
}

void UpdateTargetRequest::SetTargetId(const string& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool UpdateTargetRequest::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

bool UpdateTargetRequest::GetEnableBatchDelivery() const
{
    return m_enableBatchDelivery;
}

void UpdateTargetRequest::SetEnableBatchDelivery(const bool& _enableBatchDelivery)
{
    m_enableBatchDelivery = _enableBatchDelivery;
    m_enableBatchDeliveryHasBeenSet = true;
}

bool UpdateTargetRequest::EnableBatchDeliveryHasBeenSet() const
{
    return m_enableBatchDeliveryHasBeenSet;
}

int64_t UpdateTargetRequest::GetBatchTimeout() const
{
    return m_batchTimeout;
}

void UpdateTargetRequest::SetBatchTimeout(const int64_t& _batchTimeout)
{
    m_batchTimeout = _batchTimeout;
    m_batchTimeoutHasBeenSet = true;
}

bool UpdateTargetRequest::BatchTimeoutHasBeenSet() const
{
    return m_batchTimeoutHasBeenSet;
}

int64_t UpdateTargetRequest::GetBatchEventCount() const
{
    return m_batchEventCount;
}

void UpdateTargetRequest::SetBatchEventCount(const int64_t& _batchEventCount)
{
    m_batchEventCount = _batchEventCount;
    m_batchEventCountHasBeenSet = true;
}

bool UpdateTargetRequest::BatchEventCountHasBeenSet() const
{
    return m_batchEventCountHasBeenSet;
}


