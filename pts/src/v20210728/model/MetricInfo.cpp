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

#include <tencentcloud/pts/v20210728/model/MetricInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

MetricInfo::MetricInfo() :
    m_metricHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_metricTypeHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_aggregationsHasBeenSet(false),
    m_innerMetricHasBeenSet(false)
{
}

CoreInternalOutcome MetricInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricInfo.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("MetricType") && !value["MetricType"].IsNull())
    {
        if (!value["MetricType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricInfo.MetricType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricType = string(value["MetricType"].GetString());
        m_metricTypeHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricInfo.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Aggregations") && !value["Aggregations"].IsNull())
    {
        if (!value["Aggregations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricInfo.Aggregations` is not array type"));

        const rapidjson::Value &tmpValue = value["Aggregations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AggregationLegend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aggregations.push_back(item);
        }
        m_aggregationsHasBeenSet = true;
    }

    if (value.HasMember("InnerMetric") && !value["InnerMetric"].IsNull())
    {
        if (!value["InnerMetric"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MetricInfo.InnerMetric` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_innerMetric = value["InnerMetric"].GetBool();
        m_innerMetricHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_metricTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricType.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_aggregationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aggregations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aggregations.begin(); itr != m_aggregations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_innerMetricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerMetric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_innerMetric, allocator);
    }

}


string MetricInfo::GetMetric() const
{
    return m_metric;
}

void MetricInfo::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool MetricInfo::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string MetricInfo::GetAlias() const
{
    return m_alias;
}

void MetricInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool MetricInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string MetricInfo::GetDescription() const
{
    return m_description;
}

void MetricInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool MetricInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string MetricInfo::GetMetricType() const
{
    return m_metricType;
}

void MetricInfo::SetMetricType(const string& _metricType)
{
    m_metricType = _metricType;
    m_metricTypeHasBeenSet = true;
}

bool MetricInfo::MetricTypeHasBeenSet() const
{
    return m_metricTypeHasBeenSet;
}

string MetricInfo::GetUnit() const
{
    return m_unit;
}

void MetricInfo::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool MetricInfo::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

vector<AggregationLegend> MetricInfo::GetAggregations() const
{
    return m_aggregations;
}

void MetricInfo::SetAggregations(const vector<AggregationLegend>& _aggregations)
{
    m_aggregations = _aggregations;
    m_aggregationsHasBeenSet = true;
}

bool MetricInfo::AggregationsHasBeenSet() const
{
    return m_aggregationsHasBeenSet;
}

bool MetricInfo::GetInnerMetric() const
{
    return m_innerMetric;
}

void MetricInfo::SetInnerMetric(const bool& _innerMetric)
{
    m_innerMetric = _innerMetric;
    m_innerMetricHasBeenSet = true;
}

bool MetricInfo::InnerMetricHasBeenSet() const
{
    return m_innerMetricHasBeenSet;
}

