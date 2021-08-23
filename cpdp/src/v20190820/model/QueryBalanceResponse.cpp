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


    if (rsp.HasMember("ResultCount") && !rsp["ResultCount"].IsNull())
    {
        if (!rsp["ResultCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultCount = string(rsp["ResultCount"].GetString());
        m_resultCountHasBeenSet = true;
    }

    if (rsp.HasMember("StartRecordOffset") && !rsp["StartRecordOffset"].IsNull())
    {
        if (!rsp["StartRecordOffset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartRecordOffset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startRecordOffset = string(rsp["StartRecordOffset"].GetString());
        m_startRecordOffsetHasBeenSet = true;
    }

    if (rsp.HasMember("EndFlag") && !rsp["EndFlag"].IsNull())
    {
        if (!rsp["EndFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endFlag = string(rsp["EndFlag"].GetString());
        m_endFlagHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = string(rsp["TotalCount"].GetString());
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("QueryItems") && !rsp["QueryItems"].IsNull())
    {
        if (!rsp["QueryItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryItems` is not array type"));

        const rapidjson::Value &tmpValue = rsp["QueryItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

string QueryBalanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resultCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultCount.c_str(), allocator).Move(), allocator);
    }

    if (m_startRecordOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartRecordOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startRecordOffset.c_str(), allocator).Move(), allocator);
    }

    if (m_endFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCount.c_str(), allocator).Move(), allocator);
    }

    if (m_queryItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_queryItems.begin(); itr != m_queryItems.end(); ++itr, ++i)
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


