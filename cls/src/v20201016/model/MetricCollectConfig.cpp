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

#include <tencentcloud/cls/v20201016/model/MetricCollectConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

MetricCollectConfig::MetricCollectConfig() :
    m_configIdHasBeenSet(false),
    m_topicIdsHasBeenSet(false),
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
    m_yamlSpecHasBeenSet(false),
    m_operateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome MetricCollectConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("TopicIds") && !value["TopicIds"].IsNull())
    {
        if (!value["TopicIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.TopicIds` is not array type"));

        const rapidjson::Value &tmpValue = value["TopicIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_topicIds.push_back((*itr).GetString());
        }
        m_topicIdsHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.Source` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetUint64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("GroupIds") && !value["GroupIds"].IsNull())
    {
        if (!value["GroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.GroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupIds.push_back((*itr).GetString());
        }
        m_groupIdsHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Flag") && !value["Flag"].IsNull())
    {
        if (!value["Flag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.Flag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flag = value["Flag"].GetUint64();
        m_flagHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.Spec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_spec.Deserialize(value["Spec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_specHasBeenSet = true;
    }

    if (value.HasMember("MetricRelabels") && !value["MetricRelabels"].IsNull())
    {
        if (!value["MetricRelabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.MetricRelabels` is not array type"));

        const rapidjson::Value &tmpValue = value["MetricRelabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Relabeling item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metricRelabels.push_back(item);
        }
        m_metricRelabelsHasBeenSet = true;
    }

    if (value.HasMember("MetricLabel") && !value["MetricLabel"].IsNull())
    {
        if (!value["MetricLabel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.MetricLabel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metricLabel.Deserialize(value["MetricLabel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metricLabelHasBeenSet = true;
    }

    if (value.HasMember("Scheme") && !value["Scheme"].IsNull())
    {
        if (!value["Scheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.Scheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheme = string(value["Scheme"].GetString());
        m_schemeHasBeenSet = true;
    }

    if (value.HasMember("ScrapeInterval") && !value["ScrapeInterval"].IsNull())
    {
        if (!value["ScrapeInterval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.ScrapeInterval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scrapeInterval = string(value["ScrapeInterval"].GetString());
        m_scrapeIntervalHasBeenSet = true;
    }

    if (value.HasMember("ScrapeTimeout") && !value["ScrapeTimeout"].IsNull())
    {
        if (!value["ScrapeTimeout"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.ScrapeTimeout` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scrapeTimeout = string(value["ScrapeTimeout"].GetString());
        m_scrapeTimeoutHasBeenSet = true;
    }

    if (value.HasMember("HonorLabels") && !value["HonorLabels"].IsNull())
    {
        if (!value["HonorLabels"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.HonorLabels` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_honorLabels = value["HonorLabels"].GetBool();
        m_honorLabelsHasBeenSet = true;
    }

    if (value.HasMember("YamlSpec") && !value["YamlSpec"].IsNull())
    {
        if (!value["YamlSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.YamlSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_yamlSpec.Deserialize(value["YamlSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_yamlSpecHasBeenSet = true;
    }

    if (value.HasMember("Operate") && !value["Operate"].IsNull())
    {
        if (!value["Operate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.Operate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operate = value["Operate"].GetUint64();
        m_operateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricCollectConfig.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricCollectConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_topicIds.begin(); itr != m_topicIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flag, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metricRelabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricRelabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricRelabels.begin(); itr != m_metricRelabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_metricLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metricLabel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_schemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheme.c_str(), allocator).Move(), allocator);
    }

    if (m_scrapeIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrapeInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scrapeInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_scrapeTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrapeTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scrapeTimeout.c_str(), allocator).Move(), allocator);
    }

    if (m_honorLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HonorLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_honorLabels, allocator);
    }

    if (m_yamlSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YamlSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_yamlSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_operateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operate, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string MetricCollectConfig::GetConfigId() const
{
    return m_configId;
}

void MetricCollectConfig::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool MetricCollectConfig::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

vector<string> MetricCollectConfig::GetTopicIds() const
{
    return m_topicIds;
}

void MetricCollectConfig::SetTopicIds(const vector<string>& _topicIds)
{
    m_topicIds = _topicIds;
    m_topicIdsHasBeenSet = true;
}

bool MetricCollectConfig::TopicIdsHasBeenSet() const
{
    return m_topicIdsHasBeenSet;
}

uint64_t MetricCollectConfig::GetSource() const
{
    return m_source;
}

void MetricCollectConfig::SetSource(const uint64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool MetricCollectConfig::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

vector<string> MetricCollectConfig::GetGroupIds() const
{
    return m_groupIds;
}

void MetricCollectConfig::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool MetricCollectConfig::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

uint64_t MetricCollectConfig::GetType() const
{
    return m_type;
}

void MetricCollectConfig::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MetricCollectConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t MetricCollectConfig::GetFlag() const
{
    return m_flag;
}

void MetricCollectConfig::SetFlag(const uint64_t& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool MetricCollectConfig::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string MetricCollectConfig::GetName() const
{
    return m_name;
}

void MetricCollectConfig::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MetricCollectConfig::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

MetricSpec MetricCollectConfig::GetSpec() const
{
    return m_spec;
}

void MetricCollectConfig::SetSpec(const MetricSpec& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool MetricCollectConfig::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

vector<Relabeling> MetricCollectConfig::GetMetricRelabels() const
{
    return m_metricRelabels;
}

void MetricCollectConfig::SetMetricRelabels(const vector<Relabeling>& _metricRelabels)
{
    m_metricRelabels = _metricRelabels;
    m_metricRelabelsHasBeenSet = true;
}

bool MetricCollectConfig::MetricRelabelsHasBeenSet() const
{
    return m_metricRelabelsHasBeenSet;
}

MetricConfigLabel MetricCollectConfig::GetMetricLabel() const
{
    return m_metricLabel;
}

void MetricCollectConfig::SetMetricLabel(const MetricConfigLabel& _metricLabel)
{
    m_metricLabel = _metricLabel;
    m_metricLabelHasBeenSet = true;
}

bool MetricCollectConfig::MetricLabelHasBeenSet() const
{
    return m_metricLabelHasBeenSet;
}

string MetricCollectConfig::GetScheme() const
{
    return m_scheme;
}

void MetricCollectConfig::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool MetricCollectConfig::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

string MetricCollectConfig::GetScrapeInterval() const
{
    return m_scrapeInterval;
}

void MetricCollectConfig::SetScrapeInterval(const string& _scrapeInterval)
{
    m_scrapeInterval = _scrapeInterval;
    m_scrapeIntervalHasBeenSet = true;
}

bool MetricCollectConfig::ScrapeIntervalHasBeenSet() const
{
    return m_scrapeIntervalHasBeenSet;
}

string MetricCollectConfig::GetScrapeTimeout() const
{
    return m_scrapeTimeout;
}

void MetricCollectConfig::SetScrapeTimeout(const string& _scrapeTimeout)
{
    m_scrapeTimeout = _scrapeTimeout;
    m_scrapeTimeoutHasBeenSet = true;
}

bool MetricCollectConfig::ScrapeTimeoutHasBeenSet() const
{
    return m_scrapeTimeoutHasBeenSet;
}

bool MetricCollectConfig::GetHonorLabels() const
{
    return m_honorLabels;
}

void MetricCollectConfig::SetHonorLabels(const bool& _honorLabels)
{
    m_honorLabels = _honorLabels;
    m_honorLabelsHasBeenSet = true;
}

bool MetricCollectConfig::HonorLabelsHasBeenSet() const
{
    return m_honorLabelsHasBeenSet;
}

MetricYamlSpec MetricCollectConfig::GetYamlSpec() const
{
    return m_yamlSpec;
}

void MetricCollectConfig::SetYamlSpec(const MetricYamlSpec& _yamlSpec)
{
    m_yamlSpec = _yamlSpec;
    m_yamlSpecHasBeenSet = true;
}

bool MetricCollectConfig::YamlSpecHasBeenSet() const
{
    return m_yamlSpecHasBeenSet;
}

uint64_t MetricCollectConfig::GetOperate() const
{
    return m_operate;
}

void MetricCollectConfig::SetOperate(const uint64_t& _operate)
{
    m_operate = _operate;
    m_operateHasBeenSet = true;
}

bool MetricCollectConfig::OperateHasBeenSet() const
{
    return m_operateHasBeenSet;
}

uint64_t MetricCollectConfig::GetCreateTime() const
{
    return m_createTime;
}

void MetricCollectConfig::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MetricCollectConfig::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t MetricCollectConfig::GetUpdateTime() const
{
    return m_updateTime;
}

void MetricCollectConfig::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool MetricCollectConfig::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

