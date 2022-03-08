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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankBankAccountBalanceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankBankAccountBalanceResult::QueryOpenBankBankAccountBalanceResult() :
    m_totalBalanceHasBeenSet(false),
    m_yesterdayBalanceHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankBankAccountBalanceResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalBalance") && !value["TotalBalance"].IsNull())
    {
        if (!value["TotalBalance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBankAccountBalanceResult.TotalBalance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalBalance = string(value["TotalBalance"].GetString());
        m_totalBalanceHasBeenSet = true;
    }

    if (value.HasMember("YesterdayBalance") && !value["YesterdayBalance"].IsNull())
    {
        if (!value["YesterdayBalance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBankAccountBalanceResult.YesterdayBalance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yesterdayBalance = string(value["YesterdayBalance"].GetString());
        m_yesterdayBalanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankBankAccountBalanceResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalBalance.c_str(), allocator).Move(), allocator);
    }

    if (m_yesterdayBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YesterdayBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yesterdayBalance.c_str(), allocator).Move(), allocator);
    }

}


string QueryOpenBankBankAccountBalanceResult::GetTotalBalance() const
{
    return m_totalBalance;
}

void QueryOpenBankBankAccountBalanceResult::SetTotalBalance(const string& _totalBalance)
{
    m_totalBalance = _totalBalance;
    m_totalBalanceHasBeenSet = true;
}

bool QueryOpenBankBankAccountBalanceResult::TotalBalanceHasBeenSet() const
{
    return m_totalBalanceHasBeenSet;
}

string QueryOpenBankBankAccountBalanceResult::GetYesterdayBalance() const
{
    return m_yesterdayBalance;
}

void QueryOpenBankBankAccountBalanceResult::SetYesterdayBalance(const string& _yesterdayBalance)
{
    m_yesterdayBalance = _yesterdayBalance;
    m_yesterdayBalanceHasBeenSet = true;
}

bool QueryOpenBankBankAccountBalanceResult::YesterdayBalanceHasBeenSet() const
{
    return m_yesterdayBalanceHasBeenSet;
}

