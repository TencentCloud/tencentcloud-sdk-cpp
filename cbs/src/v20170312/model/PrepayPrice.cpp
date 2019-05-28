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

#include <tencentcloud/cbs/v20170312/model/PrepayPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace rapidjson;
using namespace std;

PrepayPrice::PrepayPrice() :
    m_originalPriceHasBeenSet(false),
    m_discountPriceHasBeenSet(false)
{
}

CoreInternalOutcome PrepayPrice::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginalPrice") && !value["OriginalPrice"].IsNull())
    {
        if (!value["OriginalPrice"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `PrepayPrice.OriginalPrice` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = value["OriginalPrice"].GetDouble();
        m_originalPriceHasBeenSet = true;
    }

    if (value.HasMember("DiscountPrice") && !value["DiscountPrice"].IsNull())
    {
        if (!value["DiscountPrice"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `PrepayPrice.DiscountPrice` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = value["DiscountPrice"].GetDouble();
        m_discountPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrepayPrice::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_originalPriceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OriginalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPrice, allocator);
    }

    if (m_discountPriceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiscountPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountPrice, allocator);
    }

}


double PrepayPrice::GetOriginalPrice() const
{
    return m_originalPrice;
}

void PrepayPrice::SetOriginalPrice(const double& _originalPrice)
{
    m_originalPrice = _originalPrice;
    m_originalPriceHasBeenSet = true;
}

bool PrepayPrice::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

double PrepayPrice::GetDiscountPrice() const
{
    return m_discountPrice;
}

void PrepayPrice::SetDiscountPrice(const double& _discountPrice)
{
    m_discountPrice = _discountPrice;
    m_discountPriceHasBeenSet = true;
}

bool PrepayPrice::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

