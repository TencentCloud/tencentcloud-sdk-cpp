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

#include <tencentcloud/clb/v20180317/model/ModelRouterResourcePackageRefundPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelRouterResourcePackageRefundPrice::ModelRouterResourcePackageRefundPrice() :
    m_modelRouterPackageIdHasBeenSet(false),
    m_priceHasBeenSet(false)
{
}

CoreInternalOutcome ModelRouterResourcePackageRefundPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelRouterPackageId") && !value["ModelRouterPackageId"].IsNull())
    {
        if (!value["ModelRouterPackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterResourcePackageRefundPrice.ModelRouterPackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelRouterPackageId = string(value["ModelRouterPackageId"].GetString());
        m_modelRouterPackageIdHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterResourcePackageRefundPrice.Price` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_price = value["Price"].GetDouble();
        m_priceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelRouterResourcePackageRefundPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelRouterPackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterPackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelRouterPackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

}


string ModelRouterResourcePackageRefundPrice::GetModelRouterPackageId() const
{
    return m_modelRouterPackageId;
}

void ModelRouterResourcePackageRefundPrice::SetModelRouterPackageId(const string& _modelRouterPackageId)
{
    m_modelRouterPackageId = _modelRouterPackageId;
    m_modelRouterPackageIdHasBeenSet = true;
}

bool ModelRouterResourcePackageRefundPrice::ModelRouterPackageIdHasBeenSet() const
{
    return m_modelRouterPackageIdHasBeenSet;
}

double ModelRouterResourcePackageRefundPrice::GetPrice() const
{
    return m_price;
}

void ModelRouterResourcePackageRefundPrice::SetPrice(const double& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool ModelRouterResourcePackageRefundPrice::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

