/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/EdrAlertDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

EdrAlertDetail::EdrAlertDetail() :
    m_idHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_alertIdHasBeenSet(false),
    m_alertCategoryHasBeenSet(false),
    m_alertSubTypeHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_attackStageHasBeenSet(false),
    m_detectModeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_isProVersionHasBeenSet(false),
    m_alertSourceHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_firstDetectTimeHasBeenSet(false),
    m_latestDetectTimeHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_alertNameHasBeenSet(false),
    m_cSIPTagsHasBeenSet(false),
    m_harmDescHasBeenSet(false),
    m_suggestSchemeHasBeenSet(false),
    m_harmDescSourceHasBeenSet(false),
    m_threatTagsHasBeenSet(false),
    m_bashCmdDecodedHasBeenSet(false),
    m_netVulNameHasBeenSet(false),
    m_netCVEIdHasBeenSet(false),
    m_netAbnormalActionHasBeenSet(false),
    m_iPIntelHasBeenSet(false),
    m_multiBehaviorDetectionModeHasBeenSet(false),
    m_sourceDescHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_intelSourceHasBeenSet(false),
    m_verdictHasBeenSet(false),
    m_verdictBasisHasBeenSet(false),
    m_virusNameHasBeenSet(false),
    m_virusFamilyHasBeenSet(false),
    m_netResponsePayloadHasBeenSet(false),
    m_netSvcPsHasBeenSet(false)
{
}

