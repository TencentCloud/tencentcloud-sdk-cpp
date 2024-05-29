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

#include <tencentcloud/monitor/v20180724/model/AlarmPolicyRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

AlarmPolicyRule::AlarmPolicyRule() :
    m_metricNameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_continuePeriodHasBeenSet(false),
    m_noticeFrequencyHasBeenSet(false),
    m_isPowerNoticeHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_isAdvancedHasBeenSet(false),
    m_isOpenHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_valueMaxHasBeenSet(false),
    m_valueMinHasBeenSet(false),
    m_hierarchicalValueHasBeenSet(false),
    m_isLatenessMetricHasBeenSet(false)
{
}

CoreInternalOutcome AlarmPolicyRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ContinuePeriod") && !value["ContinuePeriod"].IsNull())
    {
        if (!value["ContinuePeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.ContinuePeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_continuePeriod = value["ContinuePeriod"].GetInt64();
        m_continuePeriodHasBeenSet = true;
    }

    if (value.HasMember("NoticeFrequency") && !value["NoticeFrequency"].IsNull())
    {
        if (!value["NoticeFrequency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.NoticeFrequency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noticeFrequency = value["NoticeFrequency"].GetInt64();
        m_noticeFrequencyHasBeenSet = true;
    }

    if (value.HasMember("IsPowerNotice") && !value["IsPowerNotice"].IsNull())
    {
        if (!value["IsPowerNotice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.IsPowerNotice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPowerNotice = value["IsPowerNotice"].GetInt64();
        m_isPowerNoticeHasBeenSet = true;
    }

    if (value.HasMember("Filter") && !value["Filter"].IsNull())
    {
        if (!value["Filter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.Filter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_filter.Deserialize(value["Filter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_filterHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("IsAdvanced") && !value["IsAdvanced"].IsNull())
    {
        if (!value["IsAdvanced"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.IsAdvanced` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAdvanced = value["IsAdvanced"].GetInt64();
        m_isAdvancedHasBeenSet = true;
    }

    if (value.HasMember("IsOpen") && !value["IsOpen"].IsNull())
    {
        if (!value["IsOpen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.IsOpen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isOpen = value["IsOpen"].GetInt64();
        m_isOpenHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ValueMax") && !value["ValueMax"].IsNull())
    {
        if (!value["ValueMax"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.ValueMax` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_valueMax = value["ValueMax"].GetDouble();
        m_valueMaxHasBeenSet = true;
    }

    if (value.HasMember("ValueMin") && !value["ValueMin"].IsNull())
    {
        if (!value["ValueMin"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.ValueMin` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_valueMin = value["ValueMin"].GetDouble();
        m_valueMinHasBeenSet = true;
    }

    if (value.HasMember("HierarchicalValue") && !value["HierarchicalValue"].IsNull())
    {
        if (!value["HierarchicalValue"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.HierarchicalValue` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hierarchicalValue.Deserialize(value["HierarchicalValue"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hierarchicalValueHasBeenSet = true;
    }

    if (value.HasMember("IsLatenessMetric") && !value["IsLatenessMetric"].IsNull())
    {
        if (!value["IsLatenessMetric"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRule.IsLatenessMetric` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isLatenessMetric = value["IsLatenessMetric"].GetInt64();
        m_isLatenessMetricHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmPolicyRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_continuePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinuePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_continuePeriod, allocator);
    }

    if (m_noticeFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noticeFrequency, allocator);
    }

    if (m_isPowerNoticeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPowerNotice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPowerNotice, allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_isAdvancedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAdvanced";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAdvanced, allocator);
    }

    if (m_isOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOpen, allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_valueMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valueMax, allocator);
    }

    if (m_valueMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valueMin, allocator);
    }

    if (m_hierarchicalValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HierarchicalValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hierarchicalValue.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isLatenessMetricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLatenessMetric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLatenessMetric, allocator);
    }

}


string AlarmPolicyRule::GetMetricName() const
{
    return m_metricName;
}

void AlarmPolicyRule::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool AlarmPolicyRule::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

int64_t AlarmPolicyRule::GetPeriod() const
{
    return m_period;
}

void AlarmPolicyRule::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool AlarmPolicyRule::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string AlarmPolicyRule::GetOperator() const
{
    return m_operator;
}

void AlarmPolicyRule::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool AlarmPolicyRule::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string AlarmPolicyRule::GetValue() const
{
    return m_value;
}

void AlarmPolicyRule::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AlarmPolicyRule::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t AlarmPolicyRule::GetContinuePeriod() const
{
    return m_continuePeriod;
}

void AlarmPolicyRule::SetContinuePeriod(const int64_t& _continuePeriod)
{
    m_continuePeriod = _continuePeriod;
    m_continuePeriodHasBeenSet = true;
}

bool AlarmPolicyRule::ContinuePeriodHasBeenSet() const
{
    return m_continuePeriodHasBeenSet;
}

int64_t AlarmPolicyRule::GetNoticeFrequency() const
{
    return m_noticeFrequency;
}

void AlarmPolicyRule::SetNoticeFrequency(const int64_t& _noticeFrequency)
{
    m_noticeFrequency = _noticeFrequency;
    m_noticeFrequencyHasBeenSet = true;
}

bool AlarmPolicyRule::NoticeFrequencyHasBeenSet() const
{
    return m_noticeFrequencyHasBeenSet;
}

int64_t AlarmPolicyRule::GetIsPowerNotice() const
{
    return m_isPowerNotice;
}

void AlarmPolicyRule::SetIsPowerNotice(const int64_t& _isPowerNotice)
{
    m_isPowerNotice = _isPowerNotice;
    m_isPowerNoticeHasBeenSet = true;
}

bool AlarmPolicyRule::IsPowerNoticeHasBeenSet() const
{
    return m_isPowerNoticeHasBeenSet;
}

AlarmPolicyFilter AlarmPolicyRule::GetFilter() const
{
    return m_filter;
}

void AlarmPolicyRule::SetFilter(const AlarmPolicyFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool AlarmPolicyRule::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

string AlarmPolicyRule::GetDescription() const
{
    return m_description;
}

void AlarmPolicyRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AlarmPolicyRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AlarmPolicyRule::GetUnit() const
{
    return m_unit;
}

void AlarmPolicyRule::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool AlarmPolicyRule::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string AlarmPolicyRule::GetRuleType() const
{
    return m_ruleType;
}

void AlarmPolicyRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool AlarmPolicyRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

int64_t AlarmPolicyRule::GetIsAdvanced() const
{
    return m_isAdvanced;
}

void AlarmPolicyRule::SetIsAdvanced(const int64_t& _isAdvanced)
{
    m_isAdvanced = _isAdvanced;
    m_isAdvancedHasBeenSet = true;
}

bool AlarmPolicyRule::IsAdvancedHasBeenSet() const
{
    return m_isAdvancedHasBeenSet;
}

int64_t AlarmPolicyRule::GetIsOpen() const
{
    return m_isOpen;
}

void AlarmPolicyRule::SetIsOpen(const int64_t& _isOpen)
{
    m_isOpen = _isOpen;
    m_isOpenHasBeenSet = true;
}

bool AlarmPolicyRule::IsOpenHasBeenSet() const
{
    return m_isOpenHasBeenSet;
}

string AlarmPolicyRule::GetProductId() const
{
    return m_productId;
}

void AlarmPolicyRule::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool AlarmPolicyRule::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

double AlarmPolicyRule::GetValueMax() const
{
    return m_valueMax;
}

void AlarmPolicyRule::SetValueMax(const double& _valueMax)
{
    m_valueMax = _valueMax;
    m_valueMaxHasBeenSet = true;
}

bool AlarmPolicyRule::ValueMaxHasBeenSet() const
{
    return m_valueMaxHasBeenSet;
}

double AlarmPolicyRule::GetValueMin() const
{
    return m_valueMin;
}

void AlarmPolicyRule::SetValueMin(const double& _valueMin)
{
    m_valueMin = _valueMin;
    m_valueMinHasBeenSet = true;
}

bool AlarmPolicyRule::ValueMinHasBeenSet() const
{
    return m_valueMinHasBeenSet;
}

AlarmHierarchicalValue AlarmPolicyRule::GetHierarchicalValue() const
{
    return m_hierarchicalValue;
}

void AlarmPolicyRule::SetHierarchicalValue(const AlarmHierarchicalValue& _hierarchicalValue)
{
    m_hierarchicalValue = _hierarchicalValue;
    m_hierarchicalValueHasBeenSet = true;
}

bool AlarmPolicyRule::HierarchicalValueHasBeenSet() const
{
    return m_hierarchicalValueHasBeenSet;
}

int64_t AlarmPolicyRule::GetIsLatenessMetric() const
{
    return m_isLatenessMetric;
}

void AlarmPolicyRule::SetIsLatenessMetric(const int64_t& _isLatenessMetric)
{
    m_isLatenessMetric = _isLatenessMetric;
    m_isLatenessMetricHasBeenSet = true;
}

bool AlarmPolicyRule::IsLatenessMetricHasBeenSet() const
{
    return m_isLatenessMetricHasBeenSet;
}

