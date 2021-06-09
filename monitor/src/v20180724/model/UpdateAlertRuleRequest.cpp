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

#include <tencentcloud/monitor/v20180724/model/UpdateAlertRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

UpdateAlertRuleRequest::UpdateAlertRuleRequest() :
    m_ruleIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_ruleStateHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_exprHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string UpdateAlertRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleState, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_exprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expr.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receivers.begin(); itr != m_receivers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_annotationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Annotations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_annotations.begin(); itr != m_annotations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateAlertRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void UpdateAlertRuleRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool UpdateAlertRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string UpdateAlertRuleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdateAlertRuleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdateAlertRuleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t UpdateAlertRuleRequest::GetRuleState() const
{
    return m_ruleState;
}

void UpdateAlertRuleRequest::SetRuleState(const int64_t& _ruleState)
{
    m_ruleState = _ruleState;
    m_ruleStateHasBeenSet = true;
}

bool UpdateAlertRuleRequest::RuleStateHasBeenSet() const
{
    return m_ruleStateHasBeenSet;
}

string UpdateAlertRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void UpdateAlertRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool UpdateAlertRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string UpdateAlertRuleRequest::GetExpr() const
{
    return m_expr;
}

void UpdateAlertRuleRequest::SetExpr(const string& _expr)
{
    m_expr = _expr;
    m_exprHasBeenSet = true;
}

bool UpdateAlertRuleRequest::ExprHasBeenSet() const
{
    return m_exprHasBeenSet;
}

string UpdateAlertRuleRequest::GetDuration() const
{
    return m_duration;
}

void UpdateAlertRuleRequest::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool UpdateAlertRuleRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<string> UpdateAlertRuleRequest::GetReceivers() const
{
    return m_receivers;
}

void UpdateAlertRuleRequest::SetReceivers(const vector<string>& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool UpdateAlertRuleRequest::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

vector<PrometheusRuleKV> UpdateAlertRuleRequest::GetLabels() const
{
    return m_labels;
}

void UpdateAlertRuleRequest::SetLabels(const vector<PrometheusRuleKV>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool UpdateAlertRuleRequest::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<PrometheusRuleKV> UpdateAlertRuleRequest::GetAnnotations() const
{
    return m_annotations;
}

void UpdateAlertRuleRequest::SetAnnotations(const vector<PrometheusRuleKV>& _annotations)
{
    m_annotations = _annotations;
    m_annotationsHasBeenSet = true;
}

bool UpdateAlertRuleRequest::AnnotationsHasBeenSet() const
{
    return m_annotationsHasBeenSet;
}

string UpdateAlertRuleRequest::GetType() const
{
    return m_type;
}

void UpdateAlertRuleRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UpdateAlertRuleRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


