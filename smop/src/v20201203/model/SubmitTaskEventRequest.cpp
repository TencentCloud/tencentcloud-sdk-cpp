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

#include <tencentcloud/smop/v20201203/model/SubmitTaskEventRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Smop::V20201203::Model;
using namespace std;

SubmitTaskEventRequest::SubmitTaskEventRequest() :
    m_accountIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_asyncHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_notifyURLHasBeenSet(false)
{
}

string SubmitTaskEventRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Async";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_async, allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_productId, allocator);
    }

    if (m_notifyURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyURL.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitTaskEventRequest::GetAccountId() const
{
    return m_accountId;
}

void SubmitTaskEventRequest::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool SubmitTaskEventRequest::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

string SubmitTaskEventRequest::GetDeviceId() const
{
    return m_deviceId;
}

void SubmitTaskEventRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool SubmitTaskEventRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string SubmitTaskEventRequest::GetOrderId() const
{
    return m_orderId;
}

void SubmitTaskEventRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool SubmitTaskEventRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string SubmitTaskEventRequest::GetCode() const
{
    return m_code;
}

void SubmitTaskEventRequest::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool SubmitTaskEventRequest::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

int64_t SubmitTaskEventRequest::GetAsync() const
{
    return m_async;
}

void SubmitTaskEventRequest::SetAsync(const int64_t& _async)
{
    m_async = _async;
    m_asyncHasBeenSet = true;
}

bool SubmitTaskEventRequest::AsyncHasBeenSet() const
{
    return m_asyncHasBeenSet;
}

int64_t SubmitTaskEventRequest::GetProductId() const
{
    return m_productId;
}

void SubmitTaskEventRequest::SetProductId(const int64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool SubmitTaskEventRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string SubmitTaskEventRequest::GetNotifyURL() const
{
    return m_notifyURL;
}

void SubmitTaskEventRequest::SetNotifyURL(const string& _notifyURL)
{
    m_notifyURL = _notifyURL;
    m_notifyURLHasBeenSet = true;
}

bool SubmitTaskEventRequest::NotifyURLHasBeenSet() const
{
    return m_notifyURLHasBeenSet;
}


