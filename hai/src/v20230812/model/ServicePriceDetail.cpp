/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/hai/v20230812/model/ServicePriceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

ServicePriceDetail::ServicePriceDetail() :
    m_servicePriceHasBeenSet(false)
{
}

CoreInternalOutcome ServicePriceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServicePrice") && !value["ServicePrice"].IsNull())
    {
        if (!value["ServicePrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServicePriceDetail.ServicePrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_servicePrice.Deserialize(value["ServicePrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_servicePriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServicePriceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_servicePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServicePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_servicePrice.ToJsonObject(value[key.c_str()], allocator);
    }

}


ItemPrice ServicePriceDetail::GetServicePrice() const
{
    return m_servicePrice;
}

void ServicePriceDetail::SetServicePrice(const ItemPrice& _servicePrice)
{
    m_servicePrice = _servicePrice;
    m_servicePriceHasBeenSet = true;
}

bool ServicePriceDetail::ServicePriceHasBeenSet() const
{
    return m_servicePriceHasBeenSet;
}

