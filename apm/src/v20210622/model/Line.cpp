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

#include <tencentcloud/apm/v20210622/model/Line.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

Line::Line() :
    m_metricNameHasBeenSet(false),
    m_metricNameCNHasBeenSet(false),
    m_timeSerialHasBeenSet(false),
    m_dataSerialHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome Line::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Line.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("MetricNameCN") && !value["MetricNameCN"].IsNull())
    {
        if (!value["MetricNameCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Line.MetricNameCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricNameCN = string(value["MetricNameCN"].GetString());
        m_metricNameCNHasBeenSet = true;
    }

    if (value.HasMember("TimeSerial") && !value["TimeSerial"].IsNull())
    {
        if (!value["TimeSerial"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Line.TimeSerial` is not array type"));

        const rapidjson::Value &tmpValue = value["TimeSerial"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timeSerial.push_back((*itr).GetInt64());
        }
        m_timeSerialHasBeenSet = true;
    }

    if (value.HasMember("DataSerial") && !value["DataSerial"].IsNull())
    {
        if (!value["DataSerial"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Line.DataSerial` is not array type"));

        const rapidjson::Value &tmpValue = value["DataSerial"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dataSerial.push_back((*itr).GetDouble());
        }
        m_dataSerialHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Line.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApmTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Line::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricNameCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricNameCN.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSerialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSerial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timeSerial.begin(); itr != m_timeSerial.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_dataSerialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSerial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataSerial.begin(); itr != m_dataSerial.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Line::GetMetricName() const
{
    return m_metricName;
}

void Line::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool Line::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string Line::GetMetricNameCN() const
{
    return m_metricNameCN;
}

void Line::SetMetricNameCN(const string& _metricNameCN)
{
    m_metricNameCN = _metricNameCN;
    m_metricNameCNHasBeenSet = true;
}

bool Line::MetricNameCNHasBeenSet() const
{
    return m_metricNameCNHasBeenSet;
}

vector<int64_t> Line::GetTimeSerial() const
{
    return m_timeSerial;
}

void Line::SetTimeSerial(const vector<int64_t>& _timeSerial)
{
    m_timeSerial = _timeSerial;
    m_timeSerialHasBeenSet = true;
}

bool Line::TimeSerialHasBeenSet() const
{
    return m_timeSerialHasBeenSet;
}

vector<double> Line::GetDataSerial() const
{
    return m_dataSerial;
}

void Line::SetDataSerial(const vector<double>& _dataSerial)
{
    m_dataSerial = _dataSerial;
    m_dataSerialHasBeenSet = true;
}

bool Line::DataSerialHasBeenSet() const
{
    return m_dataSerialHasBeenSet;
}

vector<ApmTag> Line::GetTags() const
{
    return m_tags;
}

void Line::SetTags(const vector<ApmTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Line::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

