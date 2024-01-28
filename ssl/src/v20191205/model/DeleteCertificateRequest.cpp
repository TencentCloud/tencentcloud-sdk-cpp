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

#include <tencentcloud/ssl/v20191205/model/DeleteCertificateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DeleteCertificateRequest::DeleteCertificateRequest() :
    m_certificateIdHasBeenSet(false),
    m_isCheckResourceHasBeenSet(false)
{
}

string DeleteCertificateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_isCheckResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCheckResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCheckResource, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCertificateRequest::GetCertificateId() const
{
    return m_certificateId;
}

void DeleteCertificateRequest::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool DeleteCertificateRequest::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

bool DeleteCertificateRequest::GetIsCheckResource() const
{
    return m_isCheckResource;
}

void DeleteCertificateRequest::SetIsCheckResource(const bool& _isCheckResource)
{
    m_isCheckResource = _isCheckResource;
    m_isCheckResourceHasBeenSet = true;
}

bool DeleteCertificateRequest::IsCheckResourceHasBeenSet() const
{
    return m_isCheckResourceHasBeenSet;
}


