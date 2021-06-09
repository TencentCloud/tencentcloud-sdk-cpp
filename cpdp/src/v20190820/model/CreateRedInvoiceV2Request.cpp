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

#include <tencentcloud/cpdp/v20190820/model/CreateRedInvoiceV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateRedInvoiceV2Request::CreateRedInvoiceV2Request() :
    m_invoicePlatformIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_invoiceChannelHasBeenSet(false)
{
}

string CreateRedInvoiceV2Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_invoicePlatformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoicePlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invoicePlatformId, allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invoiceChannel, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateRedInvoiceV2Request::GetInvoicePlatformId() const
{
    return m_invoicePlatformId;
}

void CreateRedInvoiceV2Request::SetInvoicePlatformId(const int64_t& _invoicePlatformId)
{
    m_invoicePlatformId = _invoicePlatformId;
    m_invoicePlatformIdHasBeenSet = true;
}

bool CreateRedInvoiceV2Request::InvoicePlatformIdHasBeenSet() const
{
    return m_invoicePlatformIdHasBeenSet;
}

string CreateRedInvoiceV2Request::GetOrderId() const
{
    return m_orderId;
}

void CreateRedInvoiceV2Request::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool CreateRedInvoiceV2Request::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string CreateRedInvoiceV2Request::GetProfile() const
{
    return m_profile;
}

void CreateRedInvoiceV2Request::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool CreateRedInvoiceV2Request::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

int64_t CreateRedInvoiceV2Request::GetInvoiceChannel() const
{
    return m_invoiceChannel;
}

void CreateRedInvoiceV2Request::SetInvoiceChannel(const int64_t& _invoiceChannel)
{
    m_invoiceChannel = _invoiceChannel;
    m_invoiceChannelHasBeenSet = true;
}

bool CreateRedInvoiceV2Request::InvoiceChannelHasBeenSet() const
{
    return m_invoiceChannelHasBeenSet;
}


