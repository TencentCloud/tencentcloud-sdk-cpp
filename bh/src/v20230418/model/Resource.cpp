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

#include <tencentcloud/bh/v20230418/model/Resource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
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
    m_packageNodeHasBeenSet(false),
    m_logDeliveryArgsHasBeenSet(false),
    m_clbSetHasBeenSet(false),
    m_domainCountHasBeenSet(false),
    m_usedDomainCountHasBeenSet(false),
    m_trialHasBeenSet(false),
    m_logDeliveryHasBeenSet(false),
    m_cdcClusterIdHasBeenSet(false),
    m_deployModelHasBeenSet(false),
    m_intranetAccessHasBeenSet(false),
    m_intranetPrivateIpSetHasBeenSet(false),
    m_intranetVpcIdHasBeenSet(false),
    m_intranetVpcCidrHasBeenSet(false),
    m_shareClbHasBeenSet(false),
    m_openClbIdHasBeenSet(false),
    m_lbVipIspHasBeenSet(false),
    m_tUICmdPortHasBeenSet(false),
    m_tUIDirectPortHasBeenSet(false),
    m_webAccessHasBeenSet(false),
    m_clientAccessHasBeenSet(false),
    m_externalAccessHasBeenSet(false),
    m_iOAResourceHasBeenSet(false),
    m_packageIOAUserCountHasBeenSet(false),
    m_packageIOABandwidthHasBeenSet(false),
    m_iOAResourceIdHasBeenSet(false)
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

    if (value.HasMember("LogDeliveryArgs") && !value["LogDeliveryArgs"].IsNull())
    {
        if (!value["LogDeliveryArgs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.LogDeliveryArgs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logDeliveryArgs = string(value["LogDeliveryArgs"].GetString());
        m_logDeliveryArgsHasBeenSet = true;
    }

    if (value.HasMember("ClbSet") && !value["ClbSet"].IsNull())
    {
        if (!value["ClbSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Resource.ClbSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ClbSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Clb item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clbSet.push_back(item);
        }
        m_clbSetHasBeenSet = true;
    }

    if (value.HasMember("DomainCount") && !value["DomainCount"].IsNull())
    {
        if (!value["DomainCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.DomainCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainCount = value["DomainCount"].GetUint64();
        m_domainCountHasBeenSet = true;
    }

    if (value.HasMember("UsedDomainCount") && !value["UsedDomainCount"].IsNull())
    {
        if (!value["UsedDomainCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.UsedDomainCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedDomainCount = value["UsedDomainCount"].GetUint64();
        m_usedDomainCountHasBeenSet = true;
    }

    if (value.HasMember("Trial") && !value["Trial"].IsNull())
    {
        if (!value["Trial"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.Trial` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trial = value["Trial"].GetUint64();
        m_trialHasBeenSet = true;
    }

    if (value.HasMember("LogDelivery") && !value["LogDelivery"].IsNull())
    {
        if (!value["LogDelivery"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.LogDelivery` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logDelivery = string(value["LogDelivery"].GetString());
        m_logDeliveryHasBeenSet = true;
    }

    if (value.HasMember("CdcClusterId") && !value["CdcClusterId"].IsNull())
    {
        if (!value["CdcClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.CdcClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcClusterId = string(value["CdcClusterId"].GetString());
        m_cdcClusterIdHasBeenSet = true;
    }

    if (value.HasMember("DeployModel") && !value["DeployModel"].IsNull())
    {
        if (!value["DeployModel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.DeployModel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deployModel = value["DeployModel"].GetUint64();
        m_deployModelHasBeenSet = true;
    }

    if (value.HasMember("IntranetAccess") && !value["IntranetAccess"].IsNull())
    {
        if (!value["IntranetAccess"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.IntranetAccess` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intranetAccess = value["IntranetAccess"].GetUint64();
        m_intranetAccessHasBeenSet = true;
    }

    if (value.HasMember("IntranetPrivateIpSet") && !value["IntranetPrivateIpSet"].IsNull())
    {
        if (!value["IntranetPrivateIpSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Resource.IntranetPrivateIpSet` is not array type"));

        const rapidjson::Value &tmpValue = value["IntranetPrivateIpSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_intranetPrivateIpSet.push_back((*itr).GetString());
        }
        m_intranetPrivateIpSetHasBeenSet = true;
    }

    if (value.HasMember("IntranetVpcId") && !value["IntranetVpcId"].IsNull())
    {
        if (!value["IntranetVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.IntranetVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intranetVpcId = string(value["IntranetVpcId"].GetString());
        m_intranetVpcIdHasBeenSet = true;
    }

    if (value.HasMember("IntranetVpcCidr") && !value["IntranetVpcCidr"].IsNull())
    {
        if (!value["IntranetVpcCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.IntranetVpcCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intranetVpcCidr = string(value["IntranetVpcCidr"].GetString());
        m_intranetVpcCidrHasBeenSet = true;
    }

    if (value.HasMember("ShareClb") && !value["ShareClb"].IsNull())
    {
        if (!value["ShareClb"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.ShareClb` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_shareClb = value["ShareClb"].GetBool();
        m_shareClbHasBeenSet = true;
    }

    if (value.HasMember("OpenClbId") && !value["OpenClbId"].IsNull())
    {
        if (!value["OpenClbId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.OpenClbId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openClbId = string(value["OpenClbId"].GetString());
        m_openClbIdHasBeenSet = true;
    }

    if (value.HasMember("LbVipIsp") && !value["LbVipIsp"].IsNull())
    {
        if (!value["LbVipIsp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.LbVipIsp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lbVipIsp = string(value["LbVipIsp"].GetString());
        m_lbVipIspHasBeenSet = true;
    }

    if (value.HasMember("TUICmdPort") && !value["TUICmdPort"].IsNull())
    {
        if (!value["TUICmdPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.TUICmdPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tUICmdPort = value["TUICmdPort"].GetInt64();
        m_tUICmdPortHasBeenSet = true;
    }

    if (value.HasMember("TUIDirectPort") && !value["TUIDirectPort"].IsNull())
    {
        if (!value["TUIDirectPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.TUIDirectPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tUIDirectPort = value["TUIDirectPort"].GetInt64();
        m_tUIDirectPortHasBeenSet = true;
    }

    if (value.HasMember("WebAccess") && !value["WebAccess"].IsNull())
    {
        if (!value["WebAccess"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.WebAccess` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webAccess = value["WebAccess"].GetUint64();
        m_webAccessHasBeenSet = true;
    }

    if (value.HasMember("ClientAccess") && !value["ClientAccess"].IsNull())
    {
        if (!value["ClientAccess"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.ClientAccess` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clientAccess = value["ClientAccess"].GetUint64();
        m_clientAccessHasBeenSet = true;
    }

    if (value.HasMember("ExternalAccess") && !value["ExternalAccess"].IsNull())
    {
        if (!value["ExternalAccess"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.ExternalAccess` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_externalAccess = value["ExternalAccess"].GetUint64();
        m_externalAccessHasBeenSet = true;
    }

    if (value.HasMember("IOAResource") && !value["IOAResource"].IsNull())
    {
        if (!value["IOAResource"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.IOAResource` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iOAResource = value["IOAResource"].GetUint64();
        m_iOAResourceHasBeenSet = true;
    }

    if (value.HasMember("PackageIOAUserCount") && !value["PackageIOAUserCount"].IsNull())
    {
        if (!value["PackageIOAUserCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.PackageIOAUserCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packageIOAUserCount = value["PackageIOAUserCount"].GetUint64();
        m_packageIOAUserCountHasBeenSet = true;
    }

    if (value.HasMember("PackageIOABandwidth") && !value["PackageIOABandwidth"].IsNull())
    {
        if (!value["PackageIOABandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.PackageIOABandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packageIOABandwidth = value["PackageIOABandwidth"].GetUint64();
        m_packageIOABandwidthHasBeenSet = true;
    }

    if (value.HasMember("IOAResourceId") && !value["IOAResourceId"].IsNull())
    {
        if (!value["IOAResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.IOAResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iOAResourceId = string(value["IOAResourceId"].GetString());
        m_iOAResourceIdHasBeenSet = true;
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

    if (m_logDeliveryArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDeliveryArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logDeliveryArgs.c_str(), allocator).Move(), allocator);
    }

    if (m_clbSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClbSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clbSet.begin(); itr != m_clbSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_domainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainCount, allocator);
    }

    if (m_usedDomainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedDomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedDomainCount, allocator);
    }

    if (m_trialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trial, allocator);
    }

    if (m_logDeliveryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDelivery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logDelivery.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deployModel, allocator);
    }

    if (m_intranetAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intranetAccess, allocator);
    }

    if (m_intranetPrivateIpSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetPrivateIpSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_intranetPrivateIpSet.begin(); itr != m_intranetPrivateIpSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_intranetVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intranetVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_intranetVpcCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetVpcCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intranetVpcCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_shareClbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareClb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareClb, allocator);
    }

    if (m_openClbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenClbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openClbId.c_str(), allocator).Move(), allocator);
    }

    if (m_lbVipIspHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LbVipIsp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lbVipIsp.c_str(), allocator).Move(), allocator);
    }

    if (m_tUICmdPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TUICmdPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tUICmdPort, allocator);
    }

    if (m_tUIDirectPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TUIDirectPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tUIDirectPort, allocator);
    }

    if (m_webAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webAccess, allocator);
    }

    if (m_clientAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientAccess, allocator);
    }

    if (m_externalAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_externalAccess, allocator);
    }

    if (m_iOAResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOAResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iOAResource, allocator);
    }

    if (m_packageIOAUserCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageIOAUserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageIOAUserCount, allocator);
    }

    if (m_packageIOABandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageIOABandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageIOABandwidth, allocator);
    }

    if (m_iOAResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOAResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iOAResourceId.c_str(), allocator).Move(), allocator);
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

string Resource::GetLogDeliveryArgs() const
{
    return m_logDeliveryArgs;
}

void Resource::SetLogDeliveryArgs(const string& _logDeliveryArgs)
{
    m_logDeliveryArgs = _logDeliveryArgs;
    m_logDeliveryArgsHasBeenSet = true;
}

bool Resource::LogDeliveryArgsHasBeenSet() const
{
    return m_logDeliveryArgsHasBeenSet;
}

vector<Clb> Resource::GetClbSet() const
{
    return m_clbSet;
}

void Resource::SetClbSet(const vector<Clb>& _clbSet)
{
    m_clbSet = _clbSet;
    m_clbSetHasBeenSet = true;
}

bool Resource::ClbSetHasBeenSet() const
{
    return m_clbSetHasBeenSet;
}

uint64_t Resource::GetDomainCount() const
{
    return m_domainCount;
}

void Resource::SetDomainCount(const uint64_t& _domainCount)
{
    m_domainCount = _domainCount;
    m_domainCountHasBeenSet = true;
}

bool Resource::DomainCountHasBeenSet() const
{
    return m_domainCountHasBeenSet;
}

uint64_t Resource::GetUsedDomainCount() const
{
    return m_usedDomainCount;
}

void Resource::SetUsedDomainCount(const uint64_t& _usedDomainCount)
{
    m_usedDomainCount = _usedDomainCount;
    m_usedDomainCountHasBeenSet = true;
}

bool Resource::UsedDomainCountHasBeenSet() const
{
    return m_usedDomainCountHasBeenSet;
}

uint64_t Resource::GetTrial() const
{
    return m_trial;
}

void Resource::SetTrial(const uint64_t& _trial)
{
    m_trial = _trial;
    m_trialHasBeenSet = true;
}

bool Resource::TrialHasBeenSet() const
{
    return m_trialHasBeenSet;
}

string Resource::GetLogDelivery() const
{
    return m_logDelivery;
}

void Resource::SetLogDelivery(const string& _logDelivery)
{
    m_logDelivery = _logDelivery;
    m_logDeliveryHasBeenSet = true;
}

bool Resource::LogDeliveryHasBeenSet() const
{
    return m_logDeliveryHasBeenSet;
}

string Resource::GetCdcClusterId() const
{
    return m_cdcClusterId;
}

void Resource::SetCdcClusterId(const string& _cdcClusterId)
{
    m_cdcClusterId = _cdcClusterId;
    m_cdcClusterIdHasBeenSet = true;
}

bool Resource::CdcClusterIdHasBeenSet() const
{
    return m_cdcClusterIdHasBeenSet;
}

uint64_t Resource::GetDeployModel() const
{
    return m_deployModel;
}

void Resource::SetDeployModel(const uint64_t& _deployModel)
{
    m_deployModel = _deployModel;
    m_deployModelHasBeenSet = true;
}

bool Resource::DeployModelHasBeenSet() const
{
    return m_deployModelHasBeenSet;
}

uint64_t Resource::GetIntranetAccess() const
{
    return m_intranetAccess;
}

void Resource::SetIntranetAccess(const uint64_t& _intranetAccess)
{
    m_intranetAccess = _intranetAccess;
    m_intranetAccessHasBeenSet = true;
}

bool Resource::IntranetAccessHasBeenSet() const
{
    return m_intranetAccessHasBeenSet;
}

vector<string> Resource::GetIntranetPrivateIpSet() const
{
    return m_intranetPrivateIpSet;
}

void Resource::SetIntranetPrivateIpSet(const vector<string>& _intranetPrivateIpSet)
{
    m_intranetPrivateIpSet = _intranetPrivateIpSet;
    m_intranetPrivateIpSetHasBeenSet = true;
}

bool Resource::IntranetPrivateIpSetHasBeenSet() const
{
    return m_intranetPrivateIpSetHasBeenSet;
}

string Resource::GetIntranetVpcId() const
{
    return m_intranetVpcId;
}

void Resource::SetIntranetVpcId(const string& _intranetVpcId)
{
    m_intranetVpcId = _intranetVpcId;
    m_intranetVpcIdHasBeenSet = true;
}

bool Resource::IntranetVpcIdHasBeenSet() const
{
    return m_intranetVpcIdHasBeenSet;
}

string Resource::GetIntranetVpcCidr() const
{
    return m_intranetVpcCidr;
}

void Resource::SetIntranetVpcCidr(const string& _intranetVpcCidr)
{
    m_intranetVpcCidr = _intranetVpcCidr;
    m_intranetVpcCidrHasBeenSet = true;
}

bool Resource::IntranetVpcCidrHasBeenSet() const
{
    return m_intranetVpcCidrHasBeenSet;
}

bool Resource::GetShareClb() const
{
    return m_shareClb;
}

void Resource::SetShareClb(const bool& _shareClb)
{
    m_shareClb = _shareClb;
    m_shareClbHasBeenSet = true;
}

bool Resource::ShareClbHasBeenSet() const
{
    return m_shareClbHasBeenSet;
}

string Resource::GetOpenClbId() const
{
    return m_openClbId;
}

void Resource::SetOpenClbId(const string& _openClbId)
{
    m_openClbId = _openClbId;
    m_openClbIdHasBeenSet = true;
}

bool Resource::OpenClbIdHasBeenSet() const
{
    return m_openClbIdHasBeenSet;
}

string Resource::GetLbVipIsp() const
{
    return m_lbVipIsp;
}

void Resource::SetLbVipIsp(const string& _lbVipIsp)
{
    m_lbVipIsp = _lbVipIsp;
    m_lbVipIspHasBeenSet = true;
}

bool Resource::LbVipIspHasBeenSet() const
{
    return m_lbVipIspHasBeenSet;
}

int64_t Resource::GetTUICmdPort() const
{
    return m_tUICmdPort;
}

void Resource::SetTUICmdPort(const int64_t& _tUICmdPort)
{
    m_tUICmdPort = _tUICmdPort;
    m_tUICmdPortHasBeenSet = true;
}

bool Resource::TUICmdPortHasBeenSet() const
{
    return m_tUICmdPortHasBeenSet;
}

int64_t Resource::GetTUIDirectPort() const
{
    return m_tUIDirectPort;
}

void Resource::SetTUIDirectPort(const int64_t& _tUIDirectPort)
{
    m_tUIDirectPort = _tUIDirectPort;
    m_tUIDirectPortHasBeenSet = true;
}

bool Resource::TUIDirectPortHasBeenSet() const
{
    return m_tUIDirectPortHasBeenSet;
}

uint64_t Resource::GetWebAccess() const
{
    return m_webAccess;
}

void Resource::SetWebAccess(const uint64_t& _webAccess)
{
    m_webAccess = _webAccess;
    m_webAccessHasBeenSet = true;
}

bool Resource::WebAccessHasBeenSet() const
{
    return m_webAccessHasBeenSet;
}

uint64_t Resource::GetClientAccess() const
{
    return m_clientAccess;
}

void Resource::SetClientAccess(const uint64_t& _clientAccess)
{
    m_clientAccess = _clientAccess;
    m_clientAccessHasBeenSet = true;
}

bool Resource::ClientAccessHasBeenSet() const
{
    return m_clientAccessHasBeenSet;
}

uint64_t Resource::GetExternalAccess() const
{
    return m_externalAccess;
}

void Resource::SetExternalAccess(const uint64_t& _externalAccess)
{
    m_externalAccess = _externalAccess;
    m_externalAccessHasBeenSet = true;
}

bool Resource::ExternalAccessHasBeenSet() const
{
    return m_externalAccessHasBeenSet;
}

uint64_t Resource::GetIOAResource() const
{
    return m_iOAResource;
}

void Resource::SetIOAResource(const uint64_t& _iOAResource)
{
    m_iOAResource = _iOAResource;
    m_iOAResourceHasBeenSet = true;
}

bool Resource::IOAResourceHasBeenSet() const
{
    return m_iOAResourceHasBeenSet;
}

uint64_t Resource::GetPackageIOAUserCount() const
{
    return m_packageIOAUserCount;
}

void Resource::SetPackageIOAUserCount(const uint64_t& _packageIOAUserCount)
{
    m_packageIOAUserCount = _packageIOAUserCount;
    m_packageIOAUserCountHasBeenSet = true;
}

bool Resource::PackageIOAUserCountHasBeenSet() const
{
    return m_packageIOAUserCountHasBeenSet;
}

uint64_t Resource::GetPackageIOABandwidth() const
{
    return m_packageIOABandwidth;
}

void Resource::SetPackageIOABandwidth(const uint64_t& _packageIOABandwidth)
{
    m_packageIOABandwidth = _packageIOABandwidth;
    m_packageIOABandwidthHasBeenSet = true;
}

bool Resource::PackageIOABandwidthHasBeenSet() const
{
    return m_packageIOABandwidthHasBeenSet;
}

string Resource::GetIOAResourceId() const
{
    return m_iOAResourceId;
}

void Resource::SetIOAResourceId(const string& _iOAResourceId)
{
    m_iOAResourceId = _iOAResourceId;
    m_iOAResourceIdHasBeenSet = true;
}

bool Resource::IOAResourceIdHasBeenSet() const
{
    return m_iOAResourceIdHasBeenSet;
}

