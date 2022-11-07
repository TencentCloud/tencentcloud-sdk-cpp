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

#include <tencentcloud/wedata/v20210820/model/SearchConditionInstanceNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SearchConditionInstanceNew::SearchConditionInstanceNew() :
    m_executionSpaceHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_resourceGroupHasBeenSet(false)
{
}

CoreInternalOutcome SearchConditionInstanceNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecutionSpace") && !value["ExecutionSpace"].IsNull())
    {
        if (!value["ExecutionSpace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConditionInstanceNew.ExecutionSpace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionSpace = string(value["ExecutionSpace"].GetString());
        m_executionSpaceHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConditionInstanceNew.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroup") && !value["ResourceGroup"].IsNull())
    {
        if (!value["ResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConditionInstanceNew.ResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroup = string(value["ResourceGroup"].GetString());
        m_resourceGroupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchConditionInstanceNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executionSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionSpace.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroup.c_str(), allocator).Move(), allocator);
    }

}


string SearchConditionInstanceNew::GetExecutionSpace() const
{
    return m_executionSpace;
}

void SearchConditionInstanceNew::SetExecutionSpace(const string& _executionSpace)
{
    m_executionSpace = _executionSpace;
    m_executionSpaceHasBeenSet = true;
}

bool SearchConditionInstanceNew::ExecutionSpaceHasBeenSet() const
{
    return m_executionSpaceHasBeenSet;
}

string SearchConditionInstanceNew::GetProductName() const
{
    return m_productName;
}

void SearchConditionInstanceNew::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool SearchConditionInstanceNew::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string SearchConditionInstanceNew::GetResourceGroup() const
{
    return m_resourceGroup;
}

void SearchConditionInstanceNew::SetResourceGroup(const string& _resourceGroup)
{
    m_resourceGroup = _resourceGroup;
    m_resourceGroupHasBeenSet = true;
}

bool SearchConditionInstanceNew::ResourceGroupHasBeenSet() const
{
    return m_resourceGroupHasBeenSet;
}

