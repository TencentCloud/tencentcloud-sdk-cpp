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

#include <tencentcloud/tcss/v20201101/model/DescribeAgentDaemonSetCmdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAgentDaemonSetCmdRequest::DescribeAgentDaemonSetCmdRequest() :
    m_isCloudHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_expireDateHasBeenSet(false),
    m_clusterCustomParametersHasBeenSet(false)
{
}

string DescribeAgentDaemonSetCmdRequest::ToJsonString() const
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

    if (m_expireDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireDate.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool DescribeAgentDaemonSetCmdRequest::GetIsCloud() const
{
    return m_isCloud;
}

void DescribeAgentDaemonSetCmdRequest::SetIsCloud(const bool& _isCloud)
{
    m_isCloud = _isCloud;
    m_isCloudHasBeenSet = true;
}

bool DescribeAgentDaemonSetCmdRequest::IsCloudHasBeenSet() const
{
    return m_isCloudHasBeenSet;
}

string DescribeAgentDaemonSetCmdRequest::GetNetType() const
{
    return m_netType;
}

void DescribeAgentDaemonSetCmdRequest::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool DescribeAgentDaemonSetCmdRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DescribeAgentDaemonSetCmdRequest::GetRegionCode() const
{
    return m_regionCode;
}

void DescribeAgentDaemonSetCmdRequest::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool DescribeAgentDaemonSetCmdRequest::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string DescribeAgentDaemonSetCmdRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeAgentDaemonSetCmdRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeAgentDaemonSetCmdRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeAgentDaemonSetCmdRequest::GetExpireDate() const
{
    return m_expireDate;
}

void DescribeAgentDaemonSetCmdRequest::SetExpireDate(const string& _expireDate)
{
    m_expireDate = _expireDate;
    m_expireDateHasBeenSet = true;
}

bool DescribeAgentDaemonSetCmdRequest::ExpireDateHasBeenSet() const
{
    return m_expireDateHasBeenSet;
}

vector<ClusterCustomParameters> DescribeAgentDaemonSetCmdRequest::GetClusterCustomParameters() const
{
    return m_clusterCustomParameters;
}

void DescribeAgentDaemonSetCmdRequest::SetClusterCustomParameters(const vector<ClusterCustomParameters>& _clusterCustomParameters)
{
    m_clusterCustomParameters = _clusterCustomParameters;
    m_clusterCustomParametersHasBeenSet = true;
}

bool DescribeAgentDaemonSetCmdRequest::ClusterCustomParametersHasBeenSet() const
{
    return m_clusterCustomParametersHasBeenSet;
}


