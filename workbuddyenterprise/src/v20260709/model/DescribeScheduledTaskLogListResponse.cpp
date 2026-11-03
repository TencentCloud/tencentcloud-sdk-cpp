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

#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeScheduledTaskLogListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

DescribeScheduledTaskLogListResponse::DescribeScheduledTaskLogListResponse() :
    m_totalCountHasBeenSet(false),
    m_scheduledTaskLogSetHasBeenSet(false),
    m_statsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeScheduledTaskLogListResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("ScheduledTaskLogSet") && !rsp["ScheduledTaskLogSet"].IsNull())
    {
        if (!rsp["ScheduledTaskLogSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ScheduledTaskLogSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScheduledTaskLogSummary item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_scheduledTaskLogSet.push_back(item);
        }
        m_scheduledTaskLogSetHasBeenSet = true;
    }

    if (rsp.HasMember("Stats") && !rsp["Stats"].IsNull())
    {
        if (!rsp["Stats"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Stats` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_stats.Deserialize(rsp["Stats"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeScheduledTaskLogListResponse::ToJsonString() const
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

    if (m_scheduledTaskLogSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledTaskLogSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scheduledTaskLogSet.begin(); itr != m_scheduledTaskLogSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stats.ToJsonObject(value[key.c_str()], allocator);
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


int64_t DescribeScheduledTaskLogListResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeScheduledTaskLogListResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<ScheduledTaskLogSummary> DescribeScheduledTaskLogListResponse::GetScheduledTaskLogSet() const
{
    return m_scheduledTaskLogSet;
}

bool DescribeScheduledTaskLogListResponse::ScheduledTaskLogSetHasBeenSet() const
{
    return m_scheduledTaskLogSetHasBeenSet;
}

ScheduledTaskLogStats DescribeScheduledTaskLogListResponse::GetStats() const
{
    return m_stats;
}

bool DescribeScheduledTaskLogListResponse::StatsHasBeenSet() const
{
    return m_statsHasBeenSet;
}


