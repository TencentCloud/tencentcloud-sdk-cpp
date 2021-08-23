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

#include <tencentcloud/bmlb/v20180625/model/LoadBalancer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

LoadBalancer::LoadBalancer() :
    m_loadBalancerIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_loadBalancerTypeHasBeenSet(false),
    m_exclusiveHasBeenSet(false),
    m_tgwSetTypeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_latestPayModeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusTimeHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_loadBalancerVipsHasBeenSet(false),
    m_supportListenerTypesHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_confIdHasBeenSet(false),
    m_confNameHasBeenSet(false),
    m_loadBalancerVipv6sHasBeenSet(false),
    m_ipProtocolTypeHasBeenSet(false),
    m_bzPayModeHasBeenSet(false),
    m_bzL4MetricsHasBeenSet(false),
    m_bzL7MetricsHasBeenSet(false),
    m_intVpcIdHasBeenSet(false),
    m_curVipsHasBeenSet(false)
{
}

CoreInternalOutcome LoadBalancer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerName") && !value["LoadBalancerName"].IsNull())
    {
        if (!value["LoadBalancerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerName = string(value["LoadBalancerName"].GetString());
        m_loadBalancerNameHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerType") && !value["LoadBalancerType"].IsNull())
    {
        if (!value["LoadBalancerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerType = string(value["LoadBalancerType"].GetString());
        m_loadBalancerTypeHasBeenSet = true;
    }

    if (value.HasMember("Exclusive") && !value["Exclusive"].IsNull())
    {
        if (!value["Exclusive"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.Exclusive` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exclusive = value["Exclusive"].GetUint64();
        m_exclusiveHasBeenSet = true;
    }

    if (value.HasMember("TgwSetType") && !value["TgwSetType"].IsNull())
    {
        if (!value["TgwSetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.TgwSetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tgwSetType = string(value["TgwSetType"].GetString());
        m_tgwSetTypeHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("LatestPayMode") && !value["LatestPayMode"].IsNull())
    {
        if (!value["LatestPayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LatestPayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestPayMode = string(value["LatestPayMode"].GetString());
        m_latestPayModeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StatusTime") && !value["StatusTime"].IsNull())
    {
        if (!value["StatusTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.StatusTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusTime = string(value["StatusTime"].GetString());
        m_statusTimeHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerVips") && !value["LoadBalancerVips"].IsNull())
    {
        if (!value["LoadBalancerVips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerVips` is not array type"));

        const rapidjson::Value &tmpValue = value["LoadBalancerVips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_loadBalancerVips.push_back((*itr).GetString());
        }
        m_loadBalancerVipsHasBeenSet = true;
    }

    if (value.HasMember("SupportListenerTypes") && !value["SupportListenerTypes"].IsNull())
    {
        if (!value["SupportListenerTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.SupportListenerTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportListenerTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportListenerTypes.push_back((*itr).GetString());
        }
        m_supportListenerTypesHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.Bandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetUint64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("ConfId") && !value["ConfId"].IsNull())
    {
        if (!value["ConfId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.ConfId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confId = string(value["ConfId"].GetString());
        m_confIdHasBeenSet = true;
    }

    if (value.HasMember("ConfName") && !value["ConfName"].IsNull())
    {
        if (!value["ConfName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.ConfName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confName = string(value["ConfName"].GetString());
        m_confNameHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerVipv6s") && !value["LoadBalancerVipv6s"].IsNull())
    {
        if (!value["LoadBalancerVipv6s"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerVipv6s` is not array type"));

        const rapidjson::Value &tmpValue = value["LoadBalancerVipv6s"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_loadBalancerVipv6s.push_back((*itr).GetString());
        }
        m_loadBalancerVipv6sHasBeenSet = true;
    }

    if (value.HasMember("IpProtocolType") && !value["IpProtocolType"].IsNull())
    {
        if (!value["IpProtocolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.IpProtocolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipProtocolType = string(value["IpProtocolType"].GetString());
        m_ipProtocolTypeHasBeenSet = true;
    }

    if (value.HasMember("BzPayMode") && !value["BzPayMode"].IsNull())
    {
        if (!value["BzPayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.BzPayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bzPayMode = string(value["BzPayMode"].GetString());
        m_bzPayModeHasBeenSet = true;
    }

    if (value.HasMember("BzL4Metrics") && !value["BzL4Metrics"].IsNull())
    {
        if (!value["BzL4Metrics"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.BzL4Metrics` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bzL4Metrics = string(value["BzL4Metrics"].GetString());
        m_bzL4MetricsHasBeenSet = true;
    }

    if (value.HasMember("BzL7Metrics") && !value["BzL7Metrics"].IsNull())
    {
        if (!value["BzL7Metrics"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.BzL7Metrics` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bzL7Metrics = string(value["BzL7Metrics"].GetString());
        m_bzL7MetricsHasBeenSet = true;
    }

    if (value.HasMember("IntVpcId") && !value["IntVpcId"].IsNull())
    {
        if (!value["IntVpcId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.IntVpcId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intVpcId = value["IntVpcId"].GetUint64();
        m_intVpcIdHasBeenSet = true;
    }

    if (value.HasMember("CurVips") && !value["CurVips"].IsNull())
    {
        if (!value["CurVips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.CurVips` is not array type"));

        const rapidjson::Value &tmpValue = value["CurVips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_curVips.push_back((*itr).GetString());
        }
        m_curVipsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadBalancer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
    }

    if (m_exclusiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exclusive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclusive, allocator);
    }

    if (m_tgwSetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TgwSetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tgwSetType.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_latestPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestPayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestPayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerVipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerVips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerVips.begin(); itr != m_loadBalancerVips.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_supportListenerTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportListenerTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportListenerTypes.begin(); itr != m_supportListenerTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_confIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confId.c_str(), allocator).Move(), allocator);
    }

    if (m_confNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confName.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerVipv6sHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerVipv6s";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerVipv6s.begin(); itr != m_loadBalancerVipv6s.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipProtocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpProtocolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipProtocolType.c_str(), allocator).Move(), allocator);
    }

    if (m_bzPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BzPayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bzPayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_bzL4MetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BzL4Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bzL4Metrics.c_str(), allocator).Move(), allocator);
    }

    if (m_bzL7MetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BzL7Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bzL7Metrics.c_str(), allocator).Move(), allocator);
    }

    if (m_intVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intVpcId, allocator);
    }

    if (m_curVipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurVips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_curVips.begin(); itr != m_curVips.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string LoadBalancer::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void LoadBalancer::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

uint64_t LoadBalancer::GetProjectId() const
{
    return m_projectId;
}

void LoadBalancer::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool LoadBalancer::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string LoadBalancer::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void LoadBalancer::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

string LoadBalancer::GetLoadBalancerType() const
{
    return m_loadBalancerType;
}

void LoadBalancer::SetLoadBalancerType(const string& _loadBalancerType)
{
    m_loadBalancerType = _loadBalancerType;
    m_loadBalancerTypeHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerTypeHasBeenSet() const
{
    return m_loadBalancerTypeHasBeenSet;
}

uint64_t LoadBalancer::GetExclusive() const
{
    return m_exclusive;
}

void LoadBalancer::SetExclusive(const uint64_t& _exclusive)
{
    m_exclusive = _exclusive;
    m_exclusiveHasBeenSet = true;
}

bool LoadBalancer::ExclusiveHasBeenSet() const
{
    return m_exclusiveHasBeenSet;
}

string LoadBalancer::GetTgwSetType() const
{
    return m_tgwSetType;
}

void LoadBalancer::SetTgwSetType(const string& _tgwSetType)
{
    m_tgwSetType = _tgwSetType;
    m_tgwSetTypeHasBeenSet = true;
}

bool LoadBalancer::TgwSetTypeHasBeenSet() const
{
    return m_tgwSetTypeHasBeenSet;
}

string LoadBalancer::GetDomain() const
{
    return m_domain;
}

void LoadBalancer::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool LoadBalancer::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string LoadBalancer::GetVpcId() const
{
    return m_vpcId;
}

void LoadBalancer::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool LoadBalancer::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string LoadBalancer::GetSubnetId() const
{
    return m_subnetId;
}

void LoadBalancer::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool LoadBalancer::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t LoadBalancer::GetStatus() const
{
    return m_status;
}

void LoadBalancer::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LoadBalancer::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LoadBalancer::GetPayMode() const
{
    return m_payMode;
}

void LoadBalancer::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool LoadBalancer::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string LoadBalancer::GetLatestPayMode() const
{
    return m_latestPayMode;
}

void LoadBalancer::SetLatestPayMode(const string& _latestPayMode)
{
    m_latestPayMode = _latestPayMode;
    m_latestPayModeHasBeenSet = true;
}

bool LoadBalancer::LatestPayModeHasBeenSet() const
{
    return m_latestPayModeHasBeenSet;
}

string LoadBalancer::GetCreateTime() const
{
    return m_createTime;
}

void LoadBalancer::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LoadBalancer::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LoadBalancer::GetStatusTime() const
{
    return m_statusTime;
}

void LoadBalancer::SetStatusTime(const string& _statusTime)
{
    m_statusTime = _statusTime;
    m_statusTimeHasBeenSet = true;
}

bool LoadBalancer::StatusTimeHasBeenSet() const
{
    return m_statusTimeHasBeenSet;
}

string LoadBalancer::GetVpcName() const
{
    return m_vpcName;
}

void LoadBalancer::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool LoadBalancer::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string LoadBalancer::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void LoadBalancer::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool LoadBalancer::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

vector<string> LoadBalancer::GetLoadBalancerVips() const
{
    return m_loadBalancerVips;
}

void LoadBalancer::SetLoadBalancerVips(const vector<string>& _loadBalancerVips)
{
    m_loadBalancerVips = _loadBalancerVips;
    m_loadBalancerVipsHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerVipsHasBeenSet() const
{
    return m_loadBalancerVipsHasBeenSet;
}

vector<string> LoadBalancer::GetSupportListenerTypes() const
{
    return m_supportListenerTypes;
}

void LoadBalancer::SetSupportListenerTypes(const vector<string>& _supportListenerTypes)
{
    m_supportListenerTypes = _supportListenerTypes;
    m_supportListenerTypesHasBeenSet = true;
}

bool LoadBalancer::SupportListenerTypesHasBeenSet() const
{
    return m_supportListenerTypesHasBeenSet;
}

uint64_t LoadBalancer::GetBandwidth() const
{
    return m_bandwidth;
}

void LoadBalancer::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool LoadBalancer::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string LoadBalancer::GetConfId() const
{
    return m_confId;
}

void LoadBalancer::SetConfId(const string& _confId)
{
    m_confId = _confId;
    m_confIdHasBeenSet = true;
}

bool LoadBalancer::ConfIdHasBeenSet() const
{
    return m_confIdHasBeenSet;
}

string LoadBalancer::GetConfName() const
{
    return m_confName;
}

void LoadBalancer::SetConfName(const string& _confName)
{
    m_confName = _confName;
    m_confNameHasBeenSet = true;
}

bool LoadBalancer::ConfNameHasBeenSet() const
{
    return m_confNameHasBeenSet;
}

vector<string> LoadBalancer::GetLoadBalancerVipv6s() const
{
    return m_loadBalancerVipv6s;
}

void LoadBalancer::SetLoadBalancerVipv6s(const vector<string>& _loadBalancerVipv6s)
{
    m_loadBalancerVipv6s = _loadBalancerVipv6s;
    m_loadBalancerVipv6sHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerVipv6sHasBeenSet() const
{
    return m_loadBalancerVipv6sHasBeenSet;
}

string LoadBalancer::GetIpProtocolType() const
{
    return m_ipProtocolType;
}

void LoadBalancer::SetIpProtocolType(const string& _ipProtocolType)
{
    m_ipProtocolType = _ipProtocolType;
    m_ipProtocolTypeHasBeenSet = true;
}

bool LoadBalancer::IpProtocolTypeHasBeenSet() const
{
    return m_ipProtocolTypeHasBeenSet;
}

string LoadBalancer::GetBzPayMode() const
{
    return m_bzPayMode;
}

void LoadBalancer::SetBzPayMode(const string& _bzPayMode)
{
    m_bzPayMode = _bzPayMode;
    m_bzPayModeHasBeenSet = true;
}

bool LoadBalancer::BzPayModeHasBeenSet() const
{
    return m_bzPayModeHasBeenSet;
}

string LoadBalancer::GetBzL4Metrics() const
{
    return m_bzL4Metrics;
}

void LoadBalancer::SetBzL4Metrics(const string& _bzL4Metrics)
{
    m_bzL4Metrics = _bzL4Metrics;
    m_bzL4MetricsHasBeenSet = true;
}

bool LoadBalancer::BzL4MetricsHasBeenSet() const
{
    return m_bzL4MetricsHasBeenSet;
}

string LoadBalancer::GetBzL7Metrics() const
{
    return m_bzL7Metrics;
}

void LoadBalancer::SetBzL7Metrics(const string& _bzL7Metrics)
{
    m_bzL7Metrics = _bzL7Metrics;
    m_bzL7MetricsHasBeenSet = true;
}

bool LoadBalancer::BzL7MetricsHasBeenSet() const
{
    return m_bzL7MetricsHasBeenSet;
}

uint64_t LoadBalancer::GetIntVpcId() const
{
    return m_intVpcId;
}

void LoadBalancer::SetIntVpcId(const uint64_t& _intVpcId)
{
    m_intVpcId = _intVpcId;
    m_intVpcIdHasBeenSet = true;
}

bool LoadBalancer::IntVpcIdHasBeenSet() const
{
    return m_intVpcIdHasBeenSet;
}

vector<string> LoadBalancer::GetCurVips() const
{
    return m_curVips;
}

void LoadBalancer::SetCurVips(const vector<string>& _curVips)
{
    m_curVips = _curVips;
    m_curVipsHasBeenSet = true;
}

bool LoadBalancer::CurVipsHasBeenSet() const
{
    return m_curVipsHasBeenSet;
}

