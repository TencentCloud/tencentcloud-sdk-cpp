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

#include <tencentcloud/teo/v20220901/model/SingleTypeValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SingleTypeValue::SingleTypeValue() :
    m_metricNameHasBeenSet(false),
    m_detailDataHasBeenSet(false)
{
}

CoreInternalOutcome SingleTypeValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingleTypeValue.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("DetailData") && !value["DetailData"].IsNull())
    {
        if (!value["DetailData"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SingleTypeValue.DetailData` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detailData = value["DetailData"].GetInt64();
        m_detailDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SingleTypeValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_detailDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detailData, allocator);
    }

}


string SingleTypeValue::GetMetricName() const
{
    return m_metricName;
}

void SingleTypeValue::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool SingleTypeValue::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

int64_t SingleTypeValue::GetDetailData() const
{
    return m_detailData;
}

void SingleTypeValue::SetDetailData(const int64_t& _detailData)
{
    m_detailData = _detailData;
    m_detailDataHasBeenSet = true;
}

bool SingleTypeValue::DetailDataHasBeenSet() const
{
    return m_detailDataHasBeenSet;
}

