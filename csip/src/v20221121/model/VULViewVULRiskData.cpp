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

#include <tencentcloud/csip/v20221121/model/VULViewVULRiskData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VULViewVULRiskData::VULViewVULRiskData() :
    m_portHasBeenSet(false),
    m_noHandleCountHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_recentTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_affectAssetCountHasBeenSet(false),
    m_riskIdHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_vULTypeHasBeenSet(false),
    m_vULNameHasBeenSet(false),
    m_cVEHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_vULURLHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_eMGCVulTypeHasBeenSet(false),
    m_cVSSHasBeenSet(false),
    m_pCMGRIdHasBeenSet(false),
    m_vulTagHasBeenSet(false),
    m_disclosureTimeHasBeenSet(false),
    m_attackHeatHasBeenSet(false),
    m_isSuggestHasBeenSet(false),
    m_handleTaskIdHasBeenSet(false),
    m_engineSourceHasBeenSet(false),
    m_vulRiskIdHasBeenSet(false),
    m_tvdIDHasBeenSet(false),
    m_isOneClickHasBeenSet(false)
{
}

CoreInternalOutcome VULViewVULRiskData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("NoHandleCount") && !value["NoHandleCount"].IsNull())
    {
        if (!value["NoHandleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.NoHandleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noHandleCount = value["NoHandleCount"].GetInt64();
        m_noHandleCountHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("RecentTime") && !value["RecentTime"].IsNull())
    {
        if (!value["RecentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.RecentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentTime = string(value["RecentTime"].GetString());
        m_recentTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("AffectAssetCount") && !value["AffectAssetCount"].IsNull())
    {
        if (!value["AffectAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.AffectAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_affectAssetCount = value["AffectAssetCount"].GetUint64();
        m_affectAssetCountHasBeenSet = true;
    }

    if (value.HasMember("RiskId") && !value["RiskId"].IsNull())
    {
        if (!value["RiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.RiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskId = string(value["RiskId"].GetString());
        m_riskIdHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(value["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("VULType") && !value["VULType"].IsNull())
    {
        if (!value["VULType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.VULType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULType = string(value["VULType"].GetString());
        m_vULTypeHasBeenSet = true;
    }

    if (value.HasMember("VULName") && !value["VULName"].IsNull())
    {
        if (!value["VULName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.VULName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULName = string(value["VULName"].GetString());
        m_vULNameHasBeenSet = true;
    }

    if (value.HasMember("CVE") && !value["CVE"].IsNull())
    {
        if (!value["CVE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.CVE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVE = string(value["CVE"].GetString());
        m_cVEHasBeenSet = true;
    }

    if (value.HasMember("Payload") && !value["Payload"].IsNull())
    {
        if (!value["Payload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.Payload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payload = string(value["Payload"].GetString());
        m_payloadHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("VULURL") && !value["VULURL"].IsNull())
    {
        if (!value["VULURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.VULURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULURL = string(value["VULURL"].GetString());
        m_vULURLHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("EMGCVulType") && !value["EMGCVulType"].IsNull())
    {
        if (!value["EMGCVulType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.EMGCVulType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eMGCVulType = value["EMGCVulType"].GetInt64();
        m_eMGCVulTypeHasBeenSet = true;
    }

    if (value.HasMember("CVSS") && !value["CVSS"].IsNull())
    {
        if (!value["CVSS"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.CVSS` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cVSS = value["CVSS"].GetDouble();
        m_cVSSHasBeenSet = true;
    }

    if (value.HasMember("PCMGRId") && !value["PCMGRId"].IsNull())
    {
        if (!value["PCMGRId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.PCMGRId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pCMGRId = string(value["PCMGRId"].GetString());
        m_pCMGRIdHasBeenSet = true;
    }

    if (value.HasMember("VulTag") && !value["VulTag"].IsNull())
    {
        if (!value["VulTag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.VulTag` is not array type"));

        const rapidjson::Value &tmpValue = value["VulTag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulTag.push_back((*itr).GetString());
        }
        m_vulTagHasBeenSet = true;
    }

    if (value.HasMember("DisclosureTime") && !value["DisclosureTime"].IsNull())
    {
        if (!value["DisclosureTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.DisclosureTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disclosureTime = string(value["DisclosureTime"].GetString());
        m_disclosureTimeHasBeenSet = true;
    }

    if (value.HasMember("AttackHeat") && !value["AttackHeat"].IsNull())
    {
        if (!value["AttackHeat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.AttackHeat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackHeat = value["AttackHeat"].GetUint64();
        m_attackHeatHasBeenSet = true;
    }

    if (value.HasMember("IsSuggest") && !value["IsSuggest"].IsNull())
    {
        if (!value["IsSuggest"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.IsSuggest` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSuggest = value["IsSuggest"].GetInt64();
        m_isSuggestHasBeenSet = true;
    }

    if (value.HasMember("HandleTaskId") && !value["HandleTaskId"].IsNull())
    {
        if (!value["HandleTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.HandleTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handleTaskId = string(value["HandleTaskId"].GetString());
        m_handleTaskIdHasBeenSet = true;
    }

    if (value.HasMember("EngineSource") && !value["EngineSource"].IsNull())
    {
        if (!value["EngineSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.EngineSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineSource = string(value["EngineSource"].GetString());
        m_engineSourceHasBeenSet = true;
    }

    if (value.HasMember("VulRiskId") && !value["VulRiskId"].IsNull())
    {
        if (!value["VulRiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.VulRiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulRiskId = string(value["VulRiskId"].GetString());
        m_vulRiskIdHasBeenSet = true;
    }

    if (value.HasMember("TvdID") && !value["TvdID"].IsNull())
    {
        if (!value["TvdID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.TvdID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tvdID = string(value["TvdID"].GetString());
        m_tvdIDHasBeenSet = true;
    }

    if (value.HasMember("IsOneClick") && !value["IsOneClick"].IsNull())
    {
        if (!value["IsOneClick"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VULViewVULRiskData.IsOneClick` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isOneClick = value["IsOneClick"].GetUint64();
        m_isOneClickHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VULViewVULRiskData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_noHandleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoHandleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noHandleCount, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_componentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Component";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_component.c_str(), allocator).Move(), allocator);
    }

    if (m_recentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recentTime.c_str(), allocator).Move(), allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

    if (m_affectAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectAssetCount, allocator);
    }

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_vULTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULType.c_str(), allocator).Move(), allocator);
    }

    if (m_vULNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULName.c_str(), allocator).Move(), allocator);
    }

    if (m_cVEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVE.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vULURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULURL.c_str(), allocator).Move(), allocator);
    }

    if (m_nickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nick.c_str(), allocator).Move(), allocator);
    }

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

    if (m_eMGCVulTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EMGCVulType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eMGCVulType, allocator);
    }

    if (m_cVSSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVSS, allocator);
    }

    if (m_pCMGRIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PCMGRId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pCMGRId.c_str(), allocator).Move(), allocator);
    }

    if (m_vulTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulTag.begin(); itr != m_vulTag.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_disclosureTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisclosureTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disclosureTime.c_str(), allocator).Move(), allocator);
    }

    if (m_attackHeatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackHeat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackHeat, allocator);
    }

    if (m_isSuggestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSuggest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSuggest, allocator);
    }

    if (m_handleTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handleTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineSource.c_str(), allocator).Move(), allocator);
    }

    if (m_vulRiskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulRiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulRiskId.c_str(), allocator).Move(), allocator);
    }

    if (m_tvdIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TvdID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tvdID.c_str(), allocator).Move(), allocator);
    }

    if (m_isOneClickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOneClick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOneClick, allocator);
    }

}


string VULViewVULRiskData::GetPort() const
{
    return m_port;
}

void VULViewVULRiskData::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool VULViewVULRiskData::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t VULViewVULRiskData::GetNoHandleCount() const
{
    return m_noHandleCount;
}

void VULViewVULRiskData::SetNoHandleCount(const int64_t& _noHandleCount)
{
    m_noHandleCount = _noHandleCount;
    m_noHandleCountHasBeenSet = true;
}

bool VULViewVULRiskData::NoHandleCountHasBeenSet() const
{
    return m_noHandleCountHasBeenSet;
}

string VULViewVULRiskData::GetLevel() const
{
    return m_level;
}

void VULViewVULRiskData::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VULViewVULRiskData::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string VULViewVULRiskData::GetComponent() const
{
    return m_component;
}

void VULViewVULRiskData::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool VULViewVULRiskData::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

string VULViewVULRiskData::GetRecentTime() const
{
    return m_recentTime;
}

void VULViewVULRiskData::SetRecentTime(const string& _recentTime)
{
    m_recentTime = _recentTime;
    m_recentTimeHasBeenSet = true;
}

bool VULViewVULRiskData::RecentTimeHasBeenSet() const
{
    return m_recentTimeHasBeenSet;
}

string VULViewVULRiskData::GetFirstTime() const
{
    return m_firstTime;
}

void VULViewVULRiskData::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool VULViewVULRiskData::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

uint64_t VULViewVULRiskData::GetAffectAssetCount() const
{
    return m_affectAssetCount;
}

void VULViewVULRiskData::SetAffectAssetCount(const uint64_t& _affectAssetCount)
{
    m_affectAssetCount = _affectAssetCount;
    m_affectAssetCountHasBeenSet = true;
}

bool VULViewVULRiskData::AffectAssetCountHasBeenSet() const
{
    return m_affectAssetCountHasBeenSet;
}

string VULViewVULRiskData::GetRiskId() const
{
    return m_riskId;
}

void VULViewVULRiskData::SetRiskId(const string& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool VULViewVULRiskData::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

string VULViewVULRiskData::GetFrom() const
{
    return m_from;
}

void VULViewVULRiskData::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool VULViewVULRiskData::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string VULViewVULRiskData::GetIndex() const
{
    return m_index;
}

void VULViewVULRiskData::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool VULViewVULRiskData::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string VULViewVULRiskData::GetVULType() const
{
    return m_vULType;
}

void VULViewVULRiskData::SetVULType(const string& _vULType)
{
    m_vULType = _vULType;
    m_vULTypeHasBeenSet = true;
}

bool VULViewVULRiskData::VULTypeHasBeenSet() const
{
    return m_vULTypeHasBeenSet;
}

string VULViewVULRiskData::GetVULName() const
{
    return m_vULName;
}

void VULViewVULRiskData::SetVULName(const string& _vULName)
{
    m_vULName = _vULName;
    m_vULNameHasBeenSet = true;
}

bool VULViewVULRiskData::VULNameHasBeenSet() const
{
    return m_vULNameHasBeenSet;
}

string VULViewVULRiskData::GetCVE() const
{
    return m_cVE;
}

void VULViewVULRiskData::SetCVE(const string& _cVE)
{
    m_cVE = _cVE;
    m_cVEHasBeenSet = true;
}

bool VULViewVULRiskData::CVEHasBeenSet() const
{
    return m_cVEHasBeenSet;
}

string VULViewVULRiskData::GetPayload() const
{
    return m_payload;
}

void VULViewVULRiskData::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool VULViewVULRiskData::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

string VULViewVULRiskData::GetAppName() const
{
    return m_appName;
}

void VULViewVULRiskData::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool VULViewVULRiskData::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string VULViewVULRiskData::GetAppVersion() const
{
    return m_appVersion;
}

void VULViewVULRiskData::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool VULViewVULRiskData::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string VULViewVULRiskData::GetVULURL() const
{
    return m_vULURL;
}

void VULViewVULRiskData::SetVULURL(const string& _vULURL)
{
    m_vULURL = _vULURL;
    m_vULURLHasBeenSet = true;
}

bool VULViewVULRiskData::VULURLHasBeenSet() const
{
    return m_vULURLHasBeenSet;
}

string VULViewVULRiskData::GetNick() const
{
    return m_nick;
}

void VULViewVULRiskData::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool VULViewVULRiskData::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string VULViewVULRiskData::GetAppId() const
{
    return m_appId;
}

void VULViewVULRiskData::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool VULViewVULRiskData::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string VULViewVULRiskData::GetUin() const
{
    return m_uin;
}

void VULViewVULRiskData::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool VULViewVULRiskData::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t VULViewVULRiskData::GetEMGCVulType() const
{
    return m_eMGCVulType;
}

void VULViewVULRiskData::SetEMGCVulType(const int64_t& _eMGCVulType)
{
    m_eMGCVulType = _eMGCVulType;
    m_eMGCVulTypeHasBeenSet = true;
}

bool VULViewVULRiskData::EMGCVulTypeHasBeenSet() const
{
    return m_eMGCVulTypeHasBeenSet;
}

double VULViewVULRiskData::GetCVSS() const
{
    return m_cVSS;
}

void VULViewVULRiskData::SetCVSS(const double& _cVSS)
{
    m_cVSS = _cVSS;
    m_cVSSHasBeenSet = true;
}

bool VULViewVULRiskData::CVSSHasBeenSet() const
{
    return m_cVSSHasBeenSet;
}

string VULViewVULRiskData::GetPCMGRId() const
{
    return m_pCMGRId;
}

void VULViewVULRiskData::SetPCMGRId(const string& _pCMGRId)
{
    m_pCMGRId = _pCMGRId;
    m_pCMGRIdHasBeenSet = true;
}

bool VULViewVULRiskData::PCMGRIdHasBeenSet() const
{
    return m_pCMGRIdHasBeenSet;
}

vector<string> VULViewVULRiskData::GetVulTag() const
{
    return m_vulTag;
}

void VULViewVULRiskData::SetVulTag(const vector<string>& _vulTag)
{
    m_vulTag = _vulTag;
    m_vulTagHasBeenSet = true;
}

bool VULViewVULRiskData::VulTagHasBeenSet() const
{
    return m_vulTagHasBeenSet;
}

string VULViewVULRiskData::GetDisclosureTime() const
{
    return m_disclosureTime;
}

void VULViewVULRiskData::SetDisclosureTime(const string& _disclosureTime)
{
    m_disclosureTime = _disclosureTime;
    m_disclosureTimeHasBeenSet = true;
}

bool VULViewVULRiskData::DisclosureTimeHasBeenSet() const
{
    return m_disclosureTimeHasBeenSet;
}

uint64_t VULViewVULRiskData::GetAttackHeat() const
{
    return m_attackHeat;
}

void VULViewVULRiskData::SetAttackHeat(const uint64_t& _attackHeat)
{
    m_attackHeat = _attackHeat;
    m_attackHeatHasBeenSet = true;
}

bool VULViewVULRiskData::AttackHeatHasBeenSet() const
{
    return m_attackHeatHasBeenSet;
}

int64_t VULViewVULRiskData::GetIsSuggest() const
{
    return m_isSuggest;
}

void VULViewVULRiskData::SetIsSuggest(const int64_t& _isSuggest)
{
    m_isSuggest = _isSuggest;
    m_isSuggestHasBeenSet = true;
}

bool VULViewVULRiskData::IsSuggestHasBeenSet() const
{
    return m_isSuggestHasBeenSet;
}

string VULViewVULRiskData::GetHandleTaskId() const
{
    return m_handleTaskId;
}

void VULViewVULRiskData::SetHandleTaskId(const string& _handleTaskId)
{
    m_handleTaskId = _handleTaskId;
    m_handleTaskIdHasBeenSet = true;
}

bool VULViewVULRiskData::HandleTaskIdHasBeenSet() const
{
    return m_handleTaskIdHasBeenSet;
}

string VULViewVULRiskData::GetEngineSource() const
{
    return m_engineSource;
}

void VULViewVULRiskData::SetEngineSource(const string& _engineSource)
{
    m_engineSource = _engineSource;
    m_engineSourceHasBeenSet = true;
}

bool VULViewVULRiskData::EngineSourceHasBeenSet() const
{
    return m_engineSourceHasBeenSet;
}

string VULViewVULRiskData::GetVulRiskId() const
{
    return m_vulRiskId;
}

void VULViewVULRiskData::SetVulRiskId(const string& _vulRiskId)
{
    m_vulRiskId = _vulRiskId;
    m_vulRiskIdHasBeenSet = true;
}

bool VULViewVULRiskData::VulRiskIdHasBeenSet() const
{
    return m_vulRiskIdHasBeenSet;
}

string VULViewVULRiskData::GetTvdID() const
{
    return m_tvdID;
}

void VULViewVULRiskData::SetTvdID(const string& _tvdID)
{
    m_tvdID = _tvdID;
    m_tvdIDHasBeenSet = true;
}

bool VULViewVULRiskData::TvdIDHasBeenSet() const
{
    return m_tvdIDHasBeenSet;
}

uint64_t VULViewVULRiskData::GetIsOneClick() const
{
    return m_isOneClick;
}

void VULViewVULRiskData::SetIsOneClick(const uint64_t& _isOneClick)
{
    m_isOneClick = _isOneClick;
    m_isOneClickHasBeenSet = true;
}

bool VULViewVULRiskData::IsOneClickHasBeenSet() const
{
    return m_isOneClickHasBeenSet;
}

