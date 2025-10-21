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

#include <tencentcloud/ssl/v20191205/model/DescribeHostTkeInstanceListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DescribeHostTkeInstanceListResponse::DescribeHostTkeInstanceListResponse() :
    m_totalCountHasBeenSet(false),
    m_instanceListHasBeenSet(false),
    m_asyncTotalNumHasBeenSet(false),
    m_asyncOffsetHasBeenSet(false),
    m_asyncCacheTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeHostTkeInstanceListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceList") && !rsp["InstanceList"].IsNull())
    {
        if (!rsp["InstanceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TkeInstanceDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceList.push_back(item);
        }
        m_instanceListHasBeenSet = true;
    }

    if (rsp.HasMember("AsyncTotalNum") && !rsp["AsyncTotalNum"].IsNull())
    {
        if (!rsp["AsyncTotalNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncTotalNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_asyncTotalNum = rsp["AsyncTotalNum"].GetInt64();
        m_asyncTotalNumHasBeenSet = true;
    }

    if (rsp.HasMember("AsyncOffset") && !rsp["AsyncOffset"].IsNull())
    {
        if (!rsp["AsyncOffset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_asyncOffset = rsp["AsyncOffset"].GetInt64();
        m_asyncOffsetHasBeenSet = true;
    }

    if (rsp.HasMember("AsyncCacheTime") && !rsp["AsyncCacheTime"].IsNull())
    {
        if (!rsp["AsyncCacheTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncCacheTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asyncCacheTime = string(rsp["AsyncCacheTime"].GetString());
        m_asyncCacheTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeHostTkeInstanceListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_instanceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceList.begin(); itr != m_instanceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_asyncTotalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncTotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asyncTotalNum, allocator);
    }

    if (m_asyncOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asyncOffset, allocator);
    }

    if (m_asyncCacheTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncCacheTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asyncCacheTime.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeHostTkeInstanceListResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeHostTkeInstanceListResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<TkeInstanceDetail> DescribeHostTkeInstanceListResponse::GetInstanceList() const
{
    return m_instanceList;
}

bool DescribeHostTkeInstanceListResponse::InstanceListHasBeenSet() const
{
    return m_instanceListHasBeenSet;
}

int64_t DescribeHostTkeInstanceListResponse::GetAsyncTotalNum() const
{
    return m_asyncTotalNum;
}

bool DescribeHostTkeInstanceListResponse::AsyncTotalNumHasBeenSet() const
{
    return m_asyncTotalNumHasBeenSet;
}

int64_t DescribeHostTkeInstanceListResponse::GetAsyncOffset() const
{
    return m_asyncOffset;
}

bool DescribeHostTkeInstanceListResponse::AsyncOffsetHasBeenSet() const
{
    return m_asyncOffsetHasBeenSet;
}

string DescribeHostTkeInstanceListResponse::GetAsyncCacheTime() const
{
    return m_asyncCacheTime;
}

bool DescribeHostTkeInstanceListResponse::AsyncCacheTimeHasBeenSet() const
{
    return m_asyncCacheTimeHasBeenSet;
}


