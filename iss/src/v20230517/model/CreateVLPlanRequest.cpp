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

#include <tencentcloud/iss/v20230517/model/CreateVLPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

CreateVLPlanRequest::CreateVLPlanRequest() :
    m_nameHasBeenSet(false),
    m_vLTemplateIdHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_fileExpiresHasBeenSet(false),
    m_callbackHasBeenSet(false)
{
}

string CreateVLPlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_vLTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VLTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vLTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
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


string CreateVLPlanRequest::GetName() const
{
    return m_name;
}

void CreateVLPlanRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateVLPlanRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateVLPlanRequest::GetVLTemplateId() const
{
    return m_vLTemplateId;
}

void CreateVLPlanRequest::SetVLTemplateId(const string& _vLTemplateId)
{
    m_vLTemplateId = _vLTemplateId;
    m_vLTemplateIdHasBeenSet = true;
}

bool CreateVLPlanRequest::VLTemplateIdHasBeenSet() const
{
    return m_vLTemplateIdHasBeenSet;
}

string CreateVLPlanRequest::GetDescribe() const
{
    return m_describe;
}

void CreateVLPlanRequest::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool CreateVLPlanRequest::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

int64_t CreateVLPlanRequest::GetFileExpires() const
{
    return m_fileExpires;
}

void CreateVLPlanRequest::SetFileExpires(const int64_t& _fileExpires)
{
    m_fileExpires = _fileExpires;
    m_fileExpiresHasBeenSet = true;
}

bool CreateVLPlanRequest::FileExpiresHasBeenSet() const
{
    return m_fileExpiresHasBeenSet;
}

CallbackURL CreateVLPlanRequest::GetCallback() const
{
    return m_callback;
}

void CreateVLPlanRequest::SetCallback(const CallbackURL& _callback)
{
    m_callback = _callback;
    m_callbackHasBeenSet = true;
}

bool CreateVLPlanRequest::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}


