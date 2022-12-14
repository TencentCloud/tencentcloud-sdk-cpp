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

#include <tencentcloud/lighthouse/v20200324/model/InstancePriceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

InstancePriceDetail::InstancePriceDetail() :
    m_instanceIdHasBeenSet(false),
    m_instancePriceHasBeenSet(false),
    m_discountDetailHasBeenSet(false)
{
}

CoreInternalOutcome InstancePriceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePriceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstancePrice") && !value["InstancePrice"].IsNull())
    {
        if (!value["InstancePrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePriceDetail.InstancePrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instancePrice.Deserialize(value["InstancePrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instancePriceHasBeenSet = true;
    }

    if (value.HasMember("DiscountDetail") && !value["DiscountDetail"].IsNull())
    {
        if (!value["DiscountDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstancePriceDetail.DiscountDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["DiscountDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiscountDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_discountDetail.push_back(item);
        }
        m_discountDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstancePriceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instancePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instancePrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_discountDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_discountDetail.begin(); itr != m_discountDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InstancePriceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void InstancePriceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstancePriceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

InstancePrice InstancePriceDetail::GetInstancePrice() const
{
    return m_instancePrice;
}

void InstancePriceDetail::SetInstancePrice(const InstancePrice& _instancePrice)
{
    m_instancePrice = _instancePrice;
    m_instancePriceHasBeenSet = true;
}

bool InstancePriceDetail::InstancePriceHasBeenSet() const
{
    return m_instancePriceHasBeenSet;
}

vector<DiscountDetail> InstancePriceDetail::GetDiscountDetail() const
{
    return m_discountDetail;
}

void InstancePriceDetail::SetDiscountDetail(const vector<DiscountDetail>& _discountDetail)
{
    m_discountDetail = _discountDetail;
    m_discountDetailHasBeenSet = true;
}

bool InstancePriceDetail::DiscountDetailHasBeenSet() const
{
    return m_discountDetailHasBeenSet;
}

