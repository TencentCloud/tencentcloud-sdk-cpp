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

#include <tencentcloud/ssl/v20191205/model/CreateCertificateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

CreateCertificateRequest::CreateCertificateRequest() :
    m_productIdHasBeenSet(false),
    m_domainNumHasBeenSet(false),
    m_timeSpanHasBeenSet(false)
{
}

string CreateCertificateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_productId, allocator);
    }

    if (m_domainNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainNum, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateCertificateRequest::GetProductId() const
{
    return m_productId;
}

void CreateCertificateRequest::SetProductId(const int64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateCertificateRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

int64_t CreateCertificateRequest::GetDomainNum() const
{
    return m_domainNum;
}

void CreateCertificateRequest::SetDomainNum(const int64_t& _domainNum)
{
    m_domainNum = _domainNum;
    m_domainNumHasBeenSet = true;
}

bool CreateCertificateRequest::DomainNumHasBeenSet() const
{
    return m_domainNumHasBeenSet;
}

int64_t CreateCertificateRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateCertificateRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateCertificateRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}


