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

#include <tencentcloud/tem/v20210701/model/RollingUpdateApplicationByVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

RollingUpdateApplicationByVersionRequest::RollingUpdateApplicationByVersionRequest() :
    m_applicationIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_deployVersionHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_deployStrategyTypeHasBeenSet(false),
    m_totalBatchCountHasBeenSet(false),
    m_batchIntervalHasBeenSet(false),
    m_betaBatchNumHasBeenSet(false),
    m_minAvailableHasBeenSet(false),
    m_forceHasBeenSet(false)
{
}

string RollingUpdateApplicationByVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_deployStrategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployStrategyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployStrategyType.c_str(), allocator).Move(), allocator);
    }

    if (m_totalBatchCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBatchCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalBatchCount, allocator);
    }

    if (m_batchIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_batchInterval, allocator);
    }

    if (m_betaBatchNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BetaBatchNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_betaBatchNum, allocator);
    }

    if (m_minAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinAvailable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minAvailable, allocator);
    }

    if (m_forceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Force";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_force, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RollingUpdateApplicationByVersionRequest::GetApplicationId() const
{
    return m_applicationId;
}

void RollingUpdateApplicationByVersionRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool RollingUpdateApplicationByVersionRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string RollingUpdateApplicationByVersionRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void RollingUpdateApplicationByVersionRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool RollingUpdateApplicationByVersionRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string RollingUpdateApplicationByVersionRequest::GetDeployVersion() const
{
    return m_deployVersion;
}

void RollingUpdateApplicationByVersionRequest::SetDeployVersion(const string& _deployVersion)
{
    m_deployVersion = _deployVersion;
    m_deployVersionHasBeenSet = true;
}

bool RollingUpdateApplicationByVersionRequest::DeployVersionHasBeenSet() const
{
    return m_deployVersionHasBeenSet;
}

string RollingUpdateApplicationByVersionRequest::GetPackageName() const
{
    return m_packageName;
}

void RollingUpdateApplicationByVersionRequest::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool RollingUpdateApplicationByVersionRequest::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string RollingUpdateApplicationByVersionRequest::GetFrom() const
{
    return m_from;
}

void RollingUpdateApplicationByVersionRequest::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool RollingUpdateApplicationByVersionRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string RollingUpdateApplicationByVersionRequest::GetDeployStrategyType() const
{
    return m_deployStrategyType;
}

void RollingUpdateApplicationByVersionRequest::SetDeployStrategyType(const string& _deployStrategyType)
{
    m_deployStrategyType = _deployStrategyType;
    m_deployStrategyTypeHasBeenSet = true;
}

bool RollingUpdateApplicationByVersionRequest::DeployStrategyTypeHasBeenSet() const
{
    return m_deployStrategyTypeHasBeenSet;
}

int64_t RollingUpdateApplicationByVersionRequest::GetTotalBatchCount() const
{
    return m_totalBatchCount;
}

void RollingUpdateApplicationByVersionRequest::SetTotalBatchCount(const int64_t& _totalBatchCount)
{
    m_totalBatchCount = _totalBatchCount;
    m_totalBatchCountHasBeenSet = true;
}

bool RollingUpdateApplicationByVersionRequest::TotalBatchCountHasBeenSet() const
{
    return m_totalBatchCountHasBeenSet;
}

int64_t RollingUpdateApplicationByVersionRequest::GetBatchInterval() const
{
    return m_batchInterval;
}

void RollingUpdateApplicationByVersionRequest::SetBatchInterval(const int64_t& _batchInterval)
{
    m_batchInterval = _batchInterval;
    m_batchIntervalHasBeenSet = true;
}

bool RollingUpdateApplicationByVersionRequest::BatchIntervalHasBeenSet() const
{
    return m_batchIntervalHasBeenSet;
}

int64_t RollingUpdateApplicationByVersionRequest::GetBetaBatchNum() const
{
    return m_betaBatchNum;
}

void RollingUpdateApplicationByVersionRequest::SetBetaBatchNum(const int64_t& _betaBatchNum)
{
    m_betaBatchNum = _betaBatchNum;
    m_betaBatchNumHasBeenSet = true;
}

bool RollingUpdateApplicationByVersionRequest::BetaBatchNumHasBeenSet() const
{
    return m_betaBatchNumHasBeenSet;
}

int64_t RollingUpdateApplicationByVersionRequest::GetMinAvailable() const
{
    return m_minAvailable;
}

void RollingUpdateApplicationByVersionRequest::SetMinAvailable(const int64_t& _minAvailable)
{
    m_minAvailable = _minAvailable;
    m_minAvailableHasBeenSet = true;
}

bool RollingUpdateApplicationByVersionRequest::MinAvailableHasBeenSet() const
{
    return m_minAvailableHasBeenSet;
}

bool RollingUpdateApplicationByVersionRequest::GetForce() const
{
    return m_force;
}

void RollingUpdateApplicationByVersionRequest::SetForce(const bool& _force)
{
    m_force = _force;
    m_forceHasBeenSet = true;
}

bool RollingUpdateApplicationByVersionRequest::ForceHasBeenSet() const
{
    return m_forceHasBeenSet;
}


