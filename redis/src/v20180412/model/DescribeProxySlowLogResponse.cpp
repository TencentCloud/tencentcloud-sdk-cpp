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

#include <tencentcloud/redis/v20180412/model/DescribeProxySlowLogResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeProxySlowLogResponse::DescribeProxySlowLogResponse() :
    m_totalCountHasBeenSet(false),
    m_instanceProxySlowLogDetailHasBeenSet(false)
{
}

CoreInternalOutcome DescribeProxySlowLogResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceProxySlowLogDetail") && !rsp["InstanceProxySlowLogDetail"].IsNull())
    {
        if (!rsp["InstanceProxySlowLogDetail"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceProxySlowLogDetail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceProxySlowLogDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceProxySlowlogDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceProxySlowLogDetail.push_back(item);
        }
        m_instanceProxySlowLogDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeProxySlowLogResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeProxySlowLogResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<InstanceProxySlowlogDetail> DescribeProxySlowLogResponse::GetInstanceProxySlowLogDetail() const
{
    return m_instanceProxySlowLogDetail;
}

bool DescribeProxySlowLogResponse::InstanceProxySlowLogDetailHasBeenSet() const
{
    return m_instanceProxySlowLogDetailHasBeenSet;
}


