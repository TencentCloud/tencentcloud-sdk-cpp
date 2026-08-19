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

#include <tencentcloud/csip/v20221121/model/ProviderNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ProviderNode::ProviderNode() :
    m_providerHasBeenSet(false),
    m_providerNameHasBeenSet(false),
    m_categoriesHasBeenSet(false)
{
}

CoreInternalOutcome ProviderNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderNode.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("ProviderName") && !value["ProviderName"].IsNull())
    {
        if (!value["ProviderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderNode.ProviderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_providerName = string(value["ProviderName"].GetString());
        m_providerNameHasBeenSet = true;
    }

    if (value.HasMember("Categories") && !value["Categories"].IsNull())
    {
        if (!value["Categories"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProviderNode.Categories` is not array type"));

        const rapidjson::Value &tmpValue = value["Categories"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CategoryNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categories.push_back(item);
        }
        m_categoriesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProviderNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_providerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_providerName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Categories";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categories.begin(); itr != m_categories.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ProviderNode::GetProvider() const
{
    return m_provider;
}

void ProviderNode::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool ProviderNode::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string ProviderNode::GetProviderName() const
{
    return m_providerName;
}

void ProviderNode::SetProviderName(const string& _providerName)
{
    m_providerName = _providerName;
    m_providerNameHasBeenSet = true;
}

bool ProviderNode::ProviderNameHasBeenSet() const
{
    return m_providerNameHasBeenSet;
}

vector<CategoryNode> ProviderNode::GetCategories() const
{
    return m_categories;
}

void ProviderNode::SetCategories(const vector<CategoryNode>& _categories)
{
    m_categories = _categories;
    m_categoriesHasBeenSet = true;
}

bool ProviderNode::CategoriesHasBeenSet() const
{
    return m_categoriesHasBeenSet;
}