CoreInternalOutcome EdrAlertDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AlertId") && !value["AlertId"].IsNull())
    {
        if (!value["AlertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.AlertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertId = string(value["AlertId"].GetString());
        m_alertIdHasBeenSet = true;
    }

    if (value.HasMember("AlertCategory") && !value["AlertCategory"].IsNull())
    {
        if (!value["AlertCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.AlertCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertCategory = string(value["AlertCategory"].GetString());
        m_alertCategoryHasBeenSet = true;
    }

    if (value.HasMember("AlertSubType") && !value["AlertSubType"].IsNull())
    {
        if (!value["AlertSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.AlertSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertSubType = string(value["AlertSubType"].GetString());
        m_alertSubTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.RuleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = value["RuleType"].GetInt64();
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AttackStage") && !value["AttackStage"].IsNull())
    {
        if (!value["AttackStage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.AttackStage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackStage = string(value["AttackStage"].GetString());
        m_attackStageHasBeenSet = true;
    }

    if (value.HasMember("DetectMode") && !value["DetectMode"].IsNull())
    {
        if (!value["DetectMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.DetectMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectMode = string(value["DetectMode"].GetString());
        m_detectModeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.EventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetInt64();
        m_eventCountHasBeenSet = true;
    }

    if (value.HasMember("IsProVersion") && !value["IsProVersion"].IsNull())
    {
        if (!value["IsProVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.IsProVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isProVersion = value["IsProVersion"].GetInt64();
        m_isProVersionHasBeenSet = true;
    }

    if (value.HasMember("AlertSource") && !value["AlertSource"].IsNull())
    {
        if (!value["AlertSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.AlertSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertSource = string(value["AlertSource"].GetString());
        m_alertSourceHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("FirstDetectTime") && !value["FirstDetectTime"].IsNull())
    {
        if (!value["FirstDetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.FirstDetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstDetectTime = string(value["FirstDetectTime"].GetString());
        m_firstDetectTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestDetectTime") && !value["LatestDetectTime"].IsNull())
    {
        if (!value["LatestDetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.LatestDetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestDetectTime = string(value["LatestDetectTime"].GetString());
        m_latestDetectTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(value["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("AlertName") && !value["AlertName"].IsNull())
    {
        if (!value["AlertName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.AlertName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertName = string(value["AlertName"].GetString());
        m_alertNameHasBeenSet = true;
    }

    if (value.HasMember("CSIPTags") && !value["CSIPTags"].IsNull())
    {
        if (!value["CSIPTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.CSIPTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CSIPTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CSIPTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cSIPTags.push_back(item);
        }
        m_cSIPTagsHasBeenSet = true;
    }

    if (value.HasMember("HarmDesc") && !value["HarmDesc"].IsNull())
    {
        if (!value["HarmDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.HarmDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_harmDesc = string(value["HarmDesc"].GetString());
        m_harmDescHasBeenSet = true;
    }

    if (value.HasMember("SuggestScheme") && !value["SuggestScheme"].IsNull())
    {
        if (!value["SuggestScheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.SuggestScheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestScheme = string(value["SuggestScheme"].GetString());
        m_suggestSchemeHasBeenSet = true;
    }

    if (value.HasMember("HarmDescSource") && !value["HarmDescSource"].IsNull())
    {
        if (!value["HarmDescSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.HarmDescSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_harmDescSource = string(value["HarmDescSource"].GetString());
        m_harmDescSourceHasBeenSet = true;
    }

    if (value.HasMember("ThreatTags") && !value["ThreatTags"].IsNull())
    {
        if (!value["ThreatTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.ThreatTags` is not array type"));

        const rapidjson::Value &tmpValue = value["ThreatTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_threatTags.push_back((*itr).GetString());
        }
        m_threatTagsHasBeenSet = true;
    }

    if (value.HasMember("BashCmdDecoded") && !value["BashCmdDecoded"].IsNull())
    {
        if (!value["BashCmdDecoded"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.BashCmdDecoded` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bashCmdDecoded = string(value["BashCmdDecoded"].GetString());
        m_bashCmdDecodedHasBeenSet = true;
    }

    if (value.HasMember("NetVulName") && !value["NetVulName"].IsNull())
    {
        if (!value["NetVulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.NetVulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netVulName = string(value["NetVulName"].GetString());
        m_netVulNameHasBeenSet = true;
    }

    if (value.HasMember("NetCVEId") && !value["NetCVEId"].IsNull())
    {
        if (!value["NetCVEId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.NetCVEId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netCVEId = string(value["NetCVEId"].GetString());
        m_netCVEIdHasBeenSet = true;
    }

    if (value.HasMember("NetAbnormalAction") && !value["NetAbnormalAction"].IsNull())
    {
        if (!value["NetAbnormalAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.NetAbnormalAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netAbnormalAction = string(value["NetAbnormalAction"].GetString());
        m_netAbnormalActionHasBeenSet = true;
    }

    if (value.HasMember("IPIntel") && !value["IPIntel"].IsNull())
    {
        if (!value["IPIntel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.IPIntel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iPIntel.Deserialize(value["IPIntel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iPIntelHasBeenSet = true;
    }

    if (value.HasMember("MultiBehaviorDetectionMode") && !value["MultiBehaviorDetectionMode"].IsNull())
    {
        if (!value["MultiBehaviorDetectionMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.MultiBehaviorDetectionMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_multiBehaviorDetectionMode = string(value["MultiBehaviorDetectionMode"].GetString());
        m_multiBehaviorDetectionModeHasBeenSet = true;
    }

    if (value.HasMember("SourceDesc") && !value["SourceDesc"].IsNull())
    {
        if (!value["SourceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.SourceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceDesc = string(value["SourceDesc"].GetString());
        m_sourceDescHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("IntelSource") && !value["IntelSource"].IsNull())
    {
        if (!value["IntelSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.IntelSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intelSource = string(value["IntelSource"].GetString());
        m_intelSourceHasBeenSet = true;
    }

    if (value.HasMember("Verdict") && !value["Verdict"].IsNull())
    {
        if (!value["Verdict"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.Verdict` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verdict = string(value["Verdict"].GetString());
        m_verdictHasBeenSet = true;
    }

    if (value.HasMember("VerdictBasis") && !value["VerdictBasis"].IsNull())
    {
        if (!value["VerdictBasis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.VerdictBasis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verdictBasis = string(value["VerdictBasis"].GetString());
        m_verdictBasisHasBeenSet = true;
    }

    if (value.HasMember("VirusName") && !value["VirusName"].IsNull())
    {
        if (!value["VirusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.VirusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusName = string(value["VirusName"].GetString());
        m_virusNameHasBeenSet = true;
    }

    if (value.HasMember("VirusFamily") && !value["VirusFamily"].IsNull())
    {
        if (!value["VirusFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.VirusFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusFamily = string(value["VirusFamily"].GetString());
        m_virusFamilyHasBeenSet = true;
    }

    if (value.HasMember("NetResponsePayload") && !value["NetResponsePayload"].IsNull())
    {
        if (!value["NetResponsePayload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.NetResponsePayload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netResponsePayload = string(value["NetResponsePayload"].GetString());
        m_netResponsePayloadHasBeenSet = true;
    }

    if (value.HasMember("NetSvcPs") && !value["NetSvcPs"].IsNull())
    {
        if (!value["NetSvcPs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertDetail.NetSvcPs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netSvcPs = string(value["NetSvcPs"].GetString());
        m_netSvcPsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdrAlertDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_alertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertId.c_str(), allocator).Move(), allocator);
    }

    if (m_alertCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_alertSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_attackStageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackStage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackStage.c_str(), allocator).Move(), allocator);
    }

    if (m_detectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectMode.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_isProVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProVersion, allocator);
    }

    if (m_alertSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertSource.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_firstDetectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstDetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstDetectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestDetectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestDetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestDetectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_alertNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertName.c_str(), allocator).Move(), allocator);
    }

    if (m_cSIPTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSIPTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cSIPTags.begin(); itr != m_cSIPTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_harmDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HarmDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_harmDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestSchemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestScheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestScheme.c_str(), allocator).Move(), allocator);
    }

    if (m_harmDescSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HarmDescSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_harmDescSource.c_str(), allocator).Move(), allocator);
    }

    if (m_threatTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreatTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_threatTags.begin(); itr != m_threatTags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bashCmdDecodedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BashCmdDecoded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bashCmdDecoded.c_str(), allocator).Move(), allocator);
    }

    if (m_netVulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetVulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netVulName.c_str(), allocator).Move(), allocator);
    }

    if (m_netCVEIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetCVEId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netCVEId.c_str(), allocator).Move(), allocator);
    }

    if (m_netAbnormalActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetAbnormalAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netAbnormalAction.c_str(), allocator).Move(), allocator);
    }

    if (m_iPIntelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPIntel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPIntel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_multiBehaviorDetectionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiBehaviorDetectionMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_multiBehaviorDetectionMode.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_intelSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntelSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intelSource.c_str(), allocator).Move(), allocator);
    }

    if (m_verdictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Verdict";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verdict.c_str(), allocator).Move(), allocator);
    }

    if (m_verdictBasisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerdictBasis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verdictBasis.c_str(), allocator).Move(), allocator);
    }

    if (m_virusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusName.c_str(), allocator).Move(), allocator);
    }

    if (m_virusFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_netResponsePayloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetResponsePayload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netResponsePayload.c_str(), allocator).Move(), allocator);
    }

    if (m_netSvcPsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetSvcPs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netSvcPs.c_str(), allocator).Move(), allocator);
    }

}


int64_t EdrAlertDetail::GetId() const
{
    return m_id;
}

void EdrAlertDetail::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EdrAlertDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t EdrAlertDetail::GetAppId() const
{
    return m_appId;
}

void EdrAlertDetail::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool EdrAlertDetail::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string EdrAlertDetail::GetAlertId() const
{
    return m_alertId;
}

void EdrAlertDetail::SetAlertId(const string& _alertId)
{
    m_alertId = _alertId;
    m_alertIdHasBeenSet = true;
}

bool EdrAlertDetail::AlertIdHasBeenSet() const
{
    return m_alertIdHasBeenSet;
}

string EdrAlertDetail::GetAlertCategory() const
{
    return m_alertCategory;
}

void EdrAlertDetail::SetAlertCategory(const string& _alertCategory)
{
    m_alertCategory = _alertCategory;
    m_alertCategoryHasBeenSet = true;
}

bool EdrAlertDetail::AlertCategoryHasBeenSet() const
{
    return m_alertCategoryHasBeenSet;
}

string EdrAlertDetail::GetAlertSubType() const
{
    return m_alertSubType;
}

void EdrAlertDetail::SetAlertSubType(const string& _alertSubType)
{
    m_alertSubType = _alertSubType;
    m_alertSubTypeHasBeenSet = true;
}

bool EdrAlertDetail::AlertSubTypeHasBeenSet() const
{
    return m_alertSubTypeHasBeenSet;
}

string EdrAlertDetail::GetRuleId() const
{
    return m_ruleId;
}

void EdrAlertDetail::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool EdrAlertDetail::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t EdrAlertDetail::GetRuleType() const
{
    return m_ruleType;
}

void EdrAlertDetail::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool EdrAlertDetail::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string EdrAlertDetail::GetLevel() const
{
    return m_level;
}

void EdrAlertDetail::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool EdrAlertDetail::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string EdrAlertDetail::GetStatus() const
{
    return m_status;
}

void EdrAlertDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EdrAlertDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EdrAlertDetail::GetAttackStage() const
{
    return m_attackStage;
}

void EdrAlertDetail::SetAttackStage(const string& _attackStage)
{
    m_attackStage = _attackStage;
    m_attackStageHasBeenSet = true;
}

bool EdrAlertDetail::AttackStageHasBeenSet() const
{
    return m_attackStageHasBeenSet;
}

string EdrAlertDetail::GetDetectMode() const
{
    return m_detectMode;
}

void EdrAlertDetail::SetDetectMode(const string& _detectMode)
{
    m_detectMode = _detectMode;
    m_detectModeHasBeenSet = true;
}

bool EdrAlertDetail::DetectModeHasBeenSet() const
{
    return m_detectModeHasBeenSet;
}

string EdrAlertDetail::GetInstanceId() const
{
    return m_instanceId;
}

void EdrAlertDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool EdrAlertDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string EdrAlertDetail::GetQuuid() const
{
    return m_quuid;
}

void EdrAlertDetail::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool EdrAlertDetail::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

int64_t EdrAlertDetail::GetEventCount() const
{
    return m_eventCount;
}

void EdrAlertDetail::SetEventCount(const int64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool EdrAlertDetail::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

int64_t EdrAlertDetail::GetIsProVersion() const
{
    return m_isProVersion;
}

void EdrAlertDetail::SetIsProVersion(const int64_t& _isProVersion)
{
    m_isProVersion = _isProVersion;
    m_isProVersionHasBeenSet = true;
}

bool EdrAlertDetail::IsProVersionHasBeenSet() const
{
    return m_isProVersionHasBeenSet;
}

string EdrAlertDetail::GetAlertSource() const
{
    return m_alertSource;
}

void EdrAlertDetail::SetAlertSource(const string& _alertSource)
{
    m_alertSource = _alertSource;
    m_alertSourceHasBeenSet = true;
}

bool EdrAlertDetail::AlertSourceHasBeenSet() const
{
    return m_alertSourceHasBeenSet;
}

string EdrAlertDetail::GetImageId() const
{
    return m_imageId;
}

void EdrAlertDetail::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool EdrAlertDetail::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string EdrAlertDetail::GetContainerId() const
{
    return m_containerId;
}

void EdrAlertDetail::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool EdrAlertDetail::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string EdrAlertDetail::GetClusterId() const
{
    return m_clusterId;
}

void EdrAlertDetail::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool EdrAlertDetail::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string EdrAlertDetail::GetFirstDetectTime() const
{
    return m_firstDetectTime;
}

void EdrAlertDetail::SetFirstDetectTime(const string& _firstDetectTime)
{
    m_firstDetectTime = _firstDetectTime;
    m_firstDetectTimeHasBeenSet = true;
}

bool EdrAlertDetail::FirstDetectTimeHasBeenSet() const
{
    return m_firstDetectTimeHasBeenSet;
}

string EdrAlertDetail::GetLatestDetectTime() const
{
    return m_latestDetectTime;
}

void EdrAlertDetail::SetLatestDetectTime(const string& _latestDetectTime)
{
    m_latestDetectTime = _latestDetectTime;
    m_latestDetectTimeHasBeenSet = true;
}

bool EdrAlertDetail::LatestDetectTimeHasBeenSet() const
{
    return m_latestDetectTimeHasBeenSet;
}

string EdrAlertDetail::GetRuleName() const
{
    return m_ruleName;
}

void EdrAlertDetail::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool EdrAlertDetail::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string EdrAlertDetail::GetContentType() const
{
    return m_contentType;
}

void EdrAlertDetail::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool EdrAlertDetail::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string EdrAlertDetail::GetInstanceName() const
{
    return m_instanceName;
}

void EdrAlertDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool EdrAlertDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string EdrAlertDetail::GetPublicIp() const
{
    return m_publicIp;
}

void EdrAlertDetail::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool EdrAlertDetail::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string EdrAlertDetail::GetPrivateIp() const
{
    return m_privateIp;
}

void EdrAlertDetail::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool EdrAlertDetail::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string EdrAlertDetail::GetContent() const
{
    return m_content;
}

void EdrAlertDetail::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool EdrAlertDetail::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string EdrAlertDetail::GetAlertName() const
{
    return m_alertName;
}

void EdrAlertDetail::SetAlertName(const string& _alertName)
{
    m_alertName = _alertName;
    m_alertNameHasBeenSet = true;
}

bool EdrAlertDetail::AlertNameHasBeenSet() const
{
    return m_alertNameHasBeenSet;
}

vector<CSIPTag> EdrAlertDetail::GetCSIPTags() const
{
    return m_cSIPTags;
}

void EdrAlertDetail::SetCSIPTags(const vector<CSIPTag>& _cSIPTags)
{
    m_cSIPTags = _cSIPTags;
    m_cSIPTagsHasBeenSet = true;
}

bool EdrAlertDetail::CSIPTagsHasBeenSet() const
{
    return m_cSIPTagsHasBeenSet;
}

string EdrAlertDetail::GetHarmDesc() const
{
    return m_harmDesc;
}

void EdrAlertDetail::SetHarmDesc(const string& _harmDesc)
{
    m_harmDesc = _harmDesc;
    m_harmDescHasBeenSet = true;
}

bool EdrAlertDetail::HarmDescHasBeenSet() const
{
    return m_harmDescHasBeenSet;
}

string EdrAlertDetail::GetSuggestScheme() const
{
    return m_suggestScheme;
}

void EdrAlertDetail::SetSuggestScheme(const string& _suggestScheme)
{
    m_suggestScheme = _suggestScheme;
    m_suggestSchemeHasBeenSet = true;
}

bool EdrAlertDetail::SuggestSchemeHasBeenSet() const
{
    return m_suggestSchemeHasBeenSet;
}

string EdrAlertDetail::GetHarmDescSource() const
{
    return m_harmDescSource;
}

void EdrAlertDetail::SetHarmDescSource(const string& _harmDescSource)
{
    m_harmDescSource = _harmDescSource;
    m_harmDescSourceHasBeenSet = true;
}

bool EdrAlertDetail::HarmDescSourceHasBeenSet() const
{
    return m_harmDescSourceHasBeenSet;
}

vector<string> EdrAlertDetail::GetThreatTags() const
{
    return m_threatTags;
}

void EdrAlertDetail::SetThreatTags(const vector<string>& _threatTags)
{
    m_threatTags = _threatTags;
    m_threatTagsHasBeenSet = true;
}

bool EdrAlertDetail::ThreatTagsHasBeenSet() const
{
    return m_threatTagsHasBeenSet;
}

string EdrAlertDetail::GetBashCmdDecoded() const
{
    return m_bashCmdDecoded;
}

void EdrAlertDetail::SetBashCmdDecoded(const string& _bashCmdDecoded)
{
    m_bashCmdDecoded = _bashCmdDecoded;
    m_bashCmdDecodedHasBeenSet = true;
}

bool EdrAlertDetail::BashCmdDecodedHasBeenSet() const
{
    return m_bashCmdDecodedHasBeenSet;
}

string EdrAlertDetail::GetNetVulName() const
{
    return m_netVulName;
}

void EdrAlertDetail::SetNetVulName(const string& _netVulName)
{
    m_netVulName = _netVulName;
    m_netVulNameHasBeenSet = true;
}

bool EdrAlertDetail::NetVulNameHasBeenSet() const
{
    return m_netVulNameHasBeenSet;
}

string EdrAlertDetail::GetNetCVEId() const
{
    return m_netCVEId;
}

void EdrAlertDetail::SetNetCVEId(const string& _netCVEId)
{
    m_netCVEId = _netCVEId;
    m_netCVEIdHasBeenSet = true;
}

bool EdrAlertDetail::NetCVEIdHasBeenSet() const
{
    return m_netCVEIdHasBeenSet;
}

string EdrAlertDetail::GetNetAbnormalAction() const
{
    return m_netAbnormalAction;
}

void EdrAlertDetail::SetNetAbnormalAction(const string& _netAbnormalAction)
{
    m_netAbnormalAction = _netAbnormalAction;
    m_netAbnormalActionHasBeenSet = true;
}

bool EdrAlertDetail::NetAbnormalActionHasBeenSet() const
{
    return m_netAbnormalActionHasBeenSet;
}

IPIntelInfo EdrAlertDetail::GetIPIntel() const
{
    return m_iPIntel;
}

void EdrAlertDetail::SetIPIntel(const IPIntelInfo& _iPIntel)
{
    m_iPIntel = _iPIntel;
    m_iPIntelHasBeenSet = true;
}

bool EdrAlertDetail::IPIntelHasBeenSet() const
{
    return m_iPIntelHasBeenSet;
}

string EdrAlertDetail::GetMultiBehaviorDetectionMode() const
{
    return m_multiBehaviorDetectionMode;
}

void EdrAlertDetail::SetMultiBehaviorDetectionMode(const string& _multiBehaviorDetectionMode)
{
    m_multiBehaviorDetectionMode = _multiBehaviorDetectionMode;
    m_multiBehaviorDetectionModeHasBeenSet = true;
}

bool EdrAlertDetail::MultiBehaviorDetectionModeHasBeenSet() const
{
    return m_multiBehaviorDetectionModeHasBeenSet;
}

string EdrAlertDetail::GetSourceDesc() const
{
    return m_sourceDesc;
}

void EdrAlertDetail::SetSourceDesc(const string& _sourceDesc)
{
    m_sourceDesc = _sourceDesc;
    m_sourceDescHasBeenSet = true;
}

bool EdrAlertDetail::SourceDescHasBeenSet() const
{
    return m_sourceDescHasBeenSet;
}

string EdrAlertDetail::GetModifyTime() const
{
    return m_modifyTime;
}

void EdrAlertDetail::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool EdrAlertDetail::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string EdrAlertDetail::GetIntelSource() const
{
    return m_intelSource;
}

void EdrAlertDetail::SetIntelSource(const string& _intelSource)
{
    m_intelSource = _intelSource;
    m_intelSourceHasBeenSet = true;
}

bool EdrAlertDetail::IntelSourceHasBeenSet() const
{
    return m_intelSourceHasBeenSet;
}

string EdrAlertDetail::GetVerdict() const
{
    return m_verdict;
}

void EdrAlertDetail::SetVerdict(const string& _verdict)
{
    m_verdict = _verdict;
    m_verdictHasBeenSet = true;
}

bool EdrAlertDetail::VerdictHasBeenSet() const
{
    return m_verdictHasBeenSet;
}

string EdrAlertDetail::GetVerdictBasis() const
{
    return m_verdictBasis;
}

void EdrAlertDetail::SetVerdictBasis(const string& _verdictBasis)
{
    m_verdictBasis = _verdictBasis;
    m_verdictBasisHasBeenSet = true;
}

bool EdrAlertDetail::VerdictBasisHasBeenSet() const
{
    return m_verdictBasisHasBeenSet;
}

string EdrAlertDetail::GetVirusName() const
{
    return m_virusName;
}

void EdrAlertDetail::SetVirusName(const string& _virusName)
{
    m_virusName = _virusName;
    m_virusNameHasBeenSet = true;
}

bool EdrAlertDetail::VirusNameHasBeenSet() const
{
    return m_virusNameHasBeenSet;
}

string EdrAlertDetail::GetVirusFamily() const
{
    return m_virusFamily;
}

void EdrAlertDetail::SetVirusFamily(const string& _virusFamily)
{
    m_virusFamily = _virusFamily;
    m_virusFamilyHasBeenSet = true;
}

bool EdrAlertDetail::VirusFamilyHasBeenSet() const
{
    return m_virusFamilyHasBeenSet;
}

string EdrAlertDetail::GetNetResponsePayload() const
{
    return m_netResponsePayload;
}

void EdrAlertDetail::SetNetResponsePayload(const string& _netResponsePayload)
{
    m_netResponsePayload = _netResponsePayload;
    m_netResponsePayloadHasBeenSet = true;
}

bool EdrAlertDetail::NetResponsePayloadHasBeenSet() const
{
    return m_netResponsePayloadHasBeenSet;
}

string EdrAlertDetail::GetNetSvcPs() const
{
    return m_netSvcPs;
}

void EdrAlertDetail::SetNetSvcPs(const string& _netSvcPs)
{
    m_netSvcPs = _netSvcPs;
    m_netSvcPsHasBeenSet = true;
}

bool EdrAlertDetail::NetSvcPsHasBeenSet() const
{
    return m_netSvcPsHasBeenSet;
}

