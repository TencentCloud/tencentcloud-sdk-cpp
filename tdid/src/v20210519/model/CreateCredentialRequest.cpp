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

#include <tencentcloud/tdid/v20210519/model/CreateCredentialRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

CreateCredentialRequest::CreateCredentialRequest() :
    m_functionArgHasBeenSet(false),
    m_transactionArgHasBeenSet(false),
    m_versionCredentialHasBeenSet(false),
    m_unSignedHasBeenSet(false)
{
}

string CreateCredentialRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionArgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionArg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_functionArg.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_transactionArgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionArg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transactionArg.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_versionCredentialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionCredential";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionCredential.c_str(), allocator).Move(), allocator);
    }

    if (m_unSignedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnSigned";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unSigned, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


FunctionArg CreateCredentialRequest::GetFunctionArg() const
{
    return m_functionArg;
}

void CreateCredentialRequest::SetFunctionArg(const FunctionArg& _functionArg)
{
    m_functionArg = _functionArg;
    m_functionArgHasBeenSet = true;
}

bool CreateCredentialRequest::FunctionArgHasBeenSet() const
{
    return m_functionArgHasBeenSet;
}

TransactionArg CreateCredentialRequest::GetTransactionArg() const
{
    return m_transactionArg;
}

void CreateCredentialRequest::SetTransactionArg(const TransactionArg& _transactionArg)
{
    m_transactionArg = _transactionArg;
    m_transactionArgHasBeenSet = true;
}

bool CreateCredentialRequest::TransactionArgHasBeenSet() const
{
    return m_transactionArgHasBeenSet;
}

string CreateCredentialRequest::GetVersionCredential() const
{
    return m_versionCredential;
}

void CreateCredentialRequest::SetVersionCredential(const string& _versionCredential)
{
    m_versionCredential = _versionCredential;
    m_versionCredentialHasBeenSet = true;
}

bool CreateCredentialRequest::VersionCredentialHasBeenSet() const
{
    return m_versionCredentialHasBeenSet;
}

bool CreateCredentialRequest::GetUnSigned() const
{
    return m_unSigned;
}

void CreateCredentialRequest::SetUnSigned(const bool& _unSigned)
{
    m_unSigned = _unSigned;
    m_unSignedHasBeenSet = true;
}

bool CreateCredentialRequest::UnSignedHasBeenSet() const
{
    return m_unSignedHasBeenSet;
}


