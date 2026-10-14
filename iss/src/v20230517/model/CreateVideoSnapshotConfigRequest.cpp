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

#include <tencentcloud/iss/v20230517/model/CreateVideoSnapshotConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

CreateVideoSnapshotConfigRequest::CreateVideoSnapshotConfigRequest() :
    m_nameHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_fileExpiresHasBeenSet(false),
    m_callbackHasBeenSet(false)
{
}

string CreateVideoSnapshotConfigRequest::ToJsonString() const
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

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
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


string CreateVideoSnapshotConfigRequest::GetName() const
{
    return m_name;
}

void CreateVideoSnapshotConfigRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateVideoSnapshotConfigRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateVideoSnapshotConfigRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateVideoSnapshotConfigRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateVideoSnapshotConfigRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t CreateVideoSnapshotConfigRequest::GetFileExpires() const
{
    return m_fileExpires;
}

void CreateVideoSnapshotConfigRequest::SetFileExpires(const int64_t& _fileExpires)
{
    m_fileExpires = _fileExpires;
    m_fileExpiresHasBeenSet = true;
}

bool CreateVideoSnapshotConfigRequest::FileExpiresHasBeenSet() const
{
    return m_fileExpiresHasBeenSet;
}

CallbackURL CreateVideoSnapshotConfigRequest::GetCallback() const
{
    return m_callback;
}

void CreateVideoSnapshotConfigRequest::SetCallback(const CallbackURL& _callback)
{
    m_callback = _callback;
    m_callbackHasBeenSet = true;
}

bool CreateVideoSnapshotConfigRequest::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}


