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

#include <tencentcloud/securitylake/v20240117/model/SecurityAlarmTable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Securitylake::V20240117::Model;
using namespace std;

SecurityAlarmTable::SecurityAlarmTable() :
    m_timestampHasBeenSet(false),
    m_alarmNameHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_alarmIdHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_subCategoryHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleTopicHasBeenSet(false),
    m_handleTimeHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_attackNumHasBeenSet(false),
    m_alarmCountHasBeenSet(false),
    m_attackSubTechniqueHasBeenSet(false),
    m_attackTechniqueHasBeenSet(false),
    m_attackTacticHasBeenSet(false),
    m_attackSubTechniqueNameHasBeenSet(false),
    m_attackTechniqueNameHasBeenSet(false),
    m_attackTacticNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_ruleExpressionHasBeenSet(false),
    m_expressionTypeHasBeenSet(false),
    m_drillDownExpressionHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_srcPortHasBeenSet(false),
    m_dstIpHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_hostAssetHasBeenSet(false),
    m_sdlIdHasBeenSet(false),
    m_richCustomInfosHasBeenSet(false),
    m_attackerIpHasBeenSet(false),
    m_attackerAssetHasBeenSet(false),
    m_victimIpHasBeenSet(false),
    m_victimAssetHasBeenSet(false),
    m_attackDirectionHasBeenSet(false),
    m_trafficDirectionHasBeenSet(false),
    m_securityGroupAlertInfosHasBeenSet(false)
{
}

