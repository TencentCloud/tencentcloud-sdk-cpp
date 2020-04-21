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

#include <tencentcloud/as/v20180419/model/LifecycleActionResultInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

LifecycleActionResultInfo::LifecycleActionResultInfo() :
    m_lifecycleHookIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_notificationResultHasBeenSet(false),
    m_lifecycleActionResultHasBeenSet(false),
    m_resultReasonHasBeenSet(false)
{
}

CoreInternalOutcome LifecycleActionResultInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("LifecycleHookId") && !value["LifecycleHookId"].IsNull())
    {
        if (!value["LifecycleHookId"].IsString())
        {
            return CoreInternalOutcome(Error("response `LifecycleActionResultInfo.LifecycleHookId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecycleHookId = string(value["LifecycleHookId"].GetString());
        m_lifecycleHookIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `LifecycleActionResultInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("NotificationResult") && !value["NotificationResult"].IsNull())
    {
        if (!value["NotificationResult"].IsString())
        {
            return CoreInternalOutcome(Error("response `LifecycleActionResultInfo.NotificationResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notificationResult = string(value["NotificationResult"].GetString());
        m_notificationResultHasBeenSet = true;
    }

    if (value.HasMember("LifecycleActionResult") && !value["LifecycleActionResult"].IsNull())
    {
        if (!value["LifecycleActionResult"].IsString())
        {
            return CoreInternalOutcome(Error("response `LifecycleActionResultInfo.LifecycleActionResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecycleActionResult = string(value["LifecycleActionResult"].GetString());
        m_lifecycleActionResultHasBeenSet = true;
    }

    if (value.HasMember("ResultReason") && !value["ResultReason"].IsNull())
    {
        if (!value["ResultReason"].IsString())
        {
            return CoreInternalOutcome(Error("response `LifecycleActionResultInfo.ResultReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultReason = string(value["ResultReason"].GetString());
        m_resultReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LifecycleActionResultInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_lifecycleHookIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LifecycleHookId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lifecycleHookId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_notificationResultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotificationResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_notificationResult.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleActionResultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LifecycleActionResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lifecycleActionResult.c_str(), allocator).Move(), allocator);
    }

    if (m_resultReasonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResultReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_resultReason.c_str(), allocator).Move(), allocator);
    }

}


string LifecycleActionResultInfo::GetLifecycleHookId() const
{
    return m_lifecycleHookId;
}

void LifecycleActionResultInfo::SetLifecycleHookId(const string& _lifecycleHookId)
{
    m_lifecycleHookId = _lifecycleHookId;
    m_lifecycleHookIdHasBeenSet = true;
}

bool LifecycleActionResultInfo::LifecycleHookIdHasBeenSet() const
{
    return m_lifecycleHookIdHasBeenSet;
}

string LifecycleActionResultInfo::GetInstanceId() const
{
    return m_instanceId;
}

void LifecycleActionResultInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool LifecycleActionResultInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string LifecycleActionResultInfo::GetNotificationResult() const
{
    return m_notificationResult;
}

void LifecycleActionResultInfo::SetNotificationResult(const string& _notificationResult)
{
    m_notificationResult = _notificationResult;
    m_notificationResultHasBeenSet = true;
}

bool LifecycleActionResultInfo::NotificationResultHasBeenSet() const
{
    return m_notificationResultHasBeenSet;
}

string LifecycleActionResultInfo::GetLifecycleActionResult() const
{
    return m_lifecycleActionResult;
}

void LifecycleActionResultInfo::SetLifecycleActionResult(const string& _lifecycleActionResult)
{
    m_lifecycleActionResult = _lifecycleActionResult;
    m_lifecycleActionResultHasBeenSet = true;
}

bool LifecycleActionResultInfo::LifecycleActionResultHasBeenSet() const
{
    return m_lifecycleActionResultHasBeenSet;
}

string LifecycleActionResultInfo::GetResultReason() const
{
    return m_resultReason;
}

void LifecycleActionResultInfo::SetResultReason(const string& _resultReason)
{
    m_resultReason = _resultReason;
    m_resultReasonHasBeenSet = true;
}

bool LifecycleActionResultInfo::ResultReasonHasBeenSet() const
{
    return m_resultReasonHasBeenSet;
}

