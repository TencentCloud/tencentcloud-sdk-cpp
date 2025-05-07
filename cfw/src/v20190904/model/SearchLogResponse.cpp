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

#include <tencentcloud/cfw/v20190904/model/SearchLogResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

SearchLogResponse::SearchLogResponse() :
    m_contextHasBeenSet(false),
    m_listOverHasBeenSet(false),
    m_analysisHasBeenSet(false),
    m_resultsHasBeenSet(false),
    m_colNamesHasBeenSet(false),
    m_analysisResultsHasBeenSet(false),
    m_analysisRecordsHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_samplingRateHasBeenSet(false),
    m_topicsHasBeenSet(false)
{
}

CoreInternalOutcome SearchLogResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Context") && !rsp["Context"].IsNull())
    {
        if (!rsp["Context"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(rsp["Context"].GetString());
        m_contextHasBeenSet = true;
    }

    if (rsp.HasMember("ListOver") && !rsp["ListOver"].IsNull())
    {
        if (!rsp["ListOver"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListOver` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_listOver = rsp["ListOver"].GetBool();
        m_listOverHasBeenSet = true;
    }

    if (rsp.HasMember("Analysis") && !rsp["Analysis"].IsNull())
    {
        if (!rsp["Analysis"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Analysis` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_analysis = rsp["Analysis"].GetBool();
        m_analysisHasBeenSet = true;
    }

    if (rsp.HasMember("Results") && !rsp["Results"].IsNull())
    {
        if (!rsp["Results"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Results` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Results"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_results.push_back(item);
        }
        m_resultsHasBeenSet = true;
    }

    if (rsp.HasMember("ColNames") && !rsp["ColNames"].IsNull())
    {
        if (!rsp["ColNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ColNames` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ColNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_colNames.push_back((*itr).GetString());
        }
        m_colNamesHasBeenSet = true;
    }

    if (rsp.HasMember("AnalysisResults") && !rsp["AnalysisResults"].IsNull())
    {
        if (!rsp["AnalysisResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalysisResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AnalysisResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogItems item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_analysisResults.push_back(item);
        }
        m_analysisResultsHasBeenSet = true;
    }

    if (rsp.HasMember("AnalysisRecords") && !rsp["AnalysisRecords"].IsNull())
    {
        if (!rsp["AnalysisRecords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalysisRecords` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AnalysisRecords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_analysisRecords.push_back((*itr).GetString());
        }
        m_analysisRecordsHasBeenSet = true;
    }

    if (rsp.HasMember("Columns") && !rsp["Columns"].IsNull())
    {
        if (!rsp["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Columns` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Column item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columns.push_back(item);
        }
        m_columnsHasBeenSet = true;
    }

    if (rsp.HasMember("SamplingRate") && !rsp["SamplingRate"].IsNull())
    {
        if (!rsp["SamplingRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SamplingRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_samplingRate = rsp["SamplingRate"].GetDouble();
        m_samplingRateHasBeenSet = true;
    }

    if (rsp.HasMember("Topics") && !rsp["Topics"].IsNull())
    {
        if (!rsp["Topics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Topics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_topics.Deserialize(rsp["Topics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_topicsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string SearchLogResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_listOverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListOver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listOver, allocator);
    }

    if (m_analysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Analysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_analysis, allocator);
    }

    if (m_resultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Results";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_results.begin(); itr != m_results.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_colNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_colNames.begin(); itr != m_colNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_analysisResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_analysisResults.begin(); itr != m_analysisResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_analysisRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_analysisRecords.begin(); itr != m_analysisRecords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_samplingRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SamplingRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_samplingRate, allocator);
    }

    if (m_topicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_topics.ToJsonObject(value[key.c_str()], allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string SearchLogResponse::GetContext() const
{
    return m_context;
}

bool SearchLogResponse::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

bool SearchLogResponse::GetListOver() const
{
    return m_listOver;
}

bool SearchLogResponse::ListOverHasBeenSet() const
{
    return m_listOverHasBeenSet;
}

bool SearchLogResponse::GetAnalysis() const
{
    return m_analysis;
}

bool SearchLogResponse::AnalysisHasBeenSet() const
{
    return m_analysisHasBeenSet;
}

vector<LogInfo> SearchLogResponse::GetResults() const
{
    return m_results;
}

bool SearchLogResponse::ResultsHasBeenSet() const
{
    return m_resultsHasBeenSet;
}

vector<string> SearchLogResponse::GetColNames() const
{
    return m_colNames;
}

bool SearchLogResponse::ColNamesHasBeenSet() const
{
    return m_colNamesHasBeenSet;
}

vector<LogItems> SearchLogResponse::GetAnalysisResults() const
{
    return m_analysisResults;
}

bool SearchLogResponse::AnalysisResultsHasBeenSet() const
{
    return m_analysisResultsHasBeenSet;
}

vector<string> SearchLogResponse::GetAnalysisRecords() const
{
    return m_analysisRecords;
}

bool SearchLogResponse::AnalysisRecordsHasBeenSet() const
{
    return m_analysisRecordsHasBeenSet;
}

vector<Column> SearchLogResponse::GetColumns() const
{
    return m_columns;
}

bool SearchLogResponse::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

double SearchLogResponse::GetSamplingRate() const
{
    return m_samplingRate;
}

bool SearchLogResponse::SamplingRateHasBeenSet() const
{
    return m_samplingRateHasBeenSet;
}

SearchLogTopics SearchLogResponse::GetTopics() const
{
    return m_topics;
}

bool SearchLogResponse::TopicsHasBeenSet() const
{
    return m_topicsHasBeenSet;
}


