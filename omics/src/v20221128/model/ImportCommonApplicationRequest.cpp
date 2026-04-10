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

#include <tencentcloud/omics/v20221128/model/ImportCommonApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

ImportCommonApplicationRequest::ImportCommonApplicationRequest() :
    m_commonAppUuidHasBeenSet(false),
    m_commonAppNewNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nextflowVersionHasBeenSet(false),
    m_internalHasBeenSet(false)
{
}

string ImportCommonApplicationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_commonAppUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonAppUuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commonAppUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_commonAppNewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonAppNewName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commonAppNewName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nextflowVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextflowVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextflowVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_internalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Internal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internal, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportCommonApplicationRequest::GetCommonAppUuid() const
{
    return m_commonAppUuid;
}

void ImportCommonApplicationRequest::SetCommonAppUuid(const string& _commonAppUuid)
{
    m_commonAppUuid = _commonAppUuid;
    m_commonAppUuidHasBeenSet = true;
}

bool ImportCommonApplicationRequest::CommonAppUuidHasBeenSet() const
{
    return m_commonAppUuidHasBeenSet;
}

string ImportCommonApplicationRequest::GetCommonAppNewName() const
{
    return m_commonAppNewName;
}

void ImportCommonApplicationRequest::SetCommonAppNewName(const string& _commonAppNewName)
{
    m_commonAppNewName = _commonAppNewName;
    m_commonAppNewNameHasBeenSet = true;
}

bool ImportCommonApplicationRequest::CommonAppNewNameHasBeenSet() const
{
    return m_commonAppNewNameHasBeenSet;
}

string ImportCommonApplicationRequest::GetProjectId() const
{
    return m_projectId;
}

void ImportCommonApplicationRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ImportCommonApplicationRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ImportCommonApplicationRequest::GetType() const
{
    return m_type;
}

void ImportCommonApplicationRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImportCommonApplicationRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ImportCommonApplicationRequest::GetNextflowVersion() const
{
    return m_nextflowVersion;
}

void ImportCommonApplicationRequest::SetNextflowVersion(const string& _nextflowVersion)
{
    m_nextflowVersion = _nextflowVersion;
    m_nextflowVersionHasBeenSet = true;
}

bool ImportCommonApplicationRequest::NextflowVersionHasBeenSet() const
{
    return m_nextflowVersionHasBeenSet;
}

bool ImportCommonApplicationRequest::GetInternal() const
{
    return m_internal;
}

void ImportCommonApplicationRequest::SetInternal(const bool& _internal)
{
    m_internal = _internal;
    m_internalHasBeenSet = true;
}

bool ImportCommonApplicationRequest::InternalHasBeenSet() const
{
    return m_internalHasBeenSet;
}


