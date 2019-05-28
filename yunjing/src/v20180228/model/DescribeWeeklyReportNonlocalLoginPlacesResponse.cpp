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

#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportNonlocalLoginPlacesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace rapidjson;
using namespace std;

DescribeWeeklyReportNonlocalLoginPlacesResponse::DescribeWeeklyReportNonlocalLoginPlacesResponse() :
    m_weeklyReportNonlocalLoginPlacesHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWeeklyReportNonlocalLoginPlacesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("WeeklyReportNonlocalLoginPlaces") && !rsp["WeeklyReportNonlocalLoginPlaces"].IsNull())
    {
        if (!rsp["WeeklyReportNonlocalLoginPlaces"].IsArray())
            return CoreInternalOutcome(Error("response `WeeklyReportNonlocalLoginPlaces` is not array type"));

        const Value &tmpValue = rsp["WeeklyReportNonlocalLoginPlaces"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WeeklyReportNonlocalLoginPlace item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_weeklyReportNonlocalLoginPlaces.push_back(item);
        }
        m_weeklyReportNonlocalLoginPlacesHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<WeeklyReportNonlocalLoginPlace> DescribeWeeklyReportNonlocalLoginPlacesResponse::GetWeeklyReportNonlocalLoginPlaces() const
{
    return m_weeklyReportNonlocalLoginPlaces;
}

bool DescribeWeeklyReportNonlocalLoginPlacesResponse::WeeklyReportNonlocalLoginPlacesHasBeenSet() const
{
    return m_weeklyReportNonlocalLoginPlacesHasBeenSet;
}

uint64_t DescribeWeeklyReportNonlocalLoginPlacesResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeWeeklyReportNonlocalLoginPlacesResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}


