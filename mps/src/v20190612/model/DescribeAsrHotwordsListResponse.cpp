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

#include <tencentcloud/mps/v20190612/model/DescribeAsrHotwordsListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeAsrHotwordsListResponse::DescribeAsrHotwordsListResponse() :
    m_totalCountHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_asrHotwordsSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAsrHotwordsListResponse::Deserialize(const string &payload)
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
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("Offset") && !rsp["Offset"].IsNull())
    {
        if (!rsp["Offset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Offset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = rsp["Offset"].GetUint64();
        m_offsetHasBeenSet = true;
    }

    if (rsp.HasMember("Limit") && !rsp["Limit"].IsNull())
    {
        if (!rsp["Limit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Limit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = rsp["Limit"].GetUint64();
        m_limitHasBeenSet = true;
    }

    if (rsp.HasMember("AsrHotwordsSet") && !rsp["AsrHotwordsSet"].IsNull())
    {
        if (!rsp["AsrHotwordsSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AsrHotwordsSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AsrHotwordsSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AsrHotwordsSet item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_asrHotwordsSet.push_back(item);
        }
        m_asrHotwordsSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAsrHotwordsListResponse::ToJsonString() const
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

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_asrHotwordsSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrHotwordsSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_asrHotwordsSet.begin(); itr != m_asrHotwordsSet.end(); ++itr, ++i)
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


int64_t DescribeAsrHotwordsListResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeAsrHotwordsListResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t DescribeAsrHotwordsListResponse::GetOffset() const
{
    return m_offset;
}

bool DescribeAsrHotwordsListResponse::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAsrHotwordsListResponse::GetLimit() const
{
    return m_limit;
}

bool DescribeAsrHotwordsListResponse::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<AsrHotwordsSet> DescribeAsrHotwordsListResponse::GetAsrHotwordsSet() const
{
    return m_asrHotwordsSet;
}

bool DescribeAsrHotwordsListResponse::AsrHotwordsSetHasBeenSet() const
{
    return m_asrHotwordsSetHasBeenSet;
}


