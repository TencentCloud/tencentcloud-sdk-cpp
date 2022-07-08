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

#include <tencentcloud/iotvideo/v20211125/model/MessageCntStats.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

MessageCntStats::MessageCntStats() :
    m_dateHasBeenSet(false),
    m_upMsgCntHasBeenSet(false),
    m_downMsgCntHasBeenSet(false),
    m_ntpMsgCntHasBeenSet(false)
{
}

CoreInternalOutcome MessageCntStats::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageCntStats.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("UpMsgCnt") && !value["UpMsgCnt"].IsNull())
    {
        if (!value["UpMsgCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageCntStats.UpMsgCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_upMsgCnt = value["UpMsgCnt"].GetUint64();
        m_upMsgCntHasBeenSet = true;
    }

    if (value.HasMember("DownMsgCnt") && !value["DownMsgCnt"].IsNull())
    {
        if (!value["DownMsgCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageCntStats.DownMsgCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_downMsgCnt = value["DownMsgCnt"].GetUint64();
        m_downMsgCntHasBeenSet = true;
    }

    if (value.HasMember("NtpMsgCnt") && !value["NtpMsgCnt"].IsNull())
    {
        if (!value["NtpMsgCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageCntStats.NtpMsgCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ntpMsgCnt = value["NtpMsgCnt"].GetUint64();
        m_ntpMsgCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MessageCntStats::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_upMsgCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpMsgCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upMsgCnt, allocator);
    }

    if (m_downMsgCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownMsgCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_downMsgCnt, allocator);
    }

    if (m_ntpMsgCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NtpMsgCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ntpMsgCnt, allocator);
    }

}


string MessageCntStats::GetDate() const
{
    return m_date;
}

void MessageCntStats::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool MessageCntStats::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t MessageCntStats::GetUpMsgCnt() const
{
    return m_upMsgCnt;
}

void MessageCntStats::SetUpMsgCnt(const uint64_t& _upMsgCnt)
{
    m_upMsgCnt = _upMsgCnt;
    m_upMsgCntHasBeenSet = true;
}

bool MessageCntStats::UpMsgCntHasBeenSet() const
{
    return m_upMsgCntHasBeenSet;
}

uint64_t MessageCntStats::GetDownMsgCnt() const
{
    return m_downMsgCnt;
}

void MessageCntStats::SetDownMsgCnt(const uint64_t& _downMsgCnt)
{
    m_downMsgCnt = _downMsgCnt;
    m_downMsgCntHasBeenSet = true;
}

bool MessageCntStats::DownMsgCntHasBeenSet() const
{
    return m_downMsgCntHasBeenSet;
}

uint64_t MessageCntStats::GetNtpMsgCnt() const
{
    return m_ntpMsgCnt;
}

void MessageCntStats::SetNtpMsgCnt(const uint64_t& _ntpMsgCnt)
{
    m_ntpMsgCnt = _ntpMsgCnt;
    m_ntpMsgCntHasBeenSet = true;
}

bool MessageCntStats::NtpMsgCntHasBeenSet() const
{
    return m_ntpMsgCntHasBeenSet;
}

