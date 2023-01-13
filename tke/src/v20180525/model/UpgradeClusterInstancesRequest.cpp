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

#include <tencentcloud/tke/v20180525/model/UpgradeClusterInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

UpgradeClusterInstancesRequest::UpgradeClusterInstancesRequest() :
    m_clusterIdHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_upgradeTypeHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_resetParamHasBeenSet(false),
    m_skipPreCheckHasBeenSet(false),
    m_maxNotReadyPercentHasBeenSet(false),
    m_upgradeRunTimeHasBeenSet(false)
{
}

string UpgradeClusterInstancesRequest::ToJsonString() const
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

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upgradeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resetParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResetParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resetParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_skipPreCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipPreCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skipPreCheck, allocator);
    }

    if (m_maxNotReadyPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNotReadyPercent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxNotReadyPercent, allocator);
    }

    if (m_upgradeRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeRunTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upgradeRunTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeClusterInstancesRequest::GetClusterId() const
{
    return m_clusterId;
}

void UpgradeClusterInstancesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool UpgradeClusterInstancesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string UpgradeClusterInstancesRequest::GetOperation() const
{
    return m_operation;
}

void UpgradeClusterInstancesRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool UpgradeClusterInstancesRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string UpgradeClusterInstancesRequest::GetUpgradeType() const
{
    return m_upgradeType;
}

void UpgradeClusterInstancesRequest::SetUpgradeType(const string& _upgradeType)
{
    m_upgradeType = _upgradeType;
    m_upgradeTypeHasBeenSet = true;
}

bool UpgradeClusterInstancesRequest::UpgradeTypeHasBeenSet() const
{
    return m_upgradeTypeHasBeenSet;
}

vector<string> UpgradeClusterInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void UpgradeClusterInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool UpgradeClusterInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

UpgradeNodeResetParam UpgradeClusterInstancesRequest::GetResetParam() const
{
    return m_resetParam;
}

void UpgradeClusterInstancesRequest::SetResetParam(const UpgradeNodeResetParam& _resetParam)
{
    m_resetParam = _resetParam;
    m_resetParamHasBeenSet = true;
}

bool UpgradeClusterInstancesRequest::ResetParamHasBeenSet() const
{
    return m_resetParamHasBeenSet;
}

bool UpgradeClusterInstancesRequest::GetSkipPreCheck() const
{
    return m_skipPreCheck;
}

void UpgradeClusterInstancesRequest::SetSkipPreCheck(const bool& _skipPreCheck)
{
    m_skipPreCheck = _skipPreCheck;
    m_skipPreCheckHasBeenSet = true;
}

bool UpgradeClusterInstancesRequest::SkipPreCheckHasBeenSet() const
{
    return m_skipPreCheckHasBeenSet;
}

double UpgradeClusterInstancesRequest::GetMaxNotReadyPercent() const
{
    return m_maxNotReadyPercent;
}

void UpgradeClusterInstancesRequest::SetMaxNotReadyPercent(const double& _maxNotReadyPercent)
{
    m_maxNotReadyPercent = _maxNotReadyPercent;
    m_maxNotReadyPercentHasBeenSet = true;
}

bool UpgradeClusterInstancesRequest::MaxNotReadyPercentHasBeenSet() const
{
    return m_maxNotReadyPercentHasBeenSet;
}

bool UpgradeClusterInstancesRequest::GetUpgradeRunTime() const
{
    return m_upgradeRunTime;
}

void UpgradeClusterInstancesRequest::SetUpgradeRunTime(const bool& _upgradeRunTime)
{
    m_upgradeRunTime = _upgradeRunTime;
    m_upgradeRunTimeHasBeenSet = true;
}

bool UpgradeClusterInstancesRequest::UpgradeRunTimeHasBeenSet() const
{
    return m_upgradeRunTimeHasBeenSet;
}


