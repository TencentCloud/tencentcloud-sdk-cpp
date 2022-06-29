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

#include <tencentcloud/iotcloud/v20210408/model/ProductInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

ProductInfo::ProductInfo() :
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_productMetadataHasBeenSet(false),
    m_productPropertiesHasBeenSet(false)
{
}

CoreInternalOutcome ProductInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ProductMetadata") && !value["ProductMetadata"].IsNull())
    {
        if (!value["ProductMetadata"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ProductMetadata` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_productMetadata.Deserialize(value["ProductMetadata"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_productMetadataHasBeenSet = true;
    }

    if (value.HasMember("ProductProperties") && !value["ProductProperties"].IsNull())
    {
        if (!value["ProductProperties"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ProductProperties` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_productProperties.Deserialize(value["ProductProperties"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_productPropertiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_productMetadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductMetadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_productMetadata.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_productPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_productProperties.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ProductInfo::GetProductId() const
{
    return m_productId;
}

void ProductInfo::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ProductInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ProductInfo::GetProductName() const
{
    return m_productName;
}

void ProductInfo::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ProductInfo::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

ProductMetadata ProductInfo::GetProductMetadata() const
{
    return m_productMetadata;
}

void ProductInfo::SetProductMetadata(const ProductMetadata& _productMetadata)
{
    m_productMetadata = _productMetadata;
    m_productMetadataHasBeenSet = true;
}

bool ProductInfo::ProductMetadataHasBeenSet() const
{
    return m_productMetadataHasBeenSet;
}

ProductProperties ProductInfo::GetProductProperties() const
{
    return m_productProperties;
}

void ProductInfo::SetProductProperties(const ProductProperties& _productProperties)
{
    m_productProperties = _productProperties;
    m_productPropertiesHasBeenSet = true;
}

bool ProductInfo::ProductPropertiesHasBeenSet() const
{
    return m_productPropertiesHasBeenSet;
}

