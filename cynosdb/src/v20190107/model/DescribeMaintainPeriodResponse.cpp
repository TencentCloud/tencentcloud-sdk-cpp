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

#include <tencentcloud/cynosdb/v20190107/model/DescribeMaintainPeriodResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace rapidjson;
using namespace std;

DescribeMaintainPeriodResponse::DescribeMaintainPeriodResponse() :
    m_maintainWeekDaysHasBeenSet(false),
    m_maintainStartTimeHasBeenSet(false),
    m_maintainDurationHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMaintainPeriodResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MaintainWeekDays") && !rsp["MaintainWeekDays"].IsNull())
    {
        if (!rsp["MaintainWeekDays"].IsArray())
            return CoreInternalOutcome(Error("response `MaintainWeekDays` is not array type"));

        const Value &tmpValue = rsp["MaintainWeekDays"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_maintainWeekDays.push_back((*itr).GetString());
        }
        m_maintainWeekDaysHasBeenSet = true;
    }

    if (rsp.HasMember("MaintainStartTime") && !rsp["MaintainStartTime"].IsNull())
    {
        if (!rsp["MaintainStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MaintainStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maintainStartTime = rsp["MaintainStartTime"].GetInt64();
        m_maintainStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("MaintainDuration") && !rsp["MaintainDuration"].IsNull())
    {
        if (!rsp["MaintainDuration"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MaintainDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maintainDuration = rsp["MaintainDuration"].GetInt64();
        m_maintainDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<string> DescribeMaintainPeriodResponse::GetMaintainWeekDays() const
{
    return m_maintainWeekDays;
}

bool DescribeMaintainPeriodResponse::MaintainWeekDaysHasBeenSet() const
{
    return m_maintainWeekDaysHasBeenSet;
}

int64_t DescribeMaintainPeriodResponse::GetMaintainStartTime() const
{
    return m_maintainStartTime;
}

bool DescribeMaintainPeriodResponse::MaintainStartTimeHasBeenSet() const
{
    return m_maintainStartTimeHasBeenSet;
}

int64_t DescribeMaintainPeriodResponse::GetMaintainDuration() const
{
    return m_maintainDuration;
}

bool DescribeMaintainPeriodResponse::MaintainDurationHasBeenSet() const
{
    return m_maintainDurationHasBeenSet;
}


