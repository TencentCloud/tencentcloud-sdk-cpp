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

#include <tencentcloud/tdcpg/v20211118/model/TransformClusterPayModeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdcpg::V20211118::Model;
using namespace std;

TransformClusterPayModeRequest::TransformClusterPayModeRequest() :
    m_clusterIdHasBeenSet(false),
    m_currentPayModeHasBeenSet(false),
    m_targetPayModeHasBeenSet(false),
    m_periodHasBeenSet(false)
{
}

string TransformClusterPayModeRequest::ToJsonString() const
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

    if (m_currentPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currentPayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_targetPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetPayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TransformClusterPayModeRequest::GetClusterId() const
{
    return m_clusterId;
}

void TransformClusterPayModeRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool TransformClusterPayModeRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string TransformClusterPayModeRequest::GetCurrentPayMode() const
{
    return m_currentPayMode;
}

void TransformClusterPayModeRequest::SetCurrentPayMode(const string& _currentPayMode)
{
    m_currentPayMode = _currentPayMode;
    m_currentPayModeHasBeenSet = true;
}

bool TransformClusterPayModeRequest::CurrentPayModeHasBeenSet() const
{
    return m_currentPayModeHasBeenSet;
}

string TransformClusterPayModeRequest::GetTargetPayMode() const
{
    return m_targetPayMode;
}

void TransformClusterPayModeRequest::SetTargetPayMode(const string& _targetPayMode)
{
    m_targetPayMode = _targetPayMode;
    m_targetPayModeHasBeenSet = true;
}

bool TransformClusterPayModeRequest::TargetPayModeHasBeenSet() const
{
    return m_targetPayModeHasBeenSet;
}

uint64_t TransformClusterPayModeRequest::GetPeriod() const
{
    return m_period;
}

void TransformClusterPayModeRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool TransformClusterPayModeRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}


