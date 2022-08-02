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

#include <tencentcloud/bma/v20210624/model/CreateBPOfflineAttachmentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

CreateBPOfflineAttachmentRequest::CreateBPOfflineAttachmentRequest() :
    m_brandNameHasBeenSet(false),
    m_brandCertificateNameHasBeenSet(false),
    m_transferNameHasBeenSet(false),
    m_authorizationNameHasBeenSet(false)
{
}

string CreateBPOfflineAttachmentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

    if (m_brandCertificateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandCertificateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brandCertificateName.c_str(), allocator).Move(), allocator);
    }

    if (m_transferNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transferName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authorizationName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBPOfflineAttachmentRequest::GetBrandName() const
{
    return m_brandName;
}

void CreateBPOfflineAttachmentRequest::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool CreateBPOfflineAttachmentRequest::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

string CreateBPOfflineAttachmentRequest::GetBrandCertificateName() const
{
    return m_brandCertificateName;
}

void CreateBPOfflineAttachmentRequest::SetBrandCertificateName(const string& _brandCertificateName)
{
    m_brandCertificateName = _brandCertificateName;
    m_brandCertificateNameHasBeenSet = true;
}

bool CreateBPOfflineAttachmentRequest::BrandCertificateNameHasBeenSet() const
{
    return m_brandCertificateNameHasBeenSet;
}

string CreateBPOfflineAttachmentRequest::GetTransferName() const
{
    return m_transferName;
}

void CreateBPOfflineAttachmentRequest::SetTransferName(const string& _transferName)
{
    m_transferName = _transferName;
    m_transferNameHasBeenSet = true;
}

bool CreateBPOfflineAttachmentRequest::TransferNameHasBeenSet() const
{
    return m_transferNameHasBeenSet;
}

string CreateBPOfflineAttachmentRequest::GetAuthorizationName() const
{
    return m_authorizationName;
}

void CreateBPOfflineAttachmentRequest::SetAuthorizationName(const string& _authorizationName)
{
    m_authorizationName = _authorizationName;
    m_authorizationNameHasBeenSet = true;
}

bool CreateBPOfflineAttachmentRequest::AuthorizationNameHasBeenSet() const
{
    return m_authorizationNameHasBeenSet;
}


