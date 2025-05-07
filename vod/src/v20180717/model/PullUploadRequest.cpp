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

#include <tencentcloud/vod/v20180717/model/PullUploadRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

PullUploadRequest::PullUploadRequest() :
    m_mediaUrlHasBeenSet(false),
    m_mediaTypeHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_mediaNameHasBeenSet(false),
    m_coverUrlHasBeenSet(false),
    m_procedureHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_extInfoHasBeenSet(false),
    m_sourceContextHasBeenSet(false)
{
}

string PullUploadRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mediaUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mediaUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mediaType.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_mediaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mediaName.c_str(), allocator).Move(), allocator);
    }

    if (m_coverUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_coverUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_procedureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Procedure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_procedure.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_storageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_classIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_classId, allocator);
    }

    if (m_tasksPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TasksPriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tasksPriority, allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceContext.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PullUploadRequest::GetMediaUrl() const
{
    return m_mediaUrl;
}

void PullUploadRequest::SetMediaUrl(const string& _mediaUrl)
{
    m_mediaUrl = _mediaUrl;
    m_mediaUrlHasBeenSet = true;
}

bool PullUploadRequest::MediaUrlHasBeenSet() const
{
    return m_mediaUrlHasBeenSet;
}

string PullUploadRequest::GetMediaType() const
{
    return m_mediaType;
}

void PullUploadRequest::SetMediaType(const string& _mediaType)
{
    m_mediaType = _mediaType;
    m_mediaTypeHasBeenSet = true;
}

bool PullUploadRequest::MediaTypeHasBeenSet() const
{
    return m_mediaTypeHasBeenSet;
}

uint64_t PullUploadRequest::GetSubAppId() const
{
    return m_subAppId;
}

void PullUploadRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool PullUploadRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string PullUploadRequest::GetMediaName() const
{
    return m_mediaName;
}

void PullUploadRequest::SetMediaName(const string& _mediaName)
{
    m_mediaName = _mediaName;
    m_mediaNameHasBeenSet = true;
}

bool PullUploadRequest::MediaNameHasBeenSet() const
{
    return m_mediaNameHasBeenSet;
}

string PullUploadRequest::GetCoverUrl() const
{
    return m_coverUrl;
}

void PullUploadRequest::SetCoverUrl(const string& _coverUrl)
{
    m_coverUrl = _coverUrl;
    m_coverUrlHasBeenSet = true;
}

bool PullUploadRequest::CoverUrlHasBeenSet() const
{
    return m_coverUrlHasBeenSet;
}

string PullUploadRequest::GetProcedure() const
{
    return m_procedure;
}

void PullUploadRequest::SetProcedure(const string& _procedure)
{
    m_procedure = _procedure;
    m_procedureHasBeenSet = true;
}

bool PullUploadRequest::ProcedureHasBeenSet() const
{
    return m_procedureHasBeenSet;
}

string PullUploadRequest::GetExpireTime() const
{
    return m_expireTime;
}

void PullUploadRequest::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool PullUploadRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string PullUploadRequest::GetStorageRegion() const
{
    return m_storageRegion;
}

void PullUploadRequest::SetStorageRegion(const string& _storageRegion)
{
    m_storageRegion = _storageRegion;
    m_storageRegionHasBeenSet = true;
}

bool PullUploadRequest::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

int64_t PullUploadRequest::GetClassId() const
{
    return m_classId;
}

void PullUploadRequest::SetClassId(const int64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool PullUploadRequest::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

int64_t PullUploadRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void PullUploadRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool PullUploadRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string PullUploadRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void PullUploadRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool PullUploadRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string PullUploadRequest::GetSessionId() const
{
    return m_sessionId;
}

void PullUploadRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool PullUploadRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string PullUploadRequest::GetExtInfo() const
{
    return m_extInfo;
}

void PullUploadRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool PullUploadRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

string PullUploadRequest::GetSourceContext() const
{
    return m_sourceContext;
}

void PullUploadRequest::SetSourceContext(const string& _sourceContext)
{
    m_sourceContext = _sourceContext;
    m_sourceContextHasBeenSet = true;
}

bool PullUploadRequest::SourceContextHasBeenSet() const
{
    return m_sourceContextHasBeenSet;
}


