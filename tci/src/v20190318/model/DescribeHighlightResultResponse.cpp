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

#include <tencentcloud/tci/v20190318/model/DescribeHighlightResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace rapidjson;
using namespace std;

DescribeHighlightResultResponse::DescribeHighlightResultResponse() :
    m_highlightsInfoHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_progressHasBeenSet(false)
{
}

CoreInternalOutcome DescribeHighlightResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("HighlightsInfo") && !rsp["HighlightsInfo"].IsNull())
    {
        if (!rsp["HighlightsInfo"].IsArray())
            return CoreInternalOutcome(Error("response `HighlightsInfo` is not array type"));

        const Value &tmpValue = rsp["HighlightsInfo"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HighlightsInfomation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_highlightsInfo.push_back(item);
        }
        m_highlightsInfoHasBeenSet = true;
    }

    if (rsp.HasMember("JobId") && !rsp["JobId"].IsNull())
    {
        if (!rsp["JobId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `JobId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = rsp["JobId"].GetInt64();
        m_jobIdHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `Progress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetDouble();
        m_progressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<HighlightsInfomation> DescribeHighlightResultResponse::GetHighlightsInfo() const
{
    return m_highlightsInfo;
}

bool DescribeHighlightResultResponse::HighlightsInfoHasBeenSet() const
{
    return m_highlightsInfoHasBeenSet;
}

int64_t DescribeHighlightResultResponse::GetJobId() const
{
    return m_jobId;
}

bool DescribeHighlightResultResponse::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

double DescribeHighlightResultResponse::GetProgress() const
{
    return m_progress;
}

bool DescribeHighlightResultResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}


