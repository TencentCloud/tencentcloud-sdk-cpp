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

#include <tencentcloud/monitor/v20180724/model/MetricSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace rapidjson;
using namespace std;

MetricSet::MetricSet() :
    m_namespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_unitCnameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_periodsHasBeenSet(false),
    m_meaningHasBeenSet(false),
    m_dimensionsHasBeenSet(false)
{
}

CoreInternalOutcome MetricSet::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Error("response `MetricSet.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Error("response `MetricSet.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Error("response `MetricSet.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("UnitCname") && !value["UnitCname"].IsNull())
    {
        if (!value["UnitCname"].IsString())
        {
            return CoreInternalOutcome(Error("response `MetricSet.UnitCname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitCname = string(value["UnitCname"].GetString());
        m_unitCnameHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsArray())
            return CoreInternalOutcome(Error("response `MetricSet.Period` is not array type"));

        const Value &tmpValue = value["Period"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_period.push_back((*itr).GetInt64());
        }
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("Periods") && !value["Periods"].IsNull())
    {
        if (!value["Periods"].IsArray())
            return CoreInternalOutcome(Error("response `MetricSet.Periods` is not array type"));

        const Value &tmpValue = value["Periods"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PeriodsSt item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_periods.push_back(item);
        }
        m_periodsHasBeenSet = true;
    }

    if (value.HasMember("Meaning") && !value["Meaning"].IsNull())
    {
        if (!value["Meaning"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MetricSet.Meaning` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_meaning.Deserialize(value["Meaning"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_meaningHasBeenSet = true;
    }

    if (value.HasMember("Dimensions") && !value["Dimensions"].IsNull())
    {
        if (!value["Dimensions"].IsArray())
            return CoreInternalOutcome(Error("response `MetricSet.Dimensions` is not array type"));

        const Value &tmpValue = value["Dimensions"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DimensionsDesc item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dimensions.push_back(item);
        }
        m_dimensionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricSet::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_unitCnameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UnitCname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_unitCname.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_period.begin(); itr != m_period.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_periodsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Periods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_periods.begin(); itr != m_periods.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_meaningHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Meaning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_meaning.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dimensionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dimensions.begin(); itr != m_dimensions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MetricSet::GetNamespace() const
{
    return m_namespace;
}

void MetricSet::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool MetricSet::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string MetricSet::GetMetricName() const
{
    return m_metricName;
}

void MetricSet::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool MetricSet::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string MetricSet::GetUnit() const
{
    return m_unit;
}

void MetricSet::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool MetricSet::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string MetricSet::GetUnitCname() const
{
    return m_unitCname;
}

void MetricSet::SetUnitCname(const string& _unitCname)
{
    m_unitCname = _unitCname;
    m_unitCnameHasBeenSet = true;
}

bool MetricSet::UnitCnameHasBeenSet() const
{
    return m_unitCnameHasBeenSet;
}

vector<int64_t> MetricSet::GetPeriod() const
{
    return m_period;
}

void MetricSet::SetPeriod(const vector<int64_t>& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool MetricSet::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<PeriodsSt> MetricSet::GetPeriods() const
{
    return m_periods;
}

void MetricSet::SetPeriods(const vector<PeriodsSt>& _periods)
{
    m_periods = _periods;
    m_periodsHasBeenSet = true;
}

bool MetricSet::PeriodsHasBeenSet() const
{
    return m_periodsHasBeenSet;
}

MetricObjectMeaning MetricSet::GetMeaning() const
{
    return m_meaning;
}

void MetricSet::SetMeaning(const MetricObjectMeaning& _meaning)
{
    m_meaning = _meaning;
    m_meaningHasBeenSet = true;
}

bool MetricSet::MeaningHasBeenSet() const
{
    return m_meaningHasBeenSet;
}

vector<DimensionsDesc> MetricSet::GetDimensions() const
{
    return m_dimensions;
}

void MetricSet::SetDimensions(const vector<DimensionsDesc>& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool MetricSet::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

