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

#include <tencentcloud/iotexplorer/v20190423/model/GetDeviceSumStatisticsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

GetDeviceSumStatisticsResponse::GetDeviceSumStatisticsResponse() :
    m_activationCountHasBeenSet(false),
    m_onlineCountHasBeenSet(false),
    m_activationBeforeDayHasBeenSet(false),
    m_activeBeforeDayHasBeenSet(false),
    m_activationWeekDayCountHasBeenSet(false),
    m_activeWeekDayCountHasBeenSet(false),
    m_activationBeforeWeekDayCountHasBeenSet(false),
    m_activeBeforeWeekDayCountHasBeenSet(false)
{
}

CoreInternalOutcome GetDeviceSumStatisticsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ActivationCount") && !rsp["ActivationCount"].IsNull())
    {
        if (!rsp["ActivationCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivationCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activationCount = rsp["ActivationCount"].GetInt64();
        m_activationCountHasBeenSet = true;
    }

    if (rsp.HasMember("OnlineCount") && !rsp["OnlineCount"].IsNull())
    {
        if (!rsp["OnlineCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineCount = rsp["OnlineCount"].GetInt64();
        m_onlineCountHasBeenSet = true;
    }

    if (rsp.HasMember("ActivationBeforeDay") && !rsp["ActivationBeforeDay"].IsNull())
    {
        if (!rsp["ActivationBeforeDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivationBeforeDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activationBeforeDay = rsp["ActivationBeforeDay"].GetInt64();
        m_activationBeforeDayHasBeenSet = true;
    }

    if (rsp.HasMember("ActiveBeforeDay") && !rsp["ActiveBeforeDay"].IsNull())
    {
        if (!rsp["ActiveBeforeDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActiveBeforeDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeBeforeDay = rsp["ActiveBeforeDay"].GetInt64();
        m_activeBeforeDayHasBeenSet = true;
    }

    if (rsp.HasMember("ActivationWeekDayCount") && !rsp["ActivationWeekDayCount"].IsNull())
    {
        if (!rsp["ActivationWeekDayCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivationWeekDayCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activationWeekDayCount = rsp["ActivationWeekDayCount"].GetInt64();
        m_activationWeekDayCountHasBeenSet = true;
    }

    if (rsp.HasMember("ActiveWeekDayCount") && !rsp["ActiveWeekDayCount"].IsNull())
    {
        if (!rsp["ActiveWeekDayCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActiveWeekDayCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeWeekDayCount = rsp["ActiveWeekDayCount"].GetInt64();
        m_activeWeekDayCountHasBeenSet = true;
    }

    if (rsp.HasMember("ActivationBeforeWeekDayCount") && !rsp["ActivationBeforeWeekDayCount"].IsNull())
    {
        if (!rsp["ActivationBeforeWeekDayCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivationBeforeWeekDayCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activationBeforeWeekDayCount = rsp["ActivationBeforeWeekDayCount"].GetInt64();
        m_activationBeforeWeekDayCountHasBeenSet = true;
    }

    if (rsp.HasMember("ActiveBeforeWeekDayCount") && !rsp["ActiveBeforeWeekDayCount"].IsNull())
    {
        if (!rsp["ActiveBeforeWeekDayCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActiveBeforeWeekDayCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeBeforeWeekDayCount = rsp["ActiveBeforeWeekDayCount"].GetInt64();
        m_activeBeforeWeekDayCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetDeviceSumStatisticsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_activationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activationCount, allocator);
    }

    if (m_onlineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineCount, allocator);
    }

    if (m_activationBeforeDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivationBeforeDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activationBeforeDay, allocator);
    }

    if (m_activeBeforeDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveBeforeDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeBeforeDay, allocator);
    }

    if (m_activationWeekDayCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivationWeekDayCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activationWeekDayCount, allocator);
    }

    if (m_activeWeekDayCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveWeekDayCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeWeekDayCount, allocator);
    }

    if (m_activationBeforeWeekDayCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivationBeforeWeekDayCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activationBeforeWeekDayCount, allocator);
    }

    if (m_activeBeforeWeekDayCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveBeforeWeekDayCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeBeforeWeekDayCount, allocator);
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


int64_t GetDeviceSumStatisticsResponse::GetActivationCount() const
{
    return m_activationCount;
}

bool GetDeviceSumStatisticsResponse::ActivationCountHasBeenSet() const
{
    return m_activationCountHasBeenSet;
}

int64_t GetDeviceSumStatisticsResponse::GetOnlineCount() const
{
    return m_onlineCount;
}

bool GetDeviceSumStatisticsResponse::OnlineCountHasBeenSet() const
{
    return m_onlineCountHasBeenSet;
}

int64_t GetDeviceSumStatisticsResponse::GetActivationBeforeDay() const
{
    return m_activationBeforeDay;
}

bool GetDeviceSumStatisticsResponse::ActivationBeforeDayHasBeenSet() const
{
    return m_activationBeforeDayHasBeenSet;
}

int64_t GetDeviceSumStatisticsResponse::GetActiveBeforeDay() const
{
    return m_activeBeforeDay;
}

bool GetDeviceSumStatisticsResponse::ActiveBeforeDayHasBeenSet() const
{
    return m_activeBeforeDayHasBeenSet;
}

int64_t GetDeviceSumStatisticsResponse::GetActivationWeekDayCount() const
{
    return m_activationWeekDayCount;
}

bool GetDeviceSumStatisticsResponse::ActivationWeekDayCountHasBeenSet() const
{
    return m_activationWeekDayCountHasBeenSet;
}

int64_t GetDeviceSumStatisticsResponse::GetActiveWeekDayCount() const
{
    return m_activeWeekDayCount;
}

bool GetDeviceSumStatisticsResponse::ActiveWeekDayCountHasBeenSet() const
{
    return m_activeWeekDayCountHasBeenSet;
}

int64_t GetDeviceSumStatisticsResponse::GetActivationBeforeWeekDayCount() const
{
    return m_activationBeforeWeekDayCount;
}

bool GetDeviceSumStatisticsResponse::ActivationBeforeWeekDayCountHasBeenSet() const
{
    return m_activationBeforeWeekDayCountHasBeenSet;
}

int64_t GetDeviceSumStatisticsResponse::GetActiveBeforeWeekDayCount() const
{
    return m_activeBeforeWeekDayCount;
}

bool GetDeviceSumStatisticsResponse::ActiveBeforeWeekDayCountHasBeenSet() const
{
    return m_activeBeforeWeekDayCountHasBeenSet;
}


