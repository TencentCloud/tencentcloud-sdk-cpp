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

#include <tencentcloud/iss/v20230517/model/ModifyVLPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ModifyVLPlanRequest::ModifyVLPlanRequest() :
    m_vLPlanIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_vLTemplateIdHasBeenSet(false),
    m_fileExpiresHasBeenSet(false),
    m_callbackHasBeenSet(false)
{
}

string ModifyVLPlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vLPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VLPlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vLPlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_vLTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VLTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vLTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExpiresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExpires";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileExpires, allocator);
    }

    if (m_callbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callback";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callback.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVLPlanRequest::GetVLPlanId() const
{
    return m_vLPlanId;
}

void ModifyVLPlanRequest::SetVLPlanId(const string& _vLPlanId)
{
    m_vLPlanId = _vLPlanId;
    m_vLPlanIdHasBeenSet = true;
}

bool ModifyVLPlanRequest::VLPlanIdHasBeenSet() const
{
    return m_vLPlanIdHasBeenSet;
}

string ModifyVLPlanRequest::GetName() const
{
    return m_name;
}

void ModifyVLPlanRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyVLPlanRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyVLPlanRequest::GetDescribe() const
{
    return m_describe;
}

void ModifyVLPlanRequest::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool ModifyVLPlanRequest::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

string ModifyVLPlanRequest::GetVLTemplateId() const
{
    return m_vLTemplateId;
}

void ModifyVLPlanRequest::SetVLTemplateId(const string& _vLTemplateId)
{
    m_vLTemplateId = _vLTemplateId;
    m_vLTemplateIdHasBeenSet = true;
}

bool ModifyVLPlanRequest::VLTemplateIdHasBeenSet() const
{
    return m_vLTemplateIdHasBeenSet;
}

int64_t ModifyVLPlanRequest::GetFileExpires() const
{
    return m_fileExpires;
}

void ModifyVLPlanRequest::SetFileExpires(const int64_t& _fileExpires)
{
    m_fileExpires = _fileExpires;
    m_fileExpiresHasBeenSet = true;
}

bool ModifyVLPlanRequest::FileExpiresHasBeenSet() const
{
    return m_fileExpiresHasBeenSet;
}

CallbackURL ModifyVLPlanRequest::GetCallback() const
{
    return m_callback;
}

void ModifyVLPlanRequest::SetCallback(const CallbackURL& _callback)
{
    m_callback = _callback;
    m_callbackHasBeenSet = true;
}

bool ModifyVLPlanRequest::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}


