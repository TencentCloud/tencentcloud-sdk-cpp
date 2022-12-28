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

#include <tencentcloud/cvm/v20170312/model/HostPriceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

HostPriceInfo::HostPriceInfo() :
    m_hostPriceHasBeenSet(false)
{
}

CoreInternalOutcome HostPriceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostPrice") && !value["HostPrice"].IsNull())
    {
        if (!value["HostPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostPriceInfo.HostPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostPrice.Deserialize(value["HostPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostPriceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostPrice.ToJsonObject(value[key.c_str()], allocator);
    }

}


ItemPrice HostPriceInfo::GetHostPrice() const
{
    return m_hostPrice;
}

void HostPriceInfo::SetHostPrice(const ItemPrice& _hostPrice)
{
    m_hostPrice = _hostPrice;
    m_hostPriceHasBeenSet = true;
}

bool HostPriceInfo::HostPriceHasBeenSet() const
{
    return m_hostPriceHasBeenSet;
}

