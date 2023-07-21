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

#include <tencentcloud/partners/v20180321/model/RefundMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

RefundMap::RefundMap() :
    m_dealNameHasBeenSet(false),
    m_refundAmountHasBeenSet(false)
{
}

CoreInternalOutcome RefundMap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DealName") && !value["DealName"].IsNull())
    {
        if (!value["DealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundMap.DealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealName = string(value["DealName"].GetString());
        m_dealNameHasBeenSet = true;
    }

    if (value.HasMember("RefundAmount") && !value["RefundAmount"].IsNull())
    {
        if (!value["RefundAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RefundMap.RefundAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_refundAmount = value["RefundAmount"].GetInt64();
        m_refundAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RefundMap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealName.c_str(), allocator).Move(), allocator);
    }

    if (m_refundAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refundAmount, allocator);
    }

}


string RefundMap::GetDealName() const
{
    return m_dealName;
}

void RefundMap::SetDealName(const string& _dealName)
{
    m_dealName = _dealName;
    m_dealNameHasBeenSet = true;
}

bool RefundMap::DealNameHasBeenSet() const
{
    return m_dealNameHasBeenSet;
}

int64_t RefundMap::GetRefundAmount() const
{
    return m_refundAmount;
}

void RefundMap::SetRefundAmount(const int64_t& _refundAmount)
{
    m_refundAmount = _refundAmount;
    m_refundAmountHasBeenSet = true;
}

bool RefundMap::RefundAmountHasBeenSet() const
{
    return m_refundAmountHasBeenSet;
}

