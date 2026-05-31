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

#include <tencentcloud/tse/v20201207/model/AIGWLatencyPriorityConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWLatencyPriorityConfig::AIGWLatencyPriorityConfig() :
    m_rulesHasBeenSet(false),
    m_latencyMetricHasBeenSet(false),
    m_routeModeHasBeenSet(false)
{
}

CoreInternalOutcome AIGWLatencyPriorityConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWLatencyPriorityConfig.Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIGWLatencyPriorityRouteRule item;
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

    if (value.HasMember("LatencyMetric") && !value["LatencyMetric"].IsNull())
    {
        if (!value["LatencyMetric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLatencyPriorityConfig.LatencyMetric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latencyMetric = string(value["LatencyMetric"].GetString());
        m_latencyMetricHasBeenSet = true;
    }

    if (value.HasMember("RouteMode") && !value["RouteMode"].IsNull())
    {
        if (!value["RouteMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLatencyPriorityConfig.RouteMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeMode = string(value["RouteMode"].GetString());
        m_routeModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWLatencyPriorityConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_latencyMetricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatencyMetric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latencyMetric.c_str(), allocator).Move(), allocator);
    }

    if (m_routeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeMode.c_str(), allocator).Move(), allocator);
    }

}


vector<AIGWLatencyPriorityRouteRule> AIGWLatencyPriorityConfig::GetRules() const
{
    return m_rules;
}

void AIGWLatencyPriorityConfig::SetRules(const vector<AIGWLatencyPriorityRouteRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool AIGWLatencyPriorityConfig::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

string AIGWLatencyPriorityConfig::GetLatencyMetric() const
{
    return m_latencyMetric;
}

void AIGWLatencyPriorityConfig::SetLatencyMetric(const string& _latencyMetric)
{
    m_latencyMetric = _latencyMetric;
    m_latencyMetricHasBeenSet = true;
}

bool AIGWLatencyPriorityConfig::LatencyMetricHasBeenSet() const
{
    return m_latencyMetricHasBeenSet;
}

string AIGWLatencyPriorityConfig::GetRouteMode() const
{
    return m_routeMode;
}

void AIGWLatencyPriorityConfig::SetRouteMode(const string& _routeMode)
{
    m_routeMode = _routeMode;
    m_routeModeHasBeenSet = true;
}

bool AIGWLatencyPriorityConfig::RouteModeHasBeenSet() const
{
    return m_routeModeHasBeenSet;
}

