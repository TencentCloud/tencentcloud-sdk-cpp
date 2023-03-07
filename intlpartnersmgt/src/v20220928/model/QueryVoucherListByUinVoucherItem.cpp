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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinVoucherItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryVoucherListByUinVoucherItem::QueryVoucherListByUinVoucherItem() :
    m_voucherIdHasBeenSet(false),
    m_voucherStatusHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_remainAmountHasBeenSet(false)
{
}

CoreInternalOutcome QueryVoucherListByUinVoucherItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoucherId") && !value["VoucherId"].IsNull())
    {
        if (!value["VoucherId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryVoucherListByUinVoucherItem.VoucherId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherId = string(value["VoucherId"].GetString());
        m_voucherIdHasBeenSet = true;
    }

    if (value.HasMember("VoucherStatus") && !value["VoucherStatus"].IsNull())
    {
        if (!value["VoucherStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryVoucherListByUinVoucherItem.VoucherStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherStatus = string(value["VoucherStatus"].GetString());
        m_voucherStatusHasBeenSet = true;
    }

    if (value.HasMember("TotalAmount") && !value["TotalAmount"].IsNull())
    {
        if (!value["TotalAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryVoucherListByUinVoucherItem.TotalAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmount = value["TotalAmount"].GetDouble();
        m_totalAmountHasBeenSet = true;
    }

    if (value.HasMember("RemainAmount") && !value["RemainAmount"].IsNull())
    {
        if (!value["RemainAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryVoucherListByUinVoucherItem.RemainAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainAmount = value["RemainAmount"].GetDouble();
        m_remainAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryVoucherListByUinVoucherItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voucherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voucherId.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voucherStatus.c_str(), allocator).Move(), allocator);
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


string QueryVoucherListByUinVoucherItem::GetVoucherId() const
{
    return m_voucherId;
}

void QueryVoucherListByUinVoucherItem::SetVoucherId(const string& _voucherId)
{
    m_voucherId = _voucherId;
    m_voucherIdHasBeenSet = true;
}

bool QueryVoucherListByUinVoucherItem::VoucherIdHasBeenSet() const
{
    return m_voucherIdHasBeenSet;
}

string QueryVoucherListByUinVoucherItem::GetVoucherStatus() const
{
    return m_voucherStatus;
}

void QueryVoucherListByUinVoucherItem::SetVoucherStatus(const string& _voucherStatus)
{
    m_voucherStatus = _voucherStatus;
    m_voucherStatusHasBeenSet = true;
}

bool QueryVoucherListByUinVoucherItem::VoucherStatusHasBeenSet() const
{
    return m_voucherStatusHasBeenSet;
}

double QueryVoucherListByUinVoucherItem::GetTotalAmount() const
{
    return m_totalAmount;
}

void QueryVoucherListByUinVoucherItem::SetTotalAmount(const double& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool QueryVoucherListByUinVoucherItem::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

double QueryVoucherListByUinVoucherItem::GetRemainAmount() const
{
    return m_remainAmount;
}

void QueryVoucherListByUinVoucherItem::SetRemainAmount(const double& _remainAmount)
{
    m_remainAmount = _remainAmount;
    m_remainAmountHasBeenSet = true;
}

bool QueryVoucherListByUinVoucherItem::RemainAmountHasBeenSet() const
{
    return m_remainAmountHasBeenSet;
}

