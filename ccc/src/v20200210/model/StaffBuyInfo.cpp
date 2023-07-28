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

#include <tencentcloud/ccc/v20200210/model/StaffBuyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

StaffBuyInfo::StaffBuyInfo() :
    m_numHasBeenSet(false),
    m_buyTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sipNumHasBeenSet(false)
{
}

CoreInternalOutcome StaffBuyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffBuyInfo.Num` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetInt64();
        m_numHasBeenSet = true;
    }

    if (value.HasMember("BuyTime") && !value["BuyTime"].IsNull())
    {
        if (!value["BuyTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffBuyInfo.BuyTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_buyTime = value["BuyTime"].GetInt64();
        m_buyTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffBuyInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("SipNum") && !value["SipNum"].IsNull())
    {
        if (!value["SipNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffBuyInfo.SipNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sipNum = value["SipNum"].GetInt64();
        m_sipNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaffBuyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

    if (m_buyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buyTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_sipNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SipNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sipNum, allocator);
    }

}


int64_t StaffBuyInfo::GetNum() const
{
    return m_num;
}

void StaffBuyInfo::SetNum(const int64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool StaffBuyInfo::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

int64_t StaffBuyInfo::GetBuyTime() const
{
    return m_buyTime;
}

void StaffBuyInfo::SetBuyTime(const int64_t& _buyTime)
{
    m_buyTime = _buyTime;
    m_buyTimeHasBeenSet = true;
}

bool StaffBuyInfo::BuyTimeHasBeenSet() const
{
    return m_buyTimeHasBeenSet;
}

int64_t StaffBuyInfo::GetEndTime() const
{
    return m_endTime;
}

void StaffBuyInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool StaffBuyInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t StaffBuyInfo::GetSipNum() const
{
    return m_sipNum;
}

void StaffBuyInfo::SetSipNum(const int64_t& _sipNum)
{
    m_sipNum = _sipNum;
    m_sipNumHasBeenSet = true;
}

bool StaffBuyInfo::SipNumHasBeenSet() const
{
    return m_sipNumHasBeenSet;
}

