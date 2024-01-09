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

#include <tencentcloud/cynosdb/v20190107/model/IsolateClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

IsolateClusterRequest::IsolateClusterRequest() :
    m_clusterIdHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_isolateReasonTypesHasBeenSet(false),
    m_isolateReasonHasBeenSet(false)
{
}

string IsolateClusterRequest::ToJsonString() const
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

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateReasonTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateReasonTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_isolateReasonTypes.begin(); itr != m_isolateReasonTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_isolateReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateReason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isolateReason.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string IsolateClusterRequest::GetClusterId() const
{
    return m_clusterId;
}

void IsolateClusterRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool IsolateClusterRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string IsolateClusterRequest::GetDbType() const
{
    return m_dbType;
}

void IsolateClusterRequest::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool IsolateClusterRequest::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

vector<int64_t> IsolateClusterRequest::GetIsolateReasonTypes() const
{
    return m_isolateReasonTypes;
}

void IsolateClusterRequest::SetIsolateReasonTypes(const vector<int64_t>& _isolateReasonTypes)
{
    m_isolateReasonTypes = _isolateReasonTypes;
    m_isolateReasonTypesHasBeenSet = true;
}

bool IsolateClusterRequest::IsolateReasonTypesHasBeenSet() const
{
    return m_isolateReasonTypesHasBeenSet;
}

string IsolateClusterRequest::GetIsolateReason() const
{
    return m_isolateReason;
}

void IsolateClusterRequest::SetIsolateReason(const string& _isolateReason)
{
    m_isolateReason = _isolateReason;
    m_isolateReasonHasBeenSet = true;
}

bool IsolateClusterRequest::IsolateReasonHasBeenSet() const
{
    return m_isolateReasonHasBeenSet;
}


