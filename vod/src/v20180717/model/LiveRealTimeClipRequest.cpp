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

#include <tencentcloud/vod/v20180717/model/LiveRealTimeClipRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

LiveRealTimeClipRequest::LiveRealTimeClipRequest() :
    m_streamIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_isPersistenceHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_procedureHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_sourceContextHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_metaDataRequiredHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_streamInfoHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

string LiveRealTimeClipRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_streamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_isPersistenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPersistence";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPersistence, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_procedureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Procedure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_procedure.c_str(), allocator).Move(), allocator);
    }

    if (m_classIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_classId, allocator);
    }

    if (m_sourceContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceContext.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDataRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaDataRequired";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_metaDataRequired, allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_streamInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_streamInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string LiveRealTimeClipRequest::GetStreamId() const
{
    return m_streamId;
}

void LiveRealTimeClipRequest::SetStreamId(const string& _streamId)
{
    m_streamId = _streamId;
    m_streamIdHasBeenSet = true;
}

bool LiveRealTimeClipRequest::StreamIdHasBeenSet() const
{
    return m_streamIdHasBeenSet;
}

string LiveRealTimeClipRequest::GetStartTime() const
{
    return m_startTime;
}

void LiveRealTimeClipRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool LiveRealTimeClipRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string LiveRealTimeClipRequest::GetEndTime() const
{
    return m_endTime;
}

void LiveRealTimeClipRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool LiveRealTimeClipRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t LiveRealTimeClipRequest::GetSubAppId() const
{
    return m_subAppId;
}

void LiveRealTimeClipRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool LiveRealTimeClipRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

int64_t LiveRealTimeClipRequest::GetIsPersistence() const
{
    return m_isPersistence;
}

void LiveRealTimeClipRequest::SetIsPersistence(const int64_t& _isPersistence)
{
    m_isPersistence = _isPersistence;
    m_isPersistenceHasBeenSet = true;
}

bool LiveRealTimeClipRequest::IsPersistenceHasBeenSet() const
{
    return m_isPersistenceHasBeenSet;
}

string LiveRealTimeClipRequest::GetExpireTime() const
{
    return m_expireTime;
}

void LiveRealTimeClipRequest::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool LiveRealTimeClipRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string LiveRealTimeClipRequest::GetProcedure() const
{
    return m_procedure;
}

void LiveRealTimeClipRequest::SetProcedure(const string& _procedure)
{
    m_procedure = _procedure;
    m_procedureHasBeenSet = true;
}

bool LiveRealTimeClipRequest::ProcedureHasBeenSet() const
{
    return m_procedureHasBeenSet;
}

int64_t LiveRealTimeClipRequest::GetClassId() const
{
    return m_classId;
}

void LiveRealTimeClipRequest::SetClassId(const int64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool LiveRealTimeClipRequest::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

string LiveRealTimeClipRequest::GetSourceContext() const
{
    return m_sourceContext;
}

void LiveRealTimeClipRequest::SetSourceContext(const string& _sourceContext)
{
    m_sourceContext = _sourceContext;
    m_sourceContextHasBeenSet = true;
}

bool LiveRealTimeClipRequest::SourceContextHasBeenSet() const
{
    return m_sourceContextHasBeenSet;
}

string LiveRealTimeClipRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void LiveRealTimeClipRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool LiveRealTimeClipRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

uint64_t LiveRealTimeClipRequest::GetMetaDataRequired() const
{
    return m_metaDataRequired;
}

void LiveRealTimeClipRequest::SetMetaDataRequired(const uint64_t& _metaDataRequired)
{
    m_metaDataRequired = _metaDataRequired;
    m_metaDataRequiredHasBeenSet = true;
}

bool LiveRealTimeClipRequest::MetaDataRequiredHasBeenSet() const
{
    return m_metaDataRequiredHasBeenSet;
}

string LiveRealTimeClipRequest::GetHost() const
{
    return m_host;
}

void LiveRealTimeClipRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool LiveRealTimeClipRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

LiveRealTimeClipStreamInfo LiveRealTimeClipRequest::GetStreamInfo() const
{
    return m_streamInfo;
}

void LiveRealTimeClipRequest::SetStreamInfo(const LiveRealTimeClipStreamInfo& _streamInfo)
{
    m_streamInfo = _streamInfo;
    m_streamInfoHasBeenSet = true;
}

bool LiveRealTimeClipRequest::StreamInfoHasBeenSet() const
{
    return m_streamInfoHasBeenSet;
}

string LiveRealTimeClipRequest::GetExtInfo() const
{
    return m_extInfo;
}

void LiveRealTimeClipRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool LiveRealTimeClipRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}


