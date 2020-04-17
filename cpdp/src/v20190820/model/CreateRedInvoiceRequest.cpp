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

#include <tencentcloud/cpdp/v20190820/model/CreateRedInvoiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

CreateRedInvoiceRequest::CreateRedInvoiceRequest() :
    m_invoicePlatformIdHasBeenSet(false),
    m_invoicesHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string CreateRedInvoiceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_invoicePlatformIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvoicePlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invoicePlatformId, allocator);
    }

    if (m_invoicesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Invoices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_invoices.begin(); itr != m_invoices.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_profileHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateRedInvoiceRequest::GetInvoicePlatformId() const
{
    return m_invoicePlatformId;
}

void CreateRedInvoiceRequest::SetInvoicePlatformId(const int64_t& _invoicePlatformId)
{
    m_invoicePlatformId = _invoicePlatformId;
    m_invoicePlatformIdHasBeenSet = true;
}

bool CreateRedInvoiceRequest::InvoicePlatformIdHasBeenSet() const
{
    return m_invoicePlatformIdHasBeenSet;
}

vector<CreateRedInvoiceItem> CreateRedInvoiceRequest::GetInvoices() const
{
    return m_invoices;
}

void CreateRedInvoiceRequest::SetInvoices(const vector<CreateRedInvoiceItem>& _invoices)
{
    m_invoices = _invoices;
    m_invoicesHasBeenSet = true;
}

bool CreateRedInvoiceRequest::InvoicesHasBeenSet() const
{
    return m_invoicesHasBeenSet;
}

string CreateRedInvoiceRequest::GetProfile() const
{
    return m_profile;
}

void CreateRedInvoiceRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool CreateRedInvoiceRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


