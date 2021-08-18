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

#include <tencentcloud/cpdp/v20190820/model/CreateBatchPaymentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateBatchPaymentRequest::CreateBatchPaymentRequest() :
    m_transferTypeHasBeenSet(false),
    m_recipientListHasBeenSet(false),
    m_reqReservedHasBeenSet(false),
    m_notifyUrlHasBeenSet(false)
{
}

string CreateBatchPaymentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_transferTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transferType, allocator);
    }

    if (m_recipientListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recipientList.begin(); itr != m_recipientList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_reqReservedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqReserved";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reqReserved.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateBatchPaymentRequest::GetTransferType() const
{
    return m_transferType;
}

void CreateBatchPaymentRequest::SetTransferType(const int64_t& _transferType)
{
    m_transferType = _transferType;
    m_transferTypeHasBeenSet = true;
}

bool CreateBatchPaymentRequest::TransferTypeHasBeenSet() const
{
    return m_transferTypeHasBeenSet;
}

vector<CreateBatchPaymentRecipient> CreateBatchPaymentRequest::GetRecipientList() const
{
    return m_recipientList;
}

void CreateBatchPaymentRequest::SetRecipientList(const vector<CreateBatchPaymentRecipient>& _recipientList)
{
    m_recipientList = _recipientList;
    m_recipientListHasBeenSet = true;
}

bool CreateBatchPaymentRequest::RecipientListHasBeenSet() const
{
    return m_recipientListHasBeenSet;
}

string CreateBatchPaymentRequest::GetReqReserved() const
{
    return m_reqReserved;
}

void CreateBatchPaymentRequest::SetReqReserved(const string& _reqReserved)
{
    m_reqReserved = _reqReserved;
    m_reqReservedHasBeenSet = true;
}

bool CreateBatchPaymentRequest::ReqReservedHasBeenSet() const
{
    return m_reqReservedHasBeenSet;
}

string CreateBatchPaymentRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void CreateBatchPaymentRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool CreateBatchPaymentRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}


