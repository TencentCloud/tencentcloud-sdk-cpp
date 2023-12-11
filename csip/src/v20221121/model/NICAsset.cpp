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

#include <tencentcloud/csip/v20221121/model/NICAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

NICAsset::NICAsset() :
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
    m_isCoreHasBeenSet(false),
    m_isNewAssetHasBeenSet(false)
{
}

CoreInternalOutcome NICAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NICAsset.Tag` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `NICAsset.OutboundPeakBandwidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outboundPeakBandwidth = string(value["OutboundPeakBandwidth"].GetString());
        m_outboundPeakBandwidthHasBeenSet = true;
    }

    if (value.HasMember("InboundPeakBandwidth") && !value["InboundPeakBandwidth"].IsNull())
    {
        if (!value["InboundPeakBandwidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.InboundPeakBandwidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inboundPeakBandwidth = string(value["InboundPeakBandwidth"].GetString());
        m_inboundPeakBandwidthHasBeenSet = true;
    }

    if (value.HasMember("OutboundCumulativeFlow") && !value["OutboundCumulativeFlow"].IsNull())
    {
        if (!value["OutboundCumulativeFlow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.OutboundCumulativeFlow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outboundCumulativeFlow = string(value["OutboundCumulativeFlow"].GetString());
        m_outboundCumulativeFlowHasBeenSet = true;
    }

    if (value.HasMember("InboundCumulativeFlow") && !value["InboundCumulativeFlow"].IsNull())
    {
        if (!value["InboundCumulativeFlow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.InboundCumulativeFlow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inboundCumulativeFlow = string(value["InboundCumulativeFlow"].GetString());
        m_inboundCumulativeFlowHasBeenSet = true;
    }

    if (value.HasMember("NetworkAttack") && !value["NetworkAttack"].IsNull())
    {
        if (!value["NetworkAttack"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.NetworkAttack` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_networkAttack = value["NetworkAttack"].GetInt64();
        m_networkAttackHasBeenSet = true;
    }

    if (value.HasMember("ExposedPort") && !value["ExposedPort"].IsNull())
    {
        if (!value["ExposedPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.ExposedPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exposedPort = value["ExposedPort"].GetInt64();
        m_exposedPortHasBeenSet = true;
    }

    if (value.HasMember("ExposedVUL") && !value["ExposedVUL"].IsNull())
    {
        if (!value["ExposedVUL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.ExposedVUL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exposedVUL = value["ExposedVUL"].GetInt64();
        m_exposedVULHasBeenSet = true;
    }

    if (value.HasMember("ConfigureRisk") && !value["ConfigureRisk"].IsNull())
    {
        if (!value["ConfigureRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.ConfigureRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configureRisk = value["ConfigureRisk"].GetInt64();
        m_configureRiskHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ScanTask") && !value["ScanTask"].IsNull())
    {
        if (!value["ScanTask"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.ScanTask` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanTask = value["ScanTask"].GetInt64();
        m_scanTaskHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("IsCore") && !value["IsCore"].IsNull())
    {
        if (!value["IsCore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.IsCore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCore = value["IsCore"].GetUint64();
        m_isCoreHasBeenSet = true;
    }

    if (value.HasMember("IsNewAsset") && !value["IsNewAsset"].IsNull())
    {
        if (!value["IsNewAsset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NICAsset.IsNewAsset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isNewAsset = value["IsNewAsset"].GetUint64();
        m_isNewAssetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NICAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_isCoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCore, allocator);
    }

    if (m_isNewAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNewAsset, allocator);
    }

}


string NICAsset::GetAppId() const
{
    return m_appId;
}

void NICAsset::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool NICAsset::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string NICAsset::GetUin() const
{
    return m_uin;
}

void NICAsset::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool NICAsset::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string NICAsset::GetAssetId() const
{
    return m_assetId;
}

void NICAsset::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool NICAsset::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string NICAsset::GetAssetName() const
{
    return m_assetName;
}

void NICAsset::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool NICAsset::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string NICAsset::GetAssetType() const
{
    return m_assetType;
}

void NICAsset::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool NICAsset::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string NICAsset::GetPrivateIp() const
{
    return m_privateIp;
}

void NICAsset::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool NICAsset::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string NICAsset::GetPublicIp() const
{
    return m_publicIp;
}

void NICAsset::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool NICAsset::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string NICAsset::GetRegion() const
{
    return m_region;
}

void NICAsset::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool NICAsset::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string NICAsset::GetVpcId() const
{
    return m_vpcId;
}

void NICAsset::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NICAsset::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string NICAsset::GetVpcName() const
{
    return m_vpcName;
}

void NICAsset::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool NICAsset::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

vector<Tag> NICAsset::GetTag() const
{
    return m_tag;
}

void NICAsset::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool NICAsset::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string NICAsset::GetOutboundPeakBandwidth() const
{
    return m_outboundPeakBandwidth;
}

void NICAsset::SetOutboundPeakBandwidth(const string& _outboundPeakBandwidth)
{
    m_outboundPeakBandwidth = _outboundPeakBandwidth;
    m_outboundPeakBandwidthHasBeenSet = true;
}

bool NICAsset::OutboundPeakBandwidthHasBeenSet() const
{
    return m_outboundPeakBandwidthHasBeenSet;
}

string NICAsset::GetInboundPeakBandwidth() const
{
    return m_inboundPeakBandwidth;
}

void NICAsset::SetInboundPeakBandwidth(const string& _inboundPeakBandwidth)
{
    m_inboundPeakBandwidth = _inboundPeakBandwidth;
    m_inboundPeakBandwidthHasBeenSet = true;
}

bool NICAsset::InboundPeakBandwidthHasBeenSet() const
{
    return m_inboundPeakBandwidthHasBeenSet;
}

string NICAsset::GetOutboundCumulativeFlow() const
{
    return m_outboundCumulativeFlow;
}

void NICAsset::SetOutboundCumulativeFlow(const string& _outboundCumulativeFlow)
{
    m_outboundCumulativeFlow = _outboundCumulativeFlow;
    m_outboundCumulativeFlowHasBeenSet = true;
}

bool NICAsset::OutboundCumulativeFlowHasBeenSet() const
{
    return m_outboundCumulativeFlowHasBeenSet;
}

string NICAsset::GetInboundCumulativeFlow() const
{
    return m_inboundCumulativeFlow;
}

void NICAsset::SetInboundCumulativeFlow(const string& _inboundCumulativeFlow)
{
    m_inboundCumulativeFlow = _inboundCumulativeFlow;
    m_inboundCumulativeFlowHasBeenSet = true;
}

bool NICAsset::InboundCumulativeFlowHasBeenSet() const
{
    return m_inboundCumulativeFlowHasBeenSet;
}

int64_t NICAsset::GetNetworkAttack() const
{
    return m_networkAttack;
}

void NICAsset::SetNetworkAttack(const int64_t& _networkAttack)
{
    m_networkAttack = _networkAttack;
    m_networkAttackHasBeenSet = true;
}

bool NICAsset::NetworkAttackHasBeenSet() const
{
    return m_networkAttackHasBeenSet;
}

int64_t NICAsset::GetExposedPort() const
{
    return m_exposedPort;
}

void NICAsset::SetExposedPort(const int64_t& _exposedPort)
{
    m_exposedPort = _exposedPort;
    m_exposedPortHasBeenSet = true;
}

bool NICAsset::ExposedPortHasBeenSet() const
{
    return m_exposedPortHasBeenSet;
}

int64_t NICAsset::GetExposedVUL() const
{
    return m_exposedVUL;
}

void NICAsset::SetExposedVUL(const int64_t& _exposedVUL)
{
    m_exposedVUL = _exposedVUL;
    m_exposedVULHasBeenSet = true;
}

bool NICAsset::ExposedVULHasBeenSet() const
{
    return m_exposedVULHasBeenSet;
}

int64_t NICAsset::GetConfigureRisk() const
{
    return m_configureRisk;
}

void NICAsset::SetConfigureRisk(const int64_t& _configureRisk)
{
    m_configureRisk = _configureRisk;
    m_configureRiskHasBeenSet = true;
}

bool NICAsset::ConfigureRiskHasBeenSet() const
{
    return m_configureRiskHasBeenSet;
}

string NICAsset::GetCreateTime() const
{
    return m_createTime;
}

void NICAsset::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NICAsset::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t NICAsset::GetScanTask() const
{
    return m_scanTask;
}

void NICAsset::SetScanTask(const int64_t& _scanTask)
{
    m_scanTask = _scanTask;
    m_scanTaskHasBeenSet = true;
}

bool NICAsset::ScanTaskHasBeenSet() const
{
    return m_scanTaskHasBeenSet;
}

string NICAsset::GetLastScanTime() const
{
    return m_lastScanTime;
}

void NICAsset::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool NICAsset::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

string NICAsset::GetNick() const
{
    return m_nick;
}

void NICAsset::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool NICAsset::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

uint64_t NICAsset::GetIsCore() const
{
    return m_isCore;
}

void NICAsset::SetIsCore(const uint64_t& _isCore)
{
    m_isCore = _isCore;
    m_isCoreHasBeenSet = true;
}

bool NICAsset::IsCoreHasBeenSet() const
{
    return m_isCoreHasBeenSet;
}

uint64_t NICAsset::GetIsNewAsset() const
{
    return m_isNewAsset;
}

void NICAsset::SetIsNewAsset(const uint64_t& _isNewAsset)
{
    m_isNewAsset = _isNewAsset;
    m_isNewAssetHasBeenSet = true;
}

bool NICAsset::IsNewAssetHasBeenSet() const
{
    return m_isNewAssetHasBeenSet;
}

