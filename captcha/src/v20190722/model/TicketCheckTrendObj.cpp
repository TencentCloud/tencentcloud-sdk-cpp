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

#include <tencentcloud/captcha/v20190722/model/TicketCheckTrendObj.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

TicketCheckTrendObj::TicketCheckTrendObj() :
    m_ftimeHasBeenSet(false),
    m_ticketCountHasBeenSet(false),
    m_ticketThroughputHasBeenSet(false),
    m_ticketInterceptHasBeenSet(false)
{
}

CoreInternalOutcome TicketCheckTrendObj::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ftime") && !value["Ftime"].IsNull())
    {
        if (!value["Ftime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TicketCheckTrendObj.Ftime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ftime = string(value["Ftime"].GetString());
        m_ftimeHasBeenSet = true;
    }

    if (value.HasMember("TicketCount") && !value["TicketCount"].IsNull())
    {
        if (!value["TicketCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TicketCheckTrendObj.TicketCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ticketCount = value["TicketCount"].GetInt64();
        m_ticketCountHasBeenSet = true;
    }

    if (value.HasMember("TicketThroughput") && !value["TicketThroughput"].IsNull())
    {
        if (!value["TicketThroughput"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TicketCheckTrendObj.TicketThroughput` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ticketThroughput = value["TicketThroughput"].GetInt64();
        m_ticketThroughputHasBeenSet = true;
    }

    if (value.HasMember("TicketIntercept") && !value["TicketIntercept"].IsNull())
    {
        if (!value["TicketIntercept"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TicketCheckTrendObj.TicketIntercept` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ticketIntercept = value["TicketIntercept"].GetInt64();
        m_ticketInterceptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TicketCheckTrendObj::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ftimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ftime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ftime.c_str(), allocator).Move(), allocator);
    }

    if (m_ticketCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ticketCount, allocator);
    }

    if (m_ticketThroughputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketThroughput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ticketThroughput, allocator);
    }

    if (m_ticketInterceptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketIntercept";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ticketIntercept, allocator);
    }

}


string TicketCheckTrendObj::GetFtime() const
{
    return m_ftime;
}

void TicketCheckTrendObj::SetFtime(const string& _ftime)
{
    m_ftime = _ftime;
    m_ftimeHasBeenSet = true;
}

bool TicketCheckTrendObj::FtimeHasBeenSet() const
{
    return m_ftimeHasBeenSet;
}

int64_t TicketCheckTrendObj::GetTicketCount() const
{
    return m_ticketCount;
}

void TicketCheckTrendObj::SetTicketCount(const int64_t& _ticketCount)
{
    m_ticketCount = _ticketCount;
    m_ticketCountHasBeenSet = true;
}

bool TicketCheckTrendObj::TicketCountHasBeenSet() const
{
    return m_ticketCountHasBeenSet;
}

int64_t TicketCheckTrendObj::GetTicketThroughput() const
{
    return m_ticketThroughput;
}

void TicketCheckTrendObj::SetTicketThroughput(const int64_t& _ticketThroughput)
{
    m_ticketThroughput = _ticketThroughput;
    m_ticketThroughputHasBeenSet = true;
}

bool TicketCheckTrendObj::TicketThroughputHasBeenSet() const
{
    return m_ticketThroughputHasBeenSet;
}

int64_t TicketCheckTrendObj::GetTicketIntercept() const
{
    return m_ticketIntercept;
}

void TicketCheckTrendObj::SetTicketIntercept(const int64_t& _ticketIntercept)
{
    m_ticketIntercept = _ticketIntercept;
    m_ticketInterceptHasBeenSet = true;
}

bool TicketCheckTrendObj::TicketInterceptHasBeenSet() const
{
    return m_ticketInterceptHasBeenSet;
}

