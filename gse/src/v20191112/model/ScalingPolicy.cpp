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

#include <tencentcloud/gse/v20191112/model/ScalingPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

ScalingPolicy::ScalingPolicy() :
    m_fleetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_scalingAdjustmentHasBeenSet(false),
    m_scalingAdjustmentTypeHasBeenSet(false),
    m_comparisonOperatorHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_evaluationPeriodsHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_targetConfigurationHasBeenSet(false)
{
}

CoreInternalOutcome ScalingPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FleetId") && !value["FleetId"].IsNull())
    {
        if (!value["FleetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingPolicy.FleetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fleetId = string(value["FleetId"].GetString());
        m_fleetIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingPolicy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingPolicy.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ScalingAdjustment") && !value["ScalingAdjustment"].IsNull())
    {
        if (!value["ScalingAdjustment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingPolicy.ScalingAdjustment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scalingAdjustment = string(value["ScalingAdjustment"].GetString());
        m_scalingAdjustmentHasBeenSet = true;
    }

    if (value.HasMember("ScalingAdjustmentType") && !value["ScalingAdjustmentType"].IsNull())
    {
        if (!value["ScalingAdjustmentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingPolicy.ScalingAdjustmentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scalingAdjustmentType = string(value["ScalingAdjustmentType"].GetString());
        m_scalingAdjustmentTypeHasBeenSet = true;
    }

    if (value.HasMember("ComparisonOperator") && !value["ComparisonOperator"].IsNull())
    {
        if (!value["ComparisonOperator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingPolicy.ComparisonOperator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comparisonOperator = string(value["ComparisonOperator"].GetString());
        m_comparisonOperatorHasBeenSet = true;
    }

    if (value.HasMember("Threshold") && !value["Threshold"].IsNull())
    {
        if (!value["Threshold"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingPolicy.Threshold` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_threshold = string(value["Threshold"].GetString());
        m_thresholdHasBeenSet = true;
    }

    if (value.HasMember("EvaluationPeriods") && !value["EvaluationPeriods"].IsNull())
    {
        if (!value["EvaluationPeriods"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingPolicy.EvaluationPeriods` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evaluationPeriods = string(value["EvaluationPeriods"].GetString());
        m_evaluationPeriodsHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingPolicy.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingPolicy.PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(value["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetConfiguration") && !value["TargetConfiguration"].IsNull())
    {
        if (!value["TargetConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingPolicy.TargetConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetConfiguration.Deserialize(value["TargetConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetConfigurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScalingPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_scalingAdjustmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingAdjustment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scalingAdjustment.c_str(), allocator).Move(), allocator);
    }

    if (m_scalingAdjustmentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingAdjustmentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scalingAdjustmentType.c_str(), allocator).Move(), allocator);
    }

    if (m_comparisonOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComparisonOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comparisonOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_threshold.c_str(), allocator).Move(), allocator);
    }

    if (m_evaluationPeriodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvaluationPeriods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evaluationPeriods.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetConfiguration.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ScalingPolicy::GetFleetId() const
{
    return m_fleetId;
}

void ScalingPolicy::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool ScalingPolicy::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

string ScalingPolicy::GetName() const
{
    return m_name;
}

void ScalingPolicy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ScalingPolicy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ScalingPolicy::GetStatus() const
{
    return m_status;
}

void ScalingPolicy::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ScalingPolicy::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ScalingPolicy::GetScalingAdjustment() const
{
    return m_scalingAdjustment;
}

void ScalingPolicy::SetScalingAdjustment(const string& _scalingAdjustment)
{
    m_scalingAdjustment = _scalingAdjustment;
    m_scalingAdjustmentHasBeenSet = true;
}

bool ScalingPolicy::ScalingAdjustmentHasBeenSet() const
{
    return m_scalingAdjustmentHasBeenSet;
}

string ScalingPolicy::GetScalingAdjustmentType() const
{
    return m_scalingAdjustmentType;
}

void ScalingPolicy::SetScalingAdjustmentType(const string& _scalingAdjustmentType)
{
    m_scalingAdjustmentType = _scalingAdjustmentType;
    m_scalingAdjustmentTypeHasBeenSet = true;
}

bool ScalingPolicy::ScalingAdjustmentTypeHasBeenSet() const
{
    return m_scalingAdjustmentTypeHasBeenSet;
}

string ScalingPolicy::GetComparisonOperator() const
{
    return m_comparisonOperator;
}

void ScalingPolicy::SetComparisonOperator(const string& _comparisonOperator)
{
    m_comparisonOperator = _comparisonOperator;
    m_comparisonOperatorHasBeenSet = true;
}

bool ScalingPolicy::ComparisonOperatorHasBeenSet() const
{
    return m_comparisonOperatorHasBeenSet;
}

string ScalingPolicy::GetThreshold() const
{
    return m_threshold;
}

void ScalingPolicy::SetThreshold(const string& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool ScalingPolicy::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

string ScalingPolicy::GetEvaluationPeriods() const
{
    return m_evaluationPeriods;
}

void ScalingPolicy::SetEvaluationPeriods(const string& _evaluationPeriods)
{
    m_evaluationPeriods = _evaluationPeriods;
    m_evaluationPeriodsHasBeenSet = true;
}

bool ScalingPolicy::EvaluationPeriodsHasBeenSet() const
{
    return m_evaluationPeriodsHasBeenSet;
}

string ScalingPolicy::GetMetricName() const
{
    return m_metricName;
}

void ScalingPolicy::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool ScalingPolicy::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string ScalingPolicy::GetPolicyType() const
{
    return m_policyType;
}

void ScalingPolicy::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool ScalingPolicy::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

TargetConfiguration ScalingPolicy::GetTargetConfiguration() const
{
    return m_targetConfiguration;
}

void ScalingPolicy::SetTargetConfiguration(const TargetConfiguration& _targetConfiguration)
{
    m_targetConfiguration = _targetConfiguration;
    m_targetConfigurationHasBeenSet = true;
}

bool ScalingPolicy::TargetConfigurationHasBeenSet() const
{
    return m_targetConfigurationHasBeenSet;
}

