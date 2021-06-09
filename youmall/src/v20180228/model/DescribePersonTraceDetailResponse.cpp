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

#include <tencentcloud/youmall/v20180228/model/DescribePersonTraceDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

DescribePersonTraceDetailResponse::DescribePersonTraceDetailResponse() :
    m_mallIdHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_traceIdHasBeenSet(false),
    m_coordinateSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribePersonTraceDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MallId") && !rsp["MallId"].IsNull())
    {
        if (!rsp["MallId"].IsString())
        {
            return CoreInternalOutcome(Error("response `MallId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mallId = string(rsp["MallId"].GetString());
        m_mallIdHasBeenSet = true;
    }

    if (rsp.HasMember("PersonId") && !rsp["PersonId"].IsNull())
    {
        if (!rsp["PersonId"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(rsp["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (rsp.HasMember("TraceId") && !rsp["TraceId"].IsNull())
    {
        if (!rsp["TraceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(rsp["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }

    if (rsp.HasMember("CoordinateSet") && !rsp["CoordinateSet"].IsNull())
    {
        if (!rsp["CoordinateSet"].IsArray())
            return CoreInternalOutcome(Error("response `CoordinateSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CoordinateSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PersonCoordinate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_coordinateSet.push_back(item);
        }
        m_coordinateSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribePersonTraceDetailResponse::GetMallId() const
{
    return m_mallId;
}

bool DescribePersonTraceDetailResponse::MallIdHasBeenSet() const
{
    return m_mallIdHasBeenSet;
}

string DescribePersonTraceDetailResponse::GetPersonId() const
{
    return m_personId;
}

bool DescribePersonTraceDetailResponse::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string DescribePersonTraceDetailResponse::GetTraceId() const
{
    return m_traceId;
}

bool DescribePersonTraceDetailResponse::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

vector<PersonCoordinate> DescribePersonTraceDetailResponse::GetCoordinateSet() const
{
    return m_coordinateSet;
}

bool DescribePersonTraceDetailResponse::CoordinateSetHasBeenSet() const
{
    return m_coordinateSetHasBeenSet;
}


