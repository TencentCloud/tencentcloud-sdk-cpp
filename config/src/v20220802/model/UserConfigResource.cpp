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

#include <tencentcloud/config/v20220802/model/UserConfigResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

UserConfigResource::UserConfigResource() :
    m_productHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceTypeNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome UserConfigResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserConfigResource.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserConfigResource.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserConfigResource.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceTypeName") && !value["ResourceTypeName"].IsNull())
    {
        if (!value["ResourceTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserConfigResource.ResourceTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceTypeName = string(value["ResourceTypeName"].GetString());
        m_resourceTypeNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserConfigResource.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserConfigResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string UserConfigResource::GetProduct() const
{
    return m_product;
}

void UserConfigResource::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool UserConfigResource::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string UserConfigResource::GetProductName() const
{
    return m_productName;
}

void UserConfigResource::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool UserConfigResource::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string UserConfigResource::GetResourceType() const
{
    return m_resourceType;
}

void UserConfigResource::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool UserConfigResource::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string UserConfigResource::GetResourceTypeName() const
{
    return m_resourceTypeName;
}

void UserConfigResource::SetResourceTypeName(const string& _resourceTypeName)
{
    m_resourceTypeName = _resourceTypeName;
    m_resourceTypeNameHasBeenSet = true;
}

bool UserConfigResource::ResourceTypeNameHasBeenSet() const
{
    return m_resourceTypeNameHasBeenSet;
}

string UserConfigResource::GetUpdateTime() const
{
    return m_updateTime;
}

void UserConfigResource::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool UserConfigResource::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

