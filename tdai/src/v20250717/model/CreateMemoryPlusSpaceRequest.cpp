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

#include <tencentcloud/tdai/v20250717/model/CreateMemoryPlusSpaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

CreateMemoryPlusSpaceRequest::CreateMemoryPlusSpaceRequest() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_payPeriodHasBeenSet(false),
    m_autoRenewHasBeenSet(false)
{
}

string CreateMemoryPlusSpaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_payPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payPeriod, allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenew, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMemoryPlusSpaceRequest::GetName() const
{
    return m_name;
}

void CreateMemoryPlusSpaceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateMemoryPlusSpaceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateMemoryPlusSpaceRequest::GetDescription() const
{
    return m_description;
}

void CreateMemoryPlusSpaceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateMemoryPlusSpaceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<ResourceTag> CreateMemoryPlusSpaceRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateMemoryPlusSpaceRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateMemoryPlusSpaceRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

int64_t CreateMemoryPlusSpaceRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateMemoryPlusSpaceRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateMemoryPlusSpaceRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

int64_t CreateMemoryPlusSpaceRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateMemoryPlusSpaceRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateMemoryPlusSpaceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t CreateMemoryPlusSpaceRequest::GetPayPeriod() const
{
    return m_payPeriod;
}

void CreateMemoryPlusSpaceRequest::SetPayPeriod(const int64_t& _payPeriod)
{
    m_payPeriod = _payPeriod;
    m_payPeriodHasBeenSet = true;
}

bool CreateMemoryPlusSpaceRequest::PayPeriodHasBeenSet() const
{
    return m_payPeriodHasBeenSet;
}

int64_t CreateMemoryPlusSpaceRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void CreateMemoryPlusSpaceRequest::SetAutoRenew(const int64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool CreateMemoryPlusSpaceRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}


