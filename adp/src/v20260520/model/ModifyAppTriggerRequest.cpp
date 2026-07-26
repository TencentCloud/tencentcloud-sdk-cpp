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

#include <tencentcloud/adp/v20260520/model/ModifyAppTriggerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyAppTriggerRequest::ModifyAppTriggerRequest() :
    m_appIdHasBeenSet(false),
    m_triggerHasBeenSet(false),
    m_triggerIdHasBeenSet(false),
    m_updateMaskHasBeenSet(false)
{
}

string ModifyAppTriggerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trigger";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trigger.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_triggerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_triggerId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateMask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updateMask.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAppTriggerRequest::GetAppId() const
{
    return m_appId;
}

void ModifyAppTriggerRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ModifyAppTriggerRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

AppTrigger ModifyAppTriggerRequest::GetTrigger() const
{
    return m_trigger;
}

void ModifyAppTriggerRequest::SetTrigger(const AppTrigger& _trigger)
{
    m_trigger = _trigger;
    m_triggerHasBeenSet = true;
}

bool ModifyAppTriggerRequest::TriggerHasBeenSet() const
{
    return m_triggerHasBeenSet;
}

string ModifyAppTriggerRequest::GetTriggerId() const
{
    return m_triggerId;
}

void ModifyAppTriggerRequest::SetTriggerId(const string& _triggerId)
{
    m_triggerId = _triggerId;
    m_triggerIdHasBeenSet = true;
}

bool ModifyAppTriggerRequest::TriggerIdHasBeenSet() const
{
    return m_triggerIdHasBeenSet;
}

FieldMask ModifyAppTriggerRequest::GetUpdateMask() const
{
    return m_updateMask;
}

void ModifyAppTriggerRequest::SetUpdateMask(const FieldMask& _updateMask)
{
    m_updateMask = _updateMask;
    m_updateMaskHasBeenSet = true;
}

bool ModifyAppTriggerRequest::UpdateMaskHasBeenSet() const
{
    return m_updateMaskHasBeenSet;
}


