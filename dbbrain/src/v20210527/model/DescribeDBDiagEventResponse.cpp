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

#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagEventResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeDBDiagEventResponse::DescribeDBDiagEventResponse() :
    m_diagItemHasBeenSet(false),
    m_diagTypeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_explanationHasBeenSet(false),
    m_outlineHasBeenSet(false),
    m_problemHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_suggestionsHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBDiagEventResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DiagItem") && !rsp["DiagItem"].IsNull())
    {
        if (!rsp["DiagItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagItem = string(rsp["DiagItem"].GetString());
        m_diagItemHasBeenSet = true;
    }

    if (rsp.HasMember("DiagType") && !rsp["DiagType"].IsNull())
    {
        if (!rsp["DiagType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagType = string(rsp["DiagType"].GetString());
        m_diagTypeHasBeenSet = true;
    }

    if (rsp.HasMember("EventId") && !rsp["EventId"].IsNull())
    {
        if (!rsp["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = rsp["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (rsp.HasMember("Explanation") && !rsp["Explanation"].IsNull())
    {
        if (!rsp["Explanation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Explanation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_explanation = string(rsp["Explanation"].GetString());
        m_explanationHasBeenSet = true;
    }

    if (rsp.HasMember("Outline") && !rsp["Outline"].IsNull())
    {
        if (!rsp["Outline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Outline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outline = string(rsp["Outline"].GetString());
        m_outlineHasBeenSet = true;
    }

    if (rsp.HasMember("Problem") && !rsp["Problem"].IsNull())
    {
        if (!rsp["Problem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Problem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_problem = string(rsp["Problem"].GetString());
        m_problemHasBeenSet = true;
    }

    if (rsp.HasMember("Severity") && !rsp["Severity"].IsNull())
    {
        if (!rsp["Severity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Severity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_severity = rsp["Severity"].GetInt64();
        m_severityHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Suggestions") && !rsp["Suggestions"].IsNull())
    {
        if (!rsp["Suggestions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Suggestions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestions = string(rsp["Suggestions"].GetString());
        m_suggestionsHasBeenSet = true;
    }

    if (rsp.HasMember("Metric") && !rsp["Metric"].IsNull())
    {
        if (!rsp["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(rsp["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBDiagEventResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_diagItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagItem.c_str(), allocator).Move(), allocator);
    }

    if (m_diagTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_explanationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Explanation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_explanation.c_str(), allocator).Move(), allocator);
    }

    if (m_outlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outline.c_str(), allocator).Move(), allocator);
    }

    if (m_problemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Problem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_problem.c_str(), allocator).Move(), allocator);
    }

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_severity, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestions.c_str(), allocator).Move(), allocator);
    }

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
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


string DescribeDBDiagEventResponse::GetDiagItem() const
{
    return m_diagItem;
}

bool DescribeDBDiagEventResponse::DiagItemHasBeenSet() const
{
    return m_diagItemHasBeenSet;
}

string DescribeDBDiagEventResponse::GetDiagType() const
{
    return m_diagType;
}

bool DescribeDBDiagEventResponse::DiagTypeHasBeenSet() const
{
    return m_diagTypeHasBeenSet;
}

int64_t DescribeDBDiagEventResponse::GetEventId() const
{
    return m_eventId;
}

bool DescribeDBDiagEventResponse::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string DescribeDBDiagEventResponse::GetExplanation() const
{
    return m_explanation;
}

bool DescribeDBDiagEventResponse::ExplanationHasBeenSet() const
{
    return m_explanationHasBeenSet;
}

string DescribeDBDiagEventResponse::GetOutline() const
{
    return m_outline;
}

bool DescribeDBDiagEventResponse::OutlineHasBeenSet() const
{
    return m_outlineHasBeenSet;
}

string DescribeDBDiagEventResponse::GetProblem() const
{
    return m_problem;
}

bool DescribeDBDiagEventResponse::ProblemHasBeenSet() const
{
    return m_problemHasBeenSet;
}

int64_t DescribeDBDiagEventResponse::GetSeverity() const
{
    return m_severity;
}

bool DescribeDBDiagEventResponse::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

string DescribeDBDiagEventResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeDBDiagEventResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDBDiagEventResponse::GetSuggestions() const
{
    return m_suggestions;
}

bool DescribeDBDiagEventResponse::SuggestionsHasBeenSet() const
{
    return m_suggestionsHasBeenSet;
}

string DescribeDBDiagEventResponse::GetMetric() const
{
    return m_metric;
}

bool DescribeDBDiagEventResponse::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string DescribeDBDiagEventResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeDBDiagEventResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


