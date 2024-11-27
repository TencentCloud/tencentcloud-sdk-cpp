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

#include <tencentcloud/vod/v20180717/model/CreateVodDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateVodDomainRequest::CreateVodDomainRequest() :
    m_domainHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_accelerateAreaHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string CreateVodDomainRequest::ToJsonString() const
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

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_accelerateAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerateArea";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accelerateArea.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVodDomainRequest::GetDomain() const
{
    return m_domain;
}

void CreateVodDomainRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateVodDomainRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t CreateVodDomainRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateVodDomainRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateVodDomainRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateVodDomainRequest::GetAccelerateArea() const
{
    return m_accelerateArea;
}

void CreateVodDomainRequest::SetAccelerateArea(const string& _accelerateArea)
{
    m_accelerateArea = _accelerateArea;
    m_accelerateAreaHasBeenSet = true;
}

bool CreateVodDomainRequest::AccelerateAreaHasBeenSet() const
{
    return m_accelerateAreaHasBeenSet;
}

string CreateVodDomainRequest::GetType() const
{
    return m_type;
}

void CreateVodDomainRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateVodDomainRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


