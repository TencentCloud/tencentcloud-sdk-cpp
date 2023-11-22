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

#include <tencentcloud/es/v20180416/model/RestartInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

RestartInstanceRequest::RestartInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_forceRestartHasBeenSet(false),
    m_restartModeHasBeenSet(false),
    m_upgradeKernelHasBeenSet(false)
{
}

string RestartInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_forceRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRestart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceRestart, allocator);
    }

    if (m_restartModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_restartMode, allocator);
    }

    if (m_upgradeKernelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeKernel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upgradeKernel, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RestartInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RestartInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RestartInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool RestartInstanceRequest::GetForceRestart() const
{
    return m_forceRestart;
}

void RestartInstanceRequest::SetForceRestart(const bool& _forceRestart)
{
    m_forceRestart = _forceRestart;
    m_forceRestartHasBeenSet = true;
}

bool RestartInstanceRequest::ForceRestartHasBeenSet() const
{
    return m_forceRestartHasBeenSet;
}

int64_t RestartInstanceRequest::GetRestartMode() const
{
    return m_restartMode;
}

void RestartInstanceRequest::SetRestartMode(const int64_t& _restartMode)
{
    m_restartMode = _restartMode;
    m_restartModeHasBeenSet = true;
}

bool RestartInstanceRequest::RestartModeHasBeenSet() const
{
    return m_restartModeHasBeenSet;
}

bool RestartInstanceRequest::GetUpgradeKernel() const
{
    return m_upgradeKernel;
}

void RestartInstanceRequest::SetUpgradeKernel(const bool& _upgradeKernel)
{
    m_upgradeKernel = _upgradeKernel;
    m_upgradeKernelHasBeenSet = true;
}

bool RestartInstanceRequest::UpgradeKernelHasBeenSet() const
{
    return m_upgradeKernelHasBeenSet;
}


