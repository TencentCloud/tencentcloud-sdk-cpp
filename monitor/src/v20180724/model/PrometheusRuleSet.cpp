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

#include <tencentcloud/monitor/v20180724/model/PrometheusRuleSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusRuleSet::PrometheusRuleSet() :
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleStateHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_exprHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_healthHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusRuleSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRuleSet.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRuleSet.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleState") && !value["RuleState"].IsNull())
    {
        if (!value["RuleState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRuleSet.RuleState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleState = value["RuleState"].GetInt64();
        m_ruleStateHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRuleSet.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusRuleSet.Labels` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `PrometheusRuleSet.Annotations` is not array type"));

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

    if (value.HasMember("Expr") && !value["Expr"].IsNull())
    {
        if (!value["Expr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRuleSet.Expr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expr = string(value["Expr"].GetString());
        m_exprHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRuleSet.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Receivers") && !value["Receivers"].IsNull())
    {
        if (!value["Receivers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusRuleSet.Receivers` is not array type"));

        const rapidjson::Value &tmpValue = value["Receivers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receivers.push_back((*itr).GetString());
        }
        m_receiversHasBeenSet = true;
    }

    if (value.HasMember("Health") && !value["Health"].IsNull())
    {
        if (!value["Health"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRuleSet.Health` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_health = string(value["Health"].GetString());
        m_healthHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRuleSet.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRuleSet.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusRuleSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleState, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

    if (m_exprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expr.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receivers.begin(); itr != m_receivers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_healthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Health";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_health.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


string PrometheusRuleSet::GetRuleId() const
{
    return m_ruleId;
}

void PrometheusRuleSet::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool PrometheusRuleSet::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string PrometheusRuleSet::GetRuleName() const
{
    return m_ruleName;
}

void PrometheusRuleSet::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool PrometheusRuleSet::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t PrometheusRuleSet::GetRuleState() const
{
    return m_ruleState;
}

void PrometheusRuleSet::SetRuleState(const int64_t& _ruleState)
{
    m_ruleState = _ruleState;
    m_ruleStateHasBeenSet = true;
}

bool PrometheusRuleSet::RuleStateHasBeenSet() const
{
    return m_ruleStateHasBeenSet;
}

string PrometheusRuleSet::GetType() const
{
    return m_type;
}

void PrometheusRuleSet::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PrometheusRuleSet::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<PrometheusRuleKV> PrometheusRuleSet::GetLabels() const
{
    return m_labels;
}

void PrometheusRuleSet::SetLabels(const vector<PrometheusRuleKV>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool PrometheusRuleSet::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<PrometheusRuleKV> PrometheusRuleSet::GetAnnotations() const
{
    return m_annotations;
}

void PrometheusRuleSet::SetAnnotations(const vector<PrometheusRuleKV>& _annotations)
{
    m_annotations = _annotations;
    m_annotationsHasBeenSet = true;
}

bool PrometheusRuleSet::AnnotationsHasBeenSet() const
{
    return m_annotationsHasBeenSet;
}

string PrometheusRuleSet::GetExpr() const
{
    return m_expr;
}

void PrometheusRuleSet::SetExpr(const string& _expr)
{
    m_expr = _expr;
    m_exprHasBeenSet = true;
}

bool PrometheusRuleSet::ExprHasBeenSet() const
{
    return m_exprHasBeenSet;
}

string PrometheusRuleSet::GetDuration() const
{
    return m_duration;
}

void PrometheusRuleSet::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool PrometheusRuleSet::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<string> PrometheusRuleSet::GetReceivers() const
{
    return m_receivers;
}

void PrometheusRuleSet::SetReceivers(const vector<string>& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool PrometheusRuleSet::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

string PrometheusRuleSet::GetHealth() const
{
    return m_health;
}

void PrometheusRuleSet::SetHealth(const string& _health)
{
    m_health = _health;
    m_healthHasBeenSet = true;
}

bool PrometheusRuleSet::HealthHasBeenSet() const
{
    return m_healthHasBeenSet;
}

string PrometheusRuleSet::GetCreatedAt() const
{
    return m_createdAt;
}

void PrometheusRuleSet::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool PrometheusRuleSet::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string PrometheusRuleSet::GetUpdatedAt() const
{
    return m_updatedAt;
}

void PrometheusRuleSet::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool PrometheusRuleSet::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

