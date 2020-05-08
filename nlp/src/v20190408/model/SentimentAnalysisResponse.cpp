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

#include <tencentcloud/nlp/v20190408/model/SentimentAnalysisResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace rapidjson;
using namespace std;

SentimentAnalysisResponse::SentimentAnalysisResponse() :
    m_negativeHasBeenSet(false),
    m_neutralHasBeenSet(false),
    m_positiveHasBeenSet(false),
    m_sentimentHasBeenSet(false)
{
}

CoreInternalOutcome SentimentAnalysisResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Negative") && !rsp["Negative"].IsNull())
    {
        if (!rsp["Negative"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `Negative` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_negative = rsp["Negative"].GetDouble();
        m_negativeHasBeenSet = true;
    }

    if (rsp.HasMember("Neutral") && !rsp["Neutral"].IsNull())
    {
        if (!rsp["Neutral"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `Neutral` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_neutral = rsp["Neutral"].GetDouble();
        m_neutralHasBeenSet = true;
    }

    if (rsp.HasMember("Positive") && !rsp["Positive"].IsNull())
    {
        if (!rsp["Positive"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `Positive` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_positive = rsp["Positive"].GetDouble();
        m_positiveHasBeenSet = true;
    }

    if (rsp.HasMember("Sentiment") && !rsp["Sentiment"].IsNull())
    {
        if (!rsp["Sentiment"].IsString())
        {
            return CoreInternalOutcome(Error("response `Sentiment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sentiment = string(rsp["Sentiment"].GetString());
        m_sentimentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


double SentimentAnalysisResponse::GetNegative() const
{
    return m_negative;
}

bool SentimentAnalysisResponse::NegativeHasBeenSet() const
{
    return m_negativeHasBeenSet;
}

double SentimentAnalysisResponse::GetNeutral() const
{
    return m_neutral;
}

bool SentimentAnalysisResponse::NeutralHasBeenSet() const
{
    return m_neutralHasBeenSet;
}

double SentimentAnalysisResponse::GetPositive() const
{
    return m_positive;
}

bool SentimentAnalysisResponse::PositiveHasBeenSet() const
{
    return m_positiveHasBeenSet;
}

string SentimentAnalysisResponse::GetSentiment() const
{
    return m_sentiment;
}

bool SentimentAnalysisResponse::SentimentHasBeenSet() const
{
    return m_sentimentHasBeenSet;
}


