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

#include <tencentcloud/dasb/v20191018/model/Resource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

Resource::Resource() :
    m_resourceIdHasBeenSet(false),
    m_apCodeHasBeenSet(false),
    m_svArgsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_expiredHasBeenSet(false),
    m_deployedHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_publicIpSetHasBeenSet(false),
    m_privateIpSetHasBeenSet(false),
    m_moduleSetHasBeenSet(false),
    m_usedNodesHasBeenSet(false),
    m_extendPointsHasBeenSet(false),
    m_packageBandwidthHasBeenSet(false),
    m_packageNodeHasBeenSet(false)
{
}

CoreInternalOutcome Resource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ApCode") && !value["ApCode"].IsNull())
    {
        if (!value["ApCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.ApCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apCode = string(value["ApCode"].GetString());
        m_apCodeHasBeenSet = true;
    }

    if (value.HasMember("SvArgs") && !value["SvArgs"].IsNull())
    {
        if (!value["SvArgs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.SvArgs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_svArgs = string(value["SvArgs"].GetString());
        m_svArgsHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Nodes") && !value["Nodes"].IsNull())
    {
        if (!value["Nodes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.Nodes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodes = value["Nodes"].GetUint64();
        m_nodesHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.RenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetUint64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.Pid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetUint64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("SubProductCode") && !value["SubProductCode"].IsNull())
    {
        if (!value["SubProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.SubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCode = string(value["SubProductCode"].GetString());
        m_subProductCodeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Expired") && !value["Expired"].IsNull())
    {
        if (!value["Expired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.Expired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_expired = value["Expired"].GetBool();
        m_expiredHasBeenSet = true;
    }

    if (value.HasMember("Deployed") && !value["Deployed"].IsNull())
    {
        if (!value["Deployed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.Deployed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deployed = value["Deployed"].GetBool();
        m_deployedHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("PublicIpSet") && !value["PublicIpSet"].IsNull())
    {
        if (!value["PublicIpSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Resource.PublicIpSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIpSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpSet.push_back((*itr).GetString());
        }
        m_publicIpSetHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpSet") && !value["PrivateIpSet"].IsNull())
    {
        if (!value["PrivateIpSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Resource.PrivateIpSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateIpSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIpSet.push_back((*itr).GetString());
        }
        m_privateIpSetHasBeenSet = true;
    }

    if (value.HasMember("ModuleSet") && !value["ModuleSet"].IsNull())
    {
        if (!value["ModuleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Resource.ModuleSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ModuleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_moduleSet.push_back((*itr).GetString());
        }
        m_moduleSetHasBeenSet = true;
    }

    if (value.HasMember("UsedNodes") && !value["UsedNodes"].IsNull())
    {
        if (!value["UsedNodes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.UsedNodes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNodes = value["UsedNodes"].GetUint64();
        m_usedNodesHasBeenSet = true;
    }

    if (value.HasMember("ExtendPoints") && !value["ExtendPoints"].IsNull())
    {
        if (!value["ExtendPoints"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.ExtendPoints` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_extendPoints = value["ExtendPoints"].GetUint64();
        m_extendPointsHasBeenSet = true;
    }

    if (value.HasMember("PackageBandwidth") && !value["PackageBandwidth"].IsNull())
    {
        if (!value["PackageBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.PackageBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packageBandwidth = value["PackageBandwidth"].GetUint64();
        m_packageBandwidthHasBeenSet = true;
    }

    if (value.HasMember("PackageNode") && !value["PackageNode"].IsNull())
    {
        if (!value["PackageNode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.PackageNode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packageNode = value["PackageNode"].GetUint64();
        m_packageNodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Resource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_apCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apCode.c_str(), allocator).Move(), allocator);
    }

    if (m_svArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SvArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_svArgs.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodes, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expired, allocator);
    }

    if (m_deployedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deployed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deployed, allocator);
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

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publicIpSet.begin(); itr != m_publicIpSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_privateIpSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privateIpSet.begin(); itr != m_privateIpSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_moduleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_moduleSet.begin(); itr != m_moduleSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_usedNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedNodes, allocator);
    }

    if (m_extendPointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendPoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_extendPoints, allocator);
    }

    if (m_packageBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageBandwidth, allocator);
    }

    if (m_packageNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageNode, allocator);
    }

}


string Resource::GetResourceId() const
{
    return m_resourceId;
}

void Resource::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool Resource::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string Resource::GetApCode() const
{
    return m_apCode;
}

void Resource::SetApCode(const string& _apCode)
{
    m_apCode = _apCode;
    m_apCodeHasBeenSet = true;
}

bool Resource::ApCodeHasBeenSet() const
{
    return m_apCodeHasBeenSet;
}

string Resource::GetSvArgs() const
{
    return m_svArgs;
}

void Resource::SetSvArgs(const string& _svArgs)
{
    m_svArgs = _svArgs;
    m_svArgsHasBeenSet = true;
}

bool Resource::SvArgsHasBeenSet() const
{
    return m_svArgsHasBeenSet;
}

string Resource::GetVpcId() const
{
    return m_vpcId;
}

void Resource::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool Resource::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

uint64_t Resource::GetNodes() const
{
    return m_nodes;
}

void Resource::SetNodes(const uint64_t& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool Resource::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

uint64_t Resource::GetRenewFlag() const
{
    return m_renewFlag;
}

void Resource::SetRenewFlag(const uint64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool Resource::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string Resource::GetExpireTime() const
{
    return m_expireTime;
}

void Resource::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool Resource::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t Resource::GetStatus() const
{
    return m_status;
}

void Resource::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Resource::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Resource::GetResourceName() const
{
    return m_resourceName;
}

void Resource::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool Resource::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

uint64_t Resource::GetPid() const
{
    return m_pid;
}

void Resource::SetPid(const uint64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool Resource::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string Resource::GetCreateTime() const
{
    return m_createTime;
}

void Resource::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Resource::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Resource::GetProductCode() const
{
    return m_productCode;
}

void Resource::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool Resource::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string Resource::GetSubProductCode() const
{
    return m_subProductCode;
}

void Resource::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool Resource::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

string Resource::GetZone() const
{
    return m_zone;
}

void Resource::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool Resource::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

bool Resource::GetExpired() const
{
    return m_expired;
}

void Resource::SetExpired(const bool& _expired)
{
    m_expired = _expired;
    m_expiredHasBeenSet = true;
}

bool Resource::ExpiredHasBeenSet() const
{
    return m_expiredHasBeenSet;
}

bool Resource::GetDeployed() const
{
    return m_deployed;
}

void Resource::SetDeployed(const bool& _deployed)
{
    m_deployed = _deployed;
    m_deployedHasBeenSet = true;
}

bool Resource::DeployedHasBeenSet() const
{
    return m_deployedHasBeenSet;
}

string Resource::GetVpcName() const
{
    return m_vpcName;
}

void Resource::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool Resource::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string Resource::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void Resource::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool Resource::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string Resource::GetSubnetId() const
{
    return m_subnetId;
}

void Resource::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool Resource::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string Resource::GetSubnetName() const
{
    return m_subnetName;
}

void Resource::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool Resource::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string Resource::GetCidrBlock() const
{
    return m_cidrBlock;
}

void Resource::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool Resource::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

vector<string> Resource::GetPublicIpSet() const
{
    return m_publicIpSet;
}

void Resource::SetPublicIpSet(const vector<string>& _publicIpSet)
{
    m_publicIpSet = _publicIpSet;
    m_publicIpSetHasBeenSet = true;
}

bool Resource::PublicIpSetHasBeenSet() const
{
    return m_publicIpSetHasBeenSet;
}

vector<string> Resource::GetPrivateIpSet() const
{
    return m_privateIpSet;
}

void Resource::SetPrivateIpSet(const vector<string>& _privateIpSet)
{
    m_privateIpSet = _privateIpSet;
    m_privateIpSetHasBeenSet = true;
}

bool Resource::PrivateIpSetHasBeenSet() const
{
    return m_privateIpSetHasBeenSet;
}

vector<string> Resource::GetModuleSet() const
{
    return m_moduleSet;
}

void Resource::SetModuleSet(const vector<string>& _moduleSet)
{
    m_moduleSet = _moduleSet;
    m_moduleSetHasBeenSet = true;
}

bool Resource::ModuleSetHasBeenSet() const
{
    return m_moduleSetHasBeenSet;
}

uint64_t Resource::GetUsedNodes() const
{
    return m_usedNodes;
}

void Resource::SetUsedNodes(const uint64_t& _usedNodes)
{
    m_usedNodes = _usedNodes;
    m_usedNodesHasBeenSet = true;
}

bool Resource::UsedNodesHasBeenSet() const
{
    return m_usedNodesHasBeenSet;
}

uint64_t Resource::GetExtendPoints() const
{
    return m_extendPoints;
}

void Resource::SetExtendPoints(const uint64_t& _extendPoints)
{
    m_extendPoints = _extendPoints;
    m_extendPointsHasBeenSet = true;
}

bool Resource::ExtendPointsHasBeenSet() const
{
    return m_extendPointsHasBeenSet;
}

uint64_t Resource::GetPackageBandwidth() const
{
    return m_packageBandwidth;
}

void Resource::SetPackageBandwidth(const uint64_t& _packageBandwidth)
{
    m_packageBandwidth = _packageBandwidth;
    m_packageBandwidthHasBeenSet = true;
}

bool Resource::PackageBandwidthHasBeenSet() const
{
    return m_packageBandwidthHasBeenSet;
}

uint64_t Resource::GetPackageNode() const
{
    return m_packageNode;
}

void Resource::SetPackageNode(const uint64_t& _packageNode)
{
    m_packageNode = _packageNode;
    m_packageNodeHasBeenSet = true;
}

bool Resource::PackageNodeHasBeenSet() const
{
    return m_packageNodeHasBeenSet;
}

