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

#include <tencentcloud/redis/v20180412/model/DescribeAutoBackupConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace rapidjson;
using namespace std;

DescribeAutoBackupConfigResponse::DescribeAutoBackupConfigResponse() :
    m_autoBackupTypeHasBeenSet(false),
    m_weekDaysHasBeenSet(false),
    m_timePeriodHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAutoBackupConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AutoBackupType") && !rsp["AutoBackupType"].IsNull())
    {
        if (!rsp["AutoBackupType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AutoBackupType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupType = rsp["AutoBackupType"].GetInt64();
        m_autoBackupTypeHasBeenSet = true;
    }

    if (rsp.HasMember("WeekDays") && !rsp["WeekDays"].IsNull())
    {
        if (!rsp["WeekDays"].IsArray())
            return CoreInternalOutcome(Error("response `WeekDays` is not array type"));

        const Value &tmpValue = rsp["WeekDays"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_weekDays.push_back((*itr).GetString());
        }
        m_weekDaysHasBeenSet = true;
    }

    if (rsp.HasMember("TimePeriod") && !rsp["TimePeriod"].IsNull())
    {
        if (!rsp["TimePeriod"].IsString())
        {
            return CoreInternalOutcome(Error("response `TimePeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timePeriod = string(rsp["TimePeriod"].GetString());
        m_timePeriodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeAutoBackupConfigResponse::GetAutoBackupType() const
{
    return m_autoBackupType;
}

bool DescribeAutoBackupConfigResponse::AutoBackupTypeHasBeenSet() const
{
    return m_autoBackupTypeHasBeenSet;
}

vector<string> DescribeAutoBackupConfigResponse::GetWeekDays() const
{
    return m_weekDays;
}

bool DescribeAutoBackupConfigResponse::WeekDaysHasBeenSet() const
{
    return m_weekDaysHasBeenSet;
}

string DescribeAutoBackupConfigResponse::GetTimePeriod() const
{
    return m_timePeriod;
}

bool DescribeAutoBackupConfigResponse::TimePeriodHasBeenSet() const
{
    return m_timePeriodHasBeenSet;
}


