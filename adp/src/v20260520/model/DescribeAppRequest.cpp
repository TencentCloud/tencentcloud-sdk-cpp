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

#include <tencentcloud/adp/v20260520/model/DescribeAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeAppRequest::DescribeAppRequest() :
    m_appIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_fieldMaskHasBeenSet(false),
    m_statusTypeHasBeenSet(false)
{
}

string DescribeAppRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domain, allocator);
    }

    if (m_fieldMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldMask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fieldMask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_statusTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_statusType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAppRequest::GetAppId() const
{
    return m_appId;
}

void DescribeAppRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeAppRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeAppRequest::GetDomain() const
{
    return m_domain;
}

void DescribeAppRequest::SetDomain(const int64_t& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeAppRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

FieldMask DescribeAppRequest::GetFieldMask() const
{
    return m_fieldMask;
}

void DescribeAppRequest::SetFieldMask(const FieldMask& _fieldMask)
{
    m_fieldMask = _fieldMask;
    m_fieldMaskHasBeenSet = true;
}

bool DescribeAppRequest::FieldMaskHasBeenSet() const
{
    return m_fieldMaskHasBeenSet;
}

int64_t DescribeAppRequest::GetStatusType() const
{
    return m_statusType;
}

void DescribeAppRequest::SetStatusType(const int64_t& _statusType)
{
    m_statusType = _statusType;
    m_statusTypeHasBeenSet = true;
}

bool DescribeAppRequest::StatusTypeHasBeenSet() const
{
    return m_statusTypeHasBeenSet;
}


