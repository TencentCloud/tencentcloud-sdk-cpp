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

#include <tencentcloud/monitor/v20180724/model/Metric.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

Metric::Metric() :
    m_namespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_minHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_metricConfigHasBeenSet(false),
    m_isAdvancedHasBeenSet(false),
    m_isOpenHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_operatorsHasBeenSet(false),
    m_periodsHasBeenSet(false),
    m_isLatenessMetricHasBeenSet(false)
{
}

CoreInternalOutcome Metric::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Metric.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Metric.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Metric.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Metric.Min` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetDouble();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Metric.Max` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetDouble();
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("Dimensions") && !value["Dimensions"].IsNull())
    {
        if (!value["Dimensions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Metric.Dimensions` is not array type"));

        const rapidjson::Value &tmpValue = value["Dimensions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dimensions.push_back((*itr).GetString());
        }
        m_dimensionsHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Metric.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("MetricConfig") && !value["MetricConfig"].IsNull())
    {
        if (!value["MetricConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Metric.MetricConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metricConfig.Deserialize(value["MetricConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metricConfigHasBeenSet = true;
    }

    if (value.HasMember("IsAdvanced") && !value["IsAdvanced"].IsNull())
    {
        if (!value["IsAdvanced"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Metric.IsAdvanced` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAdvanced = value["IsAdvanced"].GetInt64();
        m_isAdvancedHasBeenSet = true;
    }

    if (value.HasMember("IsOpen") && !value["IsOpen"].IsNull())
    {
        if (!value["IsOpen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Metric.IsOpen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isOpen = value["IsOpen"].GetInt64();
        m_isOpenHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Metric.ProductId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_productId = value["ProductId"].GetInt64();
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("Operators") && !value["Operators"].IsNull())
    {
        if (!value["Operators"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Metric.Operators` is not array type"));

        const rapidjson::Value &tmpValue = value["Operators"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Operator item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_operators.push_back(item);
        }
        m_operatorsHasBeenSet = true;
    }

    if (value.HasMember("Periods") && !value["Periods"].IsNull())
    {
        if (!value["Periods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Metric.Periods` is not array type"));

        const rapidjson::Value &tmpValue = value["Periods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_periods.push_back((*itr).GetInt64());
        }
        m_periodsHasBeenSet = true;
    }

    if (value.HasMember("IsLatenessMetric") && !value["IsLatenessMetric"].IsNull())
    {
        if (!value["IsLatenessMetric"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Metric.IsLatenessMetric` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isLatenessMetric = value["IsLatenessMetric"].GetInt64();
        m_isLatenessMetricHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Metric::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_min, allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_max, allocator);
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dimensions.begin(); itr != m_dimensions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_metricConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metricConfig.ToJsonObject(value[key.c_str()], allocator);
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
        value.AddMember(iKey, m_productId, allocator);
    }

    if (m_operatorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operators";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_operators.begin(); itr != m_operators.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_periodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Periods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_periods.begin(); itr != m_periods.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_isLatenessMetricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLatenessMetric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLatenessMetric, allocator);
    }

}


string Metric::GetNamespace() const
{
    return m_namespace;
}

void Metric::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool Metric::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string Metric::GetMetricName() const
{
    return m_metricName;
}

void Metric::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool Metric::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string Metric::GetDescription() const
{
    return m_description;
}

void Metric::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Metric::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

double Metric::GetMin() const
{
    return m_min;
}

void Metric::SetMin(const double& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool Metric::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

double Metric::GetMax() const
{
    return m_max;
}

void Metric::SetMax(const double& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool Metric::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

vector<string> Metric::GetDimensions() const
{
    return m_dimensions;
}

void Metric::SetDimensions(const vector<string>& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool Metric::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

string Metric::GetUnit() const
{
    return m_unit;
}

void Metric::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool Metric::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

MetricConfig Metric::GetMetricConfig() const
{
    return m_metricConfig;
}

void Metric::SetMetricConfig(const MetricConfig& _metricConfig)
{
    m_metricConfig = _metricConfig;
    m_metricConfigHasBeenSet = true;
}

bool Metric::MetricConfigHasBeenSet() const
{
    return m_metricConfigHasBeenSet;
}

int64_t Metric::GetIsAdvanced() const
{
    return m_isAdvanced;
}

void Metric::SetIsAdvanced(const int64_t& _isAdvanced)
{
    m_isAdvanced = _isAdvanced;
    m_isAdvancedHasBeenSet = true;
}

bool Metric::IsAdvancedHasBeenSet() const
{
    return m_isAdvancedHasBeenSet;
}

int64_t Metric::GetIsOpen() const
{
    return m_isOpen;
}

void Metric::SetIsOpen(const int64_t& _isOpen)
{
    m_isOpen = _isOpen;
    m_isOpenHasBeenSet = true;
}

bool Metric::IsOpenHasBeenSet() const
{
    return m_isOpenHasBeenSet;
}

int64_t Metric::GetProductId() const
{
    return m_productId;
}

void Metric::SetProductId(const int64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool Metric::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

vector<Operator> Metric::GetOperators() const
{
    return m_operators;
}

void Metric::SetOperators(const vector<Operator>& _operators)
{
    m_operators = _operators;
    m_operatorsHasBeenSet = true;
}

bool Metric::OperatorsHasBeenSet() const
{
    return m_operatorsHasBeenSet;
}

vector<int64_t> Metric::GetPeriods() const
{
    return m_periods;
}

void Metric::SetPeriods(const vector<int64_t>& _periods)
{
    m_periods = _periods;
    m_periodsHasBeenSet = true;
}

bool Metric::PeriodsHasBeenSet() const
{
    return m_periodsHasBeenSet;
}

int64_t Metric::GetIsLatenessMetric() const
{
    return m_isLatenessMetric;
}

void Metric::SetIsLatenessMetric(const int64_t& _isLatenessMetric)
{
    m_isLatenessMetric = _isLatenessMetric;
    m_isLatenessMetricHasBeenSet = true;
}

bool Metric::IsLatenessMetricHasBeenSet() const
{
    return m_isLatenessMetricHasBeenSet;
}

