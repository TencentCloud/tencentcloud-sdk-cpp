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

#include <tencentcloud/csip/v20221121/model/DescribeClusterDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeClusterDetailRequest::DescribeClusterDetailRequest() :
    m_clusterAssetIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_clusterCaMD5HasBeenSet(false)
{
}

string DescribeClusterDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterAssetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterAssetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterAssetId.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterCaMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCaMD5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterCaMD5.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeClusterDetailRequest::GetClusterAssetId() const
{
    return m_clusterAssetId;
}

void DescribeClusterDetailRequest::SetClusterAssetId(const string& _clusterAssetId)
{
    m_clusterAssetId = _clusterAssetId;
    m_clusterAssetIdHasBeenSet = true;
}

bool DescribeClusterDetailRequest::ClusterAssetIdHasBeenSet() const
{
    return m_clusterAssetIdHasBeenSet;
}

vector<string> DescribeClusterDetailRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeClusterDetailRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeClusterDetailRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string DescribeClusterDetailRequest::GetClusterCaMD5() const
{
    return m_clusterCaMD5;
}

void DescribeClusterDetailRequest::SetClusterCaMD5(const string& _clusterCaMD5)
{
    m_clusterCaMD5 = _clusterCaMD5;
    m_clusterCaMD5HasBeenSet = true;
}

bool DescribeClusterDetailRequest::ClusterCaMD5HasBeenSet() const
{
    return m_clusterCaMD5HasBeenSet;
}


