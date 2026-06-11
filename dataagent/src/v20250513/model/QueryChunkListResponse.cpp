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

#include <tencentcloud/dataagent/v20250513/model/QueryChunkListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

QueryChunkListResponse::QueryChunkListResponse() :
    m_totalHasBeenSet(false),
    m_autoTotalHasBeenSet(false),
    m_manualTotalHasBeenSet(false),
    m_chunksHasBeenSet(false)
{
}

CoreInternalOutcome QueryChunkListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("AutoTotal") && !rsp["AutoTotal"].IsNull())
    {
        if (!rsp["AutoTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoTotal = rsp["AutoTotal"].GetInt64();
        m_autoTotalHasBeenSet = true;
    }

    if (rsp.HasMember("ManualTotal") && !rsp["ManualTotal"].IsNull())
    {
        if (!rsp["ManualTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_manualTotal = rsp["ManualTotal"].GetInt64();
        m_manualTotalHasBeenSet = true;
    }

    if (rsp.HasMember("Chunks") && !rsp["Chunks"].IsNull())
    {
        if (!rsp["Chunks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Chunks` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Chunks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Chunk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_chunks.push_back(item);
        }
        m_chunksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryChunkListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_autoTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoTotal, allocator);
    }

    if (m_manualTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualTotal, allocator);
    }

    if (m_chunksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Chunks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_chunks.begin(); itr != m_chunks.end(); ++itr, ++i)
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


int64_t QueryChunkListResponse::GetTotal() const
{
    return m_total;
}

bool QueryChunkListResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t QueryChunkListResponse::GetAutoTotal() const
{
    return m_autoTotal;
}

bool QueryChunkListResponse::AutoTotalHasBeenSet() const
{
    return m_autoTotalHasBeenSet;
}

int64_t QueryChunkListResponse::GetManualTotal() const
{
    return m_manualTotal;
}

bool QueryChunkListResponse::ManualTotalHasBeenSet() const
{
    return m_manualTotalHasBeenSet;
}

vector<Chunk> QueryChunkListResponse::GetChunks() const
{
    return m_chunks;
}

bool QueryChunkListResponse::ChunksHasBeenSet() const
{
    return m_chunksHasBeenSet;
}


