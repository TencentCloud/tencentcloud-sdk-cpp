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

#include <tencentcloud/emr/v20190103/model/ScaleOutInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

ScaleOutInstanceRequest::ScaleOutInstanceRequest() :
    m_clientTokenHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_preExecutedFileSettingsHasBeenSet(false),
    m_taskCountHasBeenSet(false),
    m_coreCountHasBeenSet(false)
{
}

string ScaleOutInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clientTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_preExecutedFileSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PreExecutedFileSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_preExecutedFileSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_taskCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskCount, allocator);
    }

    if (m_coreCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoreCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_coreCount, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScaleOutInstanceRequest::GetClientToken() const
{
    return m_clientToken;
}

void ScaleOutInstanceRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool ScaleOutInstanceRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string ScaleOutInstanceRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void ScaleOutInstanceRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool ScaleOutInstanceRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

uint64_t ScaleOutInstanceRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void ScaleOutInstanceRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool ScaleOutInstanceRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string ScaleOutInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ScaleOutInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ScaleOutInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t ScaleOutInstanceRequest::GetPayMode() const
{
    return m_payMode;
}

void ScaleOutInstanceRequest::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ScaleOutInstanceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

PreExecuteFileSettings ScaleOutInstanceRequest::GetPreExecutedFileSettings() const
{
    return m_preExecutedFileSettings;
}

void ScaleOutInstanceRequest::SetPreExecutedFileSettings(const PreExecuteFileSettings& _preExecutedFileSettings)
{
    m_preExecutedFileSettings = _preExecutedFileSettings;
    m_preExecutedFileSettingsHasBeenSet = true;
}

bool ScaleOutInstanceRequest::PreExecutedFileSettingsHasBeenSet() const
{
    return m_preExecutedFileSettingsHasBeenSet;
}

uint64_t ScaleOutInstanceRequest::GetTaskCount() const
{
    return m_taskCount;
}

void ScaleOutInstanceRequest::SetTaskCount(const uint64_t& _taskCount)
{
    m_taskCount = _taskCount;
    m_taskCountHasBeenSet = true;
}

bool ScaleOutInstanceRequest::TaskCountHasBeenSet() const
{
    return m_taskCountHasBeenSet;
}

uint64_t ScaleOutInstanceRequest::GetCoreCount() const
{
    return m_coreCount;
}

void ScaleOutInstanceRequest::SetCoreCount(const uint64_t& _coreCount)
{
    m_coreCount = _coreCount;
    m_coreCountHasBeenSet = true;
}

bool ScaleOutInstanceRequest::CoreCountHasBeenSet() const
{
    return m_coreCountHasBeenSet;
}


