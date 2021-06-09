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

#include <tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeValidityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeRollbackTimeValidityRequest::DescribeRollbackTimeValidityRequest() :
    m_clusterIdHasBeenSet(false),
    m_expectTimeHasBeenSet(false),
    m_expectTimeThreshHasBeenSet(false)
{
}

string DescribeRollbackTimeValidityRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRollbackTimeValidityRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeRollbackTimeValidityRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeRollbackTimeValidityRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeRollbackTimeValidityRequest::GetExpectTime() const
{
    return m_expectTime;
}

void DescribeRollbackTimeValidityRequest::SetExpectTime(const string& _expectTime)
{
    m_expectTime = _expectTime;
    m_expectTimeHasBeenSet = true;
}

bool DescribeRollbackTimeValidityRequest::ExpectTimeHasBeenSet() const
{
    return m_expectTimeHasBeenSet;
}

uint64_t DescribeRollbackTimeValidityRequest::GetExpectTimeThresh() const
{
    return m_expectTimeThresh;
}

void DescribeRollbackTimeValidityRequest::SetExpectTimeThresh(const uint64_t& _expectTimeThresh)
{
    m_expectTimeThresh = _expectTimeThresh;
    m_expectTimeThreshHasBeenSet = true;
}

bool DescribeRollbackTimeValidityRequest::ExpectTimeThreshHasBeenSet() const
{
    return m_expectTimeThreshHasBeenSet;
}


