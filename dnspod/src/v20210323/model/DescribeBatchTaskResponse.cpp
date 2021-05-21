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

#include <tencentcloud/dnspod/v20210323/model/DescribeBatchTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace rapidjson;
using namespace std;

DescribeBatchTaskResponse::DescribeBatchTaskResponse() :
    m_detailListHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failCountHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBatchTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DetailList") && !rsp["DetailList"].IsNull())
    {
        if (!rsp["DetailList"].IsArray())
            return CoreInternalOutcome(Error("response `DetailList` is not array type"));

        const Value &tmpValue = rsp["DetailList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeBatchTaskDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailList.push_back(item);
        }
        m_detailListHasBeenSet = true;
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

    if (rsp.HasMember("SuccessCount") && !rsp["SuccessCount"].IsNull())
    {
        if (!rsp["SuccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SuccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = rsp["SuccessCount"].GetUint64();
        m_successCountHasBeenSet = true;
    }

    if (rsp.HasMember("FailCount") && !rsp["FailCount"].IsNull())
    {
        if (!rsp["FailCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `FailCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failCount = rsp["FailCount"].GetUint64();
        m_failCountHasBeenSet = true;
    }

    if (rsp.HasMember("JobType") && !rsp["JobType"].IsNull())
    {
        if (!rsp["JobType"].IsString())
        {
            return CoreInternalOutcome(Error("response `JobType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = string(rsp["JobType"].GetString());
        m_jobTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedAt") && !rsp["CreatedAt"].IsNull())
    {
        if (!rsp["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(rsp["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<DescribeBatchTaskDetail> DescribeBatchTaskResponse::GetDetailList() const
{
    return m_detailList;
}

bool DescribeBatchTaskResponse::DetailListHasBeenSet() const
{
    return m_detailListHasBeenSet;
}

uint64_t DescribeBatchTaskResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeBatchTaskResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t DescribeBatchTaskResponse::GetSuccessCount() const
{
    return m_successCount;
}

bool DescribeBatchTaskResponse::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

uint64_t DescribeBatchTaskResponse::GetFailCount() const
{
    return m_failCount;
}

bool DescribeBatchTaskResponse::FailCountHasBeenSet() const
{
    return m_failCountHasBeenSet;
}

string DescribeBatchTaskResponse::GetJobType() const
{
    return m_jobType;
}

bool DescribeBatchTaskResponse::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

string DescribeBatchTaskResponse::GetCreatedAt() const
{
    return m_createdAt;
}

bool DescribeBatchTaskResponse::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}


