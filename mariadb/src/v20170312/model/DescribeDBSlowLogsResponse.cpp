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

#include <tencentcloud/mariadb/v20170312/model/DescribeDBSlowLogsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DescribeDBSlowLogsResponse::DescribeDBSlowLogsResponse() :
    m_dataHasBeenSet(false),
    m_lockTimeSumHasBeenSet(false),
    m_queryCountHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_queryTimeSumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBSlowLogsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SlowLogData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }

    if (rsp.HasMember("LockTimeSum") && !rsp["LockTimeSum"].IsNull())
    {
        if (!rsp["LockTimeSum"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LockTimeSum` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lockTimeSum = rsp["LockTimeSum"].GetDouble();
        m_lockTimeSumHasBeenSet = true;
    }

    if (rsp.HasMember("QueryCount") && !rsp["QueryCount"].IsNull())
    {
        if (!rsp["QueryCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queryCount = rsp["QueryCount"].GetInt64();
        m_queryCountHasBeenSet = true;
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

    if (rsp.HasMember("QueryTimeSum") && !rsp["QueryTimeSum"].IsNull())
    {
        if (!rsp["QueryTimeSum"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTimeSum` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeSum = rsp["QueryTimeSum"].GetDouble();
        m_queryTimeSumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBSlowLogsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lockTimeSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTimeSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockTimeSum, allocator);
    }

    if (m_queryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryCount, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_queryTimeSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTimeSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTimeSum, allocator);
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


vector<SlowLogData> DescribeDBSlowLogsResponse::GetData() const
{
    return m_data;
}

bool DescribeDBSlowLogsResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

double DescribeDBSlowLogsResponse::GetLockTimeSum() const
{
    return m_lockTimeSum;
}

bool DescribeDBSlowLogsResponse::LockTimeSumHasBeenSet() const
{
    return m_lockTimeSumHasBeenSet;
}

int64_t DescribeDBSlowLogsResponse::GetQueryCount() const
{
    return m_queryCount;
}

bool DescribeDBSlowLogsResponse::QueryCountHasBeenSet() const
{
    return m_queryCountHasBeenSet;
}

int64_t DescribeDBSlowLogsResponse::GetTotal() const
{
    return m_total;
}

bool DescribeDBSlowLogsResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

double DescribeDBSlowLogsResponse::GetQueryTimeSum() const
{
    return m_queryTimeSum;
}

bool DescribeDBSlowLogsResponse::QueryTimeSumHasBeenSet() const
{
    return m_queryTimeSumHasBeenSet;
}


