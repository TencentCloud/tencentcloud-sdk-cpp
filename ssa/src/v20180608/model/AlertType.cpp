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

#include <tencentcloud/ssa/v20180608/model/AlertType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

AlertType::AlertType() :
    m_alertTimeHasBeenSet(false),
    m_alertIdHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetPrivateIpHasBeenSet(false),
    m_alertNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_attackChainHasBeenSet(false),
    m_attackIdHasBeenSet(false),
    m_concernsHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_attackResultHasBeenSet(false),
    m_eventStatusHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_concernMaliciousCountHasBeenSet(false),
    m_concernVictimCountHasBeenSet(false),
    m_victimAssetTypeHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_attackNameHasBeenSet(false),
    m_assetPublicIpHasBeenSet(false),
    m_attackTacticHasBeenSet(false),
    m_victimAssetSubHasBeenSet(false),
    m_victimAssetVpcHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_assetGroupNameHasBeenSet(false),
    m_assetProjectNameHasBeenSet(false),
    m_victimAssetContentHasBeenSet(false),
    m_wrongReportStatusHasBeenSet(false),
    m_wrongReportConditionIdHasBeenSet(false)
{
}

CoreInternalOutcome AlertType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlertTime") && !value["AlertTime"].IsNull())
    {
        if (!value["AlertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.AlertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertTime = string(value["AlertTime"].GetString());
        m_alertTimeHasBeenSet = true;
    }

    if (value.HasMember("AlertId") && !value["AlertId"].IsNull())
    {
        if (!value["AlertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.AlertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertId = string(value["AlertId"].GetString());
        m_alertIdHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetPrivateIp") && !value["AssetPrivateIp"].IsNull())
    {
        if (!value["AssetPrivateIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlertType.AssetPrivateIp` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetPrivateIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assetPrivateIp.push_back((*itr).GetString());
        }
        m_assetPrivateIpHasBeenSet = true;
    }

    if (value.HasMember("AlertName") && !value["AlertName"].IsNull())
    {
        if (!value["AlertName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.AlertName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertName = string(value["AlertName"].GetString());
        m_alertNameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("AttackChain") && !value["AttackChain"].IsNull())
    {
        if (!value["AttackChain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.AttackChain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackChain = string(value["AttackChain"].GetString());
        m_attackChainHasBeenSet = true;
    }

    if (value.HasMember("AttackId") && !value["AttackId"].IsNull())
    {
        if (!value["AttackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.AttackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackId = string(value["AttackId"].GetString());
        m_attackIdHasBeenSet = true;
    }

    if (value.HasMember("Concerns") && !value["Concerns"].IsNull())
    {
        if (!value["Concerns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlertType.Concerns` is not array type"));

        const rapidjson::Value &tmpValue = value["Concerns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConcernInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_concerns.push_back(item);
        }
        m_concernsHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.Action` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetInt64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("AttackResult") && !value["AttackResult"].IsNull())
    {
        if (!value["AttackResult"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.AttackResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackResult = value["AttackResult"].GetInt64();
        m_attackResultHasBeenSet = true;
    }

    if (value.HasMember("EventStatus") && !value["EventStatus"].IsNull())
    {
        if (!value["EventStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.EventStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventStatus = value["EventStatus"].GetInt64();
        m_eventStatusHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("ConcernMaliciousCount") && !value["ConcernMaliciousCount"].IsNull())
    {
        if (!value["ConcernMaliciousCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.ConcernMaliciousCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_concernMaliciousCount = value["ConcernMaliciousCount"].GetInt64();
        m_concernMaliciousCountHasBeenSet = true;
    }

    if (value.HasMember("ConcernVictimCount") && !value["ConcernVictimCount"].IsNull())
    {
        if (!value["ConcernVictimCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.ConcernVictimCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_concernVictimCount = value["ConcernVictimCount"].GetInt64();
        m_concernVictimCountHasBeenSet = true;
    }

    if (value.HasMember("VictimAssetType") && !value["VictimAssetType"].IsNull())
    {
        if (!value["VictimAssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.VictimAssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_victimAssetType = string(value["VictimAssetType"].GetString());
        m_victimAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("SubType") && !value["SubType"].IsNull())
    {
        if (!value["SubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.SubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subType = string(value["SubType"].GetString());
        m_subTypeHasBeenSet = true;
    }

    if (value.HasMember("AttackName") && !value["AttackName"].IsNull())
    {
        if (!value["AttackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.AttackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackName = string(value["AttackName"].GetString());
        m_attackNameHasBeenSet = true;
    }

    if (value.HasMember("AssetPublicIp") && !value["AssetPublicIp"].IsNull())
    {
        if (!value["AssetPublicIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlertType.AssetPublicIp` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetPublicIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assetPublicIp.push_back((*itr).GetString());
        }
        m_assetPublicIpHasBeenSet = true;
    }

    if (value.HasMember("AttackTactic") && !value["AttackTactic"].IsNull())
    {
        if (!value["AttackTactic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.AttackTactic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackTactic = string(value["AttackTactic"].GetString());
        m_attackTacticHasBeenSet = true;
    }

    if (value.HasMember("VictimAssetSub") && !value["VictimAssetSub"].IsNull())
    {
        if (!value["VictimAssetSub"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.VictimAssetSub` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_victimAssetSub = string(value["VictimAssetSub"].GetString());
        m_victimAssetSubHasBeenSet = true;
    }

    if (value.HasMember("VictimAssetVpc") && !value["VictimAssetVpc"].IsNull())
    {
        if (!value["VictimAssetVpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.VictimAssetVpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_victimAssetVpc = string(value["VictimAssetVpc"].GetString());
        m_victimAssetVpcHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("AssetGroupName") && !value["AssetGroupName"].IsNull())
    {
        if (!value["AssetGroupName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlertType.AssetGroupName` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetGroupName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assetGroupName.push_back((*itr).GetString());
        }
        m_assetGroupNameHasBeenSet = true;
    }

    if (value.HasMember("AssetProjectName") && !value["AssetProjectName"].IsNull())
    {
        if (!value["AssetProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.AssetProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetProjectName = string(value["AssetProjectName"].GetString());
        m_assetProjectNameHasBeenSet = true;
    }

    if (value.HasMember("VictimAssetContent") && !value["VictimAssetContent"].IsNull())
    {
        if (!value["VictimAssetContent"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlertType.VictimAssetContent` is not array type"));

        const rapidjson::Value &tmpValue = value["VictimAssetContent"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_victimAssetContent.push_back((*itr).GetString());
        }
        m_victimAssetContentHasBeenSet = true;
    }

    if (value.HasMember("WrongReportStatus") && !value["WrongReportStatus"].IsNull())
    {
        if (!value["WrongReportStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.WrongReportStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wrongReportStatus = value["WrongReportStatus"].GetInt64();
        m_wrongReportStatusHasBeenSet = true;
    }

    if (value.HasMember("WrongReportConditionId") && !value["WrongReportConditionId"].IsNull())
    {
        if (!value["WrongReportConditionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertType.WrongReportConditionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wrongReportConditionId = value["WrongReportConditionId"].GetInt64();
        m_wrongReportConditionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlertType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_alertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetPrivateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetPrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetPrivateIp.begin(); itr != m_assetPrivateIp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alertNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_attackChainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackChain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackChain.c_str(), allocator).Move(), allocator);
    }

    if (m_attackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackId.c_str(), allocator).Move(), allocator);
    }

    if (m_concernsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concerns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_concerns.begin(); itr != m_concerns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

    if (m_attackResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackResult, allocator);
    }

    if (m_eventStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventStatus, allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_concernMaliciousCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcernMaliciousCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concernMaliciousCount, allocator);
    }

    if (m_concernVictimCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcernVictimCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concernVictimCount, allocator);
    }

    if (m_victimAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VictimAssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_victimAssetType.c_str(), allocator).Move(), allocator);
    }

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
    }

    if (m_attackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetPublicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetPublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetPublicIp.begin(); itr != m_assetPublicIp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_attackTacticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTactic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackTactic.c_str(), allocator).Move(), allocator);
    }

    if (m_victimAssetSubHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VictimAssetSub";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_victimAssetSub.c_str(), allocator).Move(), allocator);
    }

    if (m_victimAssetVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VictimAssetVpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_victimAssetVpc.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_assetGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetGroupName.begin(); itr != m_assetGroupName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetProjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetProjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_victimAssetContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VictimAssetContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_victimAssetContent.begin(); itr != m_victimAssetContent.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_wrongReportStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WrongReportStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wrongReportStatus, allocator);
    }

    if (m_wrongReportConditionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WrongReportConditionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wrongReportConditionId, allocator);
    }

}


string AlertType::GetAlertTime() const
{
    return m_alertTime;
}

void AlertType::SetAlertTime(const string& _alertTime)
{
    m_alertTime = _alertTime;
    m_alertTimeHasBeenSet = true;
}

bool AlertType::AlertTimeHasBeenSet() const
{
    return m_alertTimeHasBeenSet;
}

string AlertType::GetAlertId() const
{
    return m_alertId;
}

void AlertType::SetAlertId(const string& _alertId)
{
    m_alertId = _alertId;
    m_alertIdHasBeenSet = true;
}

bool AlertType::AlertIdHasBeenSet() const
{
    return m_alertIdHasBeenSet;
}

string AlertType::GetAssetId() const
{
    return m_assetId;
}

void AlertType::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool AlertType::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

vector<string> AlertType::GetAssetPrivateIp() const
{
    return m_assetPrivateIp;
}

void AlertType::SetAssetPrivateIp(const vector<string>& _assetPrivateIp)
{
    m_assetPrivateIp = _assetPrivateIp;
    m_assetPrivateIpHasBeenSet = true;
}

bool AlertType::AssetPrivateIpHasBeenSet() const
{
    return m_assetPrivateIpHasBeenSet;
}

string AlertType::GetAlertName() const
{
    return m_alertName;
}

void AlertType::SetAlertName(const string& _alertName)
{
    m_alertName = _alertName;
    m_alertNameHasBeenSet = true;
}

bool AlertType::AlertNameHasBeenSet() const
{
    return m_alertNameHasBeenSet;
}

int64_t AlertType::GetLevel() const
{
    return m_level;
}

void AlertType::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool AlertType::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string AlertType::GetType() const
{
    return m_type;
}

void AlertType::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AlertType::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AlertType::GetSource() const
{
    return m_source;
}

void AlertType::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool AlertType::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string AlertType::GetAttackChain() const
{
    return m_attackChain;
}

void AlertType::SetAttackChain(const string& _attackChain)
{
    m_attackChain = _attackChain;
    m_attackChainHasBeenSet = true;
}

bool AlertType::AttackChainHasBeenSet() const
{
    return m_attackChainHasBeenSet;
}

string AlertType::GetAttackId() const
{
    return m_attackId;
}

void AlertType::SetAttackId(const string& _attackId)
{
    m_attackId = _attackId;
    m_attackIdHasBeenSet = true;
}

bool AlertType::AttackIdHasBeenSet() const
{
    return m_attackIdHasBeenSet;
}

vector<ConcernInfo> AlertType::GetConcerns() const
{
    return m_concerns;
}

void AlertType::SetConcerns(const vector<ConcernInfo>& _concerns)
{
    m_concerns = _concerns;
    m_concernsHasBeenSet = true;
}

bool AlertType::ConcernsHasBeenSet() const
{
    return m_concernsHasBeenSet;
}

int64_t AlertType::GetAction() const
{
    return m_action;
}

void AlertType::SetAction(const int64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool AlertType::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

int64_t AlertType::GetAttackResult() const
{
    return m_attackResult;
}

void AlertType::SetAttackResult(const int64_t& _attackResult)
{
    m_attackResult = _attackResult;
    m_attackResultHasBeenSet = true;
}

bool AlertType::AttackResultHasBeenSet() const
{
    return m_attackResultHasBeenSet;
}

int64_t AlertType::GetEventStatus() const
{
    return m_eventStatus;
}

void AlertType::SetEventStatus(const int64_t& _eventStatus)
{
    m_eventStatus = _eventStatus;
    m_eventStatusHasBeenSet = true;
}

bool AlertType::EventStatusHasBeenSet() const
{
    return m_eventStatusHasBeenSet;
}

string AlertType::GetEventId() const
{
    return m_eventId;
}

void AlertType::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool AlertType::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

int64_t AlertType::GetStatus() const
{
    return m_status;
}

void AlertType::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AlertType::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AlertType::GetAssetName() const
{
    return m_assetName;
}

void AlertType::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool AlertType::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

int64_t AlertType::GetConcernMaliciousCount() const
{
    return m_concernMaliciousCount;
}

void AlertType::SetConcernMaliciousCount(const int64_t& _concernMaliciousCount)
{
    m_concernMaliciousCount = _concernMaliciousCount;
    m_concernMaliciousCountHasBeenSet = true;
}

bool AlertType::ConcernMaliciousCountHasBeenSet() const
{
    return m_concernMaliciousCountHasBeenSet;
}

int64_t AlertType::GetConcernVictimCount() const
{
    return m_concernVictimCount;
}

void AlertType::SetConcernVictimCount(const int64_t& _concernVictimCount)
{
    m_concernVictimCount = _concernVictimCount;
    m_concernVictimCountHasBeenSet = true;
}

bool AlertType::ConcernVictimCountHasBeenSet() const
{
    return m_concernVictimCountHasBeenSet;
}

string AlertType::GetVictimAssetType() const
{
    return m_victimAssetType;
}

void AlertType::SetVictimAssetType(const string& _victimAssetType)
{
    m_victimAssetType = _victimAssetType;
    m_victimAssetTypeHasBeenSet = true;
}

bool AlertType::VictimAssetTypeHasBeenSet() const
{
    return m_victimAssetTypeHasBeenSet;
}

string AlertType::GetSubType() const
{
    return m_subType;
}

void AlertType::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool AlertType::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

string AlertType::GetAttackName() const
{
    return m_attackName;
}

void AlertType::SetAttackName(const string& _attackName)
{
    m_attackName = _attackName;
    m_attackNameHasBeenSet = true;
}

bool AlertType::AttackNameHasBeenSet() const
{
    return m_attackNameHasBeenSet;
}

vector<string> AlertType::GetAssetPublicIp() const
{
    return m_assetPublicIp;
}

void AlertType::SetAssetPublicIp(const vector<string>& _assetPublicIp)
{
    m_assetPublicIp = _assetPublicIp;
    m_assetPublicIpHasBeenSet = true;
}

bool AlertType::AssetPublicIpHasBeenSet() const
{
    return m_assetPublicIpHasBeenSet;
}

string AlertType::GetAttackTactic() const
{
    return m_attackTactic;
}

void AlertType::SetAttackTactic(const string& _attackTactic)
{
    m_attackTactic = _attackTactic;
    m_attackTacticHasBeenSet = true;
}

bool AlertType::AttackTacticHasBeenSet() const
{
    return m_attackTacticHasBeenSet;
}

string AlertType::GetVictimAssetSub() const
{
    return m_victimAssetSub;
}

void AlertType::SetVictimAssetSub(const string& _victimAssetSub)
{
    m_victimAssetSub = _victimAssetSub;
    m_victimAssetSubHasBeenSet = true;
}

bool AlertType::VictimAssetSubHasBeenSet() const
{
    return m_victimAssetSubHasBeenSet;
}

string AlertType::GetVictimAssetVpc() const
{
    return m_victimAssetVpc;
}

void AlertType::SetVictimAssetVpc(const string& _victimAssetVpc)
{
    m_victimAssetVpc = _victimAssetVpc;
    m_victimAssetVpcHasBeenSet = true;
}

bool AlertType::VictimAssetVpcHasBeenSet() const
{
    return m_victimAssetVpcHasBeenSet;
}

string AlertType::GetTimestamp() const
{
    return m_timestamp;
}

void AlertType::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool AlertType::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

vector<string> AlertType::GetAssetGroupName() const
{
    return m_assetGroupName;
}

void AlertType::SetAssetGroupName(const vector<string>& _assetGroupName)
{
    m_assetGroupName = _assetGroupName;
    m_assetGroupNameHasBeenSet = true;
}

bool AlertType::AssetGroupNameHasBeenSet() const
{
    return m_assetGroupNameHasBeenSet;
}

string AlertType::GetAssetProjectName() const
{
    return m_assetProjectName;
}

void AlertType::SetAssetProjectName(const string& _assetProjectName)
{
    m_assetProjectName = _assetProjectName;
    m_assetProjectNameHasBeenSet = true;
}

bool AlertType::AssetProjectNameHasBeenSet() const
{
    return m_assetProjectNameHasBeenSet;
}

vector<string> AlertType::GetVictimAssetContent() const
{
    return m_victimAssetContent;
}

void AlertType::SetVictimAssetContent(const vector<string>& _victimAssetContent)
{
    m_victimAssetContent = _victimAssetContent;
    m_victimAssetContentHasBeenSet = true;
}

bool AlertType::VictimAssetContentHasBeenSet() const
{
    return m_victimAssetContentHasBeenSet;
}

int64_t AlertType::GetWrongReportStatus() const
{
    return m_wrongReportStatus;
}

void AlertType::SetWrongReportStatus(const int64_t& _wrongReportStatus)
{
    m_wrongReportStatus = _wrongReportStatus;
    m_wrongReportStatusHasBeenSet = true;
}

bool AlertType::WrongReportStatusHasBeenSet() const
{
    return m_wrongReportStatusHasBeenSet;
}

int64_t AlertType::GetWrongReportConditionId() const
{
    return m_wrongReportConditionId;
}

void AlertType::SetWrongReportConditionId(const int64_t& _wrongReportConditionId)
{
    m_wrongReportConditionId = _wrongReportConditionId;
    m_wrongReportConditionIdHasBeenSet = true;
}

bool AlertType::WrongReportConditionIdHasBeenSet() const
{
    return m_wrongReportConditionIdHasBeenSet;
}

