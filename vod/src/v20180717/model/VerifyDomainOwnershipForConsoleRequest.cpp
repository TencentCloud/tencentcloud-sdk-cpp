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

#include <tencentcloud/vod/v20180717/model/VerifyDomainOwnershipForConsoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

VerifyDomainOwnershipForConsoleRequest::VerifyDomainOwnershipForConsoleRequest() :
    m_domainHasBeenSet(false),
    m_accelerateAreaHasBeenSet(false)
{
}

string VerifyDomainOwnershipForConsoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_accelerateAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerateArea";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accelerateArea.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyDomainOwnershipForConsoleRequest::GetDomain() const
{
    return m_domain;
}

void VerifyDomainOwnershipForConsoleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool VerifyDomainOwnershipForConsoleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string VerifyDomainOwnershipForConsoleRequest::GetAccelerateArea() const
{
    return m_accelerateArea;
}

void VerifyDomainOwnershipForConsoleRequest::SetAccelerateArea(const string& _accelerateArea)
{
    m_accelerateArea = _accelerateArea;
    m_accelerateAreaHasBeenSet = true;
}

bool VerifyDomainOwnershipForConsoleRequest::AccelerateAreaHasBeenSet() const
{
    return m_accelerateAreaHasBeenSet;
}


