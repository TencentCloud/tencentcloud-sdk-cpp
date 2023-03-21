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

#include <tencentcloud/tke/v20180525/model/AddVpcCniSubnetsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

AddVpcCniSubnetsRequest::AddVpcCniSubnetsRequest() :
    m_clusterIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_skipAddingNonMasqueradeCIDRsHasBeenSet(false)
{
}

string AddVpcCniSubnetsRequest::ToJsonString() const
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

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_skipAddingNonMasqueradeCIDRsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipAddingNonMasqueradeCIDRs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skipAddingNonMasqueradeCIDRs, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddVpcCniSubnetsRequest::GetClusterId() const
{
    return m_clusterId;
}

void AddVpcCniSubnetsRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AddVpcCniSubnetsRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> AddVpcCniSubnetsRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void AddVpcCniSubnetsRequest::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool AddVpcCniSubnetsRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

string AddVpcCniSubnetsRequest::GetVpcId() const
{
    return m_vpcId;
}

void AddVpcCniSubnetsRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool AddVpcCniSubnetsRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

bool AddVpcCniSubnetsRequest::GetSkipAddingNonMasqueradeCIDRs() const
{
    return m_skipAddingNonMasqueradeCIDRs;
}

void AddVpcCniSubnetsRequest::SetSkipAddingNonMasqueradeCIDRs(const bool& _skipAddingNonMasqueradeCIDRs)
{
    m_skipAddingNonMasqueradeCIDRs = _skipAddingNonMasqueradeCIDRs;
    m_skipAddingNonMasqueradeCIDRsHasBeenSet = true;
}

bool AddVpcCniSubnetsRequest::SkipAddingNonMasqueradeCIDRsHasBeenSet() const
{
    return m_skipAddingNonMasqueradeCIDRsHasBeenSet;
}


