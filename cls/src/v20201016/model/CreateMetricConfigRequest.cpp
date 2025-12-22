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

#include <tencentcloud/cls/v20201016/model/CreateMetricConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateMetricConfigRequest::CreateMetricConfigRequest() :
    m_topicIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_nameHasBeenSet(false),
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

string CreateMetricConfigRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flag, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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


string CreateMetricConfigRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateMetricConfigRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateMetricConfigRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

uint64_t CreateMetricConfigRequest::GetSource() const
{
    return m_source;
}

void CreateMetricConfigRequest::SetSource(const uint64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateMetricConfigRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

vector<string> CreateMetricConfigRequest::GetGroupIds() const
{
    return m_groupIds;
}

void CreateMetricConfigRequest::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool CreateMetricConfigRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

uint64_t CreateMetricConfigRequest::GetType() const
{
    return m_type;
}

void CreateMetricConfigRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateMetricConfigRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t CreateMetricConfigRequest::GetFlag() const
{
    return m_flag;
}

void CreateMetricConfigRequest::SetFlag(const uint64_t& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool CreateMetricConfigRequest::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string CreateMetricConfigRequest::GetName() const
{
    return m_name;
}

void CreateMetricConfigRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateMetricConfigRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

MetricSpec CreateMetricConfigRequest::GetSpec() const
{
    return m_spec;
}

void CreateMetricConfigRequest::SetSpec(const MetricSpec& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool CreateMetricConfigRequest::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

vector<Relabeling> CreateMetricConfigRequest::GetMetricRelabels() const
{
    return m_metricRelabels;
}

void CreateMetricConfigRequest::SetMetricRelabels(const vector<Relabeling>& _metricRelabels)
{
    m_metricRelabels = _metricRelabels;
    m_metricRelabelsHasBeenSet = true;
}

bool CreateMetricConfigRequest::MetricRelabelsHasBeenSet() const
{
    return m_metricRelabelsHasBeenSet;
}

MetricConfigLabel CreateMetricConfigRequest::GetMetricLabel() const
{
    return m_metricLabel;
}

void CreateMetricConfigRequest::SetMetricLabel(const MetricConfigLabel& _metricLabel)
{
    m_metricLabel = _metricLabel;
    m_metricLabelHasBeenSet = true;
}

bool CreateMetricConfigRequest::MetricLabelHasBeenSet() const
{
    return m_metricLabelHasBeenSet;
}

string CreateMetricConfigRequest::GetScheme() const
{
    return m_scheme;
}

void CreateMetricConfigRequest::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool CreateMetricConfigRequest::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

string CreateMetricConfigRequest::GetScrapeInterval() const
{
    return m_scrapeInterval;
}

void CreateMetricConfigRequest::SetScrapeInterval(const string& _scrapeInterval)
{
    m_scrapeInterval = _scrapeInterval;
    m_scrapeIntervalHasBeenSet = true;
}

bool CreateMetricConfigRequest::ScrapeIntervalHasBeenSet() const
{
    return m_scrapeIntervalHasBeenSet;
}

string CreateMetricConfigRequest::GetScrapeTimeout() const
{
    return m_scrapeTimeout;
}

void CreateMetricConfigRequest::SetScrapeTimeout(const string& _scrapeTimeout)
{
    m_scrapeTimeout = _scrapeTimeout;
    m_scrapeTimeoutHasBeenSet = true;
}

bool CreateMetricConfigRequest::ScrapeTimeoutHasBeenSet() const
{
    return m_scrapeTimeoutHasBeenSet;
}

bool CreateMetricConfigRequest::GetHonorLabels() const
{
    return m_honorLabels;
}

void CreateMetricConfigRequest::SetHonorLabels(const bool& _honorLabels)
{
    m_honorLabels = _honorLabels;
    m_honorLabelsHasBeenSet = true;
}

bool CreateMetricConfigRequest::HonorLabelsHasBeenSet() const
{
    return m_honorLabelsHasBeenSet;
}

MetricYamlSpec CreateMetricConfigRequest::GetYamlSpec() const
{
    return m_yamlSpec;
}

void CreateMetricConfigRequest::SetYamlSpec(const MetricYamlSpec& _yamlSpec)
{
    m_yamlSpec = _yamlSpec;
    m_yamlSpecHasBeenSet = true;
}

bool CreateMetricConfigRequest::YamlSpecHasBeenSet() const
{
    return m_yamlSpecHasBeenSet;
}


