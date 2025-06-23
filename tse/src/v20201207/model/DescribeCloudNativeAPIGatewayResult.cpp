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

#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeCloudNativeAPIGatewayResult::DescribeCloudNativeAPIGatewayResult() :
    m_gatewayIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_gatewayVersionHasBeenSet(false),
    m_nodeConfigHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_enableClsHasBeenSet(false),
    m_tradeTypeHasBeenSet(false),
    m_featureVersionHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_curDeadlineHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_enableInternetHasBeenSet(false),
    m_engineRegionHasBeenSet(false),
    m_ingressClassNameHasBeenSet(false),
    m_internetPayModeHasBeenSet(false),
    m_gatewayMinorVersionHasBeenSet(false),
    m_instancePortHasBeenSet(false),
    m_loadBalancerTypeHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_deleteProtectHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudNativeAPIGatewayResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("GatewayVersion") && !value["GatewayVersion"].IsNull())
    {
        if (!value["GatewayVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.GatewayVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayVersion = string(value["GatewayVersion"].GetString());
        m_gatewayVersionHasBeenSet = true;
    }

    if (value.HasMember("NodeConfig") && !value["NodeConfig"].IsNull())
    {
        if (!value["NodeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.NodeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeConfig.Deserialize(value["NodeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeConfigHasBeenSet = true;
    }

    if (value.HasMember("VpcConfig") && !value["VpcConfig"].IsNull())
    {
        if (!value["VpcConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.VpcConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vpcConfig.Deserialize(value["VpcConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vpcConfigHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("EnableCls") && !value["EnableCls"].IsNull())
    {
        if (!value["EnableCls"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.EnableCls` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableCls = value["EnableCls"].GetBool();
        m_enableClsHasBeenSet = true;
    }

    if (value.HasMember("TradeType") && !value["TradeType"].IsNull())
    {
        if (!value["TradeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.TradeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tradeType = value["TradeType"].GetInt64();
        m_tradeTypeHasBeenSet = true;
    }

    if (value.HasMember("FeatureVersion") && !value["FeatureVersion"].IsNull())
    {
        if (!value["FeatureVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.FeatureVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_featureVersion = string(value["FeatureVersion"].GetString());
        m_featureVersionHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.InternetMaxBandwidthOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetUint64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("CurDeadline") && !value["CurDeadline"].IsNull())
    {
        if (!value["CurDeadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.CurDeadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curDeadline = string(value["CurDeadline"].GetString());
        m_curDeadlineHasBeenSet = true;
    }

    if (value.HasMember("IsolateTime") && !value["IsolateTime"].IsNull())
    {
        if (!value["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(value["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (value.HasMember("EnableInternet") && !value["EnableInternet"].IsNull())
    {
        if (!value["EnableInternet"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.EnableInternet` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableInternet = value["EnableInternet"].GetBool();
        m_enableInternetHasBeenSet = true;
    }

    if (value.HasMember("EngineRegion") && !value["EngineRegion"].IsNull())
    {
        if (!value["EngineRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.EngineRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineRegion = string(value["EngineRegion"].GetString());
        m_engineRegionHasBeenSet = true;
    }

    if (value.HasMember("IngressClassName") && !value["IngressClassName"].IsNull())
    {
        if (!value["IngressClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.IngressClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ingressClassName = string(value["IngressClassName"].GetString());
        m_ingressClassNameHasBeenSet = true;
    }

    if (value.HasMember("InternetPayMode") && !value["InternetPayMode"].IsNull())
    {
        if (!value["InternetPayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.InternetPayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetPayMode = string(value["InternetPayMode"].GetString());
        m_internetPayModeHasBeenSet = true;
    }

    if (value.HasMember("GatewayMinorVersion") && !value["GatewayMinorVersion"].IsNull())
    {
        if (!value["GatewayMinorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.GatewayMinorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayMinorVersion = string(value["GatewayMinorVersion"].GetString());
        m_gatewayMinorVersionHasBeenSet = true;
    }

    if (value.HasMember("InstancePort") && !value["InstancePort"].IsNull())
    {
        if (!value["InstancePort"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.InstancePort` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instancePort.Deserialize(value["InstancePort"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instancePortHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerType") && !value["LoadBalancerType"].IsNull())
    {
        if (!value["LoadBalancerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.LoadBalancerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerType = string(value["LoadBalancerType"].GetString());
        m_loadBalancerTypeHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddresses") && !value["PublicIpAddresses"].IsNull())
    {
        if (!value["PublicIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.PublicIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpAddresses.push_back((*itr).GetString());
        }
        m_publicIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("DeleteProtect") && !value["DeleteProtect"].IsNull())
    {
        if (!value["DeleteProtect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayResult.DeleteProtect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteProtect = value["DeleteProtect"].GetBool();
        m_deleteProtectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeCloudNativeAPIGatewayResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vpcConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enableClsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCls, allocator);
    }

    if (m_tradeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tradeType, allocator);
    }

    if (m_featureVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_featureVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_curDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curDeadline.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enableInternetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableInternet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableInternet, allocator);
    }

    if (m_engineRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_ingressClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ingressClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_internetPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetPayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetPayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayMinorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayMinorVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayMinorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_instancePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instancePort.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_loadBalancerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publicIpAddresses.begin(); itr != m_publicIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deleteProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteProtect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteProtect, allocator);
    }

}


string DescribeCloudNativeAPIGatewayResult::GetGatewayId() const
{
    return m_gatewayId;
}

void DescribeCloudNativeAPIGatewayResult::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string DescribeCloudNativeAPIGatewayResult::GetStatus() const
{
    return m_status;
}

void DescribeCloudNativeAPIGatewayResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeCloudNativeAPIGatewayResult::GetName() const
{
    return m_name;
}

void DescribeCloudNativeAPIGatewayResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeCloudNativeAPIGatewayResult::GetType() const
{
    return m_type;
}

void DescribeCloudNativeAPIGatewayResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeCloudNativeAPIGatewayResult::GetGatewayVersion() const
{
    return m_gatewayVersion;
}

void DescribeCloudNativeAPIGatewayResult::SetGatewayVersion(const string& _gatewayVersion)
{
    m_gatewayVersion = _gatewayVersion;
    m_gatewayVersionHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::GatewayVersionHasBeenSet() const
{
    return m_gatewayVersionHasBeenSet;
}

CloudNativeAPIGatewayNodeConfig DescribeCloudNativeAPIGatewayResult::GetNodeConfig() const
{
    return m_nodeConfig;
}

void DescribeCloudNativeAPIGatewayResult::SetNodeConfig(const CloudNativeAPIGatewayNodeConfig& _nodeConfig)
{
    m_nodeConfig = _nodeConfig;
    m_nodeConfigHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::NodeConfigHasBeenSet() const
{
    return m_nodeConfigHasBeenSet;
}

CloudNativeAPIGatewayVpcConfig DescribeCloudNativeAPIGatewayResult::GetVpcConfig() const
{
    return m_vpcConfig;
}

void DescribeCloudNativeAPIGatewayResult::SetVpcConfig(const CloudNativeAPIGatewayVpcConfig& _vpcConfig)
{
    m_vpcConfig = _vpcConfig;
    m_vpcConfigHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::VpcConfigHasBeenSet() const
{
    return m_vpcConfigHasBeenSet;
}

string DescribeCloudNativeAPIGatewayResult::GetDescription() const
{
    return m_description;
}

void DescribeCloudNativeAPIGatewayResult::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeCloudNativeAPIGatewayResult::GetCreateTime() const
{
    return m_createTime;
}

void DescribeCloudNativeAPIGatewayResult::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<InstanceTagInfo> DescribeCloudNativeAPIGatewayResult::GetTags() const
{
    return m_tags;
}

void DescribeCloudNativeAPIGatewayResult::SetTags(const vector<InstanceTagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool DescribeCloudNativeAPIGatewayResult::GetEnableCls() const
{
    return m_enableCls;
}

void DescribeCloudNativeAPIGatewayResult::SetEnableCls(const bool& _enableCls)
{
    m_enableCls = _enableCls;
    m_enableClsHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::EnableClsHasBeenSet() const
{
    return m_enableClsHasBeenSet;
}

int64_t DescribeCloudNativeAPIGatewayResult::GetTradeType() const
{
    return m_tradeType;
}

void DescribeCloudNativeAPIGatewayResult::SetTradeType(const int64_t& _tradeType)
{
    m_tradeType = _tradeType;
    m_tradeTypeHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::TradeTypeHasBeenSet() const
{
    return m_tradeTypeHasBeenSet;
}

string DescribeCloudNativeAPIGatewayResult::GetFeatureVersion() const
{
    return m_featureVersion;
}

void DescribeCloudNativeAPIGatewayResult::SetFeatureVersion(const string& _featureVersion)
{
    m_featureVersion = _featureVersion;
    m_featureVersionHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::FeatureVersionHasBeenSet() const
{
    return m_featureVersionHasBeenSet;
}

uint64_t DescribeCloudNativeAPIGatewayResult::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void DescribeCloudNativeAPIGatewayResult::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

int64_t DescribeCloudNativeAPIGatewayResult::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void DescribeCloudNativeAPIGatewayResult::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string DescribeCloudNativeAPIGatewayResult::GetCurDeadline() const
{
    return m_curDeadline;
}

void DescribeCloudNativeAPIGatewayResult::SetCurDeadline(const string& _curDeadline)
{
    m_curDeadline = _curDeadline;
    m_curDeadlineHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::CurDeadlineHasBeenSet() const
{
    return m_curDeadlineHasBeenSet;
}

string DescribeCloudNativeAPIGatewayResult::GetIsolateTime() const
{
    return m_isolateTime;
}

void DescribeCloudNativeAPIGatewayResult::SetIsolateTime(const string& _isolateTime)
{
    m_isolateTime = _isolateTime;
    m_isolateTimeHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

bool DescribeCloudNativeAPIGatewayResult::GetEnableInternet() const
{
    return m_enableInternet;
}

void DescribeCloudNativeAPIGatewayResult::SetEnableInternet(const bool& _enableInternet)
{
    m_enableInternet = _enableInternet;
    m_enableInternetHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::EnableInternetHasBeenSet() const
{
    return m_enableInternetHasBeenSet;
}

string DescribeCloudNativeAPIGatewayResult::GetEngineRegion() const
{
    return m_engineRegion;
}

void DescribeCloudNativeAPIGatewayResult::SetEngineRegion(const string& _engineRegion)
{
    m_engineRegion = _engineRegion;
    m_engineRegionHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::EngineRegionHasBeenSet() const
{
    return m_engineRegionHasBeenSet;
}

string DescribeCloudNativeAPIGatewayResult::GetIngressClassName() const
{
    return m_ingressClassName;
}

void DescribeCloudNativeAPIGatewayResult::SetIngressClassName(const string& _ingressClassName)
{
    m_ingressClassName = _ingressClassName;
    m_ingressClassNameHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::IngressClassNameHasBeenSet() const
{
    return m_ingressClassNameHasBeenSet;
}

string DescribeCloudNativeAPIGatewayResult::GetInternetPayMode() const
{
    return m_internetPayMode;
}

void DescribeCloudNativeAPIGatewayResult::SetInternetPayMode(const string& _internetPayMode)
{
    m_internetPayMode = _internetPayMode;
    m_internetPayModeHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::InternetPayModeHasBeenSet() const
{
    return m_internetPayModeHasBeenSet;
}

string DescribeCloudNativeAPIGatewayResult::GetGatewayMinorVersion() const
{
    return m_gatewayMinorVersion;
}

void DescribeCloudNativeAPIGatewayResult::SetGatewayMinorVersion(const string& _gatewayMinorVersion)
{
    m_gatewayMinorVersion = _gatewayMinorVersion;
    m_gatewayMinorVersionHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::GatewayMinorVersionHasBeenSet() const
{
    return m_gatewayMinorVersionHasBeenSet;
}

InstancePort DescribeCloudNativeAPIGatewayResult::GetInstancePort() const
{
    return m_instancePort;
}

void DescribeCloudNativeAPIGatewayResult::SetInstancePort(const InstancePort& _instancePort)
{
    m_instancePort = _instancePort;
    m_instancePortHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::InstancePortHasBeenSet() const
{
    return m_instancePortHasBeenSet;
}

string DescribeCloudNativeAPIGatewayResult::GetLoadBalancerType() const
{
    return m_loadBalancerType;
}

void DescribeCloudNativeAPIGatewayResult::SetLoadBalancerType(const string& _loadBalancerType)
{
    m_loadBalancerType = _loadBalancerType;
    m_loadBalancerTypeHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::LoadBalancerTypeHasBeenSet() const
{
    return m_loadBalancerTypeHasBeenSet;
}

vector<string> DescribeCloudNativeAPIGatewayResult::GetPublicIpAddresses() const
{
    return m_publicIpAddresses;
}

void DescribeCloudNativeAPIGatewayResult::SetPublicIpAddresses(const vector<string>& _publicIpAddresses)
{
    m_publicIpAddresses = _publicIpAddresses;
    m_publicIpAddressesHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::PublicIpAddressesHasBeenSet() const
{
    return m_publicIpAddressesHasBeenSet;
}

bool DescribeCloudNativeAPIGatewayResult::GetDeleteProtect() const
{
    return m_deleteProtect;
}

void DescribeCloudNativeAPIGatewayResult::SetDeleteProtect(const bool& _deleteProtect)
{
    m_deleteProtect = _deleteProtect;
    m_deleteProtectHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayResult::DeleteProtectHasBeenSet() const
{
    return m_deleteProtectHasBeenSet;
}

