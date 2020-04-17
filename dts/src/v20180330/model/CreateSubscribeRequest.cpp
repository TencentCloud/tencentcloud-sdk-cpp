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

#include <tencentcloud/dts/v20180330/model/CreateSubscribeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

CreateSubscribeRequest::CreateSubscribeRequest() :
    m_productHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_countHasBeenSet(false),
    m_autoRenewHasBeenSet(false)
{
}

string CreateSubscribeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payType, allocator);
    }

    if (m_durationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }

    if (m_countHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenew, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSubscribeRequest::GetProduct() const
{
    return m_product;
}

void CreateSubscribeRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool CreateSubscribeRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

int64_t CreateSubscribeRequest::GetPayType() const
{
    return m_payType;
}

void CreateSubscribeRequest::SetPayType(const int64_t& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool CreateSubscribeRequest::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

int64_t CreateSubscribeRequest::GetDuration() const
{
    return m_duration;
}

void CreateSubscribeRequest::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool CreateSubscribeRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t CreateSubscribeRequest::GetCount() const
{
    return m_count;
}

void CreateSubscribeRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CreateSubscribeRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t CreateSubscribeRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void CreateSubscribeRequest::SetAutoRenew(const int64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool CreateSubscribeRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}


