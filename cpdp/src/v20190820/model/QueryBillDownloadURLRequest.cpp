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

#include <tencentcloud/cpdp/v20190820/model/QueryBillDownloadURLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

QueryBillDownloadURLRequest::QueryBillDownloadURLRequest() :
    m_merchantIdHasBeenSet(false),
    m_transferTypeHasBeenSet(false),
    m_billDateHasBeenSet(false)
{
}

string QueryBillDownloadURLRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_merchantIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_transferTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TransferType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transferType, allocator);
    }

    if (m_billDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BillDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_billDate.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryBillDownloadURLRequest::GetMerchantId() const
{
    return m_merchantId;
}

void QueryBillDownloadURLRequest::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool QueryBillDownloadURLRequest::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

int64_t QueryBillDownloadURLRequest::GetTransferType() const
{
    return m_transferType;
}

void QueryBillDownloadURLRequest::SetTransferType(const int64_t& _transferType)
{
    m_transferType = _transferType;
    m_transferTypeHasBeenSet = true;
}

bool QueryBillDownloadURLRequest::TransferTypeHasBeenSet() const
{
    return m_transferTypeHasBeenSet;
}

string QueryBillDownloadURLRequest::GetBillDate() const
{
    return m_billDate;
}

void QueryBillDownloadURLRequest::SetBillDate(const string& _billDate)
{
    m_billDate = _billDate;
    m_billDateHasBeenSet = true;
}

bool QueryBillDownloadURLRequest::BillDateHasBeenSet() const
{
    return m_billDateHasBeenSet;
}


