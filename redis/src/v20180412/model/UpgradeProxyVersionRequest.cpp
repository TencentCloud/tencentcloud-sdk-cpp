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

#include <tencentcloud/redis/v20180412/model/UpgradeProxyVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

UpgradeProxyVersionRequest::UpgradeProxyVersionRequest() :
    m_instanceIdHasBeenSet(false),
    m_currentProxyVersionHasBeenSet(false),
    m_upgradeProxyVersionHasBeenSet(false),
    m_instanceTypeUpgradeNowHasBeenSet(false)
{
}

string UpgradeProxyVersionRequest::ToJsonString() const
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

    if (m_currentProxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currentProxyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeProxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upgradeProxyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeUpgradeNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypeUpgradeNow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceTypeUpgradeNow, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeProxyVersionRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeProxyVersionRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeProxyVersionRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpgradeProxyVersionRequest::GetCurrentProxyVersion() const
{
    return m_currentProxyVersion;
}

void UpgradeProxyVersionRequest::SetCurrentProxyVersion(const string& _currentProxyVersion)
{
    m_currentProxyVersion = _currentProxyVersion;
    m_currentProxyVersionHasBeenSet = true;
}

bool UpgradeProxyVersionRequest::CurrentProxyVersionHasBeenSet() const
{
    return m_currentProxyVersionHasBeenSet;
}

string UpgradeProxyVersionRequest::GetUpgradeProxyVersion() const
{
    return m_upgradeProxyVersion;
}

void UpgradeProxyVersionRequest::SetUpgradeProxyVersion(const string& _upgradeProxyVersion)
{
    m_upgradeProxyVersion = _upgradeProxyVersion;
    m_upgradeProxyVersionHasBeenSet = true;
}

bool UpgradeProxyVersionRequest::UpgradeProxyVersionHasBeenSet() const
{
    return m_upgradeProxyVersionHasBeenSet;
}

int64_t UpgradeProxyVersionRequest::GetInstanceTypeUpgradeNow() const
{
    return m_instanceTypeUpgradeNow;
}

void UpgradeProxyVersionRequest::SetInstanceTypeUpgradeNow(const int64_t& _instanceTypeUpgradeNow)
{
    m_instanceTypeUpgradeNow = _instanceTypeUpgradeNow;
    m_instanceTypeUpgradeNowHasBeenSet = true;
}

bool UpgradeProxyVersionRequest::InstanceTypeUpgradeNowHasBeenSet() const
{
    return m_instanceTypeUpgradeNowHasBeenSet;
}


