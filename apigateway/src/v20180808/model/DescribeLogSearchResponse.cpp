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

#include <tencentcloud/apigateway/v20180808/model/DescribeLogSearchResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

DescribeLogSearchResponse::DescribeLogSearchResponse() :
    m_conTextHasBeenSet(false),
    m_logSetHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLogSearchResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ConText") && !rsp["ConText"].IsNull())
    {
        if (!rsp["ConText"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conText = string(rsp["ConText"].GetString());
        m_conTextHasBeenSet = true;
    }

    if (rsp.HasMember("LogSet") && !rsp["LogSet"].IsNull())
    {
        if (!rsp["LogSet"].IsArray())
            return CoreInternalOutcome(Error("response `LogSet` is not array type"));

        const Value &tmpValue = rsp["LogSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_logSet.push_back((*itr).GetString());
        }
        m_logSetHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeLogSearchResponse::GetConText() const
{
    return m_conText;
}

bool DescribeLogSearchResponse::ConTextHasBeenSet() const
{
    return m_conTextHasBeenSet;
}

vector<string> DescribeLogSearchResponse::GetLogSet() const
{
    return m_logSet;
}

bool DescribeLogSearchResponse::LogSetHasBeenSet() const
{
    return m_logSetHasBeenSet;
}

uint64_t DescribeLogSearchResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeLogSearchResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}


