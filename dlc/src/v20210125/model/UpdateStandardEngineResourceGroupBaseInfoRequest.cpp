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

#include <tencentcloud/dlc/v20210125/model/UpdateStandardEngineResourceGroupBaseInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UpdateStandardEngineResourceGroupBaseInfoRequest::UpdateStandardEngineResourceGroupBaseInfoRequest() :
    m_engineResourceGroupNameHasBeenSet(false),
    m_autoLaunchHasBeenSet(false),
    m_autoPauseHasBeenSet(false),
    m_autoPauseTimeHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false)
{
}

string UpdateStandardEngineResourceGroupBaseInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_engineResourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineResourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_autoLaunchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoLaunch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoLaunch, allocator);
    }

    if (m_autoPauseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPause";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoPause, allocator);
    }

    if (m_autoPauseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPauseTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoPauseTime, allocator);
    }

    if (m_maxConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxConcurrency, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateStandardEngineResourceGroupBaseInfoRequest::GetEngineResourceGroupName() const
{
    return m_engineResourceGroupName;
}

void UpdateStandardEngineResourceGroupBaseInfoRequest::SetEngineResourceGroupName(const string& _engineResourceGroupName)
{
    m_engineResourceGroupName = _engineResourceGroupName;
    m_engineResourceGroupNameHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupBaseInfoRequest::EngineResourceGroupNameHasBeenSet() const
{
    return m_engineResourceGroupNameHasBeenSet;
}

int64_t UpdateStandardEngineResourceGroupBaseInfoRequest::GetAutoLaunch() const
{
    return m_autoLaunch;
}

void UpdateStandardEngineResourceGroupBaseInfoRequest::SetAutoLaunch(const int64_t& _autoLaunch)
{
    m_autoLaunch = _autoLaunch;
    m_autoLaunchHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupBaseInfoRequest::AutoLaunchHasBeenSet() const
{
    return m_autoLaunchHasBeenSet;
}

int64_t UpdateStandardEngineResourceGroupBaseInfoRequest::GetAutoPause() const
{
    return m_autoPause;
}

void UpdateStandardEngineResourceGroupBaseInfoRequest::SetAutoPause(const int64_t& _autoPause)
{
    m_autoPause = _autoPause;
    m_autoPauseHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupBaseInfoRequest::AutoPauseHasBeenSet() const
{
    return m_autoPauseHasBeenSet;
}

int64_t UpdateStandardEngineResourceGroupBaseInfoRequest::GetAutoPauseTime() const
{
    return m_autoPauseTime;
}

void UpdateStandardEngineResourceGroupBaseInfoRequest::SetAutoPauseTime(const int64_t& _autoPauseTime)
{
    m_autoPauseTime = _autoPauseTime;
    m_autoPauseTimeHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupBaseInfoRequest::AutoPauseTimeHasBeenSet() const
{
    return m_autoPauseTimeHasBeenSet;
}

int64_t UpdateStandardEngineResourceGroupBaseInfoRequest::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void UpdateStandardEngineResourceGroupBaseInfoRequest::SetMaxConcurrency(const int64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupBaseInfoRequest::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}


