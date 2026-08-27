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

#include <tencentcloud/monitor/v20230616/model/Rule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

Rule::Rule() :
    m_ruleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_extNamespaceHasBeenSet(false),
    m_extMetricHasBeenSet(false),
    m_producerHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_dispenseConditionsHasBeenSet(false),
    m_dispenseRegionsHasBeenSet(false)
{
}

CoreInternalOutcome Rule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ExtNamespace") && !value["ExtNamespace"].IsNull())
    {
        if (!value["ExtNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.ExtNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extNamespace = string(value["ExtNamespace"].GetString());
        m_extNamespaceHasBeenSet = true;
    }

    if (value.HasMember("ExtMetric") && !value["ExtMetric"].IsNull())
    {
        if (!value["ExtMetric"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Rule.ExtMetric` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtMetric"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExtMetric item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extMetric.push_back(item);
        }
        m_extMetricHasBeenSet = true;
    }

    if (value.HasMember("Producer") && !value["Producer"].IsNull())
    {
        if (!value["Producer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Producer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_producer.Deserialize(value["Producer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_producerHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Rule.Period` is not array type"));

        const rapidjson::Value &tmpValue = value["Period"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_period.push_back((*itr).GetInt64());
        }
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("DispenseConditions") && !value["DispenseConditions"].IsNull())
    {
        if (!value["DispenseConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Rule.DispenseConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["DispenseConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DispenseCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dispenseConditions.push_back(item);
        }
        m_dispenseConditionsHasBeenSet = true;
    }

    if (value.HasMember("DispenseRegions") && !value["DispenseRegions"].IsNull())
    {
        if (!value["DispenseRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Rule.DispenseRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["DispenseRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dispenseRegions.push_back((*itr).GetString());
        }
        m_dispenseRegionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Rule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_extNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_extMetricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtMetric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extMetric.begin(); itr != m_extMetric.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_producerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Producer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_producer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_period.begin(); itr != m_period.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_dispenseConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DispenseConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dispenseConditions.begin(); itr != m_dispenseConditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dispenseRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DispenseRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dispenseRegions.begin(); itr != m_dispenseRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t Rule::GetRuleId() const
{
    return m_ruleId;
}

void Rule::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool Rule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string Rule::GetName() const
{
    return m_name;
}

void Rule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Rule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Rule::GetExtNamespace() const
{
    return m_extNamespace;
}

void Rule::SetExtNamespace(const string& _extNamespace)
{
    m_extNamespace = _extNamespace;
    m_extNamespaceHasBeenSet = true;
}

bool Rule::ExtNamespaceHasBeenSet() const
{
    return m_extNamespaceHasBeenSet;
}

vector<ExtMetric> Rule::GetExtMetric() const
{
    return m_extMetric;
}

void Rule::SetExtMetric(const vector<ExtMetric>& _extMetric)
{
    m_extMetric = _extMetric;
    m_extMetricHasBeenSet = true;
}

bool Rule::ExtMetricHasBeenSet() const
{
    return m_extMetricHasBeenSet;
}

Producer Rule::GetProducer() const
{
    return m_producer;
}

void Rule::SetProducer(const Producer& _producer)
{
    m_producer = _producer;
    m_producerHasBeenSet = true;
}

bool Rule::ProducerHasBeenSet() const
{
    return m_producerHasBeenSet;
}

int64_t Rule::GetUpdateTime() const
{
    return m_updateTime;
}

void Rule::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Rule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t Rule::GetStatus() const
{
    return m_status;
}

void Rule::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Rule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<int64_t> Rule::GetPeriod() const
{
    return m_period;
}

void Rule::SetPeriod(const vector<int64_t>& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool Rule::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<DispenseCondition> Rule::GetDispenseConditions() const
{
    return m_dispenseConditions;
}

void Rule::SetDispenseConditions(const vector<DispenseCondition>& _dispenseConditions)
{
    m_dispenseConditions = _dispenseConditions;
    m_dispenseConditionsHasBeenSet = true;
}

bool Rule::DispenseConditionsHasBeenSet() const
{
    return m_dispenseConditionsHasBeenSet;
}

vector<string> Rule::GetDispenseRegions() const
{
    return m_dispenseRegions;
}

void Rule::SetDispenseRegions(const vector<string>& _dispenseRegions)
{
    m_dispenseRegions = _dispenseRegions;
    m_dispenseRegionsHasBeenSet = true;
}

bool Rule::DispenseRegionsHasBeenSet() const
{
    return m_dispenseRegionsHasBeenSet;
}