CoreInternalOutcome SecurityAlarmTable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("AlarmName") && !value["AlarmName"].IsNull())
    {
        if (!value["AlarmName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.AlarmName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmName = string(value["AlarmName"].GetString());
        m_alarmNameHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("AlarmId") && !value["AlarmId"].IsNull())
    {
        if (!value["AlarmId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.AlarmId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmId = value["AlarmId"].GetInt64();
        m_alarmIdHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.Severity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_severity = value["Severity"].GetInt64();
        m_severityHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("SubCategory") && !value["SubCategory"].IsNull())
    {
        if (!value["SubCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.SubCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subCategory = string(value["SubCategory"].GetString());
        m_subCategoryHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.Tags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tags = string(value["Tags"].GetString());
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Payload") && !value["Payload"].IsNull())
    {
        if (!value["Payload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.Payload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payload = string(value["Payload"].GetString());
        m_payloadHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RuleTopic") && !value["RuleTopic"].IsNull())
    {
        if (!value["RuleTopic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.RuleTopic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTopic = string(value["RuleTopic"].GetString());
        m_ruleTopicHasBeenSet = true;
    }

    if (value.HasMember("HandleTime") && !value["HandleTime"].IsNull())
    {
        if (!value["HandleTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.HandleTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handleTime = string(value["HandleTime"].GetString());
        m_handleTimeHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.EventTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = string(value["EventTime"].GetString());
        m_eventTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("AttackNum") && !value["AttackNum"].IsNull())
    {
        if (!value["AttackNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.AttackNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackNum = value["AttackNum"].GetInt64();
        m_attackNumHasBeenSet = true;
    }

    if (value.HasMember("AlarmCount") && !value["AlarmCount"].IsNull())
    {
        if (!value["AlarmCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.AlarmCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmCount = value["AlarmCount"].GetInt64();
        m_alarmCountHasBeenSet = true;
    }

    if (value.HasMember("AttackSubTechnique") && !value["AttackSubTechnique"].IsNull())
    {
        if (!value["AttackSubTechnique"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.AttackSubTechnique` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackSubTechnique = string(value["AttackSubTechnique"].GetString());
        m_attackSubTechniqueHasBeenSet = true;
    }

    if (value.HasMember("AttackTechnique") && !value["AttackTechnique"].IsNull())
    {
        if (!value["AttackTechnique"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.AttackTechnique` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackTechnique = string(value["AttackTechnique"].GetString());
        m_attackTechniqueHasBeenSet = true;
    }

    if (value.HasMember("AttackTactic") && !value["AttackTactic"].IsNull())
    {
        if (!value["AttackTactic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.AttackTactic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackTactic = string(value["AttackTactic"].GetString());
        m_attackTacticHasBeenSet = true;
    }

    if (value.HasMember("AttackSubTechniqueName") && !value["AttackSubTechniqueName"].IsNull())
    {
        if (!value["AttackSubTechniqueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.AttackSubTechniqueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackSubTechniqueName = string(value["AttackSubTechniqueName"].GetString());
        m_attackSubTechniqueNameHasBeenSet = true;
    }

    if (value.HasMember("AttackTechniqueName") && !value["AttackTechniqueName"].IsNull())
    {
        if (!value["AttackTechniqueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.AttackTechniqueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackTechniqueName = string(value["AttackTechniqueName"].GetString());
        m_attackTechniqueNameHasBeenSet = true;
    }

    if (value.HasMember("AttackTacticName") && !value["AttackTacticName"].IsNull())
    {
        if (!value["AttackTacticName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.AttackTacticName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackTacticName = string(value["AttackTacticName"].GetString());
        m_attackTacticNameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleExpression") && !value["RuleExpression"].IsNull())
    {
        if (!value["RuleExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.RuleExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleExpression = string(value["RuleExpression"].GetString());
        m_ruleExpressionHasBeenSet = true;
    }

    if (value.HasMember("ExpressionType") && !value["ExpressionType"].IsNull())
    {
        if (!value["ExpressionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.ExpressionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expressionType = string(value["ExpressionType"].GetString());
        m_expressionTypeHasBeenSet = true;
    }

    if (value.HasMember("DrillDownExpression") && !value["DrillDownExpression"].IsNull())
    {
        if (!value["DrillDownExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.DrillDownExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillDownExpression = string(value["DrillDownExpression"].GetString());
        m_drillDownExpressionHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("SrcPort") && !value["SrcPort"].IsNull())
    {
        if (!value["SrcPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.SrcPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_srcPort = value["SrcPort"].GetInt64();
        m_srcPortHasBeenSet = true;
    }

    if (value.HasMember("DstIp") && !value["DstIp"].IsNull())
    {
        if (!value["DstIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.DstIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIp = string(value["DstIp"].GetString());
        m_dstIpHasBeenSet = true;
    }

    if (value.HasMember("DstPort") && !value["DstPort"].IsNull())
    {
        if (!value["DstPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.DstPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dstPort = value["DstPort"].GetInt64();
        m_dstPortHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("HostAsset") && !value["HostAsset"].IsNull())
    {
        if (!value["HostAsset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.HostAsset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostAsset = string(value["HostAsset"].GetString());
        m_hostAssetHasBeenSet = true;
    }

    if (value.HasMember("SdlId") && !value["SdlId"].IsNull())
    {
        if (!value["SdlId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.SdlId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdlId = string(value["SdlId"].GetString());
        m_sdlIdHasBeenSet = true;
    }

    if (value.HasMember("RichCustomInfos") && !value["RichCustomInfos"].IsNull())
    {
        if (!value["RichCustomInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.RichCustomInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["RichCustomInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_richCustomInfos.push_back((*itr).GetString());
        }
        m_richCustomInfosHasBeenSet = true;
    }

    if (value.HasMember("AttackerIp") && !value["AttackerIp"].IsNull())
    {
        if (!value["AttackerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.AttackerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackerIp = string(value["AttackerIp"].GetString());
        m_attackerIpHasBeenSet = true;
    }

    if (value.HasMember("AttackerAsset") && !value["AttackerAsset"].IsNull())
    {
        if (!value["AttackerAsset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.AttackerAsset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackerAsset = string(value["AttackerAsset"].GetString());
        m_attackerAssetHasBeenSet = true;
    }

    if (value.HasMember("VictimIp") && !value["VictimIp"].IsNull())
    {
        if (!value["VictimIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.VictimIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_victimIp = string(value["VictimIp"].GetString());
        m_victimIpHasBeenSet = true;
    }

    if (value.HasMember("VictimAsset") && !value["VictimAsset"].IsNull())
    {
        if (!value["VictimAsset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.VictimAsset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_victimAsset = string(value["VictimAsset"].GetString());
        m_victimAssetHasBeenSet = true;
    }

    if (value.HasMember("AttackDirection") && !value["AttackDirection"].IsNull())
    {
        if (!value["AttackDirection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.AttackDirection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackDirection = string(value["AttackDirection"].GetString());
        m_attackDirectionHasBeenSet = true;
    }

    if (value.HasMember("TrafficDirection") && !value["TrafficDirection"].IsNull())
    {
        if (!value["TrafficDirection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.TrafficDirection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficDirection = string(value["TrafficDirection"].GetString());
        m_trafficDirectionHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupAlertInfos") && !value["SecurityGroupAlertInfos"].IsNull())
    {
        if (!value["SecurityGroupAlertInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityAlarmTable.SecurityGroupAlertInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupAlertInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupAlertInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_securityGroupAlertInfos.push_back(item);
        }
        m_securityGroupAlertInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityAlarmTable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmId, allocator);
    }

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_severity, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_subCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_handleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handleTime.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_attackNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackNum, allocator);
    }

    if (m_alarmCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmCount, allocator);
    }

    if (m_attackSubTechniqueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackSubTechnique";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackSubTechnique.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTechniqueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTechnique";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackTechnique.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTacticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTactic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackTactic.c_str(), allocator).Move(), allocator);
    }

    if (m_attackSubTechniqueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackSubTechniqueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackSubTechniqueName.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTechniqueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTechniqueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackTechniqueName.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTacticNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTacticName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackTacticName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_expressionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpressionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expressionType.c_str(), allocator).Move(), allocator);
    }

    if (m_drillDownExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillDownExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillDownExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_srcPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_srcPort, allocator);
    }

    if (m_dstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstPort, allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_hostAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostAsset.c_str(), allocator).Move(), allocator);
    }

    if (m_sdlIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdlId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdlId.c_str(), allocator).Move(), allocator);
    }

    if (m_richCustomInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RichCustomInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_richCustomInfos.begin(); itr != m_richCustomInfos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_attackerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_attackerAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackerAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackerAsset.c_str(), allocator).Move(), allocator);
    }

    if (m_victimIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VictimIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_victimIp.c_str(), allocator).Move(), allocator);
    }

    if (m_victimAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VictimAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_victimAsset.c_str(), allocator).Move(), allocator);
    }

    if (m_attackDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackDirection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficDirection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupAlertInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupAlertInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_securityGroupAlertInfos.begin(); itr != m_securityGroupAlertInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SecurityAlarmTable::GetTimestamp() const
{
    return m_timestamp;
}

void SecurityAlarmTable::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool SecurityAlarmTable::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string SecurityAlarmTable::GetAlarmName() const
{
    return m_alarmName;
}

void SecurityAlarmTable::SetAlarmName(const string& _alarmName)
{
    m_alarmName = _alarmName;
    m_alarmNameHasBeenSet = true;
}

bool SecurityAlarmTable::AlarmNameHasBeenSet() const
{
    return m_alarmNameHasBeenSet;
}

string SecurityAlarmTable::GetRuleName() const
{
    return m_ruleName;
}

void SecurityAlarmTable::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool SecurityAlarmTable::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t SecurityAlarmTable::GetAlarmId() const
{
    return m_alarmId;
}

void SecurityAlarmTable::SetAlarmId(const int64_t& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool SecurityAlarmTable::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

int64_t SecurityAlarmTable::GetSeverity() const
{
    return m_severity;
}

void SecurityAlarmTable::SetSeverity(const int64_t& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool SecurityAlarmTable::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

int64_t SecurityAlarmTable::GetScore() const
{
    return m_score;
}

void SecurityAlarmTable::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool SecurityAlarmTable::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string SecurityAlarmTable::GetCategory() const
{
    return m_category;
}

void SecurityAlarmTable::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool SecurityAlarmTable::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string SecurityAlarmTable::GetSubCategory() const
{
    return m_subCategory;
}

void SecurityAlarmTable::SetSubCategory(const string& _subCategory)
{
    m_subCategory = _subCategory;
    m_subCategoryHasBeenSet = true;
}

bool SecurityAlarmTable::SubCategoryHasBeenSet() const
{
    return m_subCategoryHasBeenSet;
}

string SecurityAlarmTable::GetTags() const
{
    return m_tags;
}

void SecurityAlarmTable::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SecurityAlarmTable::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string SecurityAlarmTable::GetPayload() const
{
    return m_payload;
}

void SecurityAlarmTable::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool SecurityAlarmTable::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

string SecurityAlarmTable::GetResult() const
{
    return m_result;
}

void SecurityAlarmTable::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool SecurityAlarmTable::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

int64_t SecurityAlarmTable::GetConfidence() const
{
    return m_confidence;
}

void SecurityAlarmTable::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool SecurityAlarmTable::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string SecurityAlarmTable::GetStatus() const
{
    return m_status;
}

void SecurityAlarmTable::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SecurityAlarmTable::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SecurityAlarmTable::GetRuleTopic() const
{
    return m_ruleTopic;
}

void SecurityAlarmTable::SetRuleTopic(const string& _ruleTopic)
{
    m_ruleTopic = _ruleTopic;
    m_ruleTopicHasBeenSet = true;
}

bool SecurityAlarmTable::RuleTopicHasBeenSet() const
{
    return m_ruleTopicHasBeenSet;
}

string SecurityAlarmTable::GetHandleTime() const
{
    return m_handleTime;
}

void SecurityAlarmTable::SetHandleTime(const string& _handleTime)
{
    m_handleTime = _handleTime;
    m_handleTimeHasBeenSet = true;
}

bool SecurityAlarmTable::HandleTimeHasBeenSet() const
{
    return m_handleTimeHasBeenSet;
}

string SecurityAlarmTable::GetSuggestion() const
{
    return m_suggestion;
}

void SecurityAlarmTable::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool SecurityAlarmTable::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string SecurityAlarmTable::GetDescription() const
{
    return m_description;
}

void SecurityAlarmTable::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SecurityAlarmTable::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SecurityAlarmTable::GetSourceName() const
{
    return m_sourceName;
}

void SecurityAlarmTable::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool SecurityAlarmTable::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

int64_t SecurityAlarmTable::GetAppId() const
{
    return m_appId;
}

void SecurityAlarmTable::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool SecurityAlarmTable::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t SecurityAlarmTable::GetRuleId() const
{
    return m_ruleId;
}

void SecurityAlarmTable::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool SecurityAlarmTable::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string SecurityAlarmTable::GetEventTime() const
{
    return m_eventTime;
}

void SecurityAlarmTable::SetEventTime(const string& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool SecurityAlarmTable::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

string SecurityAlarmTable::GetRuleType() const
{
    return m_ruleType;
}

void SecurityAlarmTable::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool SecurityAlarmTable::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

int64_t SecurityAlarmTable::GetAttackNum() const
{
    return m_attackNum;
}

void SecurityAlarmTable::SetAttackNum(const int64_t& _attackNum)
{
    m_attackNum = _attackNum;
    m_attackNumHasBeenSet = true;
}

bool SecurityAlarmTable::AttackNumHasBeenSet() const
{
    return m_attackNumHasBeenSet;
}

int64_t SecurityAlarmTable::GetAlarmCount() const
{
    return m_alarmCount;
}

void SecurityAlarmTable::SetAlarmCount(const int64_t& _alarmCount)
{
    m_alarmCount = _alarmCount;
    m_alarmCountHasBeenSet = true;
}

bool SecurityAlarmTable::AlarmCountHasBeenSet() const
{
    return m_alarmCountHasBeenSet;
}

string SecurityAlarmTable::GetAttackSubTechnique() const
{
    return m_attackSubTechnique;
}

void SecurityAlarmTable::SetAttackSubTechnique(const string& _attackSubTechnique)
{
    m_attackSubTechnique = _attackSubTechnique;
    m_attackSubTechniqueHasBeenSet = true;
}

bool SecurityAlarmTable::AttackSubTechniqueHasBeenSet() const
{
    return m_attackSubTechniqueHasBeenSet;
}

string SecurityAlarmTable::GetAttackTechnique() const
{
    return m_attackTechnique;
}

void SecurityAlarmTable::SetAttackTechnique(const string& _attackTechnique)
{
    m_attackTechnique = _attackTechnique;
    m_attackTechniqueHasBeenSet = true;
}

bool SecurityAlarmTable::AttackTechniqueHasBeenSet() const
{
    return m_attackTechniqueHasBeenSet;
}

string SecurityAlarmTable::GetAttackTactic() const
{
    return m_attackTactic;
}

void SecurityAlarmTable::SetAttackTactic(const string& _attackTactic)
{
    m_attackTactic = _attackTactic;
    m_attackTacticHasBeenSet = true;
}

bool SecurityAlarmTable::AttackTacticHasBeenSet() const
{
    return m_attackTacticHasBeenSet;
}

string SecurityAlarmTable::GetAttackSubTechniqueName() const
{
    return m_attackSubTechniqueName;
}

void SecurityAlarmTable::SetAttackSubTechniqueName(const string& _attackSubTechniqueName)
{
    m_attackSubTechniqueName = _attackSubTechniqueName;
    m_attackSubTechniqueNameHasBeenSet = true;
}

bool SecurityAlarmTable::AttackSubTechniqueNameHasBeenSet() const
{
    return m_attackSubTechniqueNameHasBeenSet;
}

string SecurityAlarmTable::GetAttackTechniqueName() const
{
    return m_attackTechniqueName;
}

void SecurityAlarmTable::SetAttackTechniqueName(const string& _attackTechniqueName)
{
    m_attackTechniqueName = _attackTechniqueName;
    m_attackTechniqueNameHasBeenSet = true;
}

bool SecurityAlarmTable::AttackTechniqueNameHasBeenSet() const
{
    return m_attackTechniqueNameHasBeenSet;
}

string SecurityAlarmTable::GetAttackTacticName() const
{
    return m_attackTacticName;
}

void SecurityAlarmTable::SetAttackTacticName(const string& _attackTacticName)
{
    m_attackTacticName = _attackTacticName;
    m_attackTacticNameHasBeenSet = true;
}

bool SecurityAlarmTable::AttackTacticNameHasBeenSet() const
{
    return m_attackTacticNameHasBeenSet;
}

string SecurityAlarmTable::GetStartTime() const
{
    return m_startTime;
}

void SecurityAlarmTable::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SecurityAlarmTable::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SecurityAlarmTable::GetEndTime() const
{
    return m_endTime;
}

void SecurityAlarmTable::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SecurityAlarmTable::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SecurityAlarmTable::GetRuleExpression() const
{
    return m_ruleExpression;
}

void SecurityAlarmTable::SetRuleExpression(const string& _ruleExpression)
{
    m_ruleExpression = _ruleExpression;
    m_ruleExpressionHasBeenSet = true;
}

bool SecurityAlarmTable::RuleExpressionHasBeenSet() const
{
    return m_ruleExpressionHasBeenSet;
}

string SecurityAlarmTable::GetExpressionType() const
{
    return m_expressionType;
}

void SecurityAlarmTable::SetExpressionType(const string& _expressionType)
{
    m_expressionType = _expressionType;
    m_expressionTypeHasBeenSet = true;
}

bool SecurityAlarmTable::ExpressionTypeHasBeenSet() const
{
    return m_expressionTypeHasBeenSet;
}

string SecurityAlarmTable::GetDrillDownExpression() const
{
    return m_drillDownExpression;
}

void SecurityAlarmTable::SetDrillDownExpression(const string& _drillDownExpression)
{
    m_drillDownExpression = _drillDownExpression;
    m_drillDownExpressionHasBeenSet = true;
}

bool SecurityAlarmTable::DrillDownExpressionHasBeenSet() const
{
    return m_drillDownExpressionHasBeenSet;
}

string SecurityAlarmTable::GetSrcIp() const
{
    return m_srcIp;
}

void SecurityAlarmTable::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool SecurityAlarmTable::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

int64_t SecurityAlarmTable::GetSrcPort() const
{
    return m_srcPort;
}

void SecurityAlarmTable::SetSrcPort(const int64_t& _srcPort)
{
    m_srcPort = _srcPort;
    m_srcPortHasBeenSet = true;
}

bool SecurityAlarmTable::SrcPortHasBeenSet() const
{
    return m_srcPortHasBeenSet;
}

string SecurityAlarmTable::GetDstIp() const
{
    return m_dstIp;
}

void SecurityAlarmTable::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool SecurityAlarmTable::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

int64_t SecurityAlarmTable::GetDstPort() const
{
    return m_dstPort;
}

void SecurityAlarmTable::SetDstPort(const int64_t& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool SecurityAlarmTable::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

string SecurityAlarmTable::GetHostIp() const
{
    return m_hostIp;
}

void SecurityAlarmTable::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool SecurityAlarmTable::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string SecurityAlarmTable::GetHostAsset() const
{
    return m_hostAsset;
}

void SecurityAlarmTable::SetHostAsset(const string& _hostAsset)
{
    m_hostAsset = _hostAsset;
    m_hostAssetHasBeenSet = true;
}

bool SecurityAlarmTable::HostAssetHasBeenSet() const
{
    return m_hostAssetHasBeenSet;
}

string SecurityAlarmTable::GetSdlId() const
{
    return m_sdlId;
}

void SecurityAlarmTable::SetSdlId(const string& _sdlId)
{
    m_sdlId = _sdlId;
    m_sdlIdHasBeenSet = true;
}

bool SecurityAlarmTable::SdlIdHasBeenSet() const
{
    return m_sdlIdHasBeenSet;
}

vector<string> SecurityAlarmTable::GetRichCustomInfos() const
{
    return m_richCustomInfos;
}

void SecurityAlarmTable::SetRichCustomInfos(const vector<string>& _richCustomInfos)
{
    m_richCustomInfos = _richCustomInfos;
    m_richCustomInfosHasBeenSet = true;
}

bool SecurityAlarmTable::RichCustomInfosHasBeenSet() const
{
    return m_richCustomInfosHasBeenSet;
}

string SecurityAlarmTable::GetAttackerIp() const
{
    return m_attackerIp;
}

void SecurityAlarmTable::SetAttackerIp(const string& _attackerIp)
{
    m_attackerIp = _attackerIp;
    m_attackerIpHasBeenSet = true;
}

bool SecurityAlarmTable::AttackerIpHasBeenSet() const
{
    return m_attackerIpHasBeenSet;
}

string SecurityAlarmTable::GetAttackerAsset() const
{
    return m_attackerAsset;
}

void SecurityAlarmTable::SetAttackerAsset(const string& _attackerAsset)
{
    m_attackerAsset = _attackerAsset;
    m_attackerAssetHasBeenSet = true;
}

bool SecurityAlarmTable::AttackerAssetHasBeenSet() const
{
    return m_attackerAssetHasBeenSet;
}

string SecurityAlarmTable::GetVictimIp() const
{
    return m_victimIp;
}

void SecurityAlarmTable::SetVictimIp(const string& _victimIp)
{
    m_victimIp = _victimIp;
    m_victimIpHasBeenSet = true;
}

bool SecurityAlarmTable::VictimIpHasBeenSet() const
{
    return m_victimIpHasBeenSet;
}

string SecurityAlarmTable::GetVictimAsset() const
{
    return m_victimAsset;
}

void SecurityAlarmTable::SetVictimAsset(const string& _victimAsset)
{
    m_victimAsset = _victimAsset;
    m_victimAssetHasBeenSet = true;
}

bool SecurityAlarmTable::VictimAssetHasBeenSet() const
{
    return m_victimAssetHasBeenSet;
}

string SecurityAlarmTable::GetAttackDirection() const
{
    return m_attackDirection;
}

void SecurityAlarmTable::SetAttackDirection(const string& _attackDirection)
{
    m_attackDirection = _attackDirection;
    m_attackDirectionHasBeenSet = true;
}

bool SecurityAlarmTable::AttackDirectionHasBeenSet() const
{
    return m_attackDirectionHasBeenSet;
}

string SecurityAlarmTable::GetTrafficDirection() const
{
    return m_trafficDirection;
}

void SecurityAlarmTable::SetTrafficDirection(const string& _trafficDirection)
{
    m_trafficDirection = _trafficDirection;
    m_trafficDirectionHasBeenSet = true;
}

bool SecurityAlarmTable::TrafficDirectionHasBeenSet() const
{
    return m_trafficDirectionHasBeenSet;
}

vector<SecurityGroupAlertInfo> SecurityAlarmTable::GetSecurityGroupAlertInfos() const
{
    return m_securityGroupAlertInfos;
}

void SecurityAlarmTable::SetSecurityGroupAlertInfos(const vector<SecurityGroupAlertInfo>& _securityGroupAlertInfos)
{
    m_securityGroupAlertInfos = _securityGroupAlertInfos;
    m_securityGroupAlertInfosHasBeenSet = true;
}

bool SecurityAlarmTable::SecurityGroupAlertInfosHasBeenSet() const
{
    return m_securityGroupAlertInfosHasBeenSet;
}

