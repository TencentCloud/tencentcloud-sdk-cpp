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

#include <tencentcloud/cynosdb/v20190107/model/ModifyServerlessStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyServerlessStrategyRequest::ModifyServerlessStrategyRequest() :
    m_clusterIdHasBeenSet(false),
    m_autoPauseHasBeenSet(false),
    m_autoPauseDelayHasBeenSet(false),
    m_autoScaleUpDelayHasBeenSet(false),
    m_autoScaleDownDelayHasBeenSet(false),
    m_minCpuHasBeenSet(false),
    m_maxCpuHasBeenSet(false),
    m_minRoCpuHasBeenSet(false),
    m_maxRoCpuHasBeenSet(false),
    m_minRoCountHasBeenSet(false),
    m_maxRoCountHasBeenSet(false),
    m_autoArchiveHasBeenSet(false)
{
}

string ModifyServerlessStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoPauseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPause";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoPause.c_str(), allocator).Move(), allocator);
    }

    if (m_autoPauseDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPauseDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoPauseDelay, allocator);
    }

    if (m_autoScaleUpDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScaleUpDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoScaleUpDelay, allocator);
    }

    if (m_autoScaleDownDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScaleDownDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoScaleDownDelay, allocator);
    }

    if (m_minCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minCpu, allocator);
    }

    if (m_maxCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxCpu, allocator);
    }

    if (m_minRoCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinRoCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minRoCpu, allocator);
    }

    if (m_maxRoCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRoCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxRoCpu, allocator);
    }

    if (m_minRoCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinRoCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minRoCount, allocator);
    }

    if (m_maxRoCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRoCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxRoCount, allocator);
    }

    if (m_autoArchiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoArchive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoArchive.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyServerlessStrategyRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyServerlessStrategyRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyServerlessStrategyRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyServerlessStrategyRequest::GetAutoPause() const
{
    return m_autoPause;
}

void ModifyServerlessStrategyRequest::SetAutoPause(const string& _autoPause)
{
    m_autoPause = _autoPause;
    m_autoPauseHasBeenSet = true;
}

bool ModifyServerlessStrategyRequest::AutoPauseHasBeenSet() const
{
    return m_autoPauseHasBeenSet;
}

int64_t ModifyServerlessStrategyRequest::GetAutoPauseDelay() const
{
    return m_autoPauseDelay;
}

void ModifyServerlessStrategyRequest::SetAutoPauseDelay(const int64_t& _autoPauseDelay)
{
    m_autoPauseDelay = _autoPauseDelay;
    m_autoPauseDelayHasBeenSet = true;
}

bool ModifyServerlessStrategyRequest::AutoPauseDelayHasBeenSet() const
{
    return m_autoPauseDelayHasBeenSet;
}

int64_t ModifyServerlessStrategyRequest::GetAutoScaleUpDelay() const
{
    return m_autoScaleUpDelay;
}

void ModifyServerlessStrategyRequest::SetAutoScaleUpDelay(const int64_t& _autoScaleUpDelay)
{
    m_autoScaleUpDelay = _autoScaleUpDelay;
    m_autoScaleUpDelayHasBeenSet = true;
}

bool ModifyServerlessStrategyRequest::AutoScaleUpDelayHasBeenSet() const
{
    return m_autoScaleUpDelayHasBeenSet;
}

int64_t ModifyServerlessStrategyRequest::GetAutoScaleDownDelay() const
{
    return m_autoScaleDownDelay;
}

void ModifyServerlessStrategyRequest::SetAutoScaleDownDelay(const int64_t& _autoScaleDownDelay)
{
    m_autoScaleDownDelay = _autoScaleDownDelay;
    m_autoScaleDownDelayHasBeenSet = true;
}

bool ModifyServerlessStrategyRequest::AutoScaleDownDelayHasBeenSet() const
{
    return m_autoScaleDownDelayHasBeenSet;
}

double ModifyServerlessStrategyRequest::GetMinCpu() const
{
    return m_minCpu;
}

void ModifyServerlessStrategyRequest::SetMinCpu(const double& _minCpu)
{
    m_minCpu = _minCpu;
    m_minCpuHasBeenSet = true;
}

bool ModifyServerlessStrategyRequest::MinCpuHasBeenSet() const
{
    return m_minCpuHasBeenSet;
}

double ModifyServerlessStrategyRequest::GetMaxCpu() const
{
    return m_maxCpu;
}

void ModifyServerlessStrategyRequest::SetMaxCpu(const double& _maxCpu)
{
    m_maxCpu = _maxCpu;
    m_maxCpuHasBeenSet = true;
}

bool ModifyServerlessStrategyRequest::MaxCpuHasBeenSet() const
{
    return m_maxCpuHasBeenSet;
}

double ModifyServerlessStrategyRequest::GetMinRoCpu() const
{
    return m_minRoCpu;
}

void ModifyServerlessStrategyRequest::SetMinRoCpu(const double& _minRoCpu)
{
    m_minRoCpu = _minRoCpu;
    m_minRoCpuHasBeenSet = true;
}

bool ModifyServerlessStrategyRequest::MinRoCpuHasBeenSet() const
{
    return m_minRoCpuHasBeenSet;
}

double ModifyServerlessStrategyRequest::GetMaxRoCpu() const
{
    return m_maxRoCpu;
}

void ModifyServerlessStrategyRequest::SetMaxRoCpu(const double& _maxRoCpu)
{
    m_maxRoCpu = _maxRoCpu;
    m_maxRoCpuHasBeenSet = true;
}

bool ModifyServerlessStrategyRequest::MaxRoCpuHasBeenSet() const
{
    return m_maxRoCpuHasBeenSet;
}

int64_t ModifyServerlessStrategyRequest::GetMinRoCount() const
{
    return m_minRoCount;
}

void ModifyServerlessStrategyRequest::SetMinRoCount(const int64_t& _minRoCount)
{
    m_minRoCount = _minRoCount;
    m_minRoCountHasBeenSet = true;
}

bool ModifyServerlessStrategyRequest::MinRoCountHasBeenSet() const
{
    return m_minRoCountHasBeenSet;
}

int64_t ModifyServerlessStrategyRequest::GetMaxRoCount() const
{
    return m_maxRoCount;
}

void ModifyServerlessStrategyRequest::SetMaxRoCount(const int64_t& _maxRoCount)
{
    m_maxRoCount = _maxRoCount;
    m_maxRoCountHasBeenSet = true;
}

bool ModifyServerlessStrategyRequest::MaxRoCountHasBeenSet() const
{
    return m_maxRoCountHasBeenSet;
}

string ModifyServerlessStrategyRequest::GetAutoArchive() const
{
    return m_autoArchive;
}

void ModifyServerlessStrategyRequest::SetAutoArchive(const string& _autoArchive)
{
    m_autoArchive = _autoArchive;
    m_autoArchiveHasBeenSet = true;
}

bool ModifyServerlessStrategyRequest::AutoArchiveHasBeenSet() const
{
    return m_autoArchiveHasBeenSet;
}


