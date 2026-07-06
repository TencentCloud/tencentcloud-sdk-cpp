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

#include <tencentcloud/tcb/v20180608/model/AllocateEnvRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

AllocateEnvRequest::AllocateEnvRequest() :
    m_allocateIdHasBeenSet(false),
    m_externalAppIdHasBeenSet(false),
    m_externalTagHasBeenSet(false),
    m_requireFunctionHasBeenSet(false)
{
}

string AllocateEnvRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_allocateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_allocateId.c_str(), allocator).Move(), allocator);
    }

    if (m_externalAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_externalTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalTag.c_str(), allocator).Move(), allocator);
    }

    if (m_requireFunctionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequireFunction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_requireFunction, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AllocateEnvRequest::GetAllocateId() const
{
    return m_allocateId;
}

void AllocateEnvRequest::SetAllocateId(const string& _allocateId)
{
    m_allocateId = _allocateId;
    m_allocateIdHasBeenSet = true;
}

bool AllocateEnvRequest::AllocateIdHasBeenSet() const
{
    return m_allocateIdHasBeenSet;
}

string AllocateEnvRequest::GetExternalAppId() const
{
    return m_externalAppId;
}

void AllocateEnvRequest::SetExternalAppId(const string& _externalAppId)
{
    m_externalAppId = _externalAppId;
    m_externalAppIdHasBeenSet = true;
}

bool AllocateEnvRequest::ExternalAppIdHasBeenSet() const
{
    return m_externalAppIdHasBeenSet;
}

string AllocateEnvRequest::GetExternalTag() const
{
    return m_externalTag;
}

void AllocateEnvRequest::SetExternalTag(const string& _externalTag)
{
    m_externalTag = _externalTag;
    m_externalTagHasBeenSet = true;
}

bool AllocateEnvRequest::ExternalTagHasBeenSet() const
{
    return m_externalTagHasBeenSet;
}

bool AllocateEnvRequest::GetRequireFunction() const
{
    return m_requireFunction;
}

void AllocateEnvRequest::SetRequireFunction(const bool& _requireFunction)
{
    m_requireFunction = _requireFunction;
    m_requireFunctionHasBeenSet = true;
}

bool AllocateEnvRequest::RequireFunctionHasBeenSet() const
{
    return m_requireFunctionHasBeenSet;
}


