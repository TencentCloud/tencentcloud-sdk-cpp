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

#include <tencentcloud/adp/v20260520/model/DescribeQAResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeQAResponse::DescribeQAResponse() :
    m_highlightListHasBeenSet(false),
    m_pageContentHasBeenSet(false),
    m_questionDescriptionHasBeenSet(false),
    m_similarQuestionListHasBeenSet(false),
    m_summaryHasBeenSet(false)
{
}

CoreInternalOutcome DescribeQAResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("HighlightList") && !rsp["HighlightList"].IsNull())
    {
        if (!rsp["HighlightList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HighlightList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["HighlightList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QASegmentHighlight item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_highlightList.push_back(item);
        }
        m_highlightListHasBeenSet = true;
    }

    if (rsp.HasMember("PageContent") && !rsp["PageContent"].IsNull())
    {
        if (!rsp["PageContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PageContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageContent = string(rsp["PageContent"].GetString());
        m_pageContentHasBeenSet = true;
    }

    if (rsp.HasMember("QuestionDescription") && !rsp["QuestionDescription"].IsNull())
    {
        if (!rsp["QuestionDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_questionDescription = string(rsp["QuestionDescription"].GetString());
        m_questionDescriptionHasBeenSet = true;
    }

    if (rsp.HasMember("SimilarQuestionList") && !rsp["SimilarQuestionList"].IsNull())
    {
        if (!rsp["SimilarQuestionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SimilarQuestionList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SimilarQuestionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SimilarQuestion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_similarQuestionList.push_back(item);
        }
        m_similarQuestionListHasBeenSet = true;
    }

    if (rsp.HasMember("Summary") && !rsp["Summary"].IsNull())
    {
        if (!rsp["Summary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Summary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_summary.Deserialize(rsp["Summary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_summaryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeQAResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_highlightListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighlightList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_highlightList.begin(); itr != m_highlightList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pageContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageContent.c_str(), allocator).Move(), allocator);
    }

    if (m_questionDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_questionDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_similarQuestionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarQuestionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_similarQuestionList.begin(); itr != m_similarQuestionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_summary.ToJsonObject(value[key.c_str()], allocator);
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


vector<QASegmentHighlight> DescribeQAResponse::GetHighlightList() const
{
    return m_highlightList;
}

bool DescribeQAResponse::HighlightListHasBeenSet() const
{
    return m_highlightListHasBeenSet;
}

string DescribeQAResponse::GetPageContent() const
{
    return m_pageContent;
}

bool DescribeQAResponse::PageContentHasBeenSet() const
{
    return m_pageContentHasBeenSet;
}

string DescribeQAResponse::GetQuestionDescription() const
{
    return m_questionDescription;
}

bool DescribeQAResponse::QuestionDescriptionHasBeenSet() const
{
    return m_questionDescriptionHasBeenSet;
}

vector<SimilarQuestion> DescribeQAResponse::GetSimilarQuestionList() const
{
    return m_similarQuestionList;
}

bool DescribeQAResponse::SimilarQuestionListHasBeenSet() const
{
    return m_similarQuestionListHasBeenSet;
}

QASummary DescribeQAResponse::GetSummary() const
{
    return m_summary;
}

bool DescribeQAResponse::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}


