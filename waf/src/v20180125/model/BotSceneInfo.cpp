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

#include <tencentcloud/waf/v20180125/model/BotSceneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

BotSceneInfo::BotSceneInfo() :
    m_sceneIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sceneNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_businessTypeHasBeenSet(false),
    m_clientTypeHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_matchConditionHasBeenSet(false),
    m_sceneStatusHasBeenSet(false),
    m_jsInjectStatusHasBeenSet(false),
    m_aIStatusHasBeenSet(false),
    m_tIStatusHasBeenSet(false),
    m_statisticStatusHasBeenSet(false),
    m_actionRuleCountHasBeenSet(false),
    m_uCBCountHasBeenSet(false),
    m_matchTypeHasBeenSet(false),
    m_actionMatchTypeHasBeenSet(false),
    m_uAStatusHasBeenSet(false),
    m_jsInjectRuleIdHasBeenSet(false),
    m_jsInjectActionHasBeenSet(false),
    m_jsInjectRedirectHasBeenSet(false),
    m_actionRuleListHasBeenSet(false),
    m_botIdPatternHasBeenSet(false),
    m_botIdCountHasBeenSet(false),
    m_botIdMonitorCountHasBeenSet(false),
    m_botIdInterceptCountHasBeenSet(false),
    m_ruleSetSelectionHasBeenSet(false),
    m_tokenListHasBeenSet(false),
    m_botIdRedirectCountHasBeenSet(false),
    m_botIdCaptchaCountHasBeenSet(false),
    m_botIdProtectLevelHasBeenSet(false),
    m_botIdGlobalRedirectHasBeenSet(false),
    m_botIdJsChallengeCountHasBeenSet(false)
{
}

