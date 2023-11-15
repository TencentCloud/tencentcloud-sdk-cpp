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

#include <tencentcloud/weilingwith/v20230427/model/BatchReportAppMessageRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

BatchReportAppMessageRes::BatchReportAppMessageRes() :
    m_totalElementsHasBeenSet(false),
    m_commitHasBeenSet(false),
    m_spanMapHasBeenSet(false)
{
}

CoreInternalOutcome BatchReportAppMessageRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalElements") && !value["TotalElements"].IsNull())
    {
        if (!value["TotalElements"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchReportAppMessageRes.TotalElements` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalElements = value["TotalElements"].GetInt64();
        m_totalElementsHasBeenSet = true;
    }

    if (value.HasMember("Commit") && !value["Commit"].IsNull())
    {
        if (!value["Commit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchReportAppMessageRes.Commit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commit = value["Commit"].GetInt64();
        m_commitHasBeenSet = true;
    }

    if (value.HasMember("SpanMap") && !value["SpanMap"].IsNull())
    {
        if (!value["SpanMap"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchReportAppMessageRes.SpanMap` is not array type"));

        const rapidjson::Value &tmpValue = value["SpanMap"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReportMsgRes item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_spanMap.push_back(item);
        }
        m_spanMapHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchReportAppMessageRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalElementsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalElements";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalElements, allocator);
    }

    if (m_commitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Commit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commit, allocator);
    }

    if (m_spanMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpanMap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_spanMap.begin(); itr != m_spanMap.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t BatchReportAppMessageRes::GetTotalElements() const
{
    return m_totalElements;
}

void BatchReportAppMessageRes::SetTotalElements(const int64_t& _totalElements)
{
    m_totalElements = _totalElements;
    m_totalElementsHasBeenSet = true;
}

bool BatchReportAppMessageRes::TotalElementsHasBeenSet() const
{
    return m_totalElementsHasBeenSet;
}

int64_t BatchReportAppMessageRes::GetCommit() const
{
    return m_commit;
}

void BatchReportAppMessageRes::SetCommit(const int64_t& _commit)
{
    m_commit = _commit;
    m_commitHasBeenSet = true;
}

bool BatchReportAppMessageRes::CommitHasBeenSet() const
{
    return m_commitHasBeenSet;
}

vector<ReportMsgRes> BatchReportAppMessageRes::GetSpanMap() const
{
    return m_spanMap;
}

void BatchReportAppMessageRes::SetSpanMap(const vector<ReportMsgRes>& _spanMap)
{
    m_spanMap = _spanMap;
    m_spanMapHasBeenSet = true;
}

bool BatchReportAppMessageRes::SpanMapHasBeenSet() const
{
    return m_spanMapHasBeenSet;
}

