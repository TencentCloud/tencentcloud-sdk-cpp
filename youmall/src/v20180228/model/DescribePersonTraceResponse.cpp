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

#include <tencentcloud/youmall/v20180228/model/DescribePersonTraceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

DescribePersonTraceResponse::DescribePersonTraceResponse() :
    m_mallIdHasBeenSet(false),
    m_mallCodeHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_traceRouteSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribePersonTraceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MallId") && !rsp["MallId"].IsNull())
    {
        if (!rsp["MallId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MallId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mallId = string(rsp["MallId"].GetString());
        m_mallIdHasBeenSet = true;
    }

    if (rsp.HasMember("MallCode") && !rsp["MallCode"].IsNull())
    {
        if (!rsp["MallCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MallCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mallCode = string(rsp["MallCode"].GetString());
        m_mallCodeHasBeenSet = true;
    }

    if (rsp.HasMember("PersonId") && !rsp["PersonId"].IsNull())
    {
        if (!rsp["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(rsp["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (rsp.HasMember("TraceRouteSet") && !rsp["TraceRouteSet"].IsNull())
    {
        if (!rsp["TraceRouteSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TraceRouteSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TraceRouteSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PersonTraceRoute item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_traceRouteSet.push_back(item);
        }
        m_traceRouteSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePersonTraceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_mallIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MallId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mallId.c_str(), allocator).Move(), allocator);
    }

    if (m_mallCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MallCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mallCode.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_traceRouteSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceRouteSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_traceRouteSet.begin(); itr != m_traceRouteSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribePersonTraceResponse::GetMallId() const
{
    return m_mallId;
}

bool DescribePersonTraceResponse::MallIdHasBeenSet() const
{
    return m_mallIdHasBeenSet;
}

string DescribePersonTraceResponse::GetMallCode() const
{
    return m_mallCode;
}

bool DescribePersonTraceResponse::MallCodeHasBeenSet() const
{
    return m_mallCodeHasBeenSet;
}

string DescribePersonTraceResponse::GetPersonId() const
{
    return m_personId;
}

bool DescribePersonTraceResponse::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

vector<PersonTraceRoute> DescribePersonTraceResponse::GetTraceRouteSet() const
{
    return m_traceRouteSet;
}

bool DescribePersonTraceResponse::TraceRouteSetHasBeenSet() const
{
    return m_traceRouteSetHasBeenSet;
}


