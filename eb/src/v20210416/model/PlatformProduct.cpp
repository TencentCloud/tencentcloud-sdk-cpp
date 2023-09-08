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

#include <tencentcloud/eb/v20210416/model/PlatformProduct.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

PlatformProduct::PlatformProduct() :
    m_productNameHasBeenSet(false),
    m_productTypeHasBeenSet(false)
{
}

CoreInternalOutcome PlatformProduct::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformProduct.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ProductType") && !value["ProductType"].IsNull())
    {
        if (!value["ProductType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformProduct.ProductType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productType = string(value["ProductType"].GetString());
        m_productTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlatformProduct::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productType.c_str(), allocator).Move(), allocator);
    }

}


string PlatformProduct::GetProductName() const
{
    return m_productName;
}

void PlatformProduct::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool PlatformProduct::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string PlatformProduct::GetProductType() const
{
    return m_productType;
}

void PlatformProduct::SetProductType(const string& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool PlatformProduct::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

