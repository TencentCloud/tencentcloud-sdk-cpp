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

#include <tencentcloud/dayu/v20180709/model/DescribeL4RulesErrHealthResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

DescribeL4RulesErrHealthResponse::DescribeL4RulesErrHealthResponse() :
    m_totalHasBeenSet(false),
    m_errHealthsHasBeenSet(false),
    m_extErrHealthsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeL4RulesErrHealthResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("ErrHealths") && !rsp["ErrHealths"].IsNull())
    {
        if (!rsp["ErrHealths"].IsArray())
            return CoreInternalOutcome(Error("response `ErrHealths` is not array type"));

        const Value &tmpValue = rsp["ErrHealths"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_errHealths.push_back(item);
        }
        m_errHealthsHasBeenSet = true;
    }

    if (rsp.HasMember("ExtErrHealths") && !rsp["ExtErrHealths"].IsNull())
    {
        if (!rsp["ExtErrHealths"].IsArray())
            return CoreInternalOutcome(Error("response `ExtErrHealths` is not array type"));

        const Value &tmpValue = rsp["ExtErrHealths"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extErrHealths.push_back(item);
        }
        m_extErrHealthsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeL4RulesErrHealthResponse::GetTotal() const
{
    return m_total;
}

bool DescribeL4RulesErrHealthResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<KeyValue> DescribeL4RulesErrHealthResponse::GetErrHealths() const
{
    return m_errHealths;
}

bool DescribeL4RulesErrHealthResponse::ErrHealthsHasBeenSet() const
{
    return m_errHealthsHasBeenSet;
}

vector<KeyValueRecord> DescribeL4RulesErrHealthResponse::GetExtErrHealths() const
{
    return m_extErrHealths;
}

bool DescribeL4RulesErrHealthResponse::ExtErrHealthsHasBeenSet() const
{
    return m_extErrHealthsHasBeenSet;
}


