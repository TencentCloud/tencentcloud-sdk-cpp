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

#include <tencentcloud/monitor/v20180724/model/PrometheusAlertGroupRuleSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusAlertGroupRuleSet::PrometheusAlertGroupRuleSet() :
    m_ruleNameHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_exprHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusAlertGroupRuleSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertGroupRuleSet.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertGroupRuleSet.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusRuleKV item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("Annotations") && !value["Annotations"].IsNull())
    {
        if (!value["Annotations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertGroupRuleSet.Annotations` is not array type"));

        const rapidjson::Value &tmpValue = value["Annotations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusRuleKV item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_annotations.push_back(item);
        }
        m_annotationsHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertGroupRuleSet.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Expr") && !value["Expr"].IsNull())
    {
        if (!value["Expr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertGroupRuleSet.Expr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expr = string(value["Expr"].GetString());
        m_exprHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertGroupRuleSet.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusAlertGroupRuleSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_annotationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Annotations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_annotations.begin(); itr != m_annotations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_exprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expr.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

}


string PrometheusAlertGroupRuleSet::GetRuleName() const
{
    return m_ruleName;
}

void PrometheusAlertGroupRuleSet::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool PrometheusAlertGroupRuleSet::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<PrometheusRuleKV> PrometheusAlertGroupRuleSet::GetLabels() const
{
    return m_labels;
}

void PrometheusAlertGroupRuleSet::SetLabels(const vector<PrometheusRuleKV>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool PrometheusAlertGroupRuleSet::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<PrometheusRuleKV> PrometheusAlertGroupRuleSet::GetAnnotations() const
{
    return m_annotations;
}

void PrometheusAlertGroupRuleSet::SetAnnotations(const vector<PrometheusRuleKV>& _annotations)
{
    m_annotations = _annotations;
    m_annotationsHasBeenSet = true;
}

bool PrometheusAlertGroupRuleSet::AnnotationsHasBeenSet() const
{
    return m_annotationsHasBeenSet;
}

string PrometheusAlertGroupRuleSet::GetDuration() const
{
    return m_duration;
}

void PrometheusAlertGroupRuleSet::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool PrometheusAlertGroupRuleSet::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string PrometheusAlertGroupRuleSet::GetExpr() const
{
    return m_expr;
}

void PrometheusAlertGroupRuleSet::SetExpr(const string& _expr)
{
    m_expr = _expr;
    m_exprHasBeenSet = true;
}

bool PrometheusAlertGroupRuleSet::ExprHasBeenSet() const
{
    return m_exprHasBeenSet;
}

int64_t PrometheusAlertGroupRuleSet::GetState() const
{
    return m_state;
}

void PrometheusAlertGroupRuleSet::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool PrometheusAlertGroupRuleSet::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

