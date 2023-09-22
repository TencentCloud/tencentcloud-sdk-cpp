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

#include <tencentcloud/cwp/v20180228/model/DescribeAgentInstallCommandRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeAgentInstallCommandRequest::DescribeAgentInstallCommandRequest() :
    m_isCloudHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_tagIdsHasBeenSet(false),
    m_expireDateHasBeenSet(false),
    m_vipHasBeenSet(false)
{
}

string DescribeAgentInstallCommandRequest::ToJsonString() const
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

    if (m_expireDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireDate.c_str(), allocator).Move(), allocator);
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


bool DescribeAgentInstallCommandRequest::GetIsCloud() const
{
    return m_isCloud;
}

void DescribeAgentInstallCommandRequest::SetIsCloud(const bool& _isCloud)
{
    m_isCloud = _isCloud;
    m_isCloudHasBeenSet = true;
}

bool DescribeAgentInstallCommandRequest::IsCloudHasBeenSet() const
{
    return m_isCloudHasBeenSet;
}

string DescribeAgentInstallCommandRequest::GetNetType() const
{
    return m_netType;
}

void DescribeAgentInstallCommandRequest::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool DescribeAgentInstallCommandRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DescribeAgentInstallCommandRequest::GetRegionCode() const
{
    return m_regionCode;
}

void DescribeAgentInstallCommandRequest::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool DescribeAgentInstallCommandRequest::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string DescribeAgentInstallCommandRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeAgentInstallCommandRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeAgentInstallCommandRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<uint64_t> DescribeAgentInstallCommandRequest::GetTagIds() const
{
    return m_tagIds;
}

void DescribeAgentInstallCommandRequest::SetTagIds(const vector<uint64_t>& _tagIds)
{
    m_tagIds = _tagIds;
    m_tagIdsHasBeenSet = true;
}

bool DescribeAgentInstallCommandRequest::TagIdsHasBeenSet() const
{
    return m_tagIdsHasBeenSet;
}

string DescribeAgentInstallCommandRequest::GetExpireDate() const
{
    return m_expireDate;
}

void DescribeAgentInstallCommandRequest::SetExpireDate(const string& _expireDate)
{
    m_expireDate = _expireDate;
    m_expireDateHasBeenSet = true;
}

bool DescribeAgentInstallCommandRequest::ExpireDateHasBeenSet() const
{
    return m_expireDateHasBeenSet;
}

string DescribeAgentInstallCommandRequest::GetVip() const
{
    return m_vip;
}

void DescribeAgentInstallCommandRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool DescribeAgentInstallCommandRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}


