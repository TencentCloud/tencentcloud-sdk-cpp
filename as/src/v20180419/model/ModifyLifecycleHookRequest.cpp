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

#include <tencentcloud/as/v20180419/model/ModifyLifecycleHookRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

ModifyLifecycleHookRequest::ModifyLifecycleHookRequest() :
    m_lifecycleHookIdHasBeenSet(false),
    m_lifecycleHookNameHasBeenSet(false),
    m_lifecycleTransitionHasBeenSet(false),
    m_defaultResultHasBeenSet(false),
    m_heartbeatTimeoutHasBeenSet(false),
    m_notificationMetadataHasBeenSet(false),
    m_lifecycleTransitionTypeHasBeenSet(false),
    m_notificationTargetHasBeenSet(false),
    m_lifecycleCommandHasBeenSet(false)
{
}

string ModifyLifecycleHookRequest::ToJsonString() const
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

    if (m_lifecycleHookNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleHookName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lifecycleHookName.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleTransitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleTransition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lifecycleTransition.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_defaultResult.c_str(), allocator).Move(), allocator);
    }

    if (m_heartbeatTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeartbeatTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_heartbeatTimeout, allocator);
    }

    if (m_notificationMetadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationMetadata";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notificationMetadata.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleTransitionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleTransitionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lifecycleTransitionType.c_str(), allocator).Move(), allocator);
    }

    if (m_notificationTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationTarget";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_notificationTarget.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_lifecycleCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleCommand";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lifecycleCommand.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLifecycleHookRequest::GetLifecycleHookId() const
{
    return m_lifecycleHookId;
}

void ModifyLifecycleHookRequest::SetLifecycleHookId(const string& _lifecycleHookId)
{
    m_lifecycleHookId = _lifecycleHookId;
    m_lifecycleHookIdHasBeenSet = true;
}

bool ModifyLifecycleHookRequest::LifecycleHookIdHasBeenSet() const
{
    return m_lifecycleHookIdHasBeenSet;
}

string ModifyLifecycleHookRequest::GetLifecycleHookName() const
{
    return m_lifecycleHookName;
}

void ModifyLifecycleHookRequest::SetLifecycleHookName(const string& _lifecycleHookName)
{
    m_lifecycleHookName = _lifecycleHookName;
    m_lifecycleHookNameHasBeenSet = true;
}

bool ModifyLifecycleHookRequest::LifecycleHookNameHasBeenSet() const
{
    return m_lifecycleHookNameHasBeenSet;
}

string ModifyLifecycleHookRequest::GetLifecycleTransition() const
{
    return m_lifecycleTransition;
}

void ModifyLifecycleHookRequest::SetLifecycleTransition(const string& _lifecycleTransition)
{
    m_lifecycleTransition = _lifecycleTransition;
    m_lifecycleTransitionHasBeenSet = true;
}

bool ModifyLifecycleHookRequest::LifecycleTransitionHasBeenSet() const
{
    return m_lifecycleTransitionHasBeenSet;
}

string ModifyLifecycleHookRequest::GetDefaultResult() const
{
    return m_defaultResult;
}

void ModifyLifecycleHookRequest::SetDefaultResult(const string& _defaultResult)
{
    m_defaultResult = _defaultResult;
    m_defaultResultHasBeenSet = true;
}

bool ModifyLifecycleHookRequest::DefaultResultHasBeenSet() const
{
    return m_defaultResultHasBeenSet;
}

uint64_t ModifyLifecycleHookRequest::GetHeartbeatTimeout() const
{
    return m_heartbeatTimeout;
}

void ModifyLifecycleHookRequest::SetHeartbeatTimeout(const uint64_t& _heartbeatTimeout)
{
    m_heartbeatTimeout = _heartbeatTimeout;
    m_heartbeatTimeoutHasBeenSet = true;
}

bool ModifyLifecycleHookRequest::HeartbeatTimeoutHasBeenSet() const
{
    return m_heartbeatTimeoutHasBeenSet;
}

string ModifyLifecycleHookRequest::GetNotificationMetadata() const
{
    return m_notificationMetadata;
}

void ModifyLifecycleHookRequest::SetNotificationMetadata(const string& _notificationMetadata)
{
    m_notificationMetadata = _notificationMetadata;
    m_notificationMetadataHasBeenSet = true;
}

bool ModifyLifecycleHookRequest::NotificationMetadataHasBeenSet() const
{
    return m_notificationMetadataHasBeenSet;
}

string ModifyLifecycleHookRequest::GetLifecycleTransitionType() const
{
    return m_lifecycleTransitionType;
}

void ModifyLifecycleHookRequest::SetLifecycleTransitionType(const string& _lifecycleTransitionType)
{
    m_lifecycleTransitionType = _lifecycleTransitionType;
    m_lifecycleTransitionTypeHasBeenSet = true;
}

bool ModifyLifecycleHookRequest::LifecycleTransitionTypeHasBeenSet() const
{
    return m_lifecycleTransitionTypeHasBeenSet;
}

NotificationTarget ModifyLifecycleHookRequest::GetNotificationTarget() const
{
    return m_notificationTarget;
}

void ModifyLifecycleHookRequest::SetNotificationTarget(const NotificationTarget& _notificationTarget)
{
    m_notificationTarget = _notificationTarget;
    m_notificationTargetHasBeenSet = true;
}

bool ModifyLifecycleHookRequest::NotificationTargetHasBeenSet() const
{
    return m_notificationTargetHasBeenSet;
}

LifecycleCommand ModifyLifecycleHookRequest::GetLifecycleCommand() const
{
    return m_lifecycleCommand;
}

void ModifyLifecycleHookRequest::SetLifecycleCommand(const LifecycleCommand& _lifecycleCommand)
{
    m_lifecycleCommand = _lifecycleCommand;
    m_lifecycleCommandHasBeenSet = true;
}

bool ModifyLifecycleHookRequest::LifecycleCommandHasBeenSet() const
{
    return m_lifecycleCommandHasBeenSet;
}


