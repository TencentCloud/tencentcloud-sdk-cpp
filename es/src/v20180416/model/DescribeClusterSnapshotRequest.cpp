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

#include <tencentcloud/es/v20180416/model/DescribeClusterSnapshotRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DescribeClusterSnapshotRequest::DescribeClusterSnapshotRequest() :
    m_instanceIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_snapshotNameHasBeenSet(false)
{
}

string DescribeClusterSnapshotRequest::ToJsonString() const
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

    if (m_repositoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repositoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeClusterSnapshotRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeClusterSnapshotRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeClusterSnapshotRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeClusterSnapshotRequest::GetRepositoryName() const
{
    return m_repositoryName;
}

void DescribeClusterSnapshotRequest::SetRepositoryName(const string& _repositoryName)
{
    m_repositoryName = _repositoryName;
    m_repositoryNameHasBeenSet = true;
}

bool DescribeClusterSnapshotRequest::RepositoryNameHasBeenSet() const
{
    return m_repositoryNameHasBeenSet;
}

string DescribeClusterSnapshotRequest::GetSnapshotName() const
{
    return m_snapshotName;
}

void DescribeClusterSnapshotRequest::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool DescribeClusterSnapshotRequest::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}


