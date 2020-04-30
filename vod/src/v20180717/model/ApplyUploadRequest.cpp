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

#include <tencentcloud/vod/v20180717/model/ApplyUploadRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

ApplyUploadRequest::ApplyUploadRequest() :
    m_mediaTypeHasBeenSet(false),
    m_mediaNameHasBeenSet(false),
    m_coverTypeHasBeenSet(false),
    m_procedureHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_sourceContextHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_extInfoHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string ApplyUploadRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mediaTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MediaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mediaType.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MediaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mediaName.c_str(), allocator).Move(), allocator);
    }

    if (m_coverTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoverType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_coverType.c_str(), allocator).Move(), allocator);
    }

    if (m_procedureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Procedure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_procedure.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_storageRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_storageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_classIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_classId, allocator);
    }

    if (m_sourceContextHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sourceContext.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyUploadRequest::GetMediaType() const
{
    return m_mediaType;
}

void ApplyUploadRequest::SetMediaType(const string& _mediaType)
{
    m_mediaType = _mediaType;
    m_mediaTypeHasBeenSet = true;
}

bool ApplyUploadRequest::MediaTypeHasBeenSet() const
{
    return m_mediaTypeHasBeenSet;
}

string ApplyUploadRequest::GetMediaName() const
{
    return m_mediaName;
}

void ApplyUploadRequest::SetMediaName(const string& _mediaName)
{
    m_mediaName = _mediaName;
    m_mediaNameHasBeenSet = true;
}

bool ApplyUploadRequest::MediaNameHasBeenSet() const
{
    return m_mediaNameHasBeenSet;
}

string ApplyUploadRequest::GetCoverType() const
{
    return m_coverType;
}

void ApplyUploadRequest::SetCoverType(const string& _coverType)
{
    m_coverType = _coverType;
    m_coverTypeHasBeenSet = true;
}

bool ApplyUploadRequest::CoverTypeHasBeenSet() const
{
    return m_coverTypeHasBeenSet;
}

string ApplyUploadRequest::GetProcedure() const
{
    return m_procedure;
}

void ApplyUploadRequest::SetProcedure(const string& _procedure)
{
    m_procedure = _procedure;
    m_procedureHasBeenSet = true;
}

bool ApplyUploadRequest::ProcedureHasBeenSet() const
{
    return m_procedureHasBeenSet;
}

string ApplyUploadRequest::GetExpireTime() const
{
    return m_expireTime;
}

void ApplyUploadRequest::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ApplyUploadRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string ApplyUploadRequest::GetStorageRegion() const
{
    return m_storageRegion;
}

void ApplyUploadRequest::SetStorageRegion(const string& _storageRegion)
{
    m_storageRegion = _storageRegion;
    m_storageRegionHasBeenSet = true;
}

bool ApplyUploadRequest::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

int64_t ApplyUploadRequest::GetClassId() const
{
    return m_classId;
}

void ApplyUploadRequest::SetClassId(const int64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool ApplyUploadRequest::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

string ApplyUploadRequest::GetSourceContext() const
{
    return m_sourceContext;
}

void ApplyUploadRequest::SetSourceContext(const string& _sourceContext)
{
    m_sourceContext = _sourceContext;
    m_sourceContextHasBeenSet = true;
}

bool ApplyUploadRequest::SourceContextHasBeenSet() const
{
    return m_sourceContextHasBeenSet;
}

string ApplyUploadRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void ApplyUploadRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool ApplyUploadRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string ApplyUploadRequest::GetExtInfo() const
{
    return m_extInfo;
}

void ApplyUploadRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool ApplyUploadRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

uint64_t ApplyUploadRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ApplyUploadRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ApplyUploadRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


