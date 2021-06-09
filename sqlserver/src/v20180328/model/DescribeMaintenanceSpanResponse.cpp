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

#include <tencentcloud/sqlserver/v20180328/model/DescribeMaintenanceSpanResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeMaintenanceSpanResponse::DescribeMaintenanceSpanResponse() :
    m_weeklyHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_spanHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMaintenanceSpanResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("Weekly") && !rsp["Weekly"].IsNull())
    {
        if (!rsp["Weekly"].IsArray())
            return CoreInternalOutcome(Error("response `Weekly` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Weekly"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_weekly.push_back((*itr).GetInt64());
        }
        m_weeklyHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Span") && !rsp["Span"].IsNull())
    {
        if (!rsp["Span"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Span` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_span = rsp["Span"].GetUint64();
        m_spanHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<int64_t> DescribeMaintenanceSpanResponse::GetWeekly() const
{
    return m_weekly;
}

bool DescribeMaintenanceSpanResponse::WeeklyHasBeenSet() const
{
    return m_weeklyHasBeenSet;
}

string DescribeMaintenanceSpanResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeMaintenanceSpanResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeMaintenanceSpanResponse::GetSpan() const
{
    return m_span;
}

bool DescribeMaintenanceSpanResponse::SpanHasBeenSet() const
{
    return m_spanHasBeenSet;
}