CoreInternalOutcome BotSceneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SceneId") && !value["SceneId"].IsNull())
    {
        if (!value["SceneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.SceneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneId = string(value["SceneId"].GetString());
        m_sceneIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SceneName") && !value["SceneName"].IsNull())
    {
        if (!value["SceneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.SceneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneName = string(value["SceneName"].GetString());
        m_sceneNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("BusinessType") && !value["BusinessType"].IsNull())
    {
        if (!value["BusinessType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.BusinessType` is not array type"));

        const rapidjson::Value &tmpValue = value["BusinessType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_businessType.push_back((*itr).GetString());
        }
        m_businessTypeHasBeenSet = true;
    }

    if (value.HasMember("ClientType") && !value["ClientType"].IsNull())
    {
        if (!value["ClientType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.ClientType` is not array type"));

        const rapidjson::Value &tmpValue = value["ClientType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_clientType.push_back((*itr).GetString());
        }
        m_clientTypeHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("MatchCondition") && !value["MatchCondition"].IsNull())
    {
        if (!value["MatchCondition"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.MatchCondition` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchCondition"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BotSceneMatchCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_matchCondition.push_back(item);
        }
        m_matchConditionHasBeenSet = true;
    }

    if (value.HasMember("SceneStatus") && !value["SceneStatus"].IsNull())
    {
        if (!value["SceneStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.SceneStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sceneStatus = value["SceneStatus"].GetBool();
        m_sceneStatusHasBeenSet = true;
    }

    if (value.HasMember("JsInjectStatus") && !value["JsInjectStatus"].IsNull())
    {
        if (!value["JsInjectStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.JsInjectStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_jsInjectStatus = value["JsInjectStatus"].GetBool();
        m_jsInjectStatusHasBeenSet = true;
    }

    if (value.HasMember("AIStatus") && !value["AIStatus"].IsNull())
    {
        if (!value["AIStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.AIStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_aIStatus = value["AIStatus"].GetBool();
        m_aIStatusHasBeenSet = true;
    }

    if (value.HasMember("TIStatus") && !value["TIStatus"].IsNull())
    {
        if (!value["TIStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.TIStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tIStatus = value["TIStatus"].GetBool();
        m_tIStatusHasBeenSet = true;
    }

    if (value.HasMember("StatisticStatus") && !value["StatisticStatus"].IsNull())
    {
        if (!value["StatisticStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.StatisticStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_statisticStatus = value["StatisticStatus"].GetBool();
        m_statisticStatusHasBeenSet = true;
    }

    if (value.HasMember("ActionRuleCount") && !value["ActionRuleCount"].IsNull())
    {
        if (!value["ActionRuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.ActionRuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionRuleCount = value["ActionRuleCount"].GetInt64();
        m_actionRuleCountHasBeenSet = true;
    }

    if (value.HasMember("UCBCount") && !value["UCBCount"].IsNull())
    {
        if (!value["UCBCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.UCBCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uCBCount = value["UCBCount"].GetInt64();
        m_uCBCountHasBeenSet = true;
    }

    if (value.HasMember("MatchType") && !value["MatchType"].IsNull())
    {
        if (!value["MatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.MatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchType = string(value["MatchType"].GetString());
        m_matchTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionMatchType") && !value["ActionMatchType"].IsNull())
    {
        if (!value["ActionMatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.ActionMatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionMatchType = string(value["ActionMatchType"].GetString());
        m_actionMatchTypeHasBeenSet = true;
    }

    if (value.HasMember("UAStatus") && !value["UAStatus"].IsNull())
    {
        if (!value["UAStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.UAStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_uAStatus = value["UAStatus"].GetBool();
        m_uAStatusHasBeenSet = true;
    }

    if (value.HasMember("JsInjectRuleId") && !value["JsInjectRuleId"].IsNull())
    {
        if (!value["JsInjectRuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.JsInjectRuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jsInjectRuleId = value["JsInjectRuleId"].GetInt64();
        m_jsInjectRuleIdHasBeenSet = true;
    }

    if (value.HasMember("JsInjectAction") && !value["JsInjectAction"].IsNull())
    {
        if (!value["JsInjectAction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.JsInjectAction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jsInjectAction = value["JsInjectAction"].GetInt64();
        m_jsInjectActionHasBeenSet = true;
    }

    if (value.HasMember("JsInjectRedirect") && !value["JsInjectRedirect"].IsNull())
    {
        if (!value["JsInjectRedirect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.JsInjectRedirect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jsInjectRedirect = string(value["JsInjectRedirect"].GetString());
        m_jsInjectRedirectHasBeenSet = true;
    }

    if (value.HasMember("ActionRuleList") && !value["ActionRuleList"].IsNull())
    {
        if (!value["ActionRuleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.ActionRuleList` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionRuleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BotSceneActionRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_actionRuleList.push_back(item);
        }
        m_actionRuleListHasBeenSet = true;
    }

    if (value.HasMember("BotIdPattern") && !value["BotIdPattern"].IsNull())
    {
        if (!value["BotIdPattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.BotIdPattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botIdPattern = string(value["BotIdPattern"].GetString());
        m_botIdPatternHasBeenSet = true;
    }

    if (value.HasMember("BotIdCount") && !value["BotIdCount"].IsNull())
    {
        if (!value["BotIdCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.BotIdCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_botIdCount = value["BotIdCount"].GetInt64();
        m_botIdCountHasBeenSet = true;
    }

    if (value.HasMember("BotIdMonitorCount") && !value["BotIdMonitorCount"].IsNull())
    {
        if (!value["BotIdMonitorCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.BotIdMonitorCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_botIdMonitorCount = value["BotIdMonitorCount"].GetInt64();
        m_botIdMonitorCountHasBeenSet = true;
    }

    if (value.HasMember("BotIdInterceptCount") && !value["BotIdInterceptCount"].IsNull())
    {
        if (!value["BotIdInterceptCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.BotIdInterceptCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_botIdInterceptCount = value["BotIdInterceptCount"].GetInt64();
        m_botIdInterceptCountHasBeenSet = true;
    }

    if (value.HasMember("RuleSetSelection") && !value["RuleSetSelection"].IsNull())
    {
        if (!value["RuleSetSelection"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.RuleSetSelection` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleSetSelection"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleSetSelection.push_back((*itr).GetString());
        }
        m_ruleSetSelectionHasBeenSet = true;
    }

    if (value.HasMember("TokenList") && !value["TokenList"].IsNull())
    {
        if (!value["TokenList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.TokenList` is not array type"));

        const rapidjson::Value &tmpValue = value["TokenList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BotToken item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tokenList.push_back(item);
        }
        m_tokenListHasBeenSet = true;
    }

    if (value.HasMember("BotIdRedirectCount") && !value["BotIdRedirectCount"].IsNull())
    {
        if (!value["BotIdRedirectCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.BotIdRedirectCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_botIdRedirectCount = value["BotIdRedirectCount"].GetInt64();
        m_botIdRedirectCountHasBeenSet = true;
    }

    if (value.HasMember("BotIdCaptchaCount") && !value["BotIdCaptchaCount"].IsNull())
    {
        if (!value["BotIdCaptchaCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.BotIdCaptchaCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_botIdCaptchaCount = value["BotIdCaptchaCount"].GetInt64();
        m_botIdCaptchaCountHasBeenSet = true;
    }

    if (value.HasMember("BotIdProtectLevel") && !value["BotIdProtectLevel"].IsNull())
    {
        if (!value["BotIdProtectLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.BotIdProtectLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botIdProtectLevel = string(value["BotIdProtectLevel"].GetString());
        m_botIdProtectLevelHasBeenSet = true;
    }

    if (value.HasMember("BotIdGlobalRedirect") && !value["BotIdGlobalRedirect"].IsNull())
    {
        if (!value["BotIdGlobalRedirect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.BotIdGlobalRedirect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botIdGlobalRedirect = string(value["BotIdGlobalRedirect"].GetString());
        m_botIdGlobalRedirectHasBeenSet = true;
    }

    if (value.HasMember("BotIdJsChallengeCount") && !value["BotIdJsChallengeCount"].IsNull())
    {
        if (!value["BotIdJsChallengeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneInfo.BotIdJsChallengeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_botIdJsChallengeCount = value["BotIdJsChallengeCount"].GetInt64();
        m_botIdJsChallengeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotSceneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_businessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_businessType.begin(); itr != m_businessType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clientType.begin(); itr != m_clientType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_matchConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_matchCondition.begin(); itr != m_matchCondition.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sceneStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sceneStatus, allocator);
    }

    if (m_jsInjectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsInjectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jsInjectStatus, allocator);
    }

    if (m_aIStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aIStatus, allocator);
    }

    if (m_tIStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TIStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tIStatus, allocator);
    }

    if (m_statisticStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statisticStatus, allocator);
    }

    if (m_actionRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionRuleCount, allocator);
    }

    if (m_uCBCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UCBCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uCBCount, allocator);
    }

    if (m_matchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionMatchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionMatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionMatchType.c_str(), allocator).Move(), allocator);
    }

    if (m_uAStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UAStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uAStatus, allocator);
    }

    if (m_jsInjectRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsInjectRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jsInjectRuleId, allocator);
    }

    if (m_jsInjectActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsInjectAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jsInjectAction, allocator);
    }

    if (m_jsInjectRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsInjectRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jsInjectRedirect.c_str(), allocator).Move(), allocator);
    }

    if (m_actionRuleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionRuleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_actionRuleList.begin(); itr != m_actionRuleList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_botIdPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotIdPattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botIdPattern.c_str(), allocator).Move(), allocator);
    }

    if (m_botIdCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotIdCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_botIdCount, allocator);
    }

    if (m_botIdMonitorCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotIdMonitorCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_botIdMonitorCount, allocator);
    }

    if (m_botIdInterceptCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotIdInterceptCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_botIdInterceptCount, allocator);
    }

    if (m_ruleSetSelectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleSetSelection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleSetSelection.begin(); itr != m_ruleSetSelection.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tokenListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tokenList.begin(); itr != m_tokenList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_botIdRedirectCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotIdRedirectCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_botIdRedirectCount, allocator);
    }

    if (m_botIdCaptchaCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotIdCaptchaCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_botIdCaptchaCount, allocator);
    }

    if (m_botIdProtectLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotIdProtectLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botIdProtectLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_botIdGlobalRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotIdGlobalRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botIdGlobalRedirect.c_str(), allocator).Move(), allocator);
    }

    if (m_botIdJsChallengeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotIdJsChallengeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_botIdJsChallengeCount, allocator);
    }

}


string BotSceneInfo::GetSceneId() const
{
    return m_sceneId;
}

void BotSceneInfo::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool BotSceneInfo::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

string BotSceneInfo::GetType() const
{
    return m_type;
}

void BotSceneInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BotSceneInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string BotSceneInfo::GetSceneName() const
{
    return m_sceneName;
}

void BotSceneInfo::SetSceneName(const string& _sceneName)
{
    m_sceneName = _sceneName;
    m_sceneNameHasBeenSet = true;
}

bool BotSceneInfo::SceneNameHasBeenSet() const
{
    return m_sceneNameHasBeenSet;
}

int64_t BotSceneInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void BotSceneInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BotSceneInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<string> BotSceneInfo::GetBusinessType() const
{
    return m_businessType;
}

void BotSceneInfo::SetBusinessType(const vector<string>& _businessType)
{
    m_businessType = _businessType;
    m_businessTypeHasBeenSet = true;
}

bool BotSceneInfo::BusinessTypeHasBeenSet() const
{
    return m_businessTypeHasBeenSet;
}

vector<string> BotSceneInfo::GetClientType() const
{
    return m_clientType;
}

void BotSceneInfo::SetClientType(const vector<string>& _clientType)
{
    m_clientType = _clientType;
    m_clientTypeHasBeenSet = true;
}

bool BotSceneInfo::ClientTypeHasBeenSet() const
{
    return m_clientTypeHasBeenSet;
}

int64_t BotSceneInfo::GetPriority() const
{
    return m_priority;
}

void BotSceneInfo::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool BotSceneInfo::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

vector<BotSceneMatchCondition> BotSceneInfo::GetMatchCondition() const
{
    return m_matchCondition;
}

void BotSceneInfo::SetMatchCondition(const vector<BotSceneMatchCondition>& _matchCondition)
{
    m_matchCondition = _matchCondition;
    m_matchConditionHasBeenSet = true;
}

bool BotSceneInfo::MatchConditionHasBeenSet() const
{
    return m_matchConditionHasBeenSet;
}

bool BotSceneInfo::GetSceneStatus() const
{
    return m_sceneStatus;
}

void BotSceneInfo::SetSceneStatus(const bool& _sceneStatus)
{
    m_sceneStatus = _sceneStatus;
    m_sceneStatusHasBeenSet = true;
}

bool BotSceneInfo::SceneStatusHasBeenSet() const
{
    return m_sceneStatusHasBeenSet;
}

bool BotSceneInfo::GetJsInjectStatus() const
{
    return m_jsInjectStatus;
}

void BotSceneInfo::SetJsInjectStatus(const bool& _jsInjectStatus)
{
    m_jsInjectStatus = _jsInjectStatus;
    m_jsInjectStatusHasBeenSet = true;
}

bool BotSceneInfo::JsInjectStatusHasBeenSet() const
{
    return m_jsInjectStatusHasBeenSet;
}

bool BotSceneInfo::GetAIStatus() const
{
    return m_aIStatus;
}

void BotSceneInfo::SetAIStatus(const bool& _aIStatus)
{
    m_aIStatus = _aIStatus;
    m_aIStatusHasBeenSet = true;
}

bool BotSceneInfo::AIStatusHasBeenSet() const
{
    return m_aIStatusHasBeenSet;
}

bool BotSceneInfo::GetTIStatus() const
{
    return m_tIStatus;
}

void BotSceneInfo::SetTIStatus(const bool& _tIStatus)
{
    m_tIStatus = _tIStatus;
    m_tIStatusHasBeenSet = true;
}

bool BotSceneInfo::TIStatusHasBeenSet() const
{
    return m_tIStatusHasBeenSet;
}

bool BotSceneInfo::GetStatisticStatus() const
{
    return m_statisticStatus;
}

void BotSceneInfo::SetStatisticStatus(const bool& _statisticStatus)
{
    m_statisticStatus = _statisticStatus;
    m_statisticStatusHasBeenSet = true;
}

bool BotSceneInfo::StatisticStatusHasBeenSet() const
{
    return m_statisticStatusHasBeenSet;
}

int64_t BotSceneInfo::GetActionRuleCount() const
{
    return m_actionRuleCount;
}

void BotSceneInfo::SetActionRuleCount(const int64_t& _actionRuleCount)
{
    m_actionRuleCount = _actionRuleCount;
    m_actionRuleCountHasBeenSet = true;
}

bool BotSceneInfo::ActionRuleCountHasBeenSet() const
{
    return m_actionRuleCountHasBeenSet;
}

int64_t BotSceneInfo::GetUCBCount() const
{
    return m_uCBCount;
}

void BotSceneInfo::SetUCBCount(const int64_t& _uCBCount)
{
    m_uCBCount = _uCBCount;
    m_uCBCountHasBeenSet = true;
}

bool BotSceneInfo::UCBCountHasBeenSet() const
{
    return m_uCBCountHasBeenSet;
}

string BotSceneInfo::GetMatchType() const
{
    return m_matchType;
}

void BotSceneInfo::SetMatchType(const string& _matchType)
{
    m_matchType = _matchType;
    m_matchTypeHasBeenSet = true;
}

bool BotSceneInfo::MatchTypeHasBeenSet() const
{
    return m_matchTypeHasBeenSet;
}

string BotSceneInfo::GetActionMatchType() const
{
    return m_actionMatchType;
}

void BotSceneInfo::SetActionMatchType(const string& _actionMatchType)
{
    m_actionMatchType = _actionMatchType;
    m_actionMatchTypeHasBeenSet = true;
}

bool BotSceneInfo::ActionMatchTypeHasBeenSet() const
{
    return m_actionMatchTypeHasBeenSet;
}

bool BotSceneInfo::GetUAStatus() const
{
    return m_uAStatus;
}

void BotSceneInfo::SetUAStatus(const bool& _uAStatus)
{
    m_uAStatus = _uAStatus;
    m_uAStatusHasBeenSet = true;
}

bool BotSceneInfo::UAStatusHasBeenSet() const
{
    return m_uAStatusHasBeenSet;
}

int64_t BotSceneInfo::GetJsInjectRuleId() const
{
    return m_jsInjectRuleId;
}

void BotSceneInfo::SetJsInjectRuleId(const int64_t& _jsInjectRuleId)
{
    m_jsInjectRuleId = _jsInjectRuleId;
    m_jsInjectRuleIdHasBeenSet = true;
}

bool BotSceneInfo::JsInjectRuleIdHasBeenSet() const
{
    return m_jsInjectRuleIdHasBeenSet;
}

int64_t BotSceneInfo::GetJsInjectAction() const
{
    return m_jsInjectAction;
}

void BotSceneInfo::SetJsInjectAction(const int64_t& _jsInjectAction)
{
    m_jsInjectAction = _jsInjectAction;
    m_jsInjectActionHasBeenSet = true;
}

bool BotSceneInfo::JsInjectActionHasBeenSet() const
{
    return m_jsInjectActionHasBeenSet;
}

string BotSceneInfo::GetJsInjectRedirect() const
{
    return m_jsInjectRedirect;
}

void BotSceneInfo::SetJsInjectRedirect(const string& _jsInjectRedirect)
{
    m_jsInjectRedirect = _jsInjectRedirect;
    m_jsInjectRedirectHasBeenSet = true;
}

bool BotSceneInfo::JsInjectRedirectHasBeenSet() const
{
    return m_jsInjectRedirectHasBeenSet;
}

vector<BotSceneActionRule> BotSceneInfo::GetActionRuleList() const
{
    return m_actionRuleList;
}

void BotSceneInfo::SetActionRuleList(const vector<BotSceneActionRule>& _actionRuleList)
{
    m_actionRuleList = _actionRuleList;
    m_actionRuleListHasBeenSet = true;
}

bool BotSceneInfo::ActionRuleListHasBeenSet() const
{
    return m_actionRuleListHasBeenSet;
}

string BotSceneInfo::GetBotIdPattern() const
{
    return m_botIdPattern;
}

void BotSceneInfo::SetBotIdPattern(const string& _botIdPattern)
{
    m_botIdPattern = _botIdPattern;
    m_botIdPatternHasBeenSet = true;
}

bool BotSceneInfo::BotIdPatternHasBeenSet() const
{
    return m_botIdPatternHasBeenSet;
}

int64_t BotSceneInfo::GetBotIdCount() const
{
    return m_botIdCount;
}

void BotSceneInfo::SetBotIdCount(const int64_t& _botIdCount)
{
    m_botIdCount = _botIdCount;
    m_botIdCountHasBeenSet = true;
}

bool BotSceneInfo::BotIdCountHasBeenSet() const
{
    return m_botIdCountHasBeenSet;
}

int64_t BotSceneInfo::GetBotIdMonitorCount() const
{
    return m_botIdMonitorCount;
}

void BotSceneInfo::SetBotIdMonitorCount(const int64_t& _botIdMonitorCount)
{
    m_botIdMonitorCount = _botIdMonitorCount;
    m_botIdMonitorCountHasBeenSet = true;
}

bool BotSceneInfo::BotIdMonitorCountHasBeenSet() const
{
    return m_botIdMonitorCountHasBeenSet;
}

int64_t BotSceneInfo::GetBotIdInterceptCount() const
{
    return m_botIdInterceptCount;
}

void BotSceneInfo::SetBotIdInterceptCount(const int64_t& _botIdInterceptCount)
{
    m_botIdInterceptCount = _botIdInterceptCount;
    m_botIdInterceptCountHasBeenSet = true;
}

bool BotSceneInfo::BotIdInterceptCountHasBeenSet() const
{
    return m_botIdInterceptCountHasBeenSet;
}

vector<string> BotSceneInfo::GetRuleSetSelection() const
{
    return m_ruleSetSelection;
}

void BotSceneInfo::SetRuleSetSelection(const vector<string>& _ruleSetSelection)
{
    m_ruleSetSelection = _ruleSetSelection;
    m_ruleSetSelectionHasBeenSet = true;
}

bool BotSceneInfo::RuleSetSelectionHasBeenSet() const
{
    return m_ruleSetSelectionHasBeenSet;
}

vector<BotToken> BotSceneInfo::GetTokenList() const
{
    return m_tokenList;
}

void BotSceneInfo::SetTokenList(const vector<BotToken>& _tokenList)
{
    m_tokenList = _tokenList;
    m_tokenListHasBeenSet = true;
}

bool BotSceneInfo::TokenListHasBeenSet() const
{
    return m_tokenListHasBeenSet;
}

int64_t BotSceneInfo::GetBotIdRedirectCount() const
{
    return m_botIdRedirectCount;
}

void BotSceneInfo::SetBotIdRedirectCount(const int64_t& _botIdRedirectCount)
{
    m_botIdRedirectCount = _botIdRedirectCount;
    m_botIdRedirectCountHasBeenSet = true;
}

bool BotSceneInfo::BotIdRedirectCountHasBeenSet() const
{
    return m_botIdRedirectCountHasBeenSet;
}

int64_t BotSceneInfo::GetBotIdCaptchaCount() const
{
    return m_botIdCaptchaCount;
}

void BotSceneInfo::SetBotIdCaptchaCount(const int64_t& _botIdCaptchaCount)
{
    m_botIdCaptchaCount = _botIdCaptchaCount;
    m_botIdCaptchaCountHasBeenSet = true;
}

bool BotSceneInfo::BotIdCaptchaCountHasBeenSet() const
{
    return m_botIdCaptchaCountHasBeenSet;
}

string BotSceneInfo::GetBotIdProtectLevel() const
{
    return m_botIdProtectLevel;
}

void BotSceneInfo::SetBotIdProtectLevel(const string& _botIdProtectLevel)
{
    m_botIdProtectLevel = _botIdProtectLevel;
    m_botIdProtectLevelHasBeenSet = true;
}

bool BotSceneInfo::BotIdProtectLevelHasBeenSet() const
{
    return m_botIdProtectLevelHasBeenSet;
}

string BotSceneInfo::GetBotIdGlobalRedirect() const
{
    return m_botIdGlobalRedirect;
}

void BotSceneInfo::SetBotIdGlobalRedirect(const string& _botIdGlobalRedirect)
{
    m_botIdGlobalRedirect = _botIdGlobalRedirect;
    m_botIdGlobalRedirectHasBeenSet = true;
}

bool BotSceneInfo::BotIdGlobalRedirectHasBeenSet() const
{
    return m_botIdGlobalRedirectHasBeenSet;
}

int64_t BotSceneInfo::GetBotIdJsChallengeCount() const
{
    return m_botIdJsChallengeCount;
}

void BotSceneInfo::SetBotIdJsChallengeCount(const int64_t& _botIdJsChallengeCount)
{
    m_botIdJsChallengeCount = _botIdJsChallengeCount;
    m_botIdJsChallengeCountHasBeenSet = true;
}

bool BotSceneInfo::BotIdJsChallengeCountHasBeenSet() const
{
    return m_botIdJsChallengeCountHasBeenSet;
}

