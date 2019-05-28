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

#include <tencentcloud/ds/v20180523/model/SignContractByCoordinateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ds::V20180523::Model;
using namespace rapidjson;
using namespace std;

SignContractByCoordinateRequest::SignContractByCoordinateRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_contractResIdHasBeenSet(false),
    m_accountResIdHasBeenSet(false),
    m_authorizationTimeHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_signLocationsHasBeenSet(false),
    m_sealResIdHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_imageDataHasBeenSet(false)
{
}

string SignContractByCoordinateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_contractResIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContractResId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_contractResId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountResIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccountResId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_accountResId.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuthorizationTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_authorizationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_position.c_str(), allocator).Move(), allocator);
    }

    if (m_signLocationsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SignLocations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_signLocations.begin(); itr != m_signLocations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sealResIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SealResId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sealResId.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_certType, allocator);
    }

    if (m_imageDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageData.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SignContractByCoordinateRequest::GetModule() const
{
    return m_module;
}

void SignContractByCoordinateRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool SignContractByCoordinateRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string SignContractByCoordinateRequest::GetOperation() const
{
    return m_operation;
}

void SignContractByCoordinateRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool SignContractByCoordinateRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string SignContractByCoordinateRequest::GetContractResId() const
{
    return m_contractResId;
}

void SignContractByCoordinateRequest::SetContractResId(const string& _contractResId)
{
    m_contractResId = _contractResId;
    m_contractResIdHasBeenSet = true;
}

bool SignContractByCoordinateRequest::ContractResIdHasBeenSet() const
{
    return m_contractResIdHasBeenSet;
}

string SignContractByCoordinateRequest::GetAccountResId() const
{
    return m_accountResId;
}

void SignContractByCoordinateRequest::SetAccountResId(const string& _accountResId)
{
    m_accountResId = _accountResId;
    m_accountResIdHasBeenSet = true;
}

bool SignContractByCoordinateRequest::AccountResIdHasBeenSet() const
{
    return m_accountResIdHasBeenSet;
}

string SignContractByCoordinateRequest::GetAuthorizationTime() const
{
    return m_authorizationTime;
}

void SignContractByCoordinateRequest::SetAuthorizationTime(const string& _authorizationTime)
{
    m_authorizationTime = _authorizationTime;
    m_authorizationTimeHasBeenSet = true;
}

bool SignContractByCoordinateRequest::AuthorizationTimeHasBeenSet() const
{
    return m_authorizationTimeHasBeenSet;
}

string SignContractByCoordinateRequest::GetPosition() const
{
    return m_position;
}

void SignContractByCoordinateRequest::SetPosition(const string& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool SignContractByCoordinateRequest::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

vector<SignLocation> SignContractByCoordinateRequest::GetSignLocations() const
{
    return m_signLocations;
}

void SignContractByCoordinateRequest::SetSignLocations(const vector<SignLocation>& _signLocations)
{
    m_signLocations = _signLocations;
    m_signLocationsHasBeenSet = true;
}

bool SignContractByCoordinateRequest::SignLocationsHasBeenSet() const
{
    return m_signLocationsHasBeenSet;
}

string SignContractByCoordinateRequest::GetSealResId() const
{
    return m_sealResId;
}

void SignContractByCoordinateRequest::SetSealResId(const string& _sealResId)
{
    m_sealResId = _sealResId;
    m_sealResIdHasBeenSet = true;
}

bool SignContractByCoordinateRequest::SealResIdHasBeenSet() const
{
    return m_sealResIdHasBeenSet;
}

int64_t SignContractByCoordinateRequest::GetCertType() const
{
    return m_certType;
}

void SignContractByCoordinateRequest::SetCertType(const int64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool SignContractByCoordinateRequest::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string SignContractByCoordinateRequest::GetImageData() const
{
    return m_imageData;
}

void SignContractByCoordinateRequest::SetImageData(const string& _imageData)
{
    m_imageData = _imageData;
    m_imageDataHasBeenSet = true;
}

bool SignContractByCoordinateRequest::ImageDataHasBeenSet() const
{
    return m_imageDataHasBeenSet;
}


