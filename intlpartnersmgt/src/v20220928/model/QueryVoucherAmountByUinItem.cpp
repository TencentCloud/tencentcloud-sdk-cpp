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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherAmountByUinItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryVoucherAmountByUinItem::QueryVoucherAmountByUinItem() :
    m_clientUinHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_remainAmountHasBeenSet(false)
{
}

CoreInternalOutcome QueryVoucherAmountByUinItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientUin") && !value["ClientUin"].IsNull())
    {
        if (!value["ClientUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryVoucherAmountByUinItem.ClientUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientUin = value["ClientUin"].GetInt64();
        m_clientUinHasBeenSet = true;
    }

    if (value.HasMember("TotalAmount") && !value["TotalAmount"].IsNull())
    {
        if (!value["TotalAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryVoucherAmountByUinItem.TotalAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmount = value["TotalAmount"].GetDouble();
        m_totalAmountHasBeenSet = true;
    }

    if (value.HasMember("RemainAmount") && !value["RemainAmount"].IsNull())
    {
        if (!value["RemainAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryVoucherAmountByUinItem.RemainAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainAmount = value["RemainAmount"].GetDouble();
        m_remainAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryVoucherAmountByUinItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientUin, allocator);
    }

    if (m_totalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAmount, allocator);
    }

    if (m_remainAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainAmount, allocator);
    }

}


int64_t QueryVoucherAmountByUinItem::GetClientUin() const
{
    return m_clientUin;
}

void QueryVoucherAmountByUinItem::SetClientUin(const int64_t& _clientUin)
{
    m_clientUin = _clientUin;
    m_clientUinHasBeenSet = true;
}

bool QueryVoucherAmountByUinItem::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

double QueryVoucherAmountByUinItem::GetTotalAmount() const
{
    return m_totalAmount;
}

void QueryVoucherAmountByUinItem::SetTotalAmount(const double& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool QueryVoucherAmountByUinItem::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

double QueryVoucherAmountByUinItem::GetRemainAmount() const
{
    return m_remainAmount;
}

void QueryVoucherAmountByUinItem::SetRemainAmount(const double& _remainAmount)
{
    m_remainAmount = _remainAmount;
    m_remainAmountHasBeenSet = true;
}

bool QueryVoucherAmountByUinItem::RemainAmountHasBeenSet() const
{
    return m_remainAmountHasBeenSet;
}

