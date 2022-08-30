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
using namespace std;

LifecycleActionResultInfo::LifecycleActionResultInfo() :
    m_lifecycleHookIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_invocationIdHasBeenSet(false),
    m_invokeCommandResultHasBeenSet(false),
    m_notificationResultHasBeenSet(false),
    m_lifecycleActionResultHasBeenSet(false),
    m_resultReasonHasBeenSet(false)
{
}

CoreInternalOutcome LifecycleActionResultInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LifecycleHookId") && !value["LifecycleHookId"].IsNull())
    {
        if (!value["LifecycleHookId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleActionResultInfo.LifecycleHookId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecycleHookId = string(value["LifecycleHookId"].GetString());
        m_lifecycleHookIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleActionResultInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InvocationId") && !value["InvocationId"].IsNull())
    {
        if (!value["InvocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleActionResultInfo.InvocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invocationId = string(value["InvocationId"].GetString());
        m_invocationIdHasBeenSet = true;
    }

    if (value.HasMember("InvokeCommandResult") && !value["InvokeCommandResult"].IsNull())
    {
        if (!value["InvokeCommandResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleActionResultInfo.InvokeCommandResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeCommandResult = string(value["InvokeCommandResult"].GetString());
        m_invokeCommandResultHasBeenSet = true;
    }

    if (value.HasMember("NotificationResult") && !value["NotificationResult"].IsNull())
    {
        if (!value["NotificationResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleActionResultInfo.NotificationResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notificationResult = string(value["NotificationResult"].GetString());
        m_notificationResultHasBeenSet = true;
    }

    if (value.HasMember("LifecycleActionResult") && !value["LifecycleActionResult"].IsNull())
    {
        if (!value["LifecycleActionResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleActionResultInfo.LifecycleActionResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecycleActionResult = string(value["LifecycleActionResult"].GetString());
        m_lifecycleActionResultHasBeenSet = true;
    }

    if (value.HasMember("ResultReason") && !value["ResultReason"].IsNull())
    {
        if (!value["ResultReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleActionResultInfo.ResultReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultReason = string(value["ResultReason"].GetString());
        m_resultReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LifecycleActionResultInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lifecycleHookIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleHookId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifecycleHookId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_invocationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invocationId.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeCommandResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeCommandResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeCommandResult.c_str(), allocator).Move(), allocator);
    }

    if (m_notificationResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notificationResult.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleActionResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleActionResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifecycleActionResult.c_str(), allocator).Move(), allocator);
    }

    if (m_resultReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultReason.c_str(), allocator).Move(), allocator);
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

string LifecycleActionResultInfo::GetInvocationId() const
{
    return m_invocationId;
}

void LifecycleActionResultInfo::SetInvocationId(const string& _invocationId)
{
    m_invocationId = _invocationId;
    m_invocationIdHasBeenSet = true;
}

bool LifecycleActionResultInfo::InvocationIdHasBeenSet() const
{
    return m_invocationIdHasBeenSet;
}

string LifecycleActionResultInfo::GetInvokeCommandResult() const
{
    return m_invokeCommandResult;
}

void LifecycleActionResultInfo::SetInvokeCommandResult(const string& _invokeCommandResult)
{
    m_invokeCommandResult = _invokeCommandResult;
    m_invokeCommandResultHasBeenSet = true;
}

bool LifecycleActionResultInfo::InvokeCommandResultHasBeenSet() const
{
    return m_invokeCommandResultHasBeenSet;
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

