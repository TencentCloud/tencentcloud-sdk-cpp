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

#include <tencentcloud/cynosdb/v20190107/model/RollBackClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

RollBackClusterRequest::RollBackClusterRequest() :
    m_clusterIdHasBeenSet(false),
    m_rollbackStrategyHasBeenSet(false),
    m_rollbackIdHasBeenSet(false),
    m_expectTimeHasBeenSet(false),
    m_expectTimeThreshHasBeenSet(false),
    m_rollbackDatabasesHasBeenSet(false),
    m_rollbackTablesHasBeenSet(false),
    m_rollbackModeHasBeenSet(false)
{
}

string RollBackClusterRequest::ToJsonString() const
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

    if (m_rollbackStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rollbackStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rollbackId, allocator);
    }

    if (m_expectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expectTimeThreshHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectTimeThresh";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expectTimeThresh, allocator);
    }

    if (m_rollbackDatabasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackDatabases";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rollbackDatabases.begin(); itr != m_rollbackDatabases.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_rollbackTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackTables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rollbackTables.begin(); itr != m_rollbackTables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_rollbackModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rollbackMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RollBackClusterRequest::GetClusterId() const
{
    return m_clusterId;
}

void RollBackClusterRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RollBackClusterRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RollBackClusterRequest::GetRollbackStrategy() const
{
    return m_rollbackStrategy;
}

void RollBackClusterRequest::SetRollbackStrategy(const string& _rollbackStrategy)
{
    m_rollbackStrategy = _rollbackStrategy;
    m_rollbackStrategyHasBeenSet = true;
}

bool RollBackClusterRequest::RollbackStrategyHasBeenSet() const
{
    return m_rollbackStrategyHasBeenSet;
}

uint64_t RollBackClusterRequest::GetRollbackId() const
{
    return m_rollbackId;
}

void RollBackClusterRequest::SetRollbackId(const uint64_t& _rollbackId)
{
    m_rollbackId = _rollbackId;
    m_rollbackIdHasBeenSet = true;
}

bool RollBackClusterRequest::RollbackIdHasBeenSet() const
{
    return m_rollbackIdHasBeenSet;
}

string RollBackClusterRequest::GetExpectTime() const
{
    return m_expectTime;
}

void RollBackClusterRequest::SetExpectTime(const string& _expectTime)
{
    m_expectTime = _expectTime;
    m_expectTimeHasBeenSet = true;
}

bool RollBackClusterRequest::ExpectTimeHasBeenSet() const
{
    return m_expectTimeHasBeenSet;
}

uint64_t RollBackClusterRequest::GetExpectTimeThresh() const
{
    return m_expectTimeThresh;
}

void RollBackClusterRequest::SetExpectTimeThresh(const uint64_t& _expectTimeThresh)
{
    m_expectTimeThresh = _expectTimeThresh;
    m_expectTimeThreshHasBeenSet = true;
}

bool RollBackClusterRequest::ExpectTimeThreshHasBeenSet() const
{
    return m_expectTimeThreshHasBeenSet;
}

vector<RollbackDatabase> RollBackClusterRequest::GetRollbackDatabases() const
{
    return m_rollbackDatabases;
}

void RollBackClusterRequest::SetRollbackDatabases(const vector<RollbackDatabase>& _rollbackDatabases)
{
    m_rollbackDatabases = _rollbackDatabases;
    m_rollbackDatabasesHasBeenSet = true;
}

bool RollBackClusterRequest::RollbackDatabasesHasBeenSet() const
{
    return m_rollbackDatabasesHasBeenSet;
}

vector<RollbackTable> RollBackClusterRequest::GetRollbackTables() const
{
    return m_rollbackTables;
}

void RollBackClusterRequest::SetRollbackTables(const vector<RollbackTable>& _rollbackTables)
{
    m_rollbackTables = _rollbackTables;
    m_rollbackTablesHasBeenSet = true;
}

bool RollBackClusterRequest::RollbackTablesHasBeenSet() const
{
    return m_rollbackTablesHasBeenSet;
}

string RollBackClusterRequest::GetRollbackMode() const
{
    return m_rollbackMode;
}

void RollBackClusterRequest::SetRollbackMode(const string& _rollbackMode)
{
    m_rollbackMode = _rollbackMode;
    m_rollbackModeHasBeenSet = true;
}

bool RollBackClusterRequest::RollbackModeHasBeenSet() const
{
    return m_rollbackModeHasBeenSet;
}


