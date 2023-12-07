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

#include <tencentcloud/csip/v20221121/model/GateWayAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

GateWayAsset::GateWayAsset() :
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_outboundPeakBandwidthHasBeenSet(false),
    m_inboundPeakBandwidthHasBeenSet(false),
    m_outboundCumulativeFlowHasBeenSet(false),
    m_inboundCumulativeFlowHasBeenSet(false),
    m_networkAttackHasBeenSet(false),
    m_exposedPortHasBeenSet(false),
    m_exposedVULHasBeenSet(false),
    m_configureRiskHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_scanTaskHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_addressIPV6HasBeenSet(false),
    m_isCoreHasBeenSet(false),
    m_riskExposureHasBeenSet(false),
    m_isNewAssetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_engineRegionHasBeenSet(false)
{
}

CoreInternalOutcome GateWayAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tag.push_back(item);
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("OutboundPeakBandwidth") && !value["OutboundPeakBandwidth"].IsNull())
    {
        if (!value["OutboundPeakBandwidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.OutboundPeakBandwidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outboundPeakBandwidth = string(value["OutboundPeakBandwidth"].GetString());
        m_outboundPeakBandwidthHasBeenSet = true;
    }

    if (value.HasMember("InboundPeakBandwidth") && !value["InboundPeakBandwidth"].IsNull())
    {
        if (!value["InboundPeakBandwidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.InboundPeakBandwidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inboundPeakBandwidth = string(value["InboundPeakBandwidth"].GetString());
        m_inboundPeakBandwidthHasBeenSet = true;
    }

    if (value.HasMember("OutboundCumulativeFlow") && !value["OutboundCumulativeFlow"].IsNull())
    {
        if (!value["OutboundCumulativeFlow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.OutboundCumulativeFlow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outboundCumulativeFlow = string(value["OutboundCumulativeFlow"].GetString());
        m_outboundCumulativeFlowHasBeenSet = true;
    }

    if (value.HasMember("InboundCumulativeFlow") && !value["InboundCumulativeFlow"].IsNull())
    {
        if (!value["InboundCumulativeFlow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.InboundCumulativeFlow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inboundCumulativeFlow = string(value["InboundCumulativeFlow"].GetString());
        m_inboundCumulativeFlowHasBeenSet = true;
    }

    if (value.HasMember("NetworkAttack") && !value["NetworkAttack"].IsNull())
    {
        if (!value["NetworkAttack"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.NetworkAttack` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_networkAttack = value["NetworkAttack"].GetInt64();
        m_networkAttackHasBeenSet = true;
    }

    if (value.HasMember("ExposedPort") && !value["ExposedPort"].IsNull())
    {
        if (!value["ExposedPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.ExposedPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exposedPort = value["ExposedPort"].GetInt64();
        m_exposedPortHasBeenSet = true;
    }

    if (value.HasMember("ExposedVUL") && !value["ExposedVUL"].IsNull())
    {
        if (!value["ExposedVUL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.ExposedVUL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exposedVUL = value["ExposedVUL"].GetInt64();
        m_exposedVULHasBeenSet = true;
    }

    if (value.HasMember("ConfigureRisk") && !value["ConfigureRisk"].IsNull())
    {
        if (!value["ConfigureRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.ConfigureRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configureRisk = value["ConfigureRisk"].GetInt64();
        m_configureRiskHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ScanTask") && !value["ScanTask"].IsNull())
    {
        if (!value["ScanTask"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.ScanTask` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanTask = value["ScanTask"].GetInt64();
        m_scanTaskHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("AddressIPV6") && !value["AddressIPV6"].IsNull())
    {
        if (!value["AddressIPV6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.AddressIPV6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIPV6 = string(value["AddressIPV6"].GetString());
        m_addressIPV6HasBeenSet = true;
    }

    if (value.HasMember("IsCore") && !value["IsCore"].IsNull())
    {
        if (!value["IsCore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.IsCore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCore = value["IsCore"].GetUint64();
        m_isCoreHasBeenSet = true;
    }

    if (value.HasMember("RiskExposure") && !value["RiskExposure"].IsNull())
    {
        if (!value["RiskExposure"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.RiskExposure` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskExposure = value["RiskExposure"].GetInt64();
        m_riskExposureHasBeenSet = true;
    }

    if (value.HasMember("IsNewAsset") && !value["IsNewAsset"].IsNull())
    {
        if (!value["IsNewAsset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.IsNewAsset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isNewAsset = value["IsNewAsset"].GetUint64();
        m_isNewAssetHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EngineRegion") && !value["EngineRegion"].IsNull())
    {
        if (!value["EngineRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GateWayAsset.EngineRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineRegion = string(value["EngineRegion"].GetString());
        m_engineRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GateWayAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outboundPeakBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutboundPeakBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outboundPeakBandwidth.c_str(), allocator).Move(), allocator);
    }

    if (m_inboundPeakBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InboundPeakBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inboundPeakBandwidth.c_str(), allocator).Move(), allocator);
    }

    if (m_outboundCumulativeFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutboundCumulativeFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outboundCumulativeFlow.c_str(), allocator).Move(), allocator);
    }

    if (m_inboundCumulativeFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InboundCumulativeFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inboundCumulativeFlow.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAttackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAttack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkAttack, allocator);
    }

    if (m_exposedPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExposedPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exposedPort, allocator);
    }

    if (m_exposedVULHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExposedVUL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exposedVUL, allocator);
    }

    if (m_configureRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigureRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configureRisk, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scanTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanTask, allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nick.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIPV6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIPV6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressIPV6.c_str(), allocator).Move(), allocator);
    }

    if (m_isCoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCore, allocator);
    }

    if (m_riskExposureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskExposure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskExposure, allocator);
    }

    if (m_isNewAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNewAsset, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_engineRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineRegion.c_str(), allocator).Move(), allocator);
    }

}


string GateWayAsset::GetAppId() const
{
    return m_appId;
}

void GateWayAsset::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool GateWayAsset::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string GateWayAsset::GetUin() const
{
    return m_uin;
}

void GateWayAsset::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool GateWayAsset::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string GateWayAsset::GetAssetId() const
{
    return m_assetId;
}

void GateWayAsset::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool GateWayAsset::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string GateWayAsset::GetAssetName() const
{
    return m_assetName;
}

void GateWayAsset::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool GateWayAsset::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string GateWayAsset::GetAssetType() const
{
    return m_assetType;
}

void GateWayAsset::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool GateWayAsset::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string GateWayAsset::GetPrivateIp() const
{
    return m_privateIp;
}

void GateWayAsset::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool GateWayAsset::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string GateWayAsset::GetPublicIp() const
{
    return m_publicIp;
}

void GateWayAsset::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool GateWayAsset::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string GateWayAsset::GetRegion() const
{
    return m_region;
}

void GateWayAsset::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool GateWayAsset::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string GateWayAsset::GetVpcId() const
{
    return m_vpcId;
}

void GateWayAsset::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool GateWayAsset::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string GateWayAsset::GetVpcName() const
{
    return m_vpcName;
}

void GateWayAsset::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool GateWayAsset::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

vector<Tag> GateWayAsset::GetTag() const
{
    return m_tag;
}

void GateWayAsset::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool GateWayAsset::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string GateWayAsset::GetOutboundPeakBandwidth() const
{
    return m_outboundPeakBandwidth;
}

void GateWayAsset::SetOutboundPeakBandwidth(const string& _outboundPeakBandwidth)
{
    m_outboundPeakBandwidth = _outboundPeakBandwidth;
    m_outboundPeakBandwidthHasBeenSet = true;
}

bool GateWayAsset::OutboundPeakBandwidthHasBeenSet() const
{
    return m_outboundPeakBandwidthHasBeenSet;
}

string GateWayAsset::GetInboundPeakBandwidth() const
{
    return m_inboundPeakBandwidth;
}

void GateWayAsset::SetInboundPeakBandwidth(const string& _inboundPeakBandwidth)
{
    m_inboundPeakBandwidth = _inboundPeakBandwidth;
    m_inboundPeakBandwidthHasBeenSet = true;
}

bool GateWayAsset::InboundPeakBandwidthHasBeenSet() const
{
    return m_inboundPeakBandwidthHasBeenSet;
}

string GateWayAsset::GetOutboundCumulativeFlow() const
{
    return m_outboundCumulativeFlow;
}

void GateWayAsset::SetOutboundCumulativeFlow(const string& _outboundCumulativeFlow)
{
    m_outboundCumulativeFlow = _outboundCumulativeFlow;
    m_outboundCumulativeFlowHasBeenSet = true;
}

bool GateWayAsset::OutboundCumulativeFlowHasBeenSet() const
{
    return m_outboundCumulativeFlowHasBeenSet;
}

string GateWayAsset::GetInboundCumulativeFlow() const
{
    return m_inboundCumulativeFlow;
}

void GateWayAsset::SetInboundCumulativeFlow(const string& _inboundCumulativeFlow)
{
    m_inboundCumulativeFlow = _inboundCumulativeFlow;
    m_inboundCumulativeFlowHasBeenSet = true;
}

bool GateWayAsset::InboundCumulativeFlowHasBeenSet() const
{
    return m_inboundCumulativeFlowHasBeenSet;
}

int64_t GateWayAsset::GetNetworkAttack() const
{
    return m_networkAttack;
}

void GateWayAsset::SetNetworkAttack(const int64_t& _networkAttack)
{
    m_networkAttack = _networkAttack;
    m_networkAttackHasBeenSet = true;
}

bool GateWayAsset::NetworkAttackHasBeenSet() const
{
    return m_networkAttackHasBeenSet;
}

int64_t GateWayAsset::GetExposedPort() const
{
    return m_exposedPort;
}

void GateWayAsset::SetExposedPort(const int64_t& _exposedPort)
{
    m_exposedPort = _exposedPort;
    m_exposedPortHasBeenSet = true;
}

bool GateWayAsset::ExposedPortHasBeenSet() const
{
    return m_exposedPortHasBeenSet;
}

int64_t GateWayAsset::GetExposedVUL() const
{
    return m_exposedVUL;
}

void GateWayAsset::SetExposedVUL(const int64_t& _exposedVUL)
{
    m_exposedVUL = _exposedVUL;
    m_exposedVULHasBeenSet = true;
}

bool GateWayAsset::ExposedVULHasBeenSet() const
{
    return m_exposedVULHasBeenSet;
}

int64_t GateWayAsset::GetConfigureRisk() const
{
    return m_configureRisk;
}

void GateWayAsset::SetConfigureRisk(const int64_t& _configureRisk)
{
    m_configureRisk = _configureRisk;
    m_configureRiskHasBeenSet = true;
}

bool GateWayAsset::ConfigureRiskHasBeenSet() const
{
    return m_configureRiskHasBeenSet;
}

string GateWayAsset::GetCreateTime() const
{
    return m_createTime;
}

void GateWayAsset::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GateWayAsset::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t GateWayAsset::GetScanTask() const
{
    return m_scanTask;
}

void GateWayAsset::SetScanTask(const int64_t& _scanTask)
{
    m_scanTask = _scanTask;
    m_scanTaskHasBeenSet = true;
}

bool GateWayAsset::ScanTaskHasBeenSet() const
{
    return m_scanTaskHasBeenSet;
}

string GateWayAsset::GetLastScanTime() const
{
    return m_lastScanTime;
}

void GateWayAsset::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool GateWayAsset::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

string GateWayAsset::GetNick() const
{
    return m_nick;
}

void GateWayAsset::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool GateWayAsset::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string GateWayAsset::GetAddressIPV6() const
{
    return m_addressIPV6;
}

void GateWayAsset::SetAddressIPV6(const string& _addressIPV6)
{
    m_addressIPV6 = _addressIPV6;
    m_addressIPV6HasBeenSet = true;
}

bool GateWayAsset::AddressIPV6HasBeenSet() const
{
    return m_addressIPV6HasBeenSet;
}

uint64_t GateWayAsset::GetIsCore() const
{
    return m_isCore;
}

void GateWayAsset::SetIsCore(const uint64_t& _isCore)
{
    m_isCore = _isCore;
    m_isCoreHasBeenSet = true;
}

bool GateWayAsset::IsCoreHasBeenSet() const
{
    return m_isCoreHasBeenSet;
}

int64_t GateWayAsset::GetRiskExposure() const
{
    return m_riskExposure;
}

void GateWayAsset::SetRiskExposure(const int64_t& _riskExposure)
{
    m_riskExposure = _riskExposure;
    m_riskExposureHasBeenSet = true;
}

bool GateWayAsset::RiskExposureHasBeenSet() const
{
    return m_riskExposureHasBeenSet;
}

uint64_t GateWayAsset::GetIsNewAsset() const
{
    return m_isNewAsset;
}

void GateWayAsset::SetIsNewAsset(const uint64_t& _isNewAsset)
{
    m_isNewAsset = _isNewAsset;
    m_isNewAssetHasBeenSet = true;
}

bool GateWayAsset::IsNewAssetHasBeenSet() const
{
    return m_isNewAssetHasBeenSet;
}

string GateWayAsset::GetStatus() const
{
    return m_status;
}

void GateWayAsset::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GateWayAsset::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GateWayAsset::GetEngineRegion() const
{
    return m_engineRegion;
}

void GateWayAsset::SetEngineRegion(const string& _engineRegion)
{
    m_engineRegion = _engineRegion;
    m_engineRegionHasBeenSet = true;
}

bool GateWayAsset::EngineRegionHasBeenSet() const
{
    return m_engineRegionHasBeenSet;
}

