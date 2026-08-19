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

#include <tencentcloud/csip/v20221121/model/DescribeClusterInstallCommandRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeClusterInstallCommandRequest::DescribeClusterInstallCommandRequest() :
    m_isCloudHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_expireDateHasBeenSet(false),
    m_tagIdsHasBeenSet(false),
    m_clusterCustomParametersHasBeenSet(false),
    m_vipHasBeenSet(false)
{
}

string DescribeClusterInstallCommandRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_isCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCloud";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCloud, allocator);
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

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_expireDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireDate.c_str(), allocator).Move(), allocator);
    }

    if (m_tagIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIds.begin(); itr != m_tagIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_clusterCustomParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCustomParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterCustomParameters.begin(); itr != m_clusterCustomParameters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool DescribeClusterInstallCommandRequest::GetIsCloud() const
{
    return m_isCloud;
}

void DescribeClusterInstallCommandRequest::SetIsCloud(const bool& _isCloud)
{
    m_isCloud = _isCloud;
    m_isCloudHasBeenSet = true;
}

bool DescribeClusterInstallCommandRequest::IsCloudHasBeenSet() const
{
    return m_isCloudHasBeenSet;
}

vector<string> DescribeClusterInstallCommandRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeClusterInstallCommandRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeClusterInstallCommandRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string DescribeClusterInstallCommandRequest::GetNetType() const
{
    return m_netType;
}

void DescribeClusterInstallCommandRequest::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool DescribeClusterInstallCommandRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DescribeClusterInstallCommandRequest::GetRegionCode() const
{
    return m_regionCode;
}

void DescribeClusterInstallCommandRequest::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool DescribeClusterInstallCommandRequest::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string DescribeClusterInstallCommandRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeClusterInstallCommandRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeClusterInstallCommandRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeClusterInstallCommandRequest::GetExpireDate() const
{
    return m_expireDate;
}

void DescribeClusterInstallCommandRequest::SetExpireDate(const string& _expireDate)
{
    m_expireDate = _expireDate;
    m_expireDateHasBeenSet = true;
}

bool DescribeClusterInstallCommandRequest::ExpireDateHasBeenSet() const
{
    return m_expireDateHasBeenSet;
}

vector<uint64_t> DescribeClusterInstallCommandRequest::GetTagIds() const
{
    return m_tagIds;
}

void DescribeClusterInstallCommandRequest::SetTagIds(const vector<uint64_t>& _tagIds)
{
    m_tagIds = _tagIds;
    m_tagIdsHasBeenSet = true;
}

bool DescribeClusterInstallCommandRequest::TagIdsHasBeenSet() const
{
    return m_tagIdsHasBeenSet;
}

vector<ClusterCustomParameters> DescribeClusterInstallCommandRequest::GetClusterCustomParameters() const
{
    return m_clusterCustomParameters;
}

void DescribeClusterInstallCommandRequest::SetClusterCustomParameters(const vector<ClusterCustomParameters>& _clusterCustomParameters)
{
    m_clusterCustomParameters = _clusterCustomParameters;
    m_clusterCustomParametersHasBeenSet = true;
}

bool DescribeClusterInstallCommandRequest::ClusterCustomParametersHasBeenSet() const
{
    return m_clusterCustomParametersHasBeenSet;
}

string DescribeClusterInstallCommandRequest::GetVip() const
{
    return m_vip;
}

void DescribeClusterInstallCommandRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool DescribeClusterInstallCommandRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}


