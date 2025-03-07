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

#include <tencentcloud/csip/v20221121/model/AssetViewVULRiskData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetViewVULRiskData::AssetViewVULRiskData() :
    m_affectAssetHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_recentTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_riskIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_vULTypeHasBeenSet(false),
    m_portHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_vULURLHasBeenSet(false),
    m_vULNameHasBeenSet(false),
    m_cVEHasBeenSet(false),
    m_pOCIdHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_cWPVersionHasBeenSet(false),
    m_instanceUUIDHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_eMGCVulTypeHasBeenSet(false),
    m_cVSSHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_pCMGRIdHasBeenSet(false),
    m_logIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_vulTagHasBeenSet(false),
    m_disclosureTimeHasBeenSet(false),
    m_attackHeatHasBeenSet(false),
    m_isSuggestHasBeenSet(false),
    m_handleTaskIdHasBeenSet(false),
    m_engineSourceHasBeenSet(false),
    m_vulRiskIdHasBeenSet(false),
    m_tvdIDHasBeenSet(false),
    m_isOneClickHasBeenSet(false),
    m_isPOCHasBeenSet(false)
{
}

CoreInternalOutcome AssetViewVULRiskData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AffectAsset") && !value["AffectAsset"].IsNull())
    {
        if (!value["AffectAsset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.AffectAsset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectAsset = string(value["AffectAsset"].GetString());
        m_affectAssetHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("RecentTime") && !value["RecentTime"].IsNull())
    {
        if (!value["RecentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.RecentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentTime = string(value["RecentTime"].GetString());
        m_recentTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RiskId") && !value["RiskId"].IsNull())
    {
        if (!value["RiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.RiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskId = string(value["RiskId"].GetString());
        m_riskIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("VULType") && !value["VULType"].IsNull())
    {
        if (!value["VULType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.VULType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULType = string(value["VULType"].GetString());
        m_vULTypeHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("VULURL") && !value["VULURL"].IsNull())
    {
        if (!value["VULURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.VULURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULURL = string(value["VULURL"].GetString());
        m_vULURLHasBeenSet = true;
    }

    if (value.HasMember("VULName") && !value["VULName"].IsNull())
    {
        if (!value["VULName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.VULName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULName = string(value["VULName"].GetString());
        m_vULNameHasBeenSet = true;
    }

    if (value.HasMember("CVE") && !value["CVE"].IsNull())
    {
        if (!value["CVE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.CVE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVE = string(value["CVE"].GetString());
        m_cVEHasBeenSet = true;
    }

    if (value.HasMember("POCId") && !value["POCId"].IsNull())
    {
        if (!value["POCId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.POCId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pOCId = string(value["POCId"].GetString());
        m_pOCIdHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(value["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("CWPVersion") && !value["CWPVersion"].IsNull())
    {
        if (!value["CWPVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.CWPVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cWPVersion = value["CWPVersion"].GetInt64();
        m_cWPVersionHasBeenSet = true;
    }

    if (value.HasMember("InstanceUUID") && !value["InstanceUUID"].IsNull())
    {
        if (!value["InstanceUUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.InstanceUUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceUUID = string(value["InstanceUUID"].GetString());
        m_instanceUUIDHasBeenSet = true;
    }

    if (value.HasMember("Payload") && !value["Payload"].IsNull())
    {
        if (!value["Payload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.Payload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payload = string(value["Payload"].GetString());
        m_payloadHasBeenSet = true;
    }

    if (value.HasMember("EMGCVulType") && !value["EMGCVulType"].IsNull())
    {
        if (!value["EMGCVulType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.EMGCVulType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eMGCVulType = value["EMGCVulType"].GetInt64();
        m_eMGCVulTypeHasBeenSet = true;
    }

    if (value.HasMember("CVSS") && !value["CVSS"].IsNull())
    {
        if (!value["CVSS"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.CVSS` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cVSS = value["CVSS"].GetDouble();
        m_cVSSHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("PCMGRId") && !value["PCMGRId"].IsNull())
    {
        if (!value["PCMGRId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.PCMGRId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pCMGRId = string(value["PCMGRId"].GetString());
        m_pCMGRIdHasBeenSet = true;
    }

    if (value.HasMember("LogId") && !value["LogId"].IsNull())
    {
        if (!value["LogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.LogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logId = string(value["LogId"].GetString());
        m_logIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("VulTag") && !value["VulTag"].IsNull())
    {
        if (!value["VulTag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.VulTag` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.DisclosureTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disclosureTime = string(value["DisclosureTime"].GetString());
        m_disclosureTimeHasBeenSet = true;
    }

    if (value.HasMember("AttackHeat") && !value["AttackHeat"].IsNull())
    {
        if (!value["AttackHeat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.AttackHeat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackHeat = value["AttackHeat"].GetUint64();
        m_attackHeatHasBeenSet = true;
    }

    if (value.HasMember("IsSuggest") && !value["IsSuggest"].IsNull())
    {
        if (!value["IsSuggest"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.IsSuggest` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSuggest = value["IsSuggest"].GetInt64();
        m_isSuggestHasBeenSet = true;
    }

    if (value.HasMember("HandleTaskId") && !value["HandleTaskId"].IsNull())
    {
        if (!value["HandleTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.HandleTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handleTaskId = string(value["HandleTaskId"].GetString());
        m_handleTaskIdHasBeenSet = true;
    }

    if (value.HasMember("EngineSource") && !value["EngineSource"].IsNull())
    {
        if (!value["EngineSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.EngineSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineSource = string(value["EngineSource"].GetString());
        m_engineSourceHasBeenSet = true;
    }

    if (value.HasMember("VulRiskId") && !value["VulRiskId"].IsNull())
    {
        if (!value["VulRiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.VulRiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulRiskId = string(value["VulRiskId"].GetString());
        m_vulRiskIdHasBeenSet = true;
    }

    if (value.HasMember("TvdID") && !value["TvdID"].IsNull())
    {
        if (!value["TvdID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.TvdID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tvdID = string(value["TvdID"].GetString());
        m_tvdIDHasBeenSet = true;
    }

    if (value.HasMember("IsOneClick") && !value["IsOneClick"].IsNull())
    {
        if (!value["IsOneClick"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.IsOneClick` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isOneClick = value["IsOneClick"].GetUint64();
        m_isOneClickHasBeenSet = true;
    }

    if (value.HasMember("IsPOC") && !value["IsPOC"].IsNull())
    {
        if (!value["IsPOC"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRiskData.IsPOC` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isPOC = value["IsPOC"].GetUint64();
        m_isPOCHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetViewVULRiskData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_affectAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_affectAsset.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_nickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nick.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_vULTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULType.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
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

    if (m_pOCIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "POCId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pOCId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_cWPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cWPVersion, allocator);
    }

    if (m_instanceUUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceUUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceUUID.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
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

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_pCMGRIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PCMGRId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pCMGRId.c_str(), allocator).Move(), allocator);
    }

    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
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

    if (m_isPOCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPOC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPOC, allocator);
    }

}


string AssetViewVULRiskData::GetAffectAsset() const
{
    return m_affectAsset;
}

void AssetViewVULRiskData::SetAffectAsset(const string& _affectAsset)
{
    m_affectAsset = _affectAsset;
    m_affectAssetHasBeenSet = true;
}

bool AssetViewVULRiskData::AffectAssetHasBeenSet() const
{
    return m_affectAssetHasBeenSet;
}

string AssetViewVULRiskData::GetLevel() const
{
    return m_level;
}

void AssetViewVULRiskData::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool AssetViewVULRiskData::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string AssetViewVULRiskData::GetInstanceType() const
{
    return m_instanceType;
}

void AssetViewVULRiskData::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool AssetViewVULRiskData::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string AssetViewVULRiskData::GetComponent() const
{
    return m_component;
}

void AssetViewVULRiskData::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool AssetViewVULRiskData::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

string AssetViewVULRiskData::GetRecentTime() const
{
    return m_recentTime;
}

void AssetViewVULRiskData::SetRecentTime(const string& _recentTime)
{
    m_recentTime = _recentTime;
    m_recentTimeHasBeenSet = true;
}

bool AssetViewVULRiskData::RecentTimeHasBeenSet() const
{
    return m_recentTimeHasBeenSet;
}

string AssetViewVULRiskData::GetFirstTime() const
{
    return m_firstTime;
}

void AssetViewVULRiskData::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetViewVULRiskData::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

uint64_t AssetViewVULRiskData::GetStatus() const
{
    return m_status;
}

void AssetViewVULRiskData::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssetViewVULRiskData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AssetViewVULRiskData::GetRiskId() const
{
    return m_riskId;
}

void AssetViewVULRiskData::SetRiskId(const string& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool AssetViewVULRiskData::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

string AssetViewVULRiskData::GetInstanceId() const
{
    return m_instanceId;
}

void AssetViewVULRiskData::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AssetViewVULRiskData::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AssetViewVULRiskData::GetInstanceName() const
{
    return m_instanceName;
}

void AssetViewVULRiskData::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AssetViewVULRiskData::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string AssetViewVULRiskData::GetAppId() const
{
    return m_appId;
}

void AssetViewVULRiskData::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AssetViewVULRiskData::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AssetViewVULRiskData::GetNick() const
{
    return m_nick;
}

void AssetViewVULRiskData::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool AssetViewVULRiskData::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string AssetViewVULRiskData::GetUin() const
{
    return m_uin;
}

void AssetViewVULRiskData::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AssetViewVULRiskData::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AssetViewVULRiskData::GetVULType() const
{
    return m_vULType;
}

void AssetViewVULRiskData::SetVULType(const string& _vULType)
{
    m_vULType = _vULType;
    m_vULTypeHasBeenSet = true;
}

bool AssetViewVULRiskData::VULTypeHasBeenSet() const
{
    return m_vULTypeHasBeenSet;
}

string AssetViewVULRiskData::GetPort() const
{
    return m_port;
}

void AssetViewVULRiskData::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AssetViewVULRiskData::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string AssetViewVULRiskData::GetAppName() const
{
    return m_appName;
}

void AssetViewVULRiskData::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AssetViewVULRiskData::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string AssetViewVULRiskData::GetAppVersion() const
{
    return m_appVersion;
}

void AssetViewVULRiskData::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool AssetViewVULRiskData::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string AssetViewVULRiskData::GetVULURL() const
{
    return m_vULURL;
}

void AssetViewVULRiskData::SetVULURL(const string& _vULURL)
{
    m_vULURL = _vULURL;
    m_vULURLHasBeenSet = true;
}

bool AssetViewVULRiskData::VULURLHasBeenSet() const
{
    return m_vULURLHasBeenSet;
}

string AssetViewVULRiskData::GetVULName() const
{
    return m_vULName;
}

void AssetViewVULRiskData::SetVULName(const string& _vULName)
{
    m_vULName = _vULName;
    m_vULNameHasBeenSet = true;
}

bool AssetViewVULRiskData::VULNameHasBeenSet() const
{
    return m_vULNameHasBeenSet;
}

string AssetViewVULRiskData::GetCVE() const
{
    return m_cVE;
}

void AssetViewVULRiskData::SetCVE(const string& _cVE)
{
    m_cVE = _cVE;
    m_cVEHasBeenSet = true;
}

bool AssetViewVULRiskData::CVEHasBeenSet() const
{
    return m_cVEHasBeenSet;
}

string AssetViewVULRiskData::GetPOCId() const
{
    return m_pOCId;
}

void AssetViewVULRiskData::SetPOCId(const string& _pOCId)
{
    m_pOCId = _pOCId;
    m_pOCIdHasBeenSet = true;
}

bool AssetViewVULRiskData::POCIdHasBeenSet() const
{
    return m_pOCIdHasBeenSet;
}

string AssetViewVULRiskData::GetFrom() const
{
    return m_from;
}

void AssetViewVULRiskData::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool AssetViewVULRiskData::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t AssetViewVULRiskData::GetCWPVersion() const
{
    return m_cWPVersion;
}

void AssetViewVULRiskData::SetCWPVersion(const int64_t& _cWPVersion)
{
    m_cWPVersion = _cWPVersion;
    m_cWPVersionHasBeenSet = true;
}

bool AssetViewVULRiskData::CWPVersionHasBeenSet() const
{
    return m_cWPVersionHasBeenSet;
}

string AssetViewVULRiskData::GetInstanceUUID() const
{
    return m_instanceUUID;
}

void AssetViewVULRiskData::SetInstanceUUID(const string& _instanceUUID)
{
    m_instanceUUID = _instanceUUID;
    m_instanceUUIDHasBeenSet = true;
}

bool AssetViewVULRiskData::InstanceUUIDHasBeenSet() const
{
    return m_instanceUUIDHasBeenSet;
}

string AssetViewVULRiskData::GetPayload() const
{
    return m_payload;
}

void AssetViewVULRiskData::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool AssetViewVULRiskData::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

int64_t AssetViewVULRiskData::GetEMGCVulType() const
{
    return m_eMGCVulType;
}

void AssetViewVULRiskData::SetEMGCVulType(const int64_t& _eMGCVulType)
{
    m_eMGCVulType = _eMGCVulType;
    m_eMGCVulTypeHasBeenSet = true;
}

bool AssetViewVULRiskData::EMGCVulTypeHasBeenSet() const
{
    return m_eMGCVulTypeHasBeenSet;
}

double AssetViewVULRiskData::GetCVSS() const
{
    return m_cVSS;
}

void AssetViewVULRiskData::SetCVSS(const double& _cVSS)
{
    m_cVSS = _cVSS;
    m_cVSSHasBeenSet = true;
}

bool AssetViewVULRiskData::CVSSHasBeenSet() const
{
    return m_cVSSHasBeenSet;
}

string AssetViewVULRiskData::GetIndex() const
{
    return m_index;
}

void AssetViewVULRiskData::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool AssetViewVULRiskData::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string AssetViewVULRiskData::GetPCMGRId() const
{
    return m_pCMGRId;
}

void AssetViewVULRiskData::SetPCMGRId(const string& _pCMGRId)
{
    m_pCMGRId = _pCMGRId;
    m_pCMGRIdHasBeenSet = true;
}

bool AssetViewVULRiskData::PCMGRIdHasBeenSet() const
{
    return m_pCMGRIdHasBeenSet;
}

string AssetViewVULRiskData::GetLogId() const
{
    return m_logId;
}

void AssetViewVULRiskData::SetLogId(const string& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool AssetViewVULRiskData::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

string AssetViewVULRiskData::GetTaskId() const
{
    return m_taskId;
}

void AssetViewVULRiskData::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AssetViewVULRiskData::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<string> AssetViewVULRiskData::GetVulTag() const
{
    return m_vulTag;
}

void AssetViewVULRiskData::SetVulTag(const vector<string>& _vulTag)
{
    m_vulTag = _vulTag;
    m_vulTagHasBeenSet = true;
}

bool AssetViewVULRiskData::VulTagHasBeenSet() const
{
    return m_vulTagHasBeenSet;
}

string AssetViewVULRiskData::GetDisclosureTime() const
{
    return m_disclosureTime;
}

void AssetViewVULRiskData::SetDisclosureTime(const string& _disclosureTime)
{
    m_disclosureTime = _disclosureTime;
    m_disclosureTimeHasBeenSet = true;
}

bool AssetViewVULRiskData::DisclosureTimeHasBeenSet() const
{
    return m_disclosureTimeHasBeenSet;
}

uint64_t AssetViewVULRiskData::GetAttackHeat() const
{
    return m_attackHeat;
}

void AssetViewVULRiskData::SetAttackHeat(const uint64_t& _attackHeat)
{
    m_attackHeat = _attackHeat;
    m_attackHeatHasBeenSet = true;
}

bool AssetViewVULRiskData::AttackHeatHasBeenSet() const
{
    return m_attackHeatHasBeenSet;
}

int64_t AssetViewVULRiskData::GetIsSuggest() const
{
    return m_isSuggest;
}

void AssetViewVULRiskData::SetIsSuggest(const int64_t& _isSuggest)
{
    m_isSuggest = _isSuggest;
    m_isSuggestHasBeenSet = true;
}

bool AssetViewVULRiskData::IsSuggestHasBeenSet() const
{
    return m_isSuggestHasBeenSet;
}

string AssetViewVULRiskData::GetHandleTaskId() const
{
    return m_handleTaskId;
}

void AssetViewVULRiskData::SetHandleTaskId(const string& _handleTaskId)
{
    m_handleTaskId = _handleTaskId;
    m_handleTaskIdHasBeenSet = true;
}

bool AssetViewVULRiskData::HandleTaskIdHasBeenSet() const
{
    return m_handleTaskIdHasBeenSet;
}

string AssetViewVULRiskData::GetEngineSource() const
{
    return m_engineSource;
}

void AssetViewVULRiskData::SetEngineSource(const string& _engineSource)
{
    m_engineSource = _engineSource;
    m_engineSourceHasBeenSet = true;
}

bool AssetViewVULRiskData::EngineSourceHasBeenSet() const
{
    return m_engineSourceHasBeenSet;
}

string AssetViewVULRiskData::GetVulRiskId() const
{
    return m_vulRiskId;
}

void AssetViewVULRiskData::SetVulRiskId(const string& _vulRiskId)
{
    m_vulRiskId = _vulRiskId;
    m_vulRiskIdHasBeenSet = true;
}

bool AssetViewVULRiskData::VulRiskIdHasBeenSet() const
{
    return m_vulRiskIdHasBeenSet;
}

string AssetViewVULRiskData::GetTvdID() const
{
    return m_tvdID;
}

void AssetViewVULRiskData::SetTvdID(const string& _tvdID)
{
    m_tvdID = _tvdID;
    m_tvdIDHasBeenSet = true;
}

bool AssetViewVULRiskData::TvdIDHasBeenSet() const
{
    return m_tvdIDHasBeenSet;
}

uint64_t AssetViewVULRiskData::GetIsOneClick() const
{
    return m_isOneClick;
}

void AssetViewVULRiskData::SetIsOneClick(const uint64_t& _isOneClick)
{
    m_isOneClick = _isOneClick;
    m_isOneClickHasBeenSet = true;
}

bool AssetViewVULRiskData::IsOneClickHasBeenSet() const
{
    return m_isOneClickHasBeenSet;
}

uint64_t AssetViewVULRiskData::GetIsPOC() const
{
    return m_isPOC;
}

void AssetViewVULRiskData::SetIsPOC(const uint64_t& _isPOC)
{
    m_isPOC = _isPOC;
    m_isPOCHasBeenSet = true;
}

bool AssetViewVULRiskData::IsPOCHasBeenSet() const
{
    return m_isPOCHasBeenSet;
}

