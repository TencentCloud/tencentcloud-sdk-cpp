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

#include <tencentcloud/organization/v20210331/model/ShareResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ShareResource::ShareResource() :
    m_resourceIdHasBeenSet(false),
    m_productResourceIdHasBeenSet(false)
{
}

CoreInternalOutcome ShareResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareResource.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ProductResourceId") && !value["ProductResourceId"].IsNull())
    {
        if (!value["ProductResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareResource.ProductResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productResourceId = string(value["ProductResourceId"].GetString());
        m_productResourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShareResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_productResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productResourceId.c_str(), allocator).Move(), allocator);
    }

}


string ShareResource::GetResourceId() const
{
    return m_resourceId;
}

void ShareResource::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ShareResource::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ShareResource::GetProductResourceId() const
{
    return m_productResourceId;
}

void ShareResource::SetProductResourceId(const string& _productResourceId)
{
    m_productResourceId = _productResourceId;
    m_productResourceIdHasBeenSet = true;
}

bool ShareResource::ProductResourceIdHasBeenSet() const
{
    return m_productResourceIdHasBeenSet;
}

