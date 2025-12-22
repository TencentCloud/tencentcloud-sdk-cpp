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

#include <tencentcloud/cls/v20201016/model/CreateMetricSubscribeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateMetricSubscribeRequest::CreateMetricSubscribeRequest() :
    m_nameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_instanceInfoHasBeenSet(false)
{
}

string CreateMetricSubscribeRequest::ToJsonString() const
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

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metrics.begin(); itr != m_metrics.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_instanceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMetricSubscribeRequest::GetName() const
{
    return m_name;
}

void CreateMetricSubscribeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateMetricSubscribeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateMetricSubscribeRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateMetricSubscribeRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateMetricSubscribeRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CreateMetricSubscribeRequest::GetNamespace() const
{
    return m_namespace;
}

void CreateMetricSubscribeRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CreateMetricSubscribeRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

vector<MetricConfig> CreateMetricSubscribeRequest::GetMetrics() const
{
    return m_metrics;
}

void CreateMetricSubscribeRequest::SetMetrics(const vector<MetricConfig>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool CreateMetricSubscribeRequest::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

InstanceConfig CreateMetricSubscribeRequest::GetInstanceInfo() const
{
    return m_instanceInfo;
}

void CreateMetricSubscribeRequest::SetInstanceInfo(const InstanceConfig& _instanceInfo)
{
    m_instanceInfo = _instanceInfo;
    m_instanceInfoHasBeenSet = true;
}

bool CreateMetricSubscribeRequest::InstanceInfoHasBeenSet() const
{
    return m_instanceInfoHasBeenSet;
}


