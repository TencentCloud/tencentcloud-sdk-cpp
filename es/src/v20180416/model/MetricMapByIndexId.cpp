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

#include <tencentcloud/es/v20180416/model/MetricMapByIndexId.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

MetricMapByIndexId::MetricMapByIndexId() :
    m_indexIdHasBeenSet(false),
    m_metricAllDataHasBeenSet(false)
{
}

CoreInternalOutcome MetricMapByIndexId::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IndexId") && !value["IndexId"].IsNull())
    {
        if (!value["IndexId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricMapByIndexId.IndexId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexId = string(value["IndexId"].GetString());
        m_indexIdHasBeenSet = true;
    }

    if (value.HasMember("MetricAllData") && !value["MetricAllData"].IsNull())
    {
        if (!value["MetricAllData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MetricMapByIndexId.MetricAllData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metricAllData.Deserialize(value["MetricAllData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metricAllDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricMapByIndexId::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexId.c_str(), allocator).Move(), allocator);
    }

    if (m_metricAllDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricAllData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metricAllData.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MetricMapByIndexId::GetIndexId() const
{
    return m_indexId;
}

void MetricMapByIndexId::SetIndexId(const string& _indexId)
{
    m_indexId = _indexId;
    m_indexIdHasBeenSet = true;
}

bool MetricMapByIndexId::IndexIdHasBeenSet() const
{
    return m_indexIdHasBeenSet;
}

MetricAllData MetricMapByIndexId::GetMetricAllData() const
{
    return m_metricAllData;
}

void MetricMapByIndexId::SetMetricAllData(const MetricAllData& _metricAllData)
{
    m_metricAllData = _metricAllData;
    m_metricAllDataHasBeenSet = true;
}

bool MetricMapByIndexId::MetricAllDataHasBeenSet() const
{
    return m_metricAllDataHasBeenSet;
}

