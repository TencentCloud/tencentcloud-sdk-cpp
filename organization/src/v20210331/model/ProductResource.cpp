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

#include <tencentcloud/organization/v20210331/model/ProductResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ProductResource::ProductResource() :
    m_productResourceIdHasBeenSet(false),
    m_resourceGrantLastHasBeenSet(false)
{
}

CoreInternalOutcome ProductResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductResourceId") && !value["ProductResourceId"].IsNull())
    {
        if (!value["ProductResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductResource.ProductResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productResourceId = string(value["ProductResourceId"].GetString());
        m_productResourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGrantLast") && !value["ResourceGrantLast"].IsNull())
    {
        if (!value["ResourceGrantLast"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductResource.ResourceGrantLast` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGrantLast = string(value["ResourceGrantLast"].GetString());
        m_resourceGrantLastHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGrantLastHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGrantLast";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGrantLast.c_str(), allocator).Move(), allocator);
    }

}


string ProductResource::GetProductResourceId() const
{
    return m_productResourceId;
}

void ProductResource::SetProductResourceId(const string& _productResourceId)
{
    m_productResourceId = _productResourceId;
    m_productResourceIdHasBeenSet = true;
}

bool ProductResource::ProductResourceIdHasBeenSet() const
{
    return m_productResourceIdHasBeenSet;
}

string ProductResource::GetResourceGrantLast() const
{
    return m_resourceGrantLast;
}

void ProductResource::SetResourceGrantLast(const string& _resourceGrantLast)
{
    m_resourceGrantLast = _resourceGrantLast;
    m_resourceGrantLastHasBeenSet = true;
}

bool ProductResource::ResourceGrantLastHasBeenSet() const
{
    return m_resourceGrantLastHasBeenSet;
}

