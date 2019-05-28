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

#include <tencentcloud/cdn/v20180606/model/CdnData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

CdnData::CdnData() :
    m_metricHasBeenSet(false),
    m_detailDataHasBeenSet(false),
    m_summarizedDataHasBeenSet(false)
{
}

CoreInternalOutcome CdnData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Error("response `CdnData.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("DetailData") && !value["DetailData"].IsNull())
    {
        if (!value["DetailData"].IsArray())
            return CoreInternalOutcome(Error("response `CdnData.DetailData` is not array type"));

        const Value &tmpValue = value["DetailData"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimestampData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailData.push_back(item);
        }
        m_detailDataHasBeenSet = true;
    }

    if (value.HasMember("SummarizedData") && !value["SummarizedData"].IsNull())
    {
        if (!value["SummarizedData"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CdnData.SummarizedData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_summarizedData.Deserialize(value["SummarizedData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_summarizedDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CdnData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_metricHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_detailDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DetailData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailData.begin(); itr != m_detailData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_summarizedDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SummarizedData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_summarizedData.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CdnData::GetMetric() const
{
    return m_metric;
}

void CdnData::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool CdnData::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

vector<TimestampData> CdnData::GetDetailData() const
{
    return m_detailData;
}

void CdnData::SetDetailData(const vector<TimestampData>& _detailData)
{
    m_detailData = _detailData;
    m_detailDataHasBeenSet = true;
}

bool CdnData::DetailDataHasBeenSet() const
{
    return m_detailDataHasBeenSet;
}

SummarizedData CdnData::GetSummarizedData() const
{
    return m_summarizedData;
}

void CdnData::SetSummarizedData(const SummarizedData& _summarizedData)
{
    m_summarizedData = _summarizedData;
    m_summarizedDataHasBeenSet = true;
}

bool CdnData::SummarizedDataHasBeenSet() const
{
    return m_summarizedDataHasBeenSet;
}

