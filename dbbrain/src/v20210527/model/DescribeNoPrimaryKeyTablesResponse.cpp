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

#include <tencentcloud/dbbrain/v20210527/model/DescribeNoPrimaryKeyTablesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeNoPrimaryKeyTablesResponse::DescribeNoPrimaryKeyTablesResponse() :
    m_noPrimaryKeyTableCountHasBeenSet(false),
    m_noPrimaryKeyTableCountDiffHasBeenSet(false),
    m_noPrimaryKeyTableRecordCountHasBeenSet(false),
    m_noPrimaryKeyTablesHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNoPrimaryKeyTablesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NoPrimaryKeyTableCount") && !rsp["NoPrimaryKeyTableCount"].IsNull())
    {
        if (!rsp["NoPrimaryKeyTableCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NoPrimaryKeyTableCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noPrimaryKeyTableCount = rsp["NoPrimaryKeyTableCount"].GetInt64();
        m_noPrimaryKeyTableCountHasBeenSet = true;
    }

    if (rsp.HasMember("NoPrimaryKeyTableCountDiff") && !rsp["NoPrimaryKeyTableCountDiff"].IsNull())
    {
        if (!rsp["NoPrimaryKeyTableCountDiff"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NoPrimaryKeyTableCountDiff` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noPrimaryKeyTableCountDiff = rsp["NoPrimaryKeyTableCountDiff"].GetInt64();
        m_noPrimaryKeyTableCountDiffHasBeenSet = true;
    }

    if (rsp.HasMember("NoPrimaryKeyTableRecordCount") && !rsp["NoPrimaryKeyTableRecordCount"].IsNull())
    {
        if (!rsp["NoPrimaryKeyTableRecordCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NoPrimaryKeyTableRecordCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noPrimaryKeyTableRecordCount = rsp["NoPrimaryKeyTableRecordCount"].GetInt64();
        m_noPrimaryKeyTableRecordCountHasBeenSet = true;
    }

    if (rsp.HasMember("NoPrimaryKeyTables") && !rsp["NoPrimaryKeyTables"].IsNull())
    {
        if (!rsp["NoPrimaryKeyTables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NoPrimaryKeyTables` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NoPrimaryKeyTables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Table item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_noPrimaryKeyTables.push_back(item);
        }
        m_noPrimaryKeyTablesHasBeenSet = true;
    }

    if (rsp.HasMember("Timestamp") && !rsp["Timestamp"].IsNull())
    {
        if (!rsp["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = rsp["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNoPrimaryKeyTablesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_noPrimaryKeyTableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoPrimaryKeyTableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noPrimaryKeyTableCount, allocator);
    }

    if (m_noPrimaryKeyTableCountDiffHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoPrimaryKeyTableCountDiff";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noPrimaryKeyTableCountDiff, allocator);
    }

    if (m_noPrimaryKeyTableRecordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoPrimaryKeyTableRecordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noPrimaryKeyTableRecordCount, allocator);
    }

    if (m_noPrimaryKeyTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoPrimaryKeyTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noPrimaryKeyTables.begin(); itr != m_noPrimaryKeyTables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
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


int64_t DescribeNoPrimaryKeyTablesResponse::GetNoPrimaryKeyTableCount() const
{
    return m_noPrimaryKeyTableCount;
}

bool DescribeNoPrimaryKeyTablesResponse::NoPrimaryKeyTableCountHasBeenSet() const
{
    return m_noPrimaryKeyTableCountHasBeenSet;
}

int64_t DescribeNoPrimaryKeyTablesResponse::GetNoPrimaryKeyTableCountDiff() const
{
    return m_noPrimaryKeyTableCountDiff;
}

bool DescribeNoPrimaryKeyTablesResponse::NoPrimaryKeyTableCountDiffHasBeenSet() const
{
    return m_noPrimaryKeyTableCountDiffHasBeenSet;
}

int64_t DescribeNoPrimaryKeyTablesResponse::GetNoPrimaryKeyTableRecordCount() const
{
    return m_noPrimaryKeyTableRecordCount;
}

bool DescribeNoPrimaryKeyTablesResponse::NoPrimaryKeyTableRecordCountHasBeenSet() const
{
    return m_noPrimaryKeyTableRecordCountHasBeenSet;
}

vector<Table> DescribeNoPrimaryKeyTablesResponse::GetNoPrimaryKeyTables() const
{
    return m_noPrimaryKeyTables;
}

bool DescribeNoPrimaryKeyTablesResponse::NoPrimaryKeyTablesHasBeenSet() const
{
    return m_noPrimaryKeyTablesHasBeenSet;
}

int64_t DescribeNoPrimaryKeyTablesResponse::GetTimestamp() const
{
    return m_timestamp;
}

bool DescribeNoPrimaryKeyTablesResponse::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}


