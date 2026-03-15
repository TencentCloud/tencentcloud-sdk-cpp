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

#include <tencentcloud/goosefs/v20220519/model/QueryClientNodeMountCommandRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

QueryClientNodeMountCommandRequest::QueryClientNodeMountCommandRequest() :
    m_clusterIdHasBeenSet(false),
    m_clusterMountInfoHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false)
{
}

string QueryClientNodeMountCommandRequest::ToJsonString() const
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

    if (m_clusterMountInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterMountInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterMountInfo.begin(); itr != m_clusterMountInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryClientNodeMountCommandRequest::GetClusterId() const
{
    return m_clusterId;
}

void QueryClientNodeMountCommandRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool QueryClientNodeMountCommandRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<ClusterMountAttr> QueryClientNodeMountCommandRequest::GetClusterMountInfo() const
{
    return m_clusterMountInfo;
}

void QueryClientNodeMountCommandRequest::SetClusterMountInfo(const vector<ClusterMountAttr>& _clusterMountInfo)
{
    m_clusterMountInfo = _clusterMountInfo;
    m_clusterMountInfoHasBeenSet = true;
}

bool QueryClientNodeMountCommandRequest::ClusterMountInfoHasBeenSet() const
{
    return m_clusterMountInfoHasBeenSet;
}

string QueryClientNodeMountCommandRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void QueryClientNodeMountCommandRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool QueryClientNodeMountCommandRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}


