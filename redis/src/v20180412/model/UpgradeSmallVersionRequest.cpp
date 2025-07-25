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

#include <tencentcloud/redis/v20180412/model/UpgradeSmallVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

UpgradeSmallVersionRequest::UpgradeSmallVersionRequest() :
    m_instanceIdHasBeenSet(false),
    m_currentRedisVersionHasBeenSet(false),
    m_upgradeRedisVersionHasBeenSet(false),
    m_instanceTypeUpgradeNowHasBeenSet(false)
{
}

string UpgradeSmallVersionRequest::ToJsonString() const
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

    if (m_currentRedisVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentRedisVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currentRedisVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeRedisVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeRedisVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upgradeRedisVersion.c_str(), allocator).Move(), allocator);
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


string UpgradeSmallVersionRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeSmallVersionRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeSmallVersionRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpgradeSmallVersionRequest::GetCurrentRedisVersion() const
{
    return m_currentRedisVersion;
}

void UpgradeSmallVersionRequest::SetCurrentRedisVersion(const string& _currentRedisVersion)
{
    m_currentRedisVersion = _currentRedisVersion;
    m_currentRedisVersionHasBeenSet = true;
}

bool UpgradeSmallVersionRequest::CurrentRedisVersionHasBeenSet() const
{
    return m_currentRedisVersionHasBeenSet;
}

string UpgradeSmallVersionRequest::GetUpgradeRedisVersion() const
{
    return m_upgradeRedisVersion;
}

void UpgradeSmallVersionRequest::SetUpgradeRedisVersion(const string& _upgradeRedisVersion)
{
    m_upgradeRedisVersion = _upgradeRedisVersion;
    m_upgradeRedisVersionHasBeenSet = true;
}

bool UpgradeSmallVersionRequest::UpgradeRedisVersionHasBeenSet() const
{
    return m_upgradeRedisVersionHasBeenSet;
}

int64_t UpgradeSmallVersionRequest::GetInstanceTypeUpgradeNow() const
{
    return m_instanceTypeUpgradeNow;
}

void UpgradeSmallVersionRequest::SetInstanceTypeUpgradeNow(const int64_t& _instanceTypeUpgradeNow)
{
    m_instanceTypeUpgradeNow = _instanceTypeUpgradeNow;
    m_instanceTypeUpgradeNowHasBeenSet = true;
}

bool UpgradeSmallVersionRequest::InstanceTypeUpgradeNowHasBeenSet() const
{
    return m_instanceTypeUpgradeNowHasBeenSet;
}


