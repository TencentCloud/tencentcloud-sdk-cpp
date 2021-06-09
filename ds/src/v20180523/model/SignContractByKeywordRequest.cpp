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

#include <tencentcloud/ds/v20180523/model/SignContractByKeywordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ds::V20180523::Model;
using namespace std;

SignContractByKeywordRequest::SignContractByKeywordRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_contractResIdHasBeenSet(false),
    m_accountResIdHasBeenSet(false),
    m_signKeywordHasBeenSet(false),
    m_authorizationTimeHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_sealResIdHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_imageDataHasBeenSet(false)
{
}

string SignContractByKeywordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_contractResIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractResId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractResId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountResIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountResId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountResId.c_str(), allocator).Move(), allocator);
    }

    if (m_signKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignKeyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_signKeyword.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_authorizationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authorizationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_position.c_str(), allocator).Move(), allocator);
    }

    if (m_sealResIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealResId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealResId.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_certType, allocator);
    }

    if (m_imageDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SignContractByKeywordRequest::GetModule() const
{
    return m_module;
}

void SignContractByKeywordRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool SignContractByKeywordRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string SignContractByKeywordRequest::GetOperation() const
{
    return m_operation;
}

void SignContractByKeywordRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool SignContractByKeywordRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string SignContractByKeywordRequest::GetContractResId() const
{
    return m_contractResId;
}

void SignContractByKeywordRequest::SetContractResId(const string& _contractResId)
{
    m_contractResId = _contractResId;
    m_contractResIdHasBeenSet = true;
}

bool SignContractByKeywordRequest::ContractResIdHasBeenSet() const
{
    return m_contractResIdHasBeenSet;
}

string SignContractByKeywordRequest::GetAccountResId() const
{
    return m_accountResId;
}

void SignContractByKeywordRequest::SetAccountResId(const string& _accountResId)
{
    m_accountResId = _accountResId;
    m_accountResIdHasBeenSet = true;
}

bool SignContractByKeywordRequest::AccountResIdHasBeenSet() const
{
    return m_accountResIdHasBeenSet;
}

SignKeyword SignContractByKeywordRequest::GetSignKeyword() const
{
    return m_signKeyword;
}

void SignContractByKeywordRequest::SetSignKeyword(const SignKeyword& _signKeyword)
{
    m_signKeyword = _signKeyword;
    m_signKeywordHasBeenSet = true;
}

bool SignContractByKeywordRequest::SignKeywordHasBeenSet() const
{
    return m_signKeywordHasBeenSet;
}

string SignContractByKeywordRequest::GetAuthorizationTime() const
{
    return m_authorizationTime;
}

void SignContractByKeywordRequest::SetAuthorizationTime(const string& _authorizationTime)
{
    m_authorizationTime = _authorizationTime;
    m_authorizationTimeHasBeenSet = true;
}

bool SignContractByKeywordRequest::AuthorizationTimeHasBeenSet() const
{
    return m_authorizationTimeHasBeenSet;
}

string SignContractByKeywordRequest::GetPosition() const
{
    return m_position;
}

void SignContractByKeywordRequest::SetPosition(const string& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool SignContractByKeywordRequest::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string SignContractByKeywordRequest::GetSealResId() const
{
    return m_sealResId;
}

void SignContractByKeywordRequest::SetSealResId(const string& _sealResId)
{
    m_sealResId = _sealResId;
    m_sealResIdHasBeenSet = true;
}

bool SignContractByKeywordRequest::SealResIdHasBeenSet() const
{
    return m_sealResIdHasBeenSet;
}

int64_t SignContractByKeywordRequest::GetCertType() const
{
    return m_certType;
}

void SignContractByKeywordRequest::SetCertType(const int64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool SignContractByKeywordRequest::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string SignContractByKeywordRequest::GetImageData() const
{
    return m_imageData;
}

void SignContractByKeywordRequest::SetImageData(const string& _imageData)
{
    m_imageData = _imageData;
    m_imageDataHasBeenSet = true;
}

bool SignContractByKeywordRequest::ImageDataHasBeenSet() const
{
    return m_imageDataHasBeenSet;
}


