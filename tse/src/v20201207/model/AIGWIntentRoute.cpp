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

#include <tencentcloud/tse/v20201207/model/AIGWIntentRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWIntentRoute::AIGWIntentRoute() :
    m_intentModelServiceIdHasBeenSet(false),
    m_confidenceThresholdHasBeenSet(false),
    m_defaultModelServiceIdHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

CoreInternalOutcome AIGWIntentRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IntentModelServiceId") && !value["IntentModelServiceId"].IsNull())
    {
        if (!value["IntentModelServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWIntentRoute.IntentModelServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intentModelServiceId = string(value["IntentModelServiceId"].GetString());
        m_intentModelServiceIdHasBeenSet = true;
    }

    if (value.HasMember("ConfidenceThreshold") && !value["ConfidenceThreshold"].IsNull())
    {
        if (!value["ConfidenceThreshold"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWIntentRoute.ConfidenceThreshold` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidenceThreshold = value["ConfidenceThreshold"].GetDouble();
        m_confidenceThresholdHasBeenSet = true;
    }

    if (value.HasMember("DefaultModelServiceId") && !value["DefaultModelServiceId"].IsNull())
    {
        if (!value["DefaultModelServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWIntentRoute.DefaultModelServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultModelServiceId = string(value["DefaultModelServiceId"].GetString());
        m_defaultModelServiceIdHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWIntentRoute.Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIGWIntentRouteRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rules.push_back(item);
        }
        m_rulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWIntentRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_intentModelServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentModelServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intentModelServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfidenceThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidenceThreshold, allocator);
    }

    if (m_defaultModelServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultModelServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultModelServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AIGWIntentRoute::GetIntentModelServiceId() const
{
    return m_intentModelServiceId;
}

void AIGWIntentRoute::SetIntentModelServiceId(const string& _intentModelServiceId)
{
    m_intentModelServiceId = _intentModelServiceId;
    m_intentModelServiceIdHasBeenSet = true;
}

bool AIGWIntentRoute::IntentModelServiceIdHasBeenSet() const
{
    return m_intentModelServiceIdHasBeenSet;
}

double AIGWIntentRoute::GetConfidenceThreshold() const
{
    return m_confidenceThreshold;
}

void AIGWIntentRoute::SetConfidenceThreshold(const double& _confidenceThreshold)
{
    m_confidenceThreshold = _confidenceThreshold;
    m_confidenceThresholdHasBeenSet = true;
}

bool AIGWIntentRoute::ConfidenceThresholdHasBeenSet() const
{
    return m_confidenceThresholdHasBeenSet;
}

string AIGWIntentRoute::GetDefaultModelServiceId() const
{
    return m_defaultModelServiceId;
}

void AIGWIntentRoute::SetDefaultModelServiceId(const string& _defaultModelServiceId)
{
    m_defaultModelServiceId = _defaultModelServiceId;
    m_defaultModelServiceIdHasBeenSet = true;
}

bool AIGWIntentRoute::DefaultModelServiceIdHasBeenSet() const
{
    return m_defaultModelServiceIdHasBeenSet;
}

vector<AIGWIntentRouteRule> AIGWIntentRoute::GetRules() const
{
    return m_rules;
}

void AIGWIntentRoute::SetRules(const vector<AIGWIntentRouteRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool AIGWIntentRoute::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

