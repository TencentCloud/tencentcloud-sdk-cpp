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

#include <tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeValidityResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeRollbackTimeValidityResponse::DescribeRollbackTimeValidityResponse() :
    m_poolIdHasBeenSet(false),
    m_queryIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_suggestTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRollbackTimeValidityResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PoolId") && !rsp["PoolId"].IsNull())
    {
        if (!rsp["PoolId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PoolId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_poolId = rsp["PoolId"].GetUint64();
        m_poolIdHasBeenSet = true;
    }

    if (rsp.HasMember("QueryId") && !rsp["QueryId"].IsNull())
    {
        if (!rsp["QueryId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `QueryId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_queryId = rsp["QueryId"].GetUint64();
        m_queryIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("SuggestTime") && !rsp["SuggestTime"].IsNull())
    {
        if (!rsp["SuggestTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SuggestTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestTime = string(rsp["SuggestTime"].GetString());
        m_suggestTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeRollbackTimeValidityResponse::GetPoolId() const
{
    return m_poolId;
}

bool DescribeRollbackTimeValidityResponse::PoolIdHasBeenSet() const
{
    return m_poolIdHasBeenSet;
}

uint64_t DescribeRollbackTimeValidityResponse::GetQueryId() const
{
    return m_queryId;
}

bool DescribeRollbackTimeValidityResponse::QueryIdHasBeenSet() const
{
    return m_queryIdHasBeenSet;
}

string DescribeRollbackTimeValidityResponse::GetStatus() const
{
    return m_status;
}

bool DescribeRollbackTimeValidityResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeRollbackTimeValidityResponse::GetSuggestTime() const
{
    return m_suggestTime;
}

bool DescribeRollbackTimeValidityResponse::SuggestTimeHasBeenSet() const
{
    return m_suggestTimeHasBeenSet;
}


