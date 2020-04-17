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

#include <tencentcloud/cpdp/v20190820/model/QueryAcctInfoListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

QueryAcctInfoListResponse::QueryAcctInfoListResponse() :
    m_resultCountHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_queryAcctItemsHasBeenSet(false)
{
}

CoreInternalOutcome QueryAcctInfoListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ResultCount") && !rsp["ResultCount"].IsNull())
    {
        if (!rsp["ResultCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ResultCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultCount = rsp["ResultCount"].GetInt64();
        m_resultCountHasBeenSet = true;
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

    if (rsp.HasMember("QueryAcctItems") && !rsp["QueryAcctItems"].IsNull())
    {
        if (!rsp["QueryAcctItems"].IsArray())
            return CoreInternalOutcome(Error("response `QueryAcctItems` is not array type"));

        const Value &tmpValue = rsp["QueryAcctItems"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QueryAcctItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_queryAcctItems.push_back(item);
        }
        m_queryAcctItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t QueryAcctInfoListResponse::GetResultCount() const
{
    return m_resultCount;
}

bool QueryAcctInfoListResponse::ResultCountHasBeenSet() const
{
    return m_resultCountHasBeenSet;
}

int64_t QueryAcctInfoListResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool QueryAcctInfoListResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<QueryAcctItem> QueryAcctInfoListResponse::GetQueryAcctItems() const
{
    return m_queryAcctItems;
}

bool QueryAcctInfoListResponse::QueryAcctItemsHasBeenSet() const
{
    return m_queryAcctItemsHasBeenSet;
}


