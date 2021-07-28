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

#include <tencentcloud/gaap/v20180529/model/DescribeCustomHeaderResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

DescribeCustomHeaderResponse::DescribeCustomHeaderResponse() :
    m_ruleIdHasBeenSet(false),
    m_headersHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCustomHeaderResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("RuleId") && !rsp["RuleId"].IsNull())
    {
        if (!rsp["RuleId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(rsp["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (rsp.HasMember("Headers") && !rsp["Headers"].IsNull())
    {
        if (!rsp["Headers"].IsArray())
            return CoreInternalOutcome(Error("response `Headers` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HttpHeaderParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headers.push_back(item);
        }
        m_headersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeCustomHeaderResponse::GetRuleId() const
{
    return m_ruleId;
}

bool DescribeCustomHeaderResponse::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

vector<HttpHeaderParam> DescribeCustomHeaderResponse::GetHeaders() const
{
    return m_headers;
}

bool DescribeCustomHeaderResponse::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}


