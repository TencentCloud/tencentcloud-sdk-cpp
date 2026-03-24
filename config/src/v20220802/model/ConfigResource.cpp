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

#include <tencentcloud/config/v20220802/model/ConfigResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

ConfigResource::ConfigResource() :
    m_productHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceTypeNameHasBeenSet(false)
{
}

CoreInternalOutcome ConfigResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigResource.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigResource.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigResource.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceTypeName") && !value["ResourceTypeName"].IsNull())
    {
        if (!value["ResourceTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigResource.ResourceTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceTypeName = string(value["ResourceTypeName"].GetString());
        m_resourceTypeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceTypeName.c_str(), allocator).Move(), allocator);
    }

}


string ConfigResource::GetProduct() const
{
    return m_product;
}

void ConfigResource::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool ConfigResource::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string ConfigResource::GetProductName() const
{
    return m_productName;
}

void ConfigResource::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ConfigResource::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string ConfigResource::GetResourceType() const
{
    return m_resourceType;
}

void ConfigResource::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ConfigResource::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ConfigResource::GetResourceTypeName() const
{
    return m_resourceTypeName;
}

void ConfigResource::SetResourceTypeName(const string& _resourceTypeName)
{
    m_resourceTypeName = _resourceTypeName;
    m_resourceTypeNameHasBeenSet = true;
}

bool ConfigResource::ResourceTypeNameHasBeenSet() const
{
    return m_resourceTypeNameHasBeenSet;
}

