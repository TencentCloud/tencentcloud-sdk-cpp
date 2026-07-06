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

#include <tencentcloud/fwm/v20250611/model/CreateStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

CreateStrategyRequest::CreateStrategyRequest() :
    m_productHasBeenSet(false),
    m_receiveAccountHasBeenSet(false),
    m_preStrategyHasBeenSet(false),
    m_postStrategyHasBeenSet(false),
    m_receiveGroupHasBeenSet(false)
{
}

string CreateStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_receiveAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiveAccount.begin(); itr != m_receiveAccount.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_preStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_preStrategy.begin(); itr != m_preStrategy.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_postStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_postStrategy.begin(); itr != m_postStrategy.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_receiveGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiveGroup.begin(); itr != m_receiveGroup.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStrategyRequest::GetProduct() const
{
    return m_product;
}

void CreateStrategyRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool CreateStrategyRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

vector<string> CreateStrategyRequest::GetReceiveAccount() const
{
    return m_receiveAccount;
}

void CreateStrategyRequest::SetReceiveAccount(const vector<string>& _receiveAccount)
{
    m_receiveAccount = _receiveAccount;
    m_receiveAccountHasBeenSet = true;
}

bool CreateStrategyRequest::ReceiveAccountHasBeenSet() const
{
    return m_receiveAccountHasBeenSet;
}

vector<StrategyReq> CreateStrategyRequest::GetPreStrategy() const
{
    return m_preStrategy;
}

void CreateStrategyRequest::SetPreStrategy(const vector<StrategyReq>& _preStrategy)
{
    m_preStrategy = _preStrategy;
    m_preStrategyHasBeenSet = true;
}

bool CreateStrategyRequest::PreStrategyHasBeenSet() const
{
    return m_preStrategyHasBeenSet;
}

vector<StrategyReq> CreateStrategyRequest::GetPostStrategy() const
{
    return m_postStrategy;
}

void CreateStrategyRequest::SetPostStrategy(const vector<StrategyReq>& _postStrategy)
{
    m_postStrategy = _postStrategy;
    m_postStrategyHasBeenSet = true;
}

bool CreateStrategyRequest::PostStrategyHasBeenSet() const
{
    return m_postStrategyHasBeenSet;
}

vector<string> CreateStrategyRequest::GetReceiveGroup() const
{
    return m_receiveGroup;
}

void CreateStrategyRequest::SetReceiveGroup(const vector<string>& _receiveGroup)
{
    m_receiveGroup = _receiveGroup;
    m_receiveGroupHasBeenSet = true;
}

bool CreateStrategyRequest::ReceiveGroupHasBeenSet() const
{
    return m_receiveGroupHasBeenSet;
}


