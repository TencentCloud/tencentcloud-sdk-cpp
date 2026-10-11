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

#include <tencentcloud/apm/v20210622/model/SpanTreeView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

SpanTreeView::SpanTreeView() :
    m_treeDataHasBeenSet(false),
    m_chartDataHasBeenSet(false),
    m_traceOverviewHasBeenSet(false),
    m_compressedTreeDataHasBeenSet(false),
    m_cntExceededHasBeenSet(false),
    m_queryTimeoutHasBeenSet(false),
    m_spanTotalCntHasBeenSet(false),
    m_filterViewTagValuesHasBeenSet(false)
{
}

CoreInternalOutcome SpanTreeView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TreeData") && !value["TreeData"].IsNull())
    {
        if (!value["TreeData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpanTreeView.TreeData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treeData = string(value["TreeData"].GetString());
        m_treeDataHasBeenSet = true;
    }

    if (value.HasMember("ChartData") && !value["ChartData"].IsNull())
    {
        if (!value["ChartData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SpanTreeView.ChartData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_chartData.Deserialize(value["ChartData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_chartDataHasBeenSet = true;
    }

    if (value.HasMember("TraceOverview") && !value["TraceOverview"].IsNull())
    {
        if (!value["TraceOverview"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SpanTreeView.TraceOverview` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_traceOverview.Deserialize(value["TraceOverview"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_traceOverviewHasBeenSet = true;
    }

    if (value.HasMember("CompressedTreeData") && !value["CompressedTreeData"].IsNull())
    {
        if (!value["CompressedTreeData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpanTreeView.CompressedTreeData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compressedTreeData = string(value["CompressedTreeData"].GetString());
        m_compressedTreeDataHasBeenSet = true;
    }

    if (value.HasMember("CntExceeded") && !value["CntExceeded"].IsNull())
    {
        if (!value["CntExceeded"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SpanTreeView.CntExceeded` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cntExceeded = value["CntExceeded"].GetBool();
        m_cntExceededHasBeenSet = true;
    }

    if (value.HasMember("QueryTimeout") && !value["QueryTimeout"].IsNull())
    {
        if (!value["QueryTimeout"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SpanTreeView.QueryTimeout` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeout = value["QueryTimeout"].GetBool();
        m_queryTimeoutHasBeenSet = true;
    }

    if (value.HasMember("SpanTotalCnt") && !value["SpanTotalCnt"].IsNull())
    {
        if (!value["SpanTotalCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpanTreeView.SpanTotalCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_spanTotalCnt = value["SpanTotalCnt"].GetInt64();
        m_spanTotalCntHasBeenSet = true;
    }

    if (value.HasMember("FilterViewTagValues") && !value["FilterViewTagValues"].IsNull())
    {
        if (!value["FilterViewTagValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpanTreeView.FilterViewTagValues` is not array type"));

        const rapidjson::Value &tmpValue = value["FilterViewTagValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagValues item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filterViewTagValues.push_back(item);
        }
        m_filterViewTagValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpanTreeView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_treeDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreeData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treeData.c_str(), allocator).Move(), allocator);
    }

    if (m_chartDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChartData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chartData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_traceOverviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceOverview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_traceOverview.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compressedTreeDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompressedTreeData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compressedTreeData.c_str(), allocator).Move(), allocator);
    }

    if (m_cntExceededHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CntExceeded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cntExceeded, allocator);
    }

    if (m_queryTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTimeout, allocator);
    }

    if (m_spanTotalCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpanTotalCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spanTotalCnt, allocator);
    }

    if (m_filterViewTagValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterViewTagValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filterViewTagValues.begin(); itr != m_filterViewTagValues.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SpanTreeView::GetTreeData() const
{
    return m_treeData;
}

void SpanTreeView::SetTreeData(const string& _treeData)
{
    m_treeData = _treeData;
    m_treeDataHasBeenSet = true;
}

bool SpanTreeView::TreeDataHasBeenSet() const
{
    return m_treeDataHasBeenSet;
}

ChartData SpanTreeView::GetChartData() const
{
    return m_chartData;
}

void SpanTreeView::SetChartData(const ChartData& _chartData)
{
    m_chartData = _chartData;
    m_chartDataHasBeenSet = true;
}

bool SpanTreeView::ChartDataHasBeenSet() const
{
    return m_chartDataHasBeenSet;
}

TraceOverview SpanTreeView::GetTraceOverview() const
{
    return m_traceOverview;
}

void SpanTreeView::SetTraceOverview(const TraceOverview& _traceOverview)
{
    m_traceOverview = _traceOverview;
    m_traceOverviewHasBeenSet = true;
}

bool SpanTreeView::TraceOverviewHasBeenSet() const
{
    return m_traceOverviewHasBeenSet;
}

string SpanTreeView::GetCompressedTreeData() const
{
    return m_compressedTreeData;
}

void SpanTreeView::SetCompressedTreeData(const string& _compressedTreeData)
{
    m_compressedTreeData = _compressedTreeData;
    m_compressedTreeDataHasBeenSet = true;
}

bool SpanTreeView::CompressedTreeDataHasBeenSet() const
{
    return m_compressedTreeDataHasBeenSet;
}

bool SpanTreeView::GetCntExceeded() const
{
    return m_cntExceeded;
}

void SpanTreeView::SetCntExceeded(const bool& _cntExceeded)
{
    m_cntExceeded = _cntExceeded;
    m_cntExceededHasBeenSet = true;
}

bool SpanTreeView::CntExceededHasBeenSet() const
{
    return m_cntExceededHasBeenSet;
}

bool SpanTreeView::GetQueryTimeout() const
{
    return m_queryTimeout;
}

void SpanTreeView::SetQueryTimeout(const bool& _queryTimeout)
{
    m_queryTimeout = _queryTimeout;
    m_queryTimeoutHasBeenSet = true;
}

bool SpanTreeView::QueryTimeoutHasBeenSet() const
{
    return m_queryTimeoutHasBeenSet;
}

int64_t SpanTreeView::GetSpanTotalCnt() const
{
    return m_spanTotalCnt;
}

void SpanTreeView::SetSpanTotalCnt(const int64_t& _spanTotalCnt)
{
    m_spanTotalCnt = _spanTotalCnt;
    m_spanTotalCntHasBeenSet = true;
}

bool SpanTreeView::SpanTotalCntHasBeenSet() const
{
    return m_spanTotalCntHasBeenSet;
}

vector<TagValues> SpanTreeView::GetFilterViewTagValues() const
{
    return m_filterViewTagValues;
}

void SpanTreeView::SetFilterViewTagValues(const vector<TagValues>& _filterViewTagValues)
{
    m_filterViewTagValues = _filterViewTagValues;
    m_filterViewTagValuesHasBeenSet = true;
}

bool SpanTreeView::FilterViewTagValuesHasBeenSet() const
{
    return m_filterViewTagValuesHasBeenSet;
}

