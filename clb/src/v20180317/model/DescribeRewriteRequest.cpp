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

#include <tencentcloud/clb/v20180317/model/DescribeRewriteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DescribeRewriteRequest::DescribeRewriteRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_sourceListenerIdsHasBeenSet(false),
    m_sourceLocationIdsHasBeenSet(false)
{
}

string DescribeRewriteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceListenerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceListenerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceListenerIds.begin(); itr != m_sourceListenerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sourceLocationIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLocationIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceLocationIds.begin(); itr != m_sourceLocationIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRewriteRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void DescribeRewriteRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool DescribeRewriteRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

vector<string> DescribeRewriteRequest::GetSourceListenerIds() const
{
    return m_sourceListenerIds;
}

void DescribeRewriteRequest::SetSourceListenerIds(const vector<string>& _sourceListenerIds)
{
    m_sourceListenerIds = _sourceListenerIds;
    m_sourceListenerIdsHasBeenSet = true;
}

bool DescribeRewriteRequest::SourceListenerIdsHasBeenSet() const
{
    return m_sourceListenerIdsHasBeenSet;
}

vector<string> DescribeRewriteRequest::GetSourceLocationIds() const
{
    return m_sourceLocationIds;
}

void DescribeRewriteRequest::SetSourceLocationIds(const vector<string>& _sourceLocationIds)
{
    m_sourceLocationIds = _sourceLocationIds;
    m_sourceLocationIdsHasBeenSet = true;
}

bool DescribeRewriteRequest::SourceLocationIdsHasBeenSet() const
{
    return m_sourceLocationIdsHasBeenSet;
}


