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

#include <tencentcloud/cls/v20201016/model/ModifyMetricConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyMetricConfigRequest::ModifyMetricConfigRequest() :
    m_topicIdHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_operateHasBeenSet(false),
    m_specHasBeenSet(false),
    m_metricRelabelsHasBeenSet(false),
    m_metricLabelHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_scrapeIntervalHasBeenSet(false),
    m_scrapeTimeoutHasBeenSet(false),
    m_honorLabelsHasBeenSet(false),
    m_yamlSpecHasBeenSet(false)
{
}

string ModifyMetricConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_source, allocator);
    }

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_operate, allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spec.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_metricRelabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricRelabels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricRelabels.begin(); itr != m_metricRelabels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_metricLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricLabel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metricLabel.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_schemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheme.c_str(), allocator).Move(), allocator);
    }

    if (m_scrapeIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrapeInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scrapeInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_scrapeTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrapeTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scrapeTimeout.c_str(), allocator).Move(), allocator);
    }

    if (m_honorLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HonorLabels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_honorLabels, allocator);
    }

    if (m_yamlSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YamlSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_yamlSpec.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMetricConfigRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyMetricConfigRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyMetricConfigRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ModifyMetricConfigRequest::GetConfigId() const
{
    return m_configId;
}

void ModifyMetricConfigRequest::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool ModifyMetricConfigRequest::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

uint64_t ModifyMetricConfigRequest::GetSource() const
{
    return m_source;
}

void ModifyMetricConfigRequest::SetSource(const uint64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ModifyMetricConfigRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

vector<string> ModifyMetricConfigRequest::GetGroupIds() const
{
    return m_groupIds;
}

void ModifyMetricConfigRequest::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool ModifyMetricConfigRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

uint64_t ModifyMetricConfigRequest::GetOperate() const
{
    return m_operate;
}

void ModifyMetricConfigRequest::SetOperate(const uint64_t& _operate)
{
    m_operate = _operate;
    m_operateHasBeenSet = true;
}

bool ModifyMetricConfigRequest::OperateHasBeenSet() const
{
    return m_operateHasBeenSet;
}

MetricSpec ModifyMetricConfigRequest::GetSpec() const
{
    return m_spec;
}

void ModifyMetricConfigRequest::SetSpec(const MetricSpec& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool ModifyMetricConfigRequest::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

vector<Relabeling> ModifyMetricConfigRequest::GetMetricRelabels() const
{
    return m_metricRelabels;
}

void ModifyMetricConfigRequest::SetMetricRelabels(const vector<Relabeling>& _metricRelabels)
{
    m_metricRelabels = _metricRelabels;
    m_metricRelabelsHasBeenSet = true;
}

bool ModifyMetricConfigRequest::MetricRelabelsHasBeenSet() const
{
    return m_metricRelabelsHasBeenSet;
}

MetricConfigLabel ModifyMetricConfigRequest::GetMetricLabel() const
{
    return m_metricLabel;
}

void ModifyMetricConfigRequest::SetMetricLabel(const MetricConfigLabel& _metricLabel)
{
    m_metricLabel = _metricLabel;
    m_metricLabelHasBeenSet = true;
}

bool ModifyMetricConfigRequest::MetricLabelHasBeenSet() const
{
    return m_metricLabelHasBeenSet;
}

string ModifyMetricConfigRequest::GetScheme() const
{
    return m_scheme;
}

void ModifyMetricConfigRequest::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool ModifyMetricConfigRequest::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

string ModifyMetricConfigRequest::GetScrapeInterval() const
{
    return m_scrapeInterval;
}

void ModifyMetricConfigRequest::SetScrapeInterval(const string& _scrapeInterval)
{
    m_scrapeInterval = _scrapeInterval;
    m_scrapeIntervalHasBeenSet = true;
}

bool ModifyMetricConfigRequest::ScrapeIntervalHasBeenSet() const
{
    return m_scrapeIntervalHasBeenSet;
}

string ModifyMetricConfigRequest::GetScrapeTimeout() const
{
    return m_scrapeTimeout;
}

void ModifyMetricConfigRequest::SetScrapeTimeout(const string& _scrapeTimeout)
{
    m_scrapeTimeout = _scrapeTimeout;
    m_scrapeTimeoutHasBeenSet = true;
}

bool ModifyMetricConfigRequest::ScrapeTimeoutHasBeenSet() const
{
    return m_scrapeTimeoutHasBeenSet;
}

bool ModifyMetricConfigRequest::GetHonorLabels() const
{
    return m_honorLabels;
}

void ModifyMetricConfigRequest::SetHonorLabels(const bool& _honorLabels)
{
    m_honorLabels = _honorLabels;
    m_honorLabelsHasBeenSet = true;
}

bool ModifyMetricConfigRequest::HonorLabelsHasBeenSet() const
{
    return m_honorLabelsHasBeenSet;
}

MetricYamlSpec ModifyMetricConfigRequest::GetYamlSpec() const
{
    return m_yamlSpec;
}

void ModifyMetricConfigRequest::SetYamlSpec(const MetricYamlSpec& _yamlSpec)
{
    m_yamlSpec = _yamlSpec;
    m_yamlSpecHasBeenSet = true;
}

bool ModifyMetricConfigRequest::YamlSpecHasBeenSet() const
{
    return m_yamlSpecHasBeenSet;
}


