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

#include <tencentcloud/cpdp/v20190820/model/CloseOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloseOrderRequest::CloseOrderRequest() :
    m_midasAppIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_outTradeNoHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false)
{
}

string CloseOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_outTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outTradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transactionId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CloseOrderRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void CloseOrderRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool CloseOrderRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string CloseOrderRequest::GetUserId() const
{
    return m_userId;
}

void CloseOrderRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CloseOrderRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CloseOrderRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void CloseOrderRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool CloseOrderRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string CloseOrderRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void CloseOrderRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool CloseOrderRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string CloseOrderRequest::GetOutTradeNo() const
{
    return m_outTradeNo;
}

void CloseOrderRequest::SetOutTradeNo(const string& _outTradeNo)
{
    m_outTradeNo = _outTradeNo;
    m_outTradeNoHasBeenSet = true;
}

bool CloseOrderRequest::OutTradeNoHasBeenSet() const
{
    return m_outTradeNoHasBeenSet;
}

string CloseOrderRequest::GetTransactionId() const
{
    return m_transactionId;
}

void CloseOrderRequest::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool CloseOrderRequest::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

string CloseOrderRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void CloseOrderRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool CloseOrderRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}


