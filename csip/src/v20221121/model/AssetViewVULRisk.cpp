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

#include <tencentcloud/csip/v20221121/model/AssetViewVULRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetViewVULRisk::AssetViewVULRisk() :
    m_affectAssetHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_recentTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_vULTypeHasBeenSet(false),
    m_portHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_vULURLHasBeenSet(false),
    m_vULNameHasBeenSet(false),
    m_cVEHasBeenSet(false),
    m_fixHasBeenSet(false),
    m_pOCIdHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_cWPVersionHasBeenSet(false),
    m_isSupportRepairHasBeenSet(false),
    m_isSupportDetectHasBeenSet(false),
    m_instanceUUIDHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_eMGCVulTypeHasBeenSet(false)
{
}

CoreInternalOutcome AssetViewVULRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AffectAsset") && !value["AffectAsset"].IsNull())
    {
        if (!value["AffectAsset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.AffectAsset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectAsset = string(value["AffectAsset"].GetString());
        m_affectAssetHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("RecentTime") && !value["RecentTime"].IsNull())
    {
        if (!value["RecentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.RecentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentTime = string(value["RecentTime"].GetString());
        m_recentTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("VULType") && !value["VULType"].IsNull())
    {
        if (!value["VULType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.VULType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULType = string(value["VULType"].GetString());
        m_vULTypeHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("References") && !value["References"].IsNull())
    {
        if (!value["References"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.References` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_references = string(value["References"].GetString());
        m_referencesHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("VULURL") && !value["VULURL"].IsNull())
    {
        if (!value["VULURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.VULURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULURL = string(value["VULURL"].GetString());
        m_vULURLHasBeenSet = true;
    }

    if (value.HasMember("VULName") && !value["VULName"].IsNull())
    {
        if (!value["VULName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.VULName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULName = string(value["VULName"].GetString());
        m_vULNameHasBeenSet = true;
    }

    if (value.HasMember("CVE") && !value["CVE"].IsNull())
    {
        if (!value["CVE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.CVE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVE = string(value["CVE"].GetString());
        m_cVEHasBeenSet = true;
    }

    if (value.HasMember("Fix") && !value["Fix"].IsNull())
    {
        if (!value["Fix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.Fix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fix = string(value["Fix"].GetString());
        m_fixHasBeenSet = true;
    }

    if (value.HasMember("POCId") && !value["POCId"].IsNull())
    {
        if (!value["POCId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.POCId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pOCId = string(value["POCId"].GetString());
        m_pOCIdHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(value["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("CWPVersion") && !value["CWPVersion"].IsNull())
    {
        if (!value["CWPVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.CWPVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cWPVersion = value["CWPVersion"].GetInt64();
        m_cWPVersionHasBeenSet = true;
    }

    if (value.HasMember("IsSupportRepair") && !value["IsSupportRepair"].IsNull())
    {
        if (!value["IsSupportRepair"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.IsSupportRepair` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportRepair = value["IsSupportRepair"].GetBool();
        m_isSupportRepairHasBeenSet = true;
    }

    if (value.HasMember("IsSupportDetect") && !value["IsSupportDetect"].IsNull())
    {
        if (!value["IsSupportDetect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.IsSupportDetect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportDetect = value["IsSupportDetect"].GetBool();
        m_isSupportDetectHasBeenSet = true;
    }

    if (value.HasMember("InstanceUUID") && !value["InstanceUUID"].IsNull())
    {
        if (!value["InstanceUUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.InstanceUUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceUUID = string(value["InstanceUUID"].GetString());
        m_instanceUUIDHasBeenSet = true;
    }

    if (value.HasMember("Payload") && !value["Payload"].IsNull())
    {
        if (!value["Payload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.Payload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payload = string(value["Payload"].GetString());
        m_payloadHasBeenSet = true;
    }

    if (value.HasMember("EMGCVulType") && !value["EMGCVulType"].IsNull())
    {
        if (!value["EMGCVulType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewVULRisk.EMGCVulType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eMGCVulType = value["EMGCVulType"].GetInt64();
        m_eMGCVulTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetViewVULRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
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

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_referencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "References";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_references.c_str(), allocator).Move(), allocator);
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

    if (m_fixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fix.c_str(), allocator).Move(), allocator);
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

    if (m_isSupportRepairHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportRepair";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportRepair, allocator);
    }

    if (m_isSupportDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportDetect, allocator);
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

}


string AssetViewVULRisk::GetAffectAsset() const
{
    return m_affectAsset;
}

void AssetViewVULRisk::SetAffectAsset(const string& _affectAsset)
{
    m_affectAsset = _affectAsset;
    m_affectAssetHasBeenSet = true;
}

bool AssetViewVULRisk::AffectAssetHasBeenSet() const
{
    return m_affectAssetHasBeenSet;
}

string AssetViewVULRisk::GetLevel() const
{
    return m_level;
}

void AssetViewVULRisk::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool AssetViewVULRisk::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string AssetViewVULRisk::GetInstanceType() const
{
    return m_instanceType;
}

void AssetViewVULRisk::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool AssetViewVULRisk::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string AssetViewVULRisk::GetComponent() const
{
    return m_component;
}

void AssetViewVULRisk::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool AssetViewVULRisk::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

string AssetViewVULRisk::GetService() const
{
    return m_service;
}

void AssetViewVULRisk::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool AssetViewVULRisk::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string AssetViewVULRisk::GetRecentTime() const
{
    return m_recentTime;
}

void AssetViewVULRisk::SetRecentTime(const string& _recentTime)
{
    m_recentTime = _recentTime;
    m_recentTimeHasBeenSet = true;
}

bool AssetViewVULRisk::RecentTimeHasBeenSet() const
{
    return m_recentTimeHasBeenSet;
}

string AssetViewVULRisk::GetFirstTime() const
{
    return m_firstTime;
}

void AssetViewVULRisk::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetViewVULRisk::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

uint64_t AssetViewVULRisk::GetStatus() const
{
    return m_status;
}

void AssetViewVULRisk::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssetViewVULRisk::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AssetViewVULRisk::GetId() const
{
    return m_id;
}

void AssetViewVULRisk::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AssetViewVULRisk::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AssetViewVULRisk::GetIndex() const
{
    return m_index;
}

void AssetViewVULRisk::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool AssetViewVULRisk::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string AssetViewVULRisk::GetInstanceId() const
{
    return m_instanceId;
}

void AssetViewVULRisk::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AssetViewVULRisk::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AssetViewVULRisk::GetInstanceName() const
{
    return m_instanceName;
}

void AssetViewVULRisk::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AssetViewVULRisk::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string AssetViewVULRisk::GetAppId() const
{
    return m_appId;
}

void AssetViewVULRisk::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AssetViewVULRisk::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AssetViewVULRisk::GetNick() const
{
    return m_nick;
}

void AssetViewVULRisk::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool AssetViewVULRisk::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string AssetViewVULRisk::GetUin() const
{
    return m_uin;
}

void AssetViewVULRisk::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AssetViewVULRisk::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AssetViewVULRisk::GetVULType() const
{
    return m_vULType;
}

void AssetViewVULRisk::SetVULType(const string& _vULType)
{
    m_vULType = _vULType;
    m_vULTypeHasBeenSet = true;
}

bool AssetViewVULRisk::VULTypeHasBeenSet() const
{
    return m_vULTypeHasBeenSet;
}

string AssetViewVULRisk::GetPort() const
{
    return m_port;
}

void AssetViewVULRisk::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AssetViewVULRisk::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string AssetViewVULRisk::GetDescribe() const
{
    return m_describe;
}

void AssetViewVULRisk::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool AssetViewVULRisk::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

string AssetViewVULRisk::GetAppName() const
{
    return m_appName;
}

void AssetViewVULRisk::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AssetViewVULRisk::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string AssetViewVULRisk::GetReferences() const
{
    return m_references;
}

void AssetViewVULRisk::SetReferences(const string& _references)
{
    m_references = _references;
    m_referencesHasBeenSet = true;
}

bool AssetViewVULRisk::ReferencesHasBeenSet() const
{
    return m_referencesHasBeenSet;
}

string AssetViewVULRisk::GetAppVersion() const
{
    return m_appVersion;
}

void AssetViewVULRisk::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool AssetViewVULRisk::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string AssetViewVULRisk::GetVULURL() const
{
    return m_vULURL;
}

void AssetViewVULRisk::SetVULURL(const string& _vULURL)
{
    m_vULURL = _vULURL;
    m_vULURLHasBeenSet = true;
}

bool AssetViewVULRisk::VULURLHasBeenSet() const
{
    return m_vULURLHasBeenSet;
}

string AssetViewVULRisk::GetVULName() const
{
    return m_vULName;
}

void AssetViewVULRisk::SetVULName(const string& _vULName)
{
    m_vULName = _vULName;
    m_vULNameHasBeenSet = true;
}

bool AssetViewVULRisk::VULNameHasBeenSet() const
{
    return m_vULNameHasBeenSet;
}

string AssetViewVULRisk::GetCVE() const
{
    return m_cVE;
}

void AssetViewVULRisk::SetCVE(const string& _cVE)
{
    m_cVE = _cVE;
    m_cVEHasBeenSet = true;
}

bool AssetViewVULRisk::CVEHasBeenSet() const
{
    return m_cVEHasBeenSet;
}

string AssetViewVULRisk::GetFix() const
{
    return m_fix;
}

void AssetViewVULRisk::SetFix(const string& _fix)
{
    m_fix = _fix;
    m_fixHasBeenSet = true;
}

bool AssetViewVULRisk::FixHasBeenSet() const
{
    return m_fixHasBeenSet;
}

string AssetViewVULRisk::GetPOCId() const
{
    return m_pOCId;
}

void AssetViewVULRisk::SetPOCId(const string& _pOCId)
{
    m_pOCId = _pOCId;
    m_pOCIdHasBeenSet = true;
}

bool AssetViewVULRisk::POCIdHasBeenSet() const
{
    return m_pOCIdHasBeenSet;
}

string AssetViewVULRisk::GetFrom() const
{
    return m_from;
}

void AssetViewVULRisk::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool AssetViewVULRisk::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t AssetViewVULRisk::GetCWPVersion() const
{
    return m_cWPVersion;
}

void AssetViewVULRisk::SetCWPVersion(const int64_t& _cWPVersion)
{
    m_cWPVersion = _cWPVersion;
    m_cWPVersionHasBeenSet = true;
}

bool AssetViewVULRisk::CWPVersionHasBeenSet() const
{
    return m_cWPVersionHasBeenSet;
}

bool AssetViewVULRisk::GetIsSupportRepair() const
{
    return m_isSupportRepair;
}

void AssetViewVULRisk::SetIsSupportRepair(const bool& _isSupportRepair)
{
    m_isSupportRepair = _isSupportRepair;
    m_isSupportRepairHasBeenSet = true;
}

bool AssetViewVULRisk::IsSupportRepairHasBeenSet() const
{
    return m_isSupportRepairHasBeenSet;
}

bool AssetViewVULRisk::GetIsSupportDetect() const
{
    return m_isSupportDetect;
}

void AssetViewVULRisk::SetIsSupportDetect(const bool& _isSupportDetect)
{
    m_isSupportDetect = _isSupportDetect;
    m_isSupportDetectHasBeenSet = true;
}

bool AssetViewVULRisk::IsSupportDetectHasBeenSet() const
{
    return m_isSupportDetectHasBeenSet;
}

string AssetViewVULRisk::GetInstanceUUID() const
{
    return m_instanceUUID;
}

void AssetViewVULRisk::SetInstanceUUID(const string& _instanceUUID)
{
    m_instanceUUID = _instanceUUID;
    m_instanceUUIDHasBeenSet = true;
}

bool AssetViewVULRisk::InstanceUUIDHasBeenSet() const
{
    return m_instanceUUIDHasBeenSet;
}

string AssetViewVULRisk::GetPayload() const
{
    return m_payload;
}

void AssetViewVULRisk::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool AssetViewVULRisk::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

int64_t AssetViewVULRisk::GetEMGCVulType() const
{
    return m_eMGCVulType;
}

void AssetViewVULRisk::SetEMGCVulType(const int64_t& _eMGCVulType)
{
    m_eMGCVulType = _eMGCVulType;
    m_eMGCVulTypeHasBeenSet = true;
}

bool AssetViewVULRisk::EMGCVulTypeHasBeenSet() const
{
    return m_eMGCVulTypeHasBeenSet;
}

