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

#include <tencentcloud/essbasic/v20210526/model/CreateRequestWithEncryptionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateRequestWithEncryptionRequest::CreateRequestWithEncryptionRequest() :
    m_requestActionHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_iVHasBeenSet(false),
    m_encryptedDataHasBeenSet(false),
    m_encryptionSignatureHasBeenSet(false)
{
}

string CreateRequestWithEncryptionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_requestActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestAction.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_iVHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IV";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iV.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptedDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptedData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptedData.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptionSignature.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRequestWithEncryptionRequest::GetRequestAction() const
{
    return m_requestAction;
}

void CreateRequestWithEncryptionRequest::SetRequestAction(const string& _requestAction)
{
    m_requestAction = _requestAction;
    m_requestActionHasBeenSet = true;
}

bool CreateRequestWithEncryptionRequest::RequestActionHasBeenSet() const
{
    return m_requestActionHasBeenSet;
}

string CreateRequestWithEncryptionRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateRequestWithEncryptionRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateRequestWithEncryptionRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string CreateRequestWithEncryptionRequest::GetIV() const
{
    return m_iV;
}

void CreateRequestWithEncryptionRequest::SetIV(const string& _iV)
{
    m_iV = _iV;
    m_iVHasBeenSet = true;
}

bool CreateRequestWithEncryptionRequest::IVHasBeenSet() const
{
    return m_iVHasBeenSet;
}

string CreateRequestWithEncryptionRequest::GetEncryptedData() const
{
    return m_encryptedData;
}

void CreateRequestWithEncryptionRequest::SetEncryptedData(const string& _encryptedData)
{
    m_encryptedData = _encryptedData;
    m_encryptedDataHasBeenSet = true;
}

bool CreateRequestWithEncryptionRequest::EncryptedDataHasBeenSet() const
{
    return m_encryptedDataHasBeenSet;
}

string CreateRequestWithEncryptionRequest::GetEncryptionSignature() const
{
    return m_encryptionSignature;
}

void CreateRequestWithEncryptionRequest::SetEncryptionSignature(const string& _encryptionSignature)
{
    m_encryptionSignature = _encryptionSignature;
    m_encryptionSignatureHasBeenSet = true;
}

bool CreateRequestWithEncryptionRequest::EncryptionSignatureHasBeenSet() const
{
    return m_encryptionSignatureHasBeenSet;
}


