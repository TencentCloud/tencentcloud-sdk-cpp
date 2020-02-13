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

#include <tencentcloud/cpdp/v20190820/model/QueryBalanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

QueryBalanceResponse::QueryBalanceResponse() :
    m_resultCountHasBeenSet(false),
    m_startRecordOffsetHasBeenSet(false),
    m_endFlagHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_queryItemsHasBeenSet(false)
{
}

CoreInternalOutcome QueryBalanceResponse::Deserialize(const string &payload)
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
        if (!rsp["ResultCount"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResultCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultCount = string(rsp["ResultCount"].GetString());
        m_resultCountHasBeenSet = true;
    }

    if (rsp.HasMember("StartRecordOffset") && !rsp["StartRecordOffset"].IsNull())
    {
        if (!rsp["StartRecordOffset"].IsString())
        {
            return CoreInternalOutcome(Error("response `StartRecordOffset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startRecordOffset = string(rsp["StartRecordOffset"].GetString());
        m_startRecordOffsetHasBeenSet = true;
    }

    if (rsp.HasMember("EndFlag") && !rsp["EndFlag"].IsNull())
    {
        if (!rsp["EndFlag"].IsString())
        {
            return CoreInternalOutcome(Error("response `EndFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endFlag = string(rsp["EndFlag"].GetString());
        m_endFlagHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsString())
        {
            return CoreInternalOutcome(Error("response `TotalCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = string(rsp["TotalCount"].GetString());
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("QueryItems") && !rsp["QueryItems"].IsNull())
    {
        if (!rsp["QueryItems"].IsArray())
            return CoreInternalOutcome(Error("response `QueryItems` is not array type"));

        const Value &tmpValue = rsp["QueryItems"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QueryItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_queryItems.push_back(item);
        }
        m_queryItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string QueryBalanceResponse::GetResultCount() const
{
    return m_resultCount;
}

bool QueryBalanceResponse::ResultCountHasBeenSet() const
{
    return m_resultCountHasBeenSet;
}

string QueryBalanceResponse::GetStartRecordOffset() const
{
    return m_startRecordOffset;
}

bool QueryBalanceResponse::StartRecordOffsetHasBeenSet() const
{
    return m_startRecordOffsetHasBeenSet;
}

string QueryBalanceResponse::GetEndFlag() const
{
    return m_endFlag;
}

bool QueryBalanceResponse::EndFlagHasBeenSet() const
{
    return m_endFlagHasBeenSet;
}

string QueryBalanceResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool QueryBalanceResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<QueryItem> QueryBalanceResponse::GetQueryItems() const
{
    return m_queryItems;
}

bool QueryBalanceResponse::QueryItemsHasBeenSet() const
{
    return m_queryItemsHasBeenSet;
}


