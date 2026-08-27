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

#include <tencentcloud/monitor/v20230616/model/CreateDispenseExternalRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

CreateDispenseExternalRuleRequest::CreateDispenseExternalRuleRequest() :
    m_nameHasBeenSet(false),
    m_extNamespaceHasBeenSet(false),
    m_producerHasBeenSet(false),
    m_dispenseRegionsHasBeenSet(false),
    m_extMetricsHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_dispenseConditionsHasBeenSet(false)
{
}

string CreateDispenseExternalRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_extNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_producerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Producer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_producer.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dispenseRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DispenseRegions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dispenseRegions.begin(); itr != m_dispenseRegions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_extMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtMetrics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extMetrics.begin(); itr != m_extMetrics.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_period.begin(); itr != m_period.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_dispenseConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DispenseConditions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dispenseConditions.begin(); itr != m_dispenseConditions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDispenseExternalRuleRequest::GetName() const
{
    return m_name;
}

void CreateDispenseExternalRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDispenseExternalRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDispenseExternalRuleRequest::GetExtNamespace() const
{
    return m_extNamespace;
}

void CreateDispenseExternalRuleRequest::SetExtNamespace(const string& _extNamespace)
{
    m_extNamespace = _extNamespace;
    m_extNamespaceHasBeenSet = true;
}

bool CreateDispenseExternalRuleRequest::ExtNamespaceHasBeenSet() const
{
    return m_extNamespaceHasBeenSet;
}

Producer CreateDispenseExternalRuleRequest::GetProducer() const
{
    return m_producer;
}

void CreateDispenseExternalRuleRequest::SetProducer(const Producer& _producer)
{
    m_producer = _producer;
    m_producerHasBeenSet = true;
}

bool CreateDispenseExternalRuleRequest::ProducerHasBeenSet() const
{
    return m_producerHasBeenSet;
}

vector<string> CreateDispenseExternalRuleRequest::GetDispenseRegions() const
{
    return m_dispenseRegions;
}

void CreateDispenseExternalRuleRequest::SetDispenseRegions(const vector<string>& _dispenseRegions)
{
    m_dispenseRegions = _dispenseRegions;
    m_dispenseRegionsHasBeenSet = true;
}

bool CreateDispenseExternalRuleRequest::DispenseRegionsHasBeenSet() const
{
    return m_dispenseRegionsHasBeenSet;
}

vector<string> CreateDispenseExternalRuleRequest::GetExtMetrics() const
{
    return m_extMetrics;
}

void CreateDispenseExternalRuleRequest::SetExtMetrics(const vector<string>& _extMetrics)
{
    m_extMetrics = _extMetrics;
    m_extMetricsHasBeenSet = true;
}

bool CreateDispenseExternalRuleRequest::ExtMetricsHasBeenSet() const
{
    return m_extMetricsHasBeenSet;
}

vector<int64_t> CreateDispenseExternalRuleRequest::GetPeriod() const
{
    return m_period;
}

void CreateDispenseExternalRuleRequest::SetPeriod(const vector<int64_t>& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateDispenseExternalRuleRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<DispenseCondition> CreateDispenseExternalRuleRequest::GetDispenseConditions() const
{
    return m_dispenseConditions;
}

void CreateDispenseExternalRuleRequest::SetDispenseConditions(const vector<DispenseCondition>& _dispenseConditions)
{
    m_dispenseConditions = _dispenseConditions;
    m_dispenseConditionsHasBeenSet = true;
}

bool CreateDispenseExternalRuleRequest::DispenseConditionsHasBeenSet() const
{
    return m_dispenseConditionsHasBeenSet;
}


