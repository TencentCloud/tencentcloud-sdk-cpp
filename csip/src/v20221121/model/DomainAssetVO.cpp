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

#include <tencentcloud/csip/v20221121/model/DomainAssetVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DomainAssetVO::DomainAssetVO() :
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_wAFStatusHasBeenSet(false),
    m_assetCreateTimeHasBeenSet(false),
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
    m_subDomainHasBeenSet(false),
    m_severIpHasBeenSet(false),
    m_botCountHasBeenSet(false),
    m_weakPasswordHasBeenSet(false),
    m_webContentRiskHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_cCAttackHasBeenSet(false),
    m_webAttackHasBeenSet(false),
    m_serviceRiskHasBeenSet(false),
    m_isNewAssetHasBeenSet(false),
    m_verifyDomainHasBeenSet(false),
    m_verifyTXTRecordHasBeenSet(false),
    m_verifyStatusHasBeenSet(false),
    m_botAccessCountHasBeenSet(false)
{
}

CoreInternalOutcome DomainAssetVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.AssetId` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assetId.push_back((*itr).GetString());
        }
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.AssetName` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assetName.push_back((*itr).GetString());
        }
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.AssetType` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assetType.push_back((*itr).GetString());
        }
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.Region` is not array type"));

        const rapidjson::Value &tmpValue = value["Region"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_region.push_back((*itr).GetString());
        }
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("WAFStatus") && !value["WAFStatus"].IsNull())
    {
        if (!value["WAFStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.WAFStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wAFStatus = value["WAFStatus"].GetUint64();
        m_wAFStatusHasBeenSet = true;
    }

    if (value.HasMember("AssetCreateTime") && !value["AssetCreateTime"].IsNull())
    {
        if (!value["AssetCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.AssetCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetCreateTime = string(value["AssetCreateTime"].GetString());
        m_assetCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("IsCore") && !value["IsCore"].IsNull())
    {
        if (!value["IsCore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.IsCore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCore = value["IsCore"].GetUint64();
        m_isCoreHasBeenSet = true;
    }

    if (value.HasMember("IsCloud") && !value["IsCloud"].IsNull())
    {
        if (!value["IsCloud"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.IsCloud` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCloud = value["IsCloud"].GetUint64();
        m_isCloudHasBeenSet = true;
    }

    if (value.HasMember("Attack") && !value["Attack"].IsNull())
    {
        if (!value["Attack"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.Attack` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attack = value["Attack"].GetUint64();
        m_attackHasBeenSet = true;
    }

    if (value.HasMember("Access") && !value["Access"].IsNull())
    {
        if (!value["Access"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.Access` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_access = value["Access"].GetUint64();
        m_accessHasBeenSet = true;
    }

    if (value.HasMember("Intercept") && !value["Intercept"].IsNull())
    {
        if (!value["Intercept"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.Intercept` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intercept = value["Intercept"].GetUint64();
        m_interceptHasBeenSet = true;
    }

    if (value.HasMember("InBandwidth") && !value["InBandwidth"].IsNull())
    {
        if (!value["InBandwidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.InBandwidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inBandwidth = string(value["InBandwidth"].GetString());
        m_inBandwidthHasBeenSet = true;
    }

    if (value.HasMember("OutBandwidth") && !value["OutBandwidth"].IsNull())
    {
        if (!value["OutBandwidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.OutBandwidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outBandwidth = string(value["OutBandwidth"].GetString());
        m_outBandwidthHasBeenSet = true;
    }

    if (value.HasMember("InFlow") && !value["InFlow"].IsNull())
    {
        if (!value["InFlow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.InFlow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inFlow = string(value["InFlow"].GetString());
        m_inFlowHasBeenSet = true;
    }

    if (value.HasMember("OutFlow") && !value["OutFlow"].IsNull())
    {
        if (!value["OutFlow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.OutFlow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outFlow = string(value["OutFlow"].GetString());
        m_outFlowHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("PortRisk") && !value["PortRisk"].IsNull())
    {
        if (!value["PortRisk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.PortRisk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portRisk = value["PortRisk"].GetUint64();
        m_portRiskHasBeenSet = true;
    }

    if (value.HasMember("VulnerabilityRisk") && !value["VulnerabilityRisk"].IsNull())
    {
        if (!value["VulnerabilityRisk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.VulnerabilityRisk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulnerabilityRisk = value["VulnerabilityRisk"].GetUint64();
        m_vulnerabilityRiskHasBeenSet = true;
    }

    if (value.HasMember("ConfigurationRisk") && !value["ConfigurationRisk"].IsNull())
    {
        if (!value["ConfigurationRisk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.ConfigurationRisk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_configurationRisk = value["ConfigurationRisk"].GetUint64();
        m_configurationRiskHasBeenSet = true;
    }

    if (value.HasMember("ScanTask") && !value["ScanTask"].IsNull())
    {
        if (!value["ScanTask"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.ScanTask` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanTask = value["ScanTask"].GetUint64();
        m_scanTaskHasBeenSet = true;
    }

    if (value.HasMember("SubDomain") && !value["SubDomain"].IsNull())
    {
        if (!value["SubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.SubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subDomain = string(value["SubDomain"].GetString());
        m_subDomainHasBeenSet = true;
    }

    if (value.HasMember("SeverIp") && !value["SeverIp"].IsNull())
    {
        if (!value["SeverIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.SeverIp` is not array type"));

        const rapidjson::Value &tmpValue = value["SeverIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_severIp.push_back((*itr).GetString());
        }
        m_severIpHasBeenSet = true;
    }

    if (value.HasMember("BotCount") && !value["BotCount"].IsNull())
    {
        if (!value["BotCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.BotCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_botCount = value["BotCount"].GetUint64();
        m_botCountHasBeenSet = true;
    }

    if (value.HasMember("WeakPassword") && !value["WeakPassword"].IsNull())
    {
        if (!value["WeakPassword"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.WeakPassword` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weakPassword = value["WeakPassword"].GetUint64();
        m_weakPasswordHasBeenSet = true;
    }

    if (value.HasMember("WebContentRisk") && !value["WebContentRisk"].IsNull())
    {
        if (!value["WebContentRisk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.WebContentRisk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webContentRisk = value["WebContentRisk"].GetUint64();
        m_webContentRiskHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.Tag` is not array type"));

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

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("MemberId") && !value["MemberId"].IsNull())
    {
        if (!value["MemberId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.MemberId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberId = string(value["MemberId"].GetString());
        m_memberIdHasBeenSet = true;
    }

    if (value.HasMember("CCAttack") && !value["CCAttack"].IsNull())
    {
        if (!value["CCAttack"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.CCAttack` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cCAttack = value["CCAttack"].GetInt64();
        m_cCAttackHasBeenSet = true;
    }

    if (value.HasMember("WebAttack") && !value["WebAttack"].IsNull())
    {
        if (!value["WebAttack"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.WebAttack` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_webAttack = value["WebAttack"].GetInt64();
        m_webAttackHasBeenSet = true;
    }

    if (value.HasMember("ServiceRisk") && !value["ServiceRisk"].IsNull())
    {
        if (!value["ServiceRisk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.ServiceRisk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceRisk = value["ServiceRisk"].GetUint64();
        m_serviceRiskHasBeenSet = true;
    }

    if (value.HasMember("IsNewAsset") && !value["IsNewAsset"].IsNull())
    {
        if (!value["IsNewAsset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.IsNewAsset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isNewAsset = value["IsNewAsset"].GetUint64();
        m_isNewAssetHasBeenSet = true;
    }

    if (value.HasMember("VerifyDomain") && !value["VerifyDomain"].IsNull())
    {
        if (!value["VerifyDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.VerifyDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyDomain = string(value["VerifyDomain"].GetString());
        m_verifyDomainHasBeenSet = true;
    }

    if (value.HasMember("VerifyTXTRecord") && !value["VerifyTXTRecord"].IsNull())
    {
        if (!value["VerifyTXTRecord"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.VerifyTXTRecord` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyTXTRecord = string(value["VerifyTXTRecord"].GetString());
        m_verifyTXTRecordHasBeenSet = true;
    }

    if (value.HasMember("VerifyStatus") && !value["VerifyStatus"].IsNull())
    {
        if (!value["VerifyStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.VerifyStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyStatus = value["VerifyStatus"].GetInt64();
        m_verifyStatusHasBeenSet = true;
    }

    if (value.HasMember("BotAccessCount") && !value["BotAccessCount"].IsNull())
    {
        if (!value["BotAccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAssetVO.BotAccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_botAccessCount = value["BotAccessCount"].GetInt64();
        m_botAccessCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainAssetVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetId.begin(); itr != m_assetId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetName.begin(); itr != m_assetName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetType.begin(); itr != m_assetType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_region.begin(); itr != m_region.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_wAFStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WAFStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wAFStatus, allocator);
    }

    if (m_assetCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetCreateTime.c_str(), allocator).Move(), allocator);
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

    if (m_subDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_severIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeverIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_severIp.begin(); itr != m_severIp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_botCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_botCount, allocator);
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

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberId.c_str(), allocator).Move(), allocator);
    }

    if (m_cCAttackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCAttack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cCAttack, allocator);
    }

    if (m_webAttackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebAttack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webAttack, allocator);
    }

    if (m_serviceRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceRisk, allocator);
    }

    if (m_isNewAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNewAsset, allocator);
    }

    if (m_verifyDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyTXTRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyTXTRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyTXTRecord.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyStatus, allocator);
    }

    if (m_botAccessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotAccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_botAccessCount, allocator);
    }

}


vector<string> DomainAssetVO::GetAssetId() const
{
    return m_assetId;
}

void DomainAssetVO::SetAssetId(const vector<string>& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DomainAssetVO::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

vector<string> DomainAssetVO::GetAssetName() const
{
    return m_assetName;
}

void DomainAssetVO::SetAssetName(const vector<string>& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool DomainAssetVO::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

vector<string> DomainAssetVO::GetAssetType() const
{
    return m_assetType;
}

void DomainAssetVO::SetAssetType(const vector<string>& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DomainAssetVO::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

vector<string> DomainAssetVO::GetRegion() const
{
    return m_region;
}

void DomainAssetVO::SetRegion(const vector<string>& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DomainAssetVO::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t DomainAssetVO::GetWAFStatus() const
{
    return m_wAFStatus;
}

void DomainAssetVO::SetWAFStatus(const uint64_t& _wAFStatus)
{
    m_wAFStatus = _wAFStatus;
    m_wAFStatusHasBeenSet = true;
}

bool DomainAssetVO::WAFStatusHasBeenSet() const
{
    return m_wAFStatusHasBeenSet;
}

string DomainAssetVO::GetAssetCreateTime() const
{
    return m_assetCreateTime;
}

void DomainAssetVO::SetAssetCreateTime(const string& _assetCreateTime)
{
    m_assetCreateTime = _assetCreateTime;
    m_assetCreateTimeHasBeenSet = true;
}

bool DomainAssetVO::AssetCreateTimeHasBeenSet() const
{
    return m_assetCreateTimeHasBeenSet;
}

uint64_t DomainAssetVO::GetAppId() const
{
    return m_appId;
}

void DomainAssetVO::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DomainAssetVO::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DomainAssetVO::GetUin() const
{
    return m_uin;
}

void DomainAssetVO::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DomainAssetVO::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DomainAssetVO::GetNickName() const
{
    return m_nickName;
}

void DomainAssetVO::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool DomainAssetVO::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

uint64_t DomainAssetVO::GetIsCore() const
{
    return m_isCore;
}

void DomainAssetVO::SetIsCore(const uint64_t& _isCore)
{
    m_isCore = _isCore;
    m_isCoreHasBeenSet = true;
}

bool DomainAssetVO::IsCoreHasBeenSet() const
{
    return m_isCoreHasBeenSet;
}

uint64_t DomainAssetVO::GetIsCloud() const
{
    return m_isCloud;
}

void DomainAssetVO::SetIsCloud(const uint64_t& _isCloud)
{
    m_isCloud = _isCloud;
    m_isCloudHasBeenSet = true;
}

bool DomainAssetVO::IsCloudHasBeenSet() const
{
    return m_isCloudHasBeenSet;
}

uint64_t DomainAssetVO::GetAttack() const
{
    return m_attack;
}

void DomainAssetVO::SetAttack(const uint64_t& _attack)
{
    m_attack = _attack;
    m_attackHasBeenSet = true;
}

bool DomainAssetVO::AttackHasBeenSet() const
{
    return m_attackHasBeenSet;
}

uint64_t DomainAssetVO::GetAccess() const
{
    return m_access;
}

void DomainAssetVO::SetAccess(const uint64_t& _access)
{
    m_access = _access;
    m_accessHasBeenSet = true;
}

bool DomainAssetVO::AccessHasBeenSet() const
{
    return m_accessHasBeenSet;
}

uint64_t DomainAssetVO::GetIntercept() const
{
    return m_intercept;
}

void DomainAssetVO::SetIntercept(const uint64_t& _intercept)
{
    m_intercept = _intercept;
    m_interceptHasBeenSet = true;
}

bool DomainAssetVO::InterceptHasBeenSet() const
{
    return m_interceptHasBeenSet;
}

string DomainAssetVO::GetInBandwidth() const
{
    return m_inBandwidth;
}

void DomainAssetVO::SetInBandwidth(const string& _inBandwidth)
{
    m_inBandwidth = _inBandwidth;
    m_inBandwidthHasBeenSet = true;
}

bool DomainAssetVO::InBandwidthHasBeenSet() const
{
    return m_inBandwidthHasBeenSet;
}

string DomainAssetVO::GetOutBandwidth() const
{
    return m_outBandwidth;
}

void DomainAssetVO::SetOutBandwidth(const string& _outBandwidth)
{
    m_outBandwidth = _outBandwidth;
    m_outBandwidthHasBeenSet = true;
}

bool DomainAssetVO::OutBandwidthHasBeenSet() const
{
    return m_outBandwidthHasBeenSet;
}

string DomainAssetVO::GetInFlow() const
{
    return m_inFlow;
}

void DomainAssetVO::SetInFlow(const string& _inFlow)
{
    m_inFlow = _inFlow;
    m_inFlowHasBeenSet = true;
}

bool DomainAssetVO::InFlowHasBeenSet() const
{
    return m_inFlowHasBeenSet;
}

string DomainAssetVO::GetOutFlow() const
{
    return m_outFlow;
}

void DomainAssetVO::SetOutFlow(const string& _outFlow)
{
    m_outFlow = _outFlow;
    m_outFlowHasBeenSet = true;
}

bool DomainAssetVO::OutFlowHasBeenSet() const
{
    return m_outFlowHasBeenSet;
}

string DomainAssetVO::GetLastScanTime() const
{
    return m_lastScanTime;
}

void DomainAssetVO::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool DomainAssetVO::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

uint64_t DomainAssetVO::GetPortRisk() const
{
    return m_portRisk;
}

void DomainAssetVO::SetPortRisk(const uint64_t& _portRisk)
{
    m_portRisk = _portRisk;
    m_portRiskHasBeenSet = true;
}

bool DomainAssetVO::PortRiskHasBeenSet() const
{
    return m_portRiskHasBeenSet;
}

uint64_t DomainAssetVO::GetVulnerabilityRisk() const
{
    return m_vulnerabilityRisk;
}

void DomainAssetVO::SetVulnerabilityRisk(const uint64_t& _vulnerabilityRisk)
{
    m_vulnerabilityRisk = _vulnerabilityRisk;
    m_vulnerabilityRiskHasBeenSet = true;
}

bool DomainAssetVO::VulnerabilityRiskHasBeenSet() const
{
    return m_vulnerabilityRiskHasBeenSet;
}

uint64_t DomainAssetVO::GetConfigurationRisk() const
{
    return m_configurationRisk;
}

void DomainAssetVO::SetConfigurationRisk(const uint64_t& _configurationRisk)
{
    m_configurationRisk = _configurationRisk;
    m_configurationRiskHasBeenSet = true;
}

bool DomainAssetVO::ConfigurationRiskHasBeenSet() const
{
    return m_configurationRiskHasBeenSet;
}

uint64_t DomainAssetVO::GetScanTask() const
{
    return m_scanTask;
}

void DomainAssetVO::SetScanTask(const uint64_t& _scanTask)
{
    m_scanTask = _scanTask;
    m_scanTaskHasBeenSet = true;
}

bool DomainAssetVO::ScanTaskHasBeenSet() const
{
    return m_scanTaskHasBeenSet;
}

string DomainAssetVO::GetSubDomain() const
{
    return m_subDomain;
}

void DomainAssetVO::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool DomainAssetVO::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

vector<string> DomainAssetVO::GetSeverIp() const
{
    return m_severIp;
}

void DomainAssetVO::SetSeverIp(const vector<string>& _severIp)
{
    m_severIp = _severIp;
    m_severIpHasBeenSet = true;
}

bool DomainAssetVO::SeverIpHasBeenSet() const
{
    return m_severIpHasBeenSet;
}

uint64_t DomainAssetVO::GetBotCount() const
{
    return m_botCount;
}

void DomainAssetVO::SetBotCount(const uint64_t& _botCount)
{
    m_botCount = _botCount;
    m_botCountHasBeenSet = true;
}

bool DomainAssetVO::BotCountHasBeenSet() const
{
    return m_botCountHasBeenSet;
}

uint64_t DomainAssetVO::GetWeakPassword() const
{
    return m_weakPassword;
}

void DomainAssetVO::SetWeakPassword(const uint64_t& _weakPassword)
{
    m_weakPassword = _weakPassword;
    m_weakPasswordHasBeenSet = true;
}

bool DomainAssetVO::WeakPasswordHasBeenSet() const
{
    return m_weakPasswordHasBeenSet;
}

uint64_t DomainAssetVO::GetWebContentRisk() const
{
    return m_webContentRisk;
}

void DomainAssetVO::SetWebContentRisk(const uint64_t& _webContentRisk)
{
    m_webContentRisk = _webContentRisk;
    m_webContentRiskHasBeenSet = true;
}

bool DomainAssetVO::WebContentRiskHasBeenSet() const
{
    return m_webContentRiskHasBeenSet;
}

vector<Tag> DomainAssetVO::GetTag() const
{
    return m_tag;
}

void DomainAssetVO::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool DomainAssetVO::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string DomainAssetVO::GetSourceType() const
{
    return m_sourceType;
}

void DomainAssetVO::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool DomainAssetVO::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string DomainAssetVO::GetMemberId() const
{
    return m_memberId;
}

void DomainAssetVO::SetMemberId(const string& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DomainAssetVO::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

int64_t DomainAssetVO::GetCCAttack() const
{
    return m_cCAttack;
}

void DomainAssetVO::SetCCAttack(const int64_t& _cCAttack)
{
    m_cCAttack = _cCAttack;
    m_cCAttackHasBeenSet = true;
}

bool DomainAssetVO::CCAttackHasBeenSet() const
{
    return m_cCAttackHasBeenSet;
}

int64_t DomainAssetVO::GetWebAttack() const
{
    return m_webAttack;
}

void DomainAssetVO::SetWebAttack(const int64_t& _webAttack)
{
    m_webAttack = _webAttack;
    m_webAttackHasBeenSet = true;
}

bool DomainAssetVO::WebAttackHasBeenSet() const
{
    return m_webAttackHasBeenSet;
}

uint64_t DomainAssetVO::GetServiceRisk() const
{
    return m_serviceRisk;
}

void DomainAssetVO::SetServiceRisk(const uint64_t& _serviceRisk)
{
    m_serviceRisk = _serviceRisk;
    m_serviceRiskHasBeenSet = true;
}

bool DomainAssetVO::ServiceRiskHasBeenSet() const
{
    return m_serviceRiskHasBeenSet;
}

uint64_t DomainAssetVO::GetIsNewAsset() const
{
    return m_isNewAsset;
}

void DomainAssetVO::SetIsNewAsset(const uint64_t& _isNewAsset)
{
    m_isNewAsset = _isNewAsset;
    m_isNewAssetHasBeenSet = true;
}

bool DomainAssetVO::IsNewAssetHasBeenSet() const
{
    return m_isNewAssetHasBeenSet;
}

string DomainAssetVO::GetVerifyDomain() const
{
    return m_verifyDomain;
}

void DomainAssetVO::SetVerifyDomain(const string& _verifyDomain)
{
    m_verifyDomain = _verifyDomain;
    m_verifyDomainHasBeenSet = true;
}

bool DomainAssetVO::VerifyDomainHasBeenSet() const
{
    return m_verifyDomainHasBeenSet;
}

string DomainAssetVO::GetVerifyTXTRecord() const
{
    return m_verifyTXTRecord;
}

void DomainAssetVO::SetVerifyTXTRecord(const string& _verifyTXTRecord)
{
    m_verifyTXTRecord = _verifyTXTRecord;
    m_verifyTXTRecordHasBeenSet = true;
}

bool DomainAssetVO::VerifyTXTRecordHasBeenSet() const
{
    return m_verifyTXTRecordHasBeenSet;
}

int64_t DomainAssetVO::GetVerifyStatus() const
{
    return m_verifyStatus;
}

void DomainAssetVO::SetVerifyStatus(const int64_t& _verifyStatus)
{
    m_verifyStatus = _verifyStatus;
    m_verifyStatusHasBeenSet = true;
}

bool DomainAssetVO::VerifyStatusHasBeenSet() const
{
    return m_verifyStatusHasBeenSet;
}

int64_t DomainAssetVO::GetBotAccessCount() const
{
    return m_botAccessCount;
}

void DomainAssetVO::SetBotAccessCount(const int64_t& _botAccessCount)
{
    m_botAccessCount = _botAccessCount;
    m_botAccessCountHasBeenSet = true;
}

bool DomainAssetVO::BotAccessCountHasBeenSet() const
{
    return m_botAccessCountHasBeenSet;
}

