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

#include <tencentcloud/as/v20180419/model/CompleteLifecycleActionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

CompleteLifecycleActionRequest::CompleteLifecycleActionRequest() :
    m_lifecycleHookIdHasBeenSet(false),
    m_lifecycleActionResultHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_lifecycleActionTokenHasBeenSet(false)
{
}

string CompleteLifecycleActionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_lifecycleHookIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleHookId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lifecycleHookId.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleActionResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleActionResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lifecycleActionResult.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleActionTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleActionToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lifecycleActionToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CompleteLifecycleActionRequest::GetLifecycleHookId() const
{
    return m_lifecycleHookId;
}

void CompleteLifecycleActionRequest::SetLifecycleHookId(const string& _lifecycleHookId)
{
    m_lifecycleHookId = _lifecycleHookId;
    m_lifecycleHookIdHasBeenSet = true;
}

bool CompleteLifecycleActionRequest::LifecycleHookIdHasBeenSet() const
{
    return m_lifecycleHookIdHasBeenSet;
}

string CompleteLifecycleActionRequest::GetLifecycleActionResult() const
{
    return m_lifecycleActionResult;
}

void CompleteLifecycleActionRequest::SetLifecycleActionResult(const string& _lifecycleActionResult)
{
    m_lifecycleActionResult = _lifecycleActionResult;
    m_lifecycleActionResultHasBeenSet = true;
}

bool CompleteLifecycleActionRequest::LifecycleActionResultHasBeenSet() const
{
    return m_lifecycleActionResultHasBeenSet;
}

string CompleteLifecycleActionRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CompleteLifecycleActionRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CompleteLifecycleActionRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CompleteLifecycleActionRequest::GetLifecycleActionToken() const
{
    return m_lifecycleActionToken;
}

void CompleteLifecycleActionRequest::SetLifecycleActionToken(const string& _lifecycleActionToken)
{
    m_lifecycleActionToken = _lifecycleActionToken;
    m_lifecycleActionTokenHasBeenSet = true;
}

bool CompleteLifecycleActionRequest::LifecycleActionTokenHasBeenSet() const
{
    return m_lifecycleActionTokenHasBeenSet;
}


