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

#include <tencentcloud/billing/v20180709/model/ExcludedProducts.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

ExcludedProducts::ExcludedProducts() :
    m_goodsNameHasBeenSet(false),
    m_payModeHasBeenSet(false)
{
}

CoreInternalOutcome ExcludedProducts::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GoodsName") && !value["GoodsName"].IsNull())
    {
        if (!value["GoodsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExcludedProducts.GoodsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsName = string(value["GoodsName"].GetString());
        m_goodsNameHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExcludedProducts.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExcludedProducts::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_goodsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

}


string ExcludedProducts::GetGoodsName() const
{
    return m_goodsName;
}

void ExcludedProducts::SetGoodsName(const string& _goodsName)
{
    m_goodsName = _goodsName;
    m_goodsNameHasBeenSet = true;
}

bool ExcludedProducts::GoodsNameHasBeenSet() const
{
    return m_goodsNameHasBeenSet;
}

string ExcludedProducts::GetPayMode() const
{
    return m_payMode;
}

void ExcludedProducts::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ExcludedProducts::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

