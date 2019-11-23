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

#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByTagResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace rapidjson;
using namespace std;

DescribeBillSummaryByTagResponse::DescribeBillSummaryByTagResponse() :
    m_readyHasBeenSet(false),
    m_summaryOverviewHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBillSummaryByTagResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Ready") && !rsp["Ready"].IsNull())
    {
        if (!rsp["Ready"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Ready` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ready = rsp["Ready"].GetUint64();
        m_readyHasBeenSet = true;
    }

    if (rsp.HasMember("SummaryOverview") && !rsp["SummaryOverview"].IsNull())
    {
        if (!rsp["SummaryOverview"].IsArray())
            return CoreInternalOutcome(Error("response `SummaryOverview` is not array type"));

        const Value &tmpValue = rsp["SummaryOverview"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagSummaryOverviewItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_summaryOverview.push_back(item);
        }
        m_summaryOverviewHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeBillSummaryByTagResponse::GetReady() const
{
    return m_ready;
}

bool DescribeBillSummaryByTagResponse::ReadyHasBeenSet() const
{
    return m_readyHasBeenSet;
}

vector<TagSummaryOverviewItem> DescribeBillSummaryByTagResponse::GetSummaryOverview() const
{
    return m_summaryOverview;
}

bool DescribeBillSummaryByTagResponse::SummaryOverviewHasBeenSet() const
{
    return m_summaryOverviewHasBeenSet;
}


