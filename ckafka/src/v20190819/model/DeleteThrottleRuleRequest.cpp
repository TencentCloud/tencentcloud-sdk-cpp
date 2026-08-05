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

#include <tencentcloud/ckafka/v20190819/model/DeleteThrottleRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DeleteThrottleRuleRequest::DeleteThrottleRuleRequest() :
    m_throttleRuleIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string DeleteThrottleRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_throttleRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThrottleRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_throttleRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteThrottleRuleRequest::GetThrottleRuleId() const
{
    return m_throttleRuleId;
}

void DeleteThrottleRuleRequest::SetThrottleRuleId(const string& _throttleRuleId)
{
    m_throttleRuleId = _throttleRuleId;
    m_throttleRuleIdHasBeenSet = true;
}

bool DeleteThrottleRuleRequest::ThrottleRuleIdHasBeenSet() const
{
    return m_throttleRuleIdHasBeenSet;
}

string DeleteThrottleRuleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteThrottleRuleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteThrottleRuleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


