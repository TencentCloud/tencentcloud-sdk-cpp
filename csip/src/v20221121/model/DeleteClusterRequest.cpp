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

#include <tencentcloud/csip/v20221121/model/DeleteClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DeleteClusterRequest::DeleteClusterRequest() :
    m_memberIdHasBeenSet(false),
    m_operatedMemberIdHasBeenSet(false),
    m_clusterAssetIdsHasBeenSet(false),
    m_clusterCaMD5ListHasBeenSet(false)
{
}

string DeleteClusterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_operatedMemberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatedMemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operatedMemberId.begin(); itr != m_operatedMemberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterAssetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterAssetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterAssetIds.begin(); itr != m_clusterAssetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterCaMD5ListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCaMD5List";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterCaMD5List.begin(); itr != m_clusterCaMD5List.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteClusterRequest::GetMemberId() const
{
    return m_memberId;
}

void DeleteClusterRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DeleteClusterRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> DeleteClusterRequest::GetOperatedMemberId() const
{
    return m_operatedMemberId;
}

void DeleteClusterRequest::SetOperatedMemberId(const vector<string>& _operatedMemberId)
{
    m_operatedMemberId = _operatedMemberId;
    m_operatedMemberIdHasBeenSet = true;
}

bool DeleteClusterRequest::OperatedMemberIdHasBeenSet() const
{
    return m_operatedMemberIdHasBeenSet;
}

vector<string> DeleteClusterRequest::GetClusterAssetIds() const
{
    return m_clusterAssetIds;
}

void DeleteClusterRequest::SetClusterAssetIds(const vector<string>& _clusterAssetIds)
{
    m_clusterAssetIds = _clusterAssetIds;
    m_clusterAssetIdsHasBeenSet = true;
}

bool DeleteClusterRequest::ClusterAssetIdsHasBeenSet() const
{
    return m_clusterAssetIdsHasBeenSet;
}

vector<string> DeleteClusterRequest::GetClusterCaMD5List() const
{
    return m_clusterCaMD5List;
}

void DeleteClusterRequest::SetClusterCaMD5List(const vector<string>& _clusterCaMD5List)
{
    m_clusterCaMD5List = _clusterCaMD5List;
    m_clusterCaMD5ListHasBeenSet = true;
}

bool DeleteClusterRequest::ClusterCaMD5ListHasBeenSet() const
{
    return m_clusterCaMD5ListHasBeenSet;
}


