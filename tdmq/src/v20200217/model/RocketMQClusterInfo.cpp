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

#include <tencentcloud/tdmq/v20200217/model/RocketMQClusterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQClusterInfo::RocketMQClusterInfo() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_publicEndPointHasBeenSet(false),
    m_vpcEndPointHasBeenSet(false),
    m_supportNamespaceEndpointHasBeenSet(false),
    m_vpcsHasBeenSet(false),
    m_isVipHasBeenSet(false),
    m_rocketMQFlagHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_httpPublicEndpointHasBeenSet(false),
    m_httpVpcEndpointHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQClusterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("PublicEndPoint") && !value["PublicEndPoint"].IsNull())
    {
        if (!value["PublicEndPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterInfo.PublicEndPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicEndPoint = string(value["PublicEndPoint"].GetString());
        m_publicEndPointHasBeenSet = true;
    }

    if (value.HasMember("VpcEndPoint") && !value["VpcEndPoint"].IsNull())
    {
        if (!value["VpcEndPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterInfo.VpcEndPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcEndPoint = string(value["VpcEndPoint"].GetString());
        m_vpcEndPointHasBeenSet = true;
    }

    if (value.HasMember("SupportNamespaceEndpoint") && !value["SupportNamespaceEndpoint"].IsNull())
    {
        if (!value["SupportNamespaceEndpoint"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterInfo.SupportNamespaceEndpoint` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportNamespaceEndpoint = value["SupportNamespaceEndpoint"].GetBool();
        m_supportNamespaceEndpointHasBeenSet = true;
    }

    if (value.HasMember("Vpcs") && !value["Vpcs"].IsNull())
    {
        if (!value["Vpcs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterInfo.Vpcs` is not array type"));

        const rapidjson::Value &tmpValue = value["Vpcs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcs.push_back(item);
        }
        m_vpcsHasBeenSet = true;
    }

    if (value.HasMember("IsVip") && !value["IsVip"].IsNull())
    {
        if (!value["IsVip"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterInfo.IsVip` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVip = value["IsVip"].GetBool();
        m_isVipHasBeenSet = true;
    }

    if (value.HasMember("RocketMQFlag") && !value["RocketMQFlag"].IsNull())
    {
        if (!value["RocketMQFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterInfo.RocketMQFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rocketMQFlag = value["RocketMQFlag"].GetBool();
        m_rocketMQFlagHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsolateTime") && !value["IsolateTime"].IsNull())
    {
        if (!value["IsolateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterInfo.IsolateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = value["IsolateTime"].GetInt64();
        m_isolateTimeHasBeenSet = true;
    }

    if (value.HasMember("HttpPublicEndpoint") && !value["HttpPublicEndpoint"].IsNull())
    {
        if (!value["HttpPublicEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterInfo.HttpPublicEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpPublicEndpoint = string(value["HttpPublicEndpoint"].GetString());
        m_httpPublicEndpointHasBeenSet = true;
    }

    if (value.HasMember("HttpVpcEndpoint") && !value["HttpVpcEndpoint"].IsNull())
    {
        if (!value["HttpVpcEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterInfo.HttpVpcEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpVpcEndpoint = string(value["HttpVpcEndpoint"].GetString());
        m_httpVpcEndpointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQClusterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_publicEndPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicEndPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicEndPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcEndPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcEndPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcEndPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_supportNamespaceEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportNamespaceEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportNamespaceEndpoint, allocator);
    }

    if (m_vpcsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vpcs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcs.begin(); itr != m_vpcs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isVip, allocator);
    }

    if (m_rocketMQFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RocketMQFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rocketMQFlag, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolateTime, allocator);
    }

    if (m_httpPublicEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpPublicEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpPublicEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_httpVpcEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpVpcEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpVpcEndpoint.c_str(), allocator).Move(), allocator);
    }

}


string RocketMQClusterInfo::GetClusterId() const
{
    return m_clusterId;
}

void RocketMQClusterInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RocketMQClusterInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RocketMQClusterInfo::GetClusterName() const
{
    return m_clusterName;
}

void RocketMQClusterInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool RocketMQClusterInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string RocketMQClusterInfo::GetRegion() const
{
    return m_region;
}

void RocketMQClusterInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RocketMQClusterInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t RocketMQClusterInfo::GetCreateTime() const
{
    return m_createTime;
}

void RocketMQClusterInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RocketMQClusterInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RocketMQClusterInfo::GetRemark() const
{
    return m_remark;
}

void RocketMQClusterInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RocketMQClusterInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RocketMQClusterInfo::GetPublicEndPoint() const
{
    return m_publicEndPoint;
}

void RocketMQClusterInfo::SetPublicEndPoint(const string& _publicEndPoint)
{
    m_publicEndPoint = _publicEndPoint;
    m_publicEndPointHasBeenSet = true;
}

bool RocketMQClusterInfo::PublicEndPointHasBeenSet() const
{
    return m_publicEndPointHasBeenSet;
}

string RocketMQClusterInfo::GetVpcEndPoint() const
{
    return m_vpcEndPoint;
}

void RocketMQClusterInfo::SetVpcEndPoint(const string& _vpcEndPoint)
{
    m_vpcEndPoint = _vpcEndPoint;
    m_vpcEndPointHasBeenSet = true;
}

bool RocketMQClusterInfo::VpcEndPointHasBeenSet() const
{
    return m_vpcEndPointHasBeenSet;
}

bool RocketMQClusterInfo::GetSupportNamespaceEndpoint() const
{
    return m_supportNamespaceEndpoint;
}

void RocketMQClusterInfo::SetSupportNamespaceEndpoint(const bool& _supportNamespaceEndpoint)
{
    m_supportNamespaceEndpoint = _supportNamespaceEndpoint;
    m_supportNamespaceEndpointHasBeenSet = true;
}

bool RocketMQClusterInfo::SupportNamespaceEndpointHasBeenSet() const
{
    return m_supportNamespaceEndpointHasBeenSet;
}

vector<VpcConfig> RocketMQClusterInfo::GetVpcs() const
{
    return m_vpcs;
}

void RocketMQClusterInfo::SetVpcs(const vector<VpcConfig>& _vpcs)
{
    m_vpcs = _vpcs;
    m_vpcsHasBeenSet = true;
}

bool RocketMQClusterInfo::VpcsHasBeenSet() const
{
    return m_vpcsHasBeenSet;
}

bool RocketMQClusterInfo::GetIsVip() const
{
    return m_isVip;
}

void RocketMQClusterInfo::SetIsVip(const bool& _isVip)
{
    m_isVip = _isVip;
    m_isVipHasBeenSet = true;
}

bool RocketMQClusterInfo::IsVipHasBeenSet() const
{
    return m_isVipHasBeenSet;
}

bool RocketMQClusterInfo::GetRocketMQFlag() const
{
    return m_rocketMQFlag;
}

void RocketMQClusterInfo::SetRocketMQFlag(const bool& _rocketMQFlag)
{
    m_rocketMQFlag = _rocketMQFlag;
    m_rocketMQFlagHasBeenSet = true;
}

bool RocketMQClusterInfo::RocketMQFlagHasBeenSet() const
{
    return m_rocketMQFlagHasBeenSet;
}

int64_t RocketMQClusterInfo::GetStatus() const
{
    return m_status;
}

void RocketMQClusterInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RocketMQClusterInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RocketMQClusterInfo::GetIsolateTime() const
{
    return m_isolateTime;
}

void RocketMQClusterInfo::SetIsolateTime(const int64_t& _isolateTime)
{
    m_isolateTime = _isolateTime;
    m_isolateTimeHasBeenSet = true;
}

bool RocketMQClusterInfo::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

string RocketMQClusterInfo::GetHttpPublicEndpoint() const
{
    return m_httpPublicEndpoint;
}

void RocketMQClusterInfo::SetHttpPublicEndpoint(const string& _httpPublicEndpoint)
{
    m_httpPublicEndpoint = _httpPublicEndpoint;
    m_httpPublicEndpointHasBeenSet = true;
}

bool RocketMQClusterInfo::HttpPublicEndpointHasBeenSet() const
{
    return m_httpPublicEndpointHasBeenSet;
}

string RocketMQClusterInfo::GetHttpVpcEndpoint() const
{
    return m_httpVpcEndpoint;
}

void RocketMQClusterInfo::SetHttpVpcEndpoint(const string& _httpVpcEndpoint)
{
    m_httpVpcEndpoint = _httpVpcEndpoint;
    m_httpVpcEndpointHasBeenSet = true;
}

bool RocketMQClusterInfo::HttpVpcEndpointHasBeenSet() const
{
    return m_httpVpcEndpointHasBeenSet;
}

