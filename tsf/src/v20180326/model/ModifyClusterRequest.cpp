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

#include <tencentcloud/tsf/v20180326/model/ModifyClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ModifyClusterRequest::ModifyClusterRequest() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterDescHasBeenSet(false),
    m_clusterRemarkNameHasBeenSet(false),
    m_enableLogCollectionHasBeenSet(false),
    m_repairLogHasBeenSet(false)
{
}

string ModifyClusterRequest::ToJsonString() const
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

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterRemarkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterRemarkName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterRemarkName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableLogCollectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableLogCollection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableLogCollection, allocator);
    }

    if (m_repairLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairLog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_repairLog, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyClusterRequest::GetClusterName() const
{
    return m_clusterName;
}

void ModifyClusterRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ModifyClusterRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ModifyClusterRequest::GetClusterDesc() const
{
    return m_clusterDesc;
}

void ModifyClusterRequest::SetClusterDesc(const string& _clusterDesc)
{
    m_clusterDesc = _clusterDesc;
    m_clusterDescHasBeenSet = true;
}

bool ModifyClusterRequest::ClusterDescHasBeenSet() const
{
    return m_clusterDescHasBeenSet;
}

string ModifyClusterRequest::GetClusterRemarkName() const
{
    return m_clusterRemarkName;
}

void ModifyClusterRequest::SetClusterRemarkName(const string& _clusterRemarkName)
{
    m_clusterRemarkName = _clusterRemarkName;
    m_clusterRemarkNameHasBeenSet = true;
}

bool ModifyClusterRequest::ClusterRemarkNameHasBeenSet() const
{
    return m_clusterRemarkNameHasBeenSet;
}

bool ModifyClusterRequest::GetEnableLogCollection() const
{
    return m_enableLogCollection;
}

void ModifyClusterRequest::SetEnableLogCollection(const bool& _enableLogCollection)
{
    m_enableLogCollection = _enableLogCollection;
    m_enableLogCollectionHasBeenSet = true;
}

bool ModifyClusterRequest::EnableLogCollectionHasBeenSet() const
{
    return m_enableLogCollectionHasBeenSet;
}

bool ModifyClusterRequest::GetRepairLog() const
{
    return m_repairLog;
}

void ModifyClusterRequest::SetRepairLog(const bool& _repairLog)
{
    m_repairLog = _repairLog;
    m_repairLogHasBeenSet = true;
}

bool ModifyClusterRequest::RepairLogHasBeenSet() const
{
    return m_repairLogHasBeenSet;
}


