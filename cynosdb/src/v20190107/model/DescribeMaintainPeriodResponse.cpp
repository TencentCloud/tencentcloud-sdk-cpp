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

#include <tencentcloud/cynosdb/v20190107/model/DescribeMaintainPeriodResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeMaintainPeriodResponse::DescribeMaintainPeriodResponse() :
    m_maintainWeekDaysHasBeenSet(false),
    m_maintainStartTimeHasBeenSet(false),
    m_maintainDurationHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMaintainPeriodResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MaintainWeekDays") && !rsp["MaintainWeekDays"].IsNull())
    {
        if (!rsp["MaintainWeekDays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaintainWeekDays` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MaintainWeekDays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_maintainWeekDays.push_back((*itr).GetString());
        }
        m_maintainWeekDaysHasBeenSet = true;
    }

    if (rsp.HasMember("MaintainStartTime") && !rsp["MaintainStartTime"].IsNull())
    {
        if (!rsp["MaintainStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaintainStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maintainStartTime = rsp["MaintainStartTime"].GetInt64();
        m_maintainStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("MaintainDuration") && !rsp["MaintainDuration"].IsNull())
    {
        if (!rsp["MaintainDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaintainDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maintainDuration = rsp["MaintainDuration"].GetInt64();
        m_maintainDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMaintainPeriodResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_maintainWeekDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainWeekDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_maintainWeekDays.begin(); itr != m_maintainWeekDays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maintainStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maintainStartTime, allocator);
    }

    if (m_maintainDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maintainDuration, allocator);
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


