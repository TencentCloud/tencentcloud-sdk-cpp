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

#include <tencentcloud/csip/v20221121/model/IpAssetListVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

IpAssetListVO::IpAssetListVO() :
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_cFWStatusHasBeenSet(false),
    m_assetCreateTimeHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_publicIpTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_isCoreHasBeenSet(false),
    m_isCloudHasBeenSet(false),
    m_attackHasBeenSet(false),
    m_accessHasBeenSet(false),
    m_interceptHasBeenSet(false),
    m_inBandwidthHasBeenSet(false),
    m_outBandwidthHasBeenSet(false),
    m_inFlowHasBeenSet(false),
    m_outFlowHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_portRiskHasBeenSet(false),
    m_vulnerabilityRiskHasBeenSet(false),
    m_configurationRiskHasBeenSet(false),
    m_scanTaskHasBeenSet(false),
    m_weakPasswordHasBeenSet(false),
    m_webContentRiskHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_addressIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_riskExposureHasBeenSet(false),
    m_isNewAssetHasBeenSet(false),
    m_verifyStatusHasBeenSet(false)
{
}

CoreInternalOutcome IpAssetListVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CFWStatus") && !value["CFWStatus"].IsNull())
    {
        if (!value["CFWStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.CFWStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cFWStatus = value["CFWStatus"].GetUint64();
        m_cFWStatusHasBeenSet = true;
    }

    if (value.HasMember("AssetCreateTime") && !value["AssetCreateTime"].IsNull())
    {
        if (!value["AssetCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.AssetCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetCreateTime = string(value["AssetCreateTime"].GetString());
        m_assetCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIpType") && !value["PublicIpType"].IsNull())
    {
        if (!value["PublicIpType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.PublicIpType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpType = value["PublicIpType"].GetUint64();
        m_publicIpTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("IsCore") && !value["IsCore"].IsNull())
    {
        if (!value["IsCore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.IsCore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCore = value["IsCore"].GetUint64();
        m_isCoreHasBeenSet = true;
    }

    if (value.HasMember("IsCloud") && !value["IsCloud"].IsNull())
    {
        if (!value["IsCloud"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.IsCloud` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCloud = value["IsCloud"].GetUint64();
        m_isCloudHasBeenSet = true;
    }

    if (value.HasMember("Attack") && !value["Attack"].IsNull())
    {
        if (!value["Attack"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.Attack` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attack = value["Attack"].GetUint64();
        m_attackHasBeenSet = true;
    }

    if (value.HasMember("Access") && !value["Access"].IsNull())
    {
        if (!value["Access"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.Access` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_access = value["Access"].GetUint64();
        m_accessHasBeenSet = true;
    }

    if (value.HasMember("Intercept") && !value["Intercept"].IsNull())
    {
        if (!value["Intercept"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.Intercept` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intercept = value["Intercept"].GetUint64();
        m_interceptHasBeenSet = true;
    }

    if (value.HasMember("InBandwidth") && !value["InBandwidth"].IsNull())
    {
        if (!value["InBandwidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.InBandwidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inBandwidth = string(value["InBandwidth"].GetString());
        m_inBandwidthHasBeenSet = true;
    }

    if (value.HasMember("OutBandwidth") && !value["OutBandwidth"].IsNull())
    {
        if (!value["OutBandwidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.OutBandwidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outBandwidth = string(value["OutBandwidth"].GetString());
        m_outBandwidthHasBeenSet = true;
    }

    if (value.HasMember("InFlow") && !value["InFlow"].IsNull())
    {
        if (!value["InFlow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.InFlow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inFlow = string(value["InFlow"].GetString());
        m_inFlowHasBeenSet = true;
    }

    if (value.HasMember("OutFlow") && !value["OutFlow"].IsNull())
    {
        if (!value["OutFlow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.OutFlow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outFlow = string(value["OutFlow"].GetString());
        m_outFlowHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("PortRisk") && !value["PortRisk"].IsNull())
    {
        if (!value["PortRisk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.PortRisk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portRisk = value["PortRisk"].GetUint64();
        m_portRiskHasBeenSet = true;
    }

    if (value.HasMember("VulnerabilityRisk") && !value["VulnerabilityRisk"].IsNull())
    {
        if (!value["VulnerabilityRisk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.VulnerabilityRisk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulnerabilityRisk = value["VulnerabilityRisk"].GetUint64();
        m_vulnerabilityRiskHasBeenSet = true;
    }

    if (value.HasMember("ConfigurationRisk") && !value["ConfigurationRisk"].IsNull())
    {
        if (!value["ConfigurationRisk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.ConfigurationRisk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_configurationRisk = value["ConfigurationRisk"].GetUint64();
        m_configurationRiskHasBeenSet = true;
    }

    if (value.HasMember("ScanTask") && !value["ScanTask"].IsNull())
    {
        if (!value["ScanTask"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.ScanTask` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanTask = value["ScanTask"].GetUint64();
        m_scanTaskHasBeenSet = true;
    }

    if (value.HasMember("WeakPassword") && !value["WeakPassword"].IsNull())
    {
        if (!value["WeakPassword"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.WeakPassword` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weakPassword = value["WeakPassword"].GetUint64();
        m_weakPasswordHasBeenSet = true;
    }

    if (value.HasMember("WebContentRisk") && !value["WebContentRisk"].IsNull())
    {
        if (!value["WebContentRisk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.WebContentRisk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webContentRisk = value["WebContentRisk"].GetUint64();
        m_webContentRiskHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.Tag` is not array type"));

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

    if (value.HasMember("AddressId") && !value["AddressId"].IsNull())
    {
        if (!value["AddressId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.AddressId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressId = string(value["AddressId"].GetString());
        m_addressIdHasBeenSet = true;
    }

    if (value.HasMember("MemberId") && !value["MemberId"].IsNull())
    {
        if (!value["MemberId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.MemberId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberId = string(value["MemberId"].GetString());
        m_memberIdHasBeenSet = true;
    }

    if (value.HasMember("RiskExposure") && !value["RiskExposure"].IsNull())
    {
        if (!value["RiskExposure"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.RiskExposure` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskExposure = value["RiskExposure"].GetInt64();
        m_riskExposureHasBeenSet = true;
    }

    if (value.HasMember("IsNewAsset") && !value["IsNewAsset"].IsNull())
    {
        if (!value["IsNewAsset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.IsNewAsset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isNewAsset = value["IsNewAsset"].GetUint64();
        m_isNewAssetHasBeenSet = true;
    }

    if (value.HasMember("VerifyStatus") && !value["VerifyStatus"].IsNull())
    {
        if (!value["VerifyStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAssetListVO.VerifyStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyStatus = value["VerifyStatus"].GetInt64();
        m_verifyStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpAssetListVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_cFWStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFWStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cFWStatus, allocator);
    }

    if (m_assetCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicIpType, allocator);
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

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_isCoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCore, allocator);
    }

    if (m_isCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCloud";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCloud, allocator);
    }

    if (m_attackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attack, allocator);
    }

    if (m_accessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Access";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_access, allocator);
    }

    if (m_interceptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Intercept";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intercept, allocator);
    }

    if (m_inBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inBandwidth.c_str(), allocator).Move(), allocator);
    }

    if (m_outBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outBandwidth.c_str(), allocator).Move(), allocator);
    }

    if (m_inFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inFlow.c_str(), allocator).Move(), allocator);
    }

    if (m_outFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outFlow.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_portRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portRisk, allocator);
    }

    if (m_vulnerabilityRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulnerabilityRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulnerabilityRisk, allocator);
    }

    if (m_configurationRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigurationRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configurationRisk, allocator);
    }

    if (m_scanTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanTask, allocator);
    }

    if (m_weakPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeakPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weakPassword, allocator);
    }

    if (m_webContentRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebContentRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webContentRisk, allocator);
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

    if (m_addressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressId.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberId.c_str(), allocator).Move(), allocator);
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

    if (m_verifyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyStatus, allocator);
    }

}


string IpAssetListVO::GetAssetId() const
{
    return m_assetId;
}

void IpAssetListVO::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool IpAssetListVO::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string IpAssetListVO::GetAssetName() const
{
    return m_assetName;
}

void IpAssetListVO::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool IpAssetListVO::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string IpAssetListVO::GetAssetType() const
{
    return m_assetType;
}

void IpAssetListVO::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool IpAssetListVO::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string IpAssetListVO::GetRegion() const
{
    return m_region;
}

void IpAssetListVO::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool IpAssetListVO::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t IpAssetListVO::GetCFWStatus() const
{
    return m_cFWStatus;
}

void IpAssetListVO::SetCFWStatus(const uint64_t& _cFWStatus)
{
    m_cFWStatus = _cFWStatus;
    m_cFWStatusHasBeenSet = true;
}

bool IpAssetListVO::CFWStatusHasBeenSet() const
{
    return m_cFWStatusHasBeenSet;
}

string IpAssetListVO::GetAssetCreateTime() const
{
    return m_assetCreateTime;
}

void IpAssetListVO::SetAssetCreateTime(const string& _assetCreateTime)
{
    m_assetCreateTime = _assetCreateTime;
    m_assetCreateTimeHasBeenSet = true;
}

bool IpAssetListVO::AssetCreateTimeHasBeenSet() const
{
    return m_assetCreateTimeHasBeenSet;
}

string IpAssetListVO::GetPublicIp() const
{
    return m_publicIp;
}

void IpAssetListVO::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool IpAssetListVO::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

uint64_t IpAssetListVO::GetPublicIpType() const
{
    return m_publicIpType;
}

void IpAssetListVO::SetPublicIpType(const uint64_t& _publicIpType)
{
    m_publicIpType = _publicIpType;
    m_publicIpTypeHasBeenSet = true;
}

bool IpAssetListVO::PublicIpTypeHasBeenSet() const
{
    return m_publicIpTypeHasBeenSet;
}

string IpAssetListVO::GetVpcId() const
{
    return m_vpcId;
}

void IpAssetListVO::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool IpAssetListVO::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string IpAssetListVO::GetVpcName() const
{
    return m_vpcName;
}

void IpAssetListVO::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool IpAssetListVO::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

uint64_t IpAssetListVO::GetAppId() const
{
    return m_appId;
}

void IpAssetListVO::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool IpAssetListVO::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string IpAssetListVO::GetUin() const
{
    return m_uin;
}

void IpAssetListVO::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool IpAssetListVO::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string IpAssetListVO::GetNickName() const
{
    return m_nickName;
}

void IpAssetListVO::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool IpAssetListVO::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

uint64_t IpAssetListVO::GetIsCore() const
{
    return m_isCore;
}

void IpAssetListVO::SetIsCore(const uint64_t& _isCore)
{
    m_isCore = _isCore;
    m_isCoreHasBeenSet = true;
}

bool IpAssetListVO::IsCoreHasBeenSet() const
{
    return m_isCoreHasBeenSet;
}

uint64_t IpAssetListVO::GetIsCloud() const
{
    return m_isCloud;
}

void IpAssetListVO::SetIsCloud(const uint64_t& _isCloud)
{
    m_isCloud = _isCloud;
    m_isCloudHasBeenSet = true;
}

bool IpAssetListVO::IsCloudHasBeenSet() const
{
    return m_isCloudHasBeenSet;
}

uint64_t IpAssetListVO::GetAttack() const
{
    return m_attack;
}

void IpAssetListVO::SetAttack(const uint64_t& _attack)
{
    m_attack = _attack;
    m_attackHasBeenSet = true;
}

bool IpAssetListVO::AttackHasBeenSet() const
{
    return m_attackHasBeenSet;
}

uint64_t IpAssetListVO::GetAccess() const
{
    return m_access;
}

void IpAssetListVO::SetAccess(const uint64_t& _access)
{
    m_access = _access;
    m_accessHasBeenSet = true;
}

bool IpAssetListVO::AccessHasBeenSet() const
{
    return m_accessHasBeenSet;
}

uint64_t IpAssetListVO::GetIntercept() const
{
    return m_intercept;
}

void IpAssetListVO::SetIntercept(const uint64_t& _intercept)
{
    m_intercept = _intercept;
    m_interceptHasBeenSet = true;
}

bool IpAssetListVO::InterceptHasBeenSet() const
{
    return m_interceptHasBeenSet;
}

string IpAssetListVO::GetInBandwidth() const
{
    return m_inBandwidth;
}

void IpAssetListVO::SetInBandwidth(const string& _inBandwidth)
{
    m_inBandwidth = _inBandwidth;
    m_inBandwidthHasBeenSet = true;
}

bool IpAssetListVO::InBandwidthHasBeenSet() const
{
    return m_inBandwidthHasBeenSet;
}

string IpAssetListVO::GetOutBandwidth() const
{
    return m_outBandwidth;
}

void IpAssetListVO::SetOutBandwidth(const string& _outBandwidth)
{
    m_outBandwidth = _outBandwidth;
    m_outBandwidthHasBeenSet = true;
}

bool IpAssetListVO::OutBandwidthHasBeenSet() const
{
    return m_outBandwidthHasBeenSet;
}

string IpAssetListVO::GetInFlow() const
{
    return m_inFlow;
}

void IpAssetListVO::SetInFlow(const string& _inFlow)
{
    m_inFlow = _inFlow;
    m_inFlowHasBeenSet = true;
}

bool IpAssetListVO::InFlowHasBeenSet() const
{
    return m_inFlowHasBeenSet;
}

string IpAssetListVO::GetOutFlow() const
{
    return m_outFlow;
}

void IpAssetListVO::SetOutFlow(const string& _outFlow)
{
    m_outFlow = _outFlow;
    m_outFlowHasBeenSet = true;
}

bool IpAssetListVO::OutFlowHasBeenSet() const
{
    return m_outFlowHasBeenSet;
}

string IpAssetListVO::GetLastScanTime() const
{
    return m_lastScanTime;
}

void IpAssetListVO::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool IpAssetListVO::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

uint64_t IpAssetListVO::GetPortRisk() const
{
    return m_portRisk;
}

void IpAssetListVO::SetPortRisk(const uint64_t& _portRisk)
{
    m_portRisk = _portRisk;
    m_portRiskHasBeenSet = true;
}

bool IpAssetListVO::PortRiskHasBeenSet() const
{
    return m_portRiskHasBeenSet;
}

uint64_t IpAssetListVO::GetVulnerabilityRisk() const
{
    return m_vulnerabilityRisk;
}

void IpAssetListVO::SetVulnerabilityRisk(const uint64_t& _vulnerabilityRisk)
{
    m_vulnerabilityRisk = _vulnerabilityRisk;
    m_vulnerabilityRiskHasBeenSet = true;
}

bool IpAssetListVO::VulnerabilityRiskHasBeenSet() const
{
    return m_vulnerabilityRiskHasBeenSet;
}

uint64_t IpAssetListVO::GetConfigurationRisk() const
{
    return m_configurationRisk;
}

void IpAssetListVO::SetConfigurationRisk(const uint64_t& _configurationRisk)
{
    m_configurationRisk = _configurationRisk;
    m_configurationRiskHasBeenSet = true;
}

bool IpAssetListVO::ConfigurationRiskHasBeenSet() const
{
    return m_configurationRiskHasBeenSet;
}

uint64_t IpAssetListVO::GetScanTask() const
{
    return m_scanTask;
}

void IpAssetListVO::SetScanTask(const uint64_t& _scanTask)
{
    m_scanTask = _scanTask;
    m_scanTaskHasBeenSet = true;
}

bool IpAssetListVO::ScanTaskHasBeenSet() const
{
    return m_scanTaskHasBeenSet;
}

uint64_t IpAssetListVO::GetWeakPassword() const
{
    return m_weakPassword;
}

void IpAssetListVO::SetWeakPassword(const uint64_t& _weakPassword)
{
    m_weakPassword = _weakPassword;
    m_weakPasswordHasBeenSet = true;
}

bool IpAssetListVO::WeakPasswordHasBeenSet() const
{
    return m_weakPasswordHasBeenSet;
}

uint64_t IpAssetListVO::GetWebContentRisk() const
{
    return m_webContentRisk;
}

void IpAssetListVO::SetWebContentRisk(const uint64_t& _webContentRisk)
{
    m_webContentRisk = _webContentRisk;
    m_webContentRiskHasBeenSet = true;
}

bool IpAssetListVO::WebContentRiskHasBeenSet() const
{
    return m_webContentRiskHasBeenSet;
}

vector<Tag> IpAssetListVO::GetTag() const
{
    return m_tag;
}

void IpAssetListVO::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool IpAssetListVO::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string IpAssetListVO::GetAddressId() const
{
    return m_addressId;
}

void IpAssetListVO::SetAddressId(const string& _addressId)
{
    m_addressId = _addressId;
    m_addressIdHasBeenSet = true;
}

bool IpAssetListVO::AddressIdHasBeenSet() const
{
    return m_addressIdHasBeenSet;
}

string IpAssetListVO::GetMemberId() const
{
    return m_memberId;
}

void IpAssetListVO::SetMemberId(const string& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool IpAssetListVO::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

int64_t IpAssetListVO::GetRiskExposure() const
{
    return m_riskExposure;
}

void IpAssetListVO::SetRiskExposure(const int64_t& _riskExposure)
{
    m_riskExposure = _riskExposure;
    m_riskExposureHasBeenSet = true;
}

bool IpAssetListVO::RiskExposureHasBeenSet() const
{
    return m_riskExposureHasBeenSet;
}

uint64_t IpAssetListVO::GetIsNewAsset() const
{
    return m_isNewAsset;
}

void IpAssetListVO::SetIsNewAsset(const uint64_t& _isNewAsset)
{
    m_isNewAsset = _isNewAsset;
    m_isNewAssetHasBeenSet = true;
}

bool IpAssetListVO::IsNewAssetHasBeenSet() const
{
    return m_isNewAssetHasBeenSet;
}

int64_t IpAssetListVO::GetVerifyStatus() const
{
    return m_verifyStatus;
}

void IpAssetListVO::SetVerifyStatus(const int64_t& _verifyStatus)
{
    m_verifyStatus = _verifyStatus;
    m_verifyStatusHasBeenSet = true;
}

bool IpAssetListVO::VerifyStatusHasBeenSet() const
{
    return m_verifyStatusHasBeenSet;
}

