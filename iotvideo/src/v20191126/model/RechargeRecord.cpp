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

#include <tencentcloud/iotvideo/v20191126/model/RechargeRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

RechargeRecord::RechargeRecord() :
    m_waterIdHasBeenSet(false),
    m_balanceBeforeRechargeHasBeenSet(false),
    m_moneyHasBeenSet(false),
    m_operateTimeHasBeenSet(false)
{
}

CoreInternalOutcome RechargeRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WaterId") && !value["WaterId"].IsNull())
    {
        if (!value["WaterId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RechargeRecord.WaterId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_waterId = value["WaterId"].GetInt64();
        m_waterIdHasBeenSet = true;
    }

    if (value.HasMember("BalanceBeforeRecharge") && !value["BalanceBeforeRecharge"].IsNull())
    {
        if (!value["BalanceBeforeRecharge"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RechargeRecord.BalanceBeforeRecharge` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_balanceBeforeRecharge = value["BalanceBeforeRecharge"].GetInt64();
        m_balanceBeforeRechargeHasBeenSet = true;
    }

    if (value.HasMember("Money") && !value["Money"].IsNull())
    {
        if (!value["Money"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RechargeRecord.Money` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_money = value["Money"].GetInt64();
        m_moneyHasBeenSet = true;
    }

    if (value.HasMember("OperateTime") && !value["OperateTime"].IsNull())
    {
        if (!value["OperateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RechargeRecord.OperateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operateTime = value["OperateTime"].GetInt64();
        m_operateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RechargeRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_waterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waterId, allocator);
    }

    if (m_balanceBeforeRechargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BalanceBeforeRecharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_balanceBeforeRecharge, allocator);
    }

    if (m_moneyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Money";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_money, allocator);
    }

    if (m_operateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operateTime, allocator);
    }

}


int64_t RechargeRecord::GetWaterId() const
{
    return m_waterId;
}

void RechargeRecord::SetWaterId(const int64_t& _waterId)
{
    m_waterId = _waterId;
    m_waterIdHasBeenSet = true;
}

bool RechargeRecord::WaterIdHasBeenSet() const
{
    return m_waterIdHasBeenSet;
}

int64_t RechargeRecord::GetBalanceBeforeRecharge() const
{
    return m_balanceBeforeRecharge;
}

void RechargeRecord::SetBalanceBeforeRecharge(const int64_t& _balanceBeforeRecharge)
{
    m_balanceBeforeRecharge = _balanceBeforeRecharge;
    m_balanceBeforeRechargeHasBeenSet = true;
}

bool RechargeRecord::BalanceBeforeRechargeHasBeenSet() const
{
    return m_balanceBeforeRechargeHasBeenSet;
}

int64_t RechargeRecord::GetMoney() const
{
    return m_money;
}

void RechargeRecord::SetMoney(const int64_t& _money)
{
    m_money = _money;
    m_moneyHasBeenSet = true;
}

bool RechargeRecord::MoneyHasBeenSet() const
{
    return m_moneyHasBeenSet;
}

int64_t RechargeRecord::GetOperateTime() const
{
    return m_operateTime;
}

void RechargeRecord::SetOperateTime(const int64_t& _operateTime)
{
    m_operateTime = _operateTime;
    m_operateTimeHasBeenSet = true;
}

bool RechargeRecord::OperateTimeHasBeenSet() const
{
    return m_operateTimeHasBeenSet;
}

