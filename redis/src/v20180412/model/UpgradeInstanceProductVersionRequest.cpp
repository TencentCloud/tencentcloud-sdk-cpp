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

#include <tencentcloud/redis/v20180412/model/UpgradeInstanceProductVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

UpgradeInstanceProductVersionRequest::UpgradeInstanceProductVersionRequest() :
    m_targetProductVersionHasBeenSet(false),
    m_switchOptionHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string UpgradeInstanceProductVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetProductVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetProductVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetProductVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_switchOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switchOption, allocator);
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


string UpgradeInstanceProductVersionRequest::GetTargetProductVersion() const
{
    return m_targetProductVersion;
}

void UpgradeInstanceProductVersionRequest::SetTargetProductVersion(const string& _targetProductVersion)
{
    m_targetProductVersion = _targetProductVersion;
    m_targetProductVersionHasBeenSet = true;
}

bool UpgradeInstanceProductVersionRequest::TargetProductVersionHasBeenSet() const
{
    return m_targetProductVersionHasBeenSet;
}

int64_t UpgradeInstanceProductVersionRequest::GetSwitchOption() const
{
    return m_switchOption;
}

void UpgradeInstanceProductVersionRequest::SetSwitchOption(const int64_t& _switchOption)
{
    m_switchOption = _switchOption;
    m_switchOptionHasBeenSet = true;
}

bool UpgradeInstanceProductVersionRequest::SwitchOptionHasBeenSet() const
{
    return m_switchOptionHasBeenSet;
}

string UpgradeInstanceProductVersionRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeInstanceProductVersionRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeInstanceProductVersionRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


