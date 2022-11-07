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

#include <tencentcloud/wedata/v20210820/model/SearchConditionInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SearchConditionInstance::SearchConditionInstance() :
    m_executionSpaceHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_resourceGroupHasBeenSet(false)
{
}

CoreInternalOutcome SearchConditionInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecutionSpace") && !value["ExecutionSpace"].IsNull())
    {
        if (!value["ExecutionSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConditionInstance.ExecutionSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_executionSpace = value["ExecutionSpace"].GetUint64();
        m_executionSpaceHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConditionInstance.ProductName` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_productName = value["ProductName"].GetUint64();
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroup") && !value["ResourceGroup"].IsNull())
    {
        if (!value["ResourceGroup"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConditionInstance.ResourceGroup` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroup = value["ResourceGroup"].GetUint64();
        m_resourceGroupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchConditionInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executionSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executionSpace, allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productName, allocator);
    }

    if (m_resourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceGroup, allocator);
    }

}


uint64_t SearchConditionInstance::GetExecutionSpace() const
{
    return m_executionSpace;
}

void SearchConditionInstance::SetExecutionSpace(const uint64_t& _executionSpace)
{
    m_executionSpace = _executionSpace;
    m_executionSpaceHasBeenSet = true;
}

bool SearchConditionInstance::ExecutionSpaceHasBeenSet() const
{
    return m_executionSpaceHasBeenSet;
}

uint64_t SearchConditionInstance::GetProductName() const
{
    return m_productName;
}

void SearchConditionInstance::SetProductName(const uint64_t& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool SearchConditionInstance::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

uint64_t SearchConditionInstance::GetResourceGroup() const
{
    return m_resourceGroup;
}

void SearchConditionInstance::SetResourceGroup(const uint64_t& _resourceGroup)
{
    m_resourceGroup = _resourceGroup;
    m_resourceGroupHasBeenSet = true;
}

bool SearchConditionInstance::ResourceGroupHasBeenSet() const
{
    return m_resourceGroupHasBeenSet;
}

