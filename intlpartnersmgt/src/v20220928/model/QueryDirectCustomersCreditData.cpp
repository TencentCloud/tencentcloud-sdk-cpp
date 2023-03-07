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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryDirectCustomersCreditData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryDirectCustomersCreditData::QueryDirectCustomersCreditData() :
    m_uinHasBeenSet(false),
    m_totalCreditHasBeenSet(false),
    m_remainingCreditHasBeenSet(false)
{
}

CoreInternalOutcome QueryDirectCustomersCreditData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDirectCustomersCreditData.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("TotalCredit") && !value["TotalCredit"].IsNull())
    {
        if (!value["TotalCredit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDirectCustomersCreditData.TotalCredit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCredit = value["TotalCredit"].GetDouble();
        m_totalCreditHasBeenSet = true;
    }

    if (value.HasMember("RemainingCredit") && !value["RemainingCredit"].IsNull())
    {
        if (!value["RemainingCredit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDirectCustomersCreditData.RemainingCredit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainingCredit = value["RemainingCredit"].GetDouble();
        m_remainingCreditHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryDirectCustomersCreditData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_totalCreditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCredit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCredit, allocator);
    }

    if (m_remainingCreditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingCredit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingCredit, allocator);
    }

}


uint64_t QueryDirectCustomersCreditData::GetUin() const
{
    return m_uin;
}

void QueryDirectCustomersCreditData::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool QueryDirectCustomersCreditData::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

double QueryDirectCustomersCreditData::GetTotalCredit() const
{
    return m_totalCredit;
}

void QueryDirectCustomersCreditData::SetTotalCredit(const double& _totalCredit)
{
    m_totalCredit = _totalCredit;
    m_totalCreditHasBeenSet = true;
}

bool QueryDirectCustomersCreditData::TotalCreditHasBeenSet() const
{
    return m_totalCreditHasBeenSet;
}

double QueryDirectCustomersCreditData::GetRemainingCredit() const
{
    return m_remainingCredit;
}

void QueryDirectCustomersCreditData::SetRemainingCredit(const double& _remainingCredit)
{
    m_remainingCredit = _remainingCredit;
    m_remainingCreditHasBeenSet = true;
}

bool QueryDirectCustomersCreditData::RemainingCreditHasBeenSet() const
{
    return m_remainingCreditHasBeenSet;
}

