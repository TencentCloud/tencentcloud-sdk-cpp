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

#include <tencentcloud/vod/v20180717/model/QualityInspectLLMDetectionReport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

QualityInspectLLMDetectionReport::QualityInspectLLMDetectionReport() :
    m_resultCountHasBeenSet(false),
    m_resultSetHasBeenSet(false)
{
}

CoreInternalOutcome QualityInspectLLMDetectionReport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResultCount") && !value["ResultCount"].IsNull())
    {
        if (!value["ResultCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectLLMDetectionReport.ResultCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultCount = value["ResultCount"].GetInt64();
        m_resultCountHasBeenSet = true;
    }

    if (value.HasMember("ResultSet") && !value["ResultSet"].IsNull())
    {
        if (!value["ResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityInspectLLMDetectionReport.ResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityInspectLLMDetectionResultItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resultSet.push_back(item);
        }
        m_resultSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityInspectLLMDetectionReport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultCount, allocator);
    }

    if (m_resultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resultSet.begin(); itr != m_resultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t QualityInspectLLMDetectionReport::GetResultCount() const
{
    return m_resultCount;
}

void QualityInspectLLMDetectionReport::SetResultCount(const int64_t& _resultCount)
{
    m_resultCount = _resultCount;
    m_resultCountHasBeenSet = true;
}

bool QualityInspectLLMDetectionReport::ResultCountHasBeenSet() const
{
    return m_resultCountHasBeenSet;
}

vector<QualityInspectLLMDetectionResultItem> QualityInspectLLMDetectionReport::GetResultSet() const
{
    return m_resultSet;
}

void QualityInspectLLMDetectionReport::SetResultSet(const vector<QualityInspectLLMDetectionResultItem>& _resultSet)
{
    m_resultSet = _resultSet;
    m_resultSetHasBeenSet = true;
}

bool QualityInspectLLMDetectionReport::ResultSetHasBeenSet() const
{
    return m_resultSetHasBeenSet;
}

