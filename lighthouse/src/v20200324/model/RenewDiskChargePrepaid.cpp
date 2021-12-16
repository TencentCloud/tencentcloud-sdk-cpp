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

#include <tencentcloud/lighthouse/v20200324/model/RenewDiskChargePrepaid.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

RenewDiskChargePrepaid::RenewDiskChargePrepaid() :
    m_periodHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_curInstanceDeadlineHasBeenSet(false)
{
}

CoreInternalOutcome RenewDiskChargePrepaid::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RenewDiskChargePrepaid.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewDiskChargePrepaid.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewDiskChargePrepaid.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("CurInstanceDeadline") && !value["CurInstanceDeadline"].IsNull())
    {
        if (!value["CurInstanceDeadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewDiskChargePrepaid.CurInstanceDeadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curInstanceDeadline = string(value["CurInstanceDeadline"].GetString());
        m_curInstanceDeadlineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RenewDiskChargePrepaid::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_curInstanceDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurInstanceDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curInstanceDeadline.c_str(), allocator).Move(), allocator);
    }

}


int64_t RenewDiskChargePrepaid::GetPeriod() const
{
    return m_period;
}

void RenewDiskChargePrepaid::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool RenewDiskChargePrepaid::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string RenewDiskChargePrepaid::GetRenewFlag() const
{
    return m_renewFlag;
}

void RenewDiskChargePrepaid::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool RenewDiskChargePrepaid::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string RenewDiskChargePrepaid::GetTimeUnit() const
{
    return m_timeUnit;
}

void RenewDiskChargePrepaid::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool RenewDiskChargePrepaid::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string RenewDiskChargePrepaid::GetCurInstanceDeadline() const
{
    return m_curInstanceDeadline;
}

void RenewDiskChargePrepaid::SetCurInstanceDeadline(const string& _curInstanceDeadline)
{
    m_curInstanceDeadline = _curInstanceDeadline;
    m_curInstanceDeadlineHasBeenSet = true;
}

bool RenewDiskChargePrepaid::CurInstanceDeadlineHasBeenSet() const
{
    return m_curInstanceDeadlineHasBeenSet;
}

