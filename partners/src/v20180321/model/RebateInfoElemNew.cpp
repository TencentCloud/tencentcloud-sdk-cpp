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

#include <tencentcloud/partners/v20180321/model/RebateInfoElemNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

RebateInfoElemNew::RebateInfoElemNew() :
    m_uinHasBeenSet(false),
    m_rebateMonthHasBeenSet(false),
    m_amtHasBeenSet(false),
    m_monthSalesHasBeenSet(false),
    m_quarterSalesHasBeenSet(false),
    m_exceptionFlagHasBeenSet(false)
{
}

CoreInternalOutcome RebateInfoElemNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RebateInfoElemNew.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("RebateMonth") && !value["RebateMonth"].IsNull())
    {
        if (!value["RebateMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RebateInfoElemNew.RebateMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rebateMonth = string(value["RebateMonth"].GetString());
        m_rebateMonthHasBeenSet = true;
    }

    if (value.HasMember("Amt") && !value["Amt"].IsNull())
    {
        if (!value["Amt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RebateInfoElemNew.Amt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_amt = value["Amt"].GetInt64();
        m_amtHasBeenSet = true;
    }

    if (value.HasMember("MonthSales") && !value["MonthSales"].IsNull())
    {
        if (!value["MonthSales"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RebateInfoElemNew.MonthSales` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monthSales = value["MonthSales"].GetInt64();
        m_monthSalesHasBeenSet = true;
    }

    if (value.HasMember("QuarterSales") && !value["QuarterSales"].IsNull())
    {
        if (!value["QuarterSales"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RebateInfoElemNew.QuarterSales` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quarterSales = value["QuarterSales"].GetInt64();
        m_quarterSalesHasBeenSet = true;
    }

    if (value.HasMember("ExceptionFlag") && !value["ExceptionFlag"].IsNull())
    {
        if (!value["ExceptionFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RebateInfoElemNew.ExceptionFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionFlag = string(value["ExceptionFlag"].GetString());
        m_exceptionFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RebateInfoElemNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_rebateMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RebateMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rebateMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_amtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amt, allocator);
    }

    if (m_monthSalesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonthSales";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monthSales, allocator);
    }

    if (m_quarterSalesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuarterSales";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quarterSales, allocator);
    }

    if (m_exceptionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exceptionFlag.c_str(), allocator).Move(), allocator);
    }

}


string RebateInfoElemNew::GetUin() const
{
    return m_uin;
}

void RebateInfoElemNew::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool RebateInfoElemNew::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string RebateInfoElemNew::GetRebateMonth() const
{
    return m_rebateMonth;
}

void RebateInfoElemNew::SetRebateMonth(const string& _rebateMonth)
{
    m_rebateMonth = _rebateMonth;
    m_rebateMonthHasBeenSet = true;
}

bool RebateInfoElemNew::RebateMonthHasBeenSet() const
{
    return m_rebateMonthHasBeenSet;
}

int64_t RebateInfoElemNew::GetAmt() const
{
    return m_amt;
}

void RebateInfoElemNew::SetAmt(const int64_t& _amt)
{
    m_amt = _amt;
    m_amtHasBeenSet = true;
}

bool RebateInfoElemNew::AmtHasBeenSet() const
{
    return m_amtHasBeenSet;
}

int64_t RebateInfoElemNew::GetMonthSales() const
{
    return m_monthSales;
}

void RebateInfoElemNew::SetMonthSales(const int64_t& _monthSales)
{
    m_monthSales = _monthSales;
    m_monthSalesHasBeenSet = true;
}

bool RebateInfoElemNew::MonthSalesHasBeenSet() const
{
    return m_monthSalesHasBeenSet;
}

int64_t RebateInfoElemNew::GetQuarterSales() const
{
    return m_quarterSales;
}

void RebateInfoElemNew::SetQuarterSales(const int64_t& _quarterSales)
{
    m_quarterSales = _quarterSales;
    m_quarterSalesHasBeenSet = true;
}

bool RebateInfoElemNew::QuarterSalesHasBeenSet() const
{
    return m_quarterSalesHasBeenSet;
}

string RebateInfoElemNew::GetExceptionFlag() const
{
    return m_exceptionFlag;
}

void RebateInfoElemNew::SetExceptionFlag(const string& _exceptionFlag)
{
    m_exceptionFlag = _exceptionFlag;
    m_exceptionFlagHasBeenSet = true;
}

bool RebateInfoElemNew::ExceptionFlagHasBeenSet() const
{
    return m_exceptionFlagHasBeenSet;
}

