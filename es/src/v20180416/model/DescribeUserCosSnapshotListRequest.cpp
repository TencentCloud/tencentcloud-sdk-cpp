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

#include <tencentcloud/es/v20180416/model/DescribeUserCosSnapshotListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DescribeUserCosSnapshotListRequest::DescribeUserCosSnapshotListRequest() :
    m_cosBucketHasBeenSet(false),
    m_basePathHasBeenSet(false),
    m_clusterInstanceIdHasBeenSet(false)
{
}

string DescribeUserCosSnapshotListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_basePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_basePath.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterInstanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeUserCosSnapshotListRequest::GetCosBucket() const
{
    return m_cosBucket;
}

void DescribeUserCosSnapshotListRequest::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool DescribeUserCosSnapshotListRequest::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}

string DescribeUserCosSnapshotListRequest::GetBasePath() const
{
    return m_basePath;
}

void DescribeUserCosSnapshotListRequest::SetBasePath(const string& _basePath)
{
    m_basePath = _basePath;
    m_basePathHasBeenSet = true;
}

bool DescribeUserCosSnapshotListRequest::BasePathHasBeenSet() const
{
    return m_basePathHasBeenSet;
}

string DescribeUserCosSnapshotListRequest::GetClusterInstanceId() const
{
    return m_clusterInstanceId;
}

void DescribeUserCosSnapshotListRequest::SetClusterInstanceId(const string& _clusterInstanceId)
{
    m_clusterInstanceId = _clusterInstanceId;
    m_clusterInstanceIdHasBeenSet = true;
}

bool DescribeUserCosSnapshotListRequest::ClusterInstanceIdHasBeenSet() const
{
    return m_clusterInstanceIdHasBeenSet;
}


