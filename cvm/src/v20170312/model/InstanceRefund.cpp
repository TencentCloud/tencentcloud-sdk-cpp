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

#include <tencentcloud/cvm/v20170312/model/InstanceRefund.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

InstanceRefund::InstanceRefund() :
    m_instanceIdHasBeenSet(false),
    m_refundsHasBeenSet(false),
    m_priceDetailHasBeenSet(false)
{
}

CoreInternalOutcome InstanceRefund::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceRefund.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Refunds") && !value["Refunds"].IsNull())
    {
        if (!value["Refunds"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceRefund.Refunds` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_refunds = value["Refunds"].GetDouble();
        m_refundsHasBeenSet = true;
    }

    if (value.HasMember("PriceDetail") && !value["PriceDetail"].IsNull())
    {
        if (!value["PriceDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceRefund.PriceDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_priceDetail = string(value["PriceDetail"].GetString());
        m_priceDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceRefund::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_refundsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Refunds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refunds, allocator);
    }

    if (m_priceDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_priceDetail.c_str(), allocator).Move(), allocator);
    }

}


string InstanceRefund::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceRefund::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceRefund::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

double InstanceRefund::GetRefunds() const
{
    return m_refunds;
}

void InstanceRefund::SetRefunds(const double& _refunds)
{
    m_refunds = _refunds;
    m_refundsHasBeenSet = true;
}

bool InstanceRefund::RefundsHasBeenSet() const
{
    return m_refundsHasBeenSet;
}

string InstanceRefund::GetPriceDetail() const
{
    return m_priceDetail;
}

void InstanceRefund::SetPriceDetail(const string& _priceDetail)
{
    m_priceDetail = _priceDetail;
    m_priceDetailHasBeenSet = true;
}

bool InstanceRefund::PriceDetailHasBeenSet() const
{
    return m_priceDetailHasBeenSet;
}

