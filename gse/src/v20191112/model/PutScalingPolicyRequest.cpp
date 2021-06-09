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

#include <tencentcloud/gse/v20191112/model/PutScalingPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

PutScalingPolicyRequest::PutScalingPolicyRequest() :
    m_fleetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scalingAdjustmentHasBeenSet(false),
    m_scalingAdjustmentTypeHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_comparisonOperatorHasBeenSet(false),
    m_evaluationPeriodsHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_targetConfigurationHasBeenSet(false)
{
}

string PutScalingPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_scalingAdjustmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingAdjustment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scalingAdjustment, allocator);
    }

    if (m_scalingAdjustmentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingAdjustmentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scalingAdjustmentType.c_str(), allocator).Move(), allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_threshold, allocator);
    }

    if (m_comparisonOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComparisonOperator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comparisonOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_evaluationPeriodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvaluationPeriods";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_evaluationPeriods, allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PutScalingPolicyRequest::GetFleetId() const
{
    return m_fleetId;
}

void PutScalingPolicyRequest::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool PutScalingPolicyRequest::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

string PutScalingPolicyRequest::GetName() const
{
    return m_name;
}

void PutScalingPolicyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PutScalingPolicyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t PutScalingPolicyRequest::GetScalingAdjustment() const
{
    return m_scalingAdjustment;
}

void PutScalingPolicyRequest::SetScalingAdjustment(const int64_t& _scalingAdjustment)
{
    m_scalingAdjustment = _scalingAdjustment;
    m_scalingAdjustmentHasBeenSet = true;
}

bool PutScalingPolicyRequest::ScalingAdjustmentHasBeenSet() const
{
    return m_scalingAdjustmentHasBeenSet;
}

string PutScalingPolicyRequest::GetScalingAdjustmentType() const
{
    return m_scalingAdjustmentType;
}

void PutScalingPolicyRequest::SetScalingAdjustmentType(const string& _scalingAdjustmentType)
{
    m_scalingAdjustmentType = _scalingAdjustmentType;
    m_scalingAdjustmentTypeHasBeenSet = true;
}

bool PutScalingPolicyRequest::ScalingAdjustmentTypeHasBeenSet() const
{
    return m_scalingAdjustmentTypeHasBeenSet;
}

double PutScalingPolicyRequest::GetThreshold() const
{
    return m_threshold;
}

void PutScalingPolicyRequest::SetThreshold(const double& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool PutScalingPolicyRequest::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

string PutScalingPolicyRequest::GetComparisonOperator() const
{
    return m_comparisonOperator;
}

void PutScalingPolicyRequest::SetComparisonOperator(const string& _comparisonOperator)
{
    m_comparisonOperator = _comparisonOperator;
    m_comparisonOperatorHasBeenSet = true;
}

bool PutScalingPolicyRequest::ComparisonOperatorHasBeenSet() const
{
    return m_comparisonOperatorHasBeenSet;
}

int64_t PutScalingPolicyRequest::GetEvaluationPeriods() const
{
    return m_evaluationPeriods;
}

void PutScalingPolicyRequest::SetEvaluationPeriods(const int64_t& _evaluationPeriods)
{
    m_evaluationPeriods = _evaluationPeriods;
    m_evaluationPeriodsHasBeenSet = true;
}

bool PutScalingPolicyRequest::EvaluationPeriodsHasBeenSet() const
{
    return m_evaluationPeriodsHasBeenSet;
}

string PutScalingPolicyRequest::GetMetricName() const
{
    return m_metricName;
}

void PutScalingPolicyRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool PutScalingPolicyRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string PutScalingPolicyRequest::GetPolicyType() const
{
    return m_policyType;
}

void PutScalingPolicyRequest::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool PutScalingPolicyRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

TargetConfiguration PutScalingPolicyRequest::GetTargetConfiguration() const
{
    return m_targetConfiguration;
}

void PutScalingPolicyRequest::SetTargetConfiguration(const TargetConfiguration& _targetConfiguration)
{
    m_targetConfiguration = _targetConfiguration;
    m_targetConfigurationHasBeenSet = true;
}

bool PutScalingPolicyRequest::TargetConfigurationHasBeenSet() const
{
    return m_targetConfigurationHasBeenSet;
}


