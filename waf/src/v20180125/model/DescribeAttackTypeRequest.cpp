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

#include <tencentcloud/waf/v20180125/model/DescribeAttackTypeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeAttackTypeRequest::DescribeAttackTypeRequest() :
    m_fromTimeHasBeenSet(false),
    m_toTimeHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

string DescribeAttackTypeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fromTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromTime.c_str(), allocator).Move(), allocator);
    }

    if (m_toTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAttackTypeRequest::GetFromTime() const
{
    return m_fromTime;
}

void DescribeAttackTypeRequest::SetFromTime(const string& _fromTime)
{
    m_fromTime = _fromTime;
    m_fromTimeHasBeenSet = true;
}

bool DescribeAttackTypeRequest::FromTimeHasBeenSet() const
{
    return m_fromTimeHasBeenSet;
}

string DescribeAttackTypeRequest::GetToTime() const
{
    return m_toTime;
}

void DescribeAttackTypeRequest::SetToTime(const string& _toTime)
{
    m_toTime = _toTime;
    m_toTimeHasBeenSet = true;
}

bool DescribeAttackTypeRequest::ToTimeHasBeenSet() const
{
    return m_toTimeHasBeenSet;
}

string DescribeAttackTypeRequest::GetHost() const
{
    return m_host;
}

void DescribeAttackTypeRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DescribeAttackTypeRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DescribeAttackTypeRequest::GetEdition() const
{
    return m_edition;
}

void DescribeAttackTypeRequest::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool DescribeAttackTypeRequest::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

string DescribeAttackTypeRequest::GetInstanceID() const
{
    return m_instanceID;
}

void DescribeAttackTypeRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DescribeAttackTypeRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string DescribeAttackTypeRequest::GetDomain() const
{
    return m_domain;
}

void DescribeAttackTypeRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeAttackTypeRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}


