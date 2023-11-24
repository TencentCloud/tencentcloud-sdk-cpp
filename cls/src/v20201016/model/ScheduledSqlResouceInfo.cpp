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

#include <tencentcloud/cls/v20201016/model/ScheduledSqlResouceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ScheduledSqlResouceInfo::ScheduledSqlResouceInfo() :
    m_topicIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_metricNamesHasBeenSet(false),
    m_metricLabelsHasBeenSet(false),
    m_customTimeHasBeenSet(false),
    m_customMetricLabelsHasBeenSet(false)
{
}

CoreInternalOutcome ScheduledSqlResouceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlResouceInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlResouceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("BizType") && !value["BizType"].IsNull())
    {
        if (!value["BizType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlResouceInfo.BizType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = value["BizType"].GetInt64();
        m_bizTypeHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlResouceInfo.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("MetricNames") && !value["MetricNames"].IsNull())
    {
        if (!value["MetricNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlResouceInfo.MetricNames` is not array type"));

        const rapidjson::Value &tmpValue = value["MetricNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_metricNames.push_back((*itr).GetString());
        }
        m_metricNamesHasBeenSet = true;
    }

    if (value.HasMember("MetricLabels") && !value["MetricLabels"].IsNull())
    {
        if (!value["MetricLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlResouceInfo.MetricLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["MetricLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_metricLabels.push_back((*itr).GetString());
        }
        m_metricLabelsHasBeenSet = true;
    }

    if (value.HasMember("CustomTime") && !value["CustomTime"].IsNull())
    {
        if (!value["CustomTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlResouceInfo.CustomTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customTime = string(value["CustomTime"].GetString());
        m_customTimeHasBeenSet = true;
    }

    if (value.HasMember("CustomMetricLabels") && !value["CustomMetricLabels"].IsNull())
    {
        if (!value["CustomMetricLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlResouceInfo.CustomMetricLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomMetricLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customMetricLabels.push_back(item);
        }
        m_customMetricLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScheduledSqlResouceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bizType, allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metricNames.begin(); itr != m_metricNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_metricLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metricLabels.begin(); itr != m_metricLabels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customTime.c_str(), allocator).Move(), allocator);
    }

    if (m_customMetricLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomMetricLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customMetricLabels.begin(); itr != m_customMetricLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ScheduledSqlResouceInfo::GetTopicId() const
{
    return m_topicId;
}

void ScheduledSqlResouceInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ScheduledSqlResouceInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ScheduledSqlResouceInfo::GetRegion() const
{
    return m_region;
}

void ScheduledSqlResouceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ScheduledSqlResouceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t ScheduledSqlResouceInfo::GetBizType() const
{
    return m_bizType;
}

void ScheduledSqlResouceInfo::SetBizType(const int64_t& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool ScheduledSqlResouceInfo::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string ScheduledSqlResouceInfo::GetMetricName() const
{
    return m_metricName;
}

void ScheduledSqlResouceInfo::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool ScheduledSqlResouceInfo::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

vector<string> ScheduledSqlResouceInfo::GetMetricNames() const
{
    return m_metricNames;
}

void ScheduledSqlResouceInfo::SetMetricNames(const vector<string>& _metricNames)
{
    m_metricNames = _metricNames;
    m_metricNamesHasBeenSet = true;
}

bool ScheduledSqlResouceInfo::MetricNamesHasBeenSet() const
{
    return m_metricNamesHasBeenSet;
}

vector<string> ScheduledSqlResouceInfo::GetMetricLabels() const
{
    return m_metricLabels;
}

void ScheduledSqlResouceInfo::SetMetricLabels(const vector<string>& _metricLabels)
{
    m_metricLabels = _metricLabels;
    m_metricLabelsHasBeenSet = true;
}

bool ScheduledSqlResouceInfo::MetricLabelsHasBeenSet() const
{
    return m_metricLabelsHasBeenSet;
}

string ScheduledSqlResouceInfo::GetCustomTime() const
{
    return m_customTime;
}

void ScheduledSqlResouceInfo::SetCustomTime(const string& _customTime)
{
    m_customTime = _customTime;
    m_customTimeHasBeenSet = true;
}

bool ScheduledSqlResouceInfo::CustomTimeHasBeenSet() const
{
    return m_customTimeHasBeenSet;
}

vector<MetricLabel> ScheduledSqlResouceInfo::GetCustomMetricLabels() const
{
    return m_customMetricLabels;
}

void ScheduledSqlResouceInfo::SetCustomMetricLabels(const vector<MetricLabel>& _customMetricLabels)
{
    m_customMetricLabels = _customMetricLabels;
    m_customMetricLabelsHasBeenSet = true;
}

bool ScheduledSqlResouceInfo::CustomMetricLabelsHasBeenSet() const
{
    return m_customMetricLabelsHasBeenSet;
}

