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

#include <tencentcloud/csip/v20221121/model/BindClusterOwnerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BindClusterOwnerRequest::BindClusterOwnerRequest() :
    m_clusterAssetIdsHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_clusterCaMD5ListHasBeenSet(false)
{
}

string BindClusterOwnerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
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


vector<string> BindClusterOwnerRequest::GetClusterAssetIds() const
{
    return m_clusterAssetIds;
}

void BindClusterOwnerRequest::SetClusterAssetIds(const vector<string>& _clusterAssetIds)
{
    m_clusterAssetIds = _clusterAssetIds;
    m_clusterAssetIdsHasBeenSet = true;
}

bool BindClusterOwnerRequest::ClusterAssetIdsHasBeenSet() const
{
    return m_clusterAssetIdsHasBeenSet;
}

vector<string> BindClusterOwnerRequest::GetMemberId() const
{
    return m_memberId;
}

void BindClusterOwnerRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool BindClusterOwnerRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string BindClusterOwnerRequest::GetOwnerName() const
{
    return m_ownerName;
}

void BindClusterOwnerRequest::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool BindClusterOwnerRequest::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

vector<string> BindClusterOwnerRequest::GetClusterCaMD5List() const
{
    return m_clusterCaMD5List;
}

void BindClusterOwnerRequest::SetClusterCaMD5List(const vector<string>& _clusterCaMD5List)
{
    m_clusterCaMD5List = _clusterCaMD5List;
    m_clusterCaMD5ListHasBeenSet = true;
}

bool BindClusterOwnerRequest::ClusterCaMD5ListHasBeenSet() const
{
    return m_clusterCaMD5ListHasBeenSet;
}


