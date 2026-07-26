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

#include <tencentcloud/adp/v20260520/model/ModifyTimerTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyTimerTaskRequest::ModifyTimerTaskRequest() :
    m_spaceIdHasBeenSet(false),
    m_timerIdHasBeenSet(false),
    m_timerTaskHasBeenSet(false),
    m_updateMaskHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false)
{
}

string ModifyTimerTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_timerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timerId.c_str(), allocator).Move(), allocator);
    }

    if (m_timerTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timerTask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_updateMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateMask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updateMask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_loginUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginUin.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginSubAccountUin.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTimerTaskRequest::GetSpaceId() const
{
    return m_spaceId;
}

void ModifyTimerTaskRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool ModifyTimerTaskRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string ModifyTimerTaskRequest::GetTimerId() const
{
    return m_timerId;
}

void ModifyTimerTaskRequest::SetTimerId(const string& _timerId)
{
    m_timerId = _timerId;
    m_timerIdHasBeenSet = true;
}

bool ModifyTimerTaskRequest::TimerIdHasBeenSet() const
{
    return m_timerIdHasBeenSet;
}

TimerTask ModifyTimerTaskRequest::GetTimerTask() const
{
    return m_timerTask;
}

void ModifyTimerTaskRequest::SetTimerTask(const TimerTask& _timerTask)
{
    m_timerTask = _timerTask;
    m_timerTaskHasBeenSet = true;
}

bool ModifyTimerTaskRequest::TimerTaskHasBeenSet() const
{
    return m_timerTaskHasBeenSet;
}

FieldMask ModifyTimerTaskRequest::GetUpdateMask() const
{
    return m_updateMask;
}

void ModifyTimerTaskRequest::SetUpdateMask(const FieldMask& _updateMask)
{
    m_updateMask = _updateMask;
    m_updateMaskHasBeenSet = true;
}

bool ModifyTimerTaskRequest::UpdateMaskHasBeenSet() const
{
    return m_updateMaskHasBeenSet;
}

string ModifyTimerTaskRequest::GetLoginUin() const
{
    return m_loginUin;
}

void ModifyTimerTaskRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool ModifyTimerTaskRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string ModifyTimerTaskRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void ModifyTimerTaskRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool ModifyTimerTaskRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}


