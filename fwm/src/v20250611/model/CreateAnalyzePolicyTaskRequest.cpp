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

#include <tencentcloud/fwm/v20250611/model/CreateAnalyzePolicyTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

CreateAnalyzePolicyTaskRequest::CreateAnalyzePolicyTaskRequest() :
    m_productsHasBeenSet(false),
    m_memberIdSetHasBeenSet(false)
{
}

string CreateAnalyzePolicyTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Products";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_products.begin(); itr != m_products.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_memberIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberIdSet.begin(); itr != m_memberIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateAnalyzePolicyTaskRequest::GetProducts() const
{
    return m_products;
}

void CreateAnalyzePolicyTaskRequest::SetProducts(const vector<string>& _products)
{
    m_products = _products;
    m_productsHasBeenSet = true;
}

bool CreateAnalyzePolicyTaskRequest::ProductsHasBeenSet() const
{
    return m_productsHasBeenSet;
}

vector<string> CreateAnalyzePolicyTaskRequest::GetMemberIdSet() const
{
    return m_memberIdSet;
}

void CreateAnalyzePolicyTaskRequest::SetMemberIdSet(const vector<string>& _memberIdSet)
{
    m_memberIdSet = _memberIdSet;
    m_memberIdSetHasBeenSet = true;
}

bool CreateAnalyzePolicyTaskRequest::MemberIdSetHasBeenSet() const
{
    return m_memberIdSetHasBeenSet;
}


