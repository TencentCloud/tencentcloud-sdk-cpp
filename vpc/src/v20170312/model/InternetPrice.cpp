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

#include <tencentcloud/vpc/v20170312/model/InternetPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

InternetPrice::InternetPrice() :
    m_addressPriceHasBeenSet(false)
{
}

CoreInternalOutcome InternetPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddressPrice") && !value["AddressPrice"].IsNull())
    {
        if (!value["AddressPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternetPrice.AddressPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_addressPrice.Deserialize(value["AddressPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addressPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternetPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_addressPrice.ToJsonObject(value[key.c_str()], allocator);
    }

}


InternetPriceDetail InternetPrice::GetAddressPrice() const
{
    return m_addressPrice;
}

void InternetPrice::SetAddressPrice(const InternetPriceDetail& _addressPrice)
{
    m_addressPrice = _addressPrice;
    m_addressPriceHasBeenSet = true;
}

bool InternetPrice::AddressPriceHasBeenSet() const
{
    return m_addressPriceHasBeenSet;
}

