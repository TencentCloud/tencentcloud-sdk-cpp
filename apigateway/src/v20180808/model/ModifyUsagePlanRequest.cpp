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

#include <tencentcloud/apigateway/v20180808/model/ModifyUsagePlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

ModifyUsagePlanRequest::ModifyUsagePlanRequest() :
    m_usagePlanIdHasBeenSet(false),
    m_usagePlanNameHasBeenSet(false),
    m_usagePlanDescHasBeenSet(false),
    m_maxRequestNumHasBeenSet(false),
    m_maxRequestNumPreSecHasBeenSet(false)
{
}

string ModifyUsagePlanRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_usagePlanIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UsagePlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_usagePlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_usagePlanNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UsagePlanName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_usagePlanName.c_str(), allocator).Move(), allocator);
    }

    if (m_usagePlanDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UsagePlanDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_usagePlanDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_maxRequestNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxRequestNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxRequestNum, allocator);
    }

    if (m_maxRequestNumPreSecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxRequestNumPreSec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxRequestNumPreSec, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUsagePlanRequest::GetUsagePlanId() const
{
    return m_usagePlanId;
}

void ModifyUsagePlanRequest::SetUsagePlanId(const string& _usagePlanId)
{
    m_usagePlanId = _usagePlanId;
    m_usagePlanIdHasBeenSet = true;
}

bool ModifyUsagePlanRequest::UsagePlanIdHasBeenSet() const
{
    return m_usagePlanIdHasBeenSet;
}

string ModifyUsagePlanRequest::GetUsagePlanName() const
{
    return m_usagePlanName;
}

void ModifyUsagePlanRequest::SetUsagePlanName(const string& _usagePlanName)
{
    m_usagePlanName = _usagePlanName;
    m_usagePlanNameHasBeenSet = true;
}

bool ModifyUsagePlanRequest::UsagePlanNameHasBeenSet() const
{
    return m_usagePlanNameHasBeenSet;
}

string ModifyUsagePlanRequest::GetUsagePlanDesc() const
{
    return m_usagePlanDesc;
}

void ModifyUsagePlanRequest::SetUsagePlanDesc(const string& _usagePlanDesc)
{
    m_usagePlanDesc = _usagePlanDesc;
    m_usagePlanDescHasBeenSet = true;
}

bool ModifyUsagePlanRequest::UsagePlanDescHasBeenSet() const
{
    return m_usagePlanDescHasBeenSet;
}

int64_t ModifyUsagePlanRequest::GetMaxRequestNum() const
{
    return m_maxRequestNum;
}

void ModifyUsagePlanRequest::SetMaxRequestNum(const int64_t& _maxRequestNum)
{
    m_maxRequestNum = _maxRequestNum;
    m_maxRequestNumHasBeenSet = true;
}

bool ModifyUsagePlanRequest::MaxRequestNumHasBeenSet() const
{
    return m_maxRequestNumHasBeenSet;
}

int64_t ModifyUsagePlanRequest::GetMaxRequestNumPreSec() const
{
    return m_maxRequestNumPreSec;
}

void ModifyUsagePlanRequest::SetMaxRequestNumPreSec(const int64_t& _maxRequestNumPreSec)
{
    m_maxRequestNumPreSec = _maxRequestNumPreSec;
    m_maxRequestNumPreSecHasBeenSet = true;
}

bool ModifyUsagePlanRequest::MaxRequestNumPreSecHasBeenSet() const
{
    return m_maxRequestNumPreSecHasBeenSet;
}


