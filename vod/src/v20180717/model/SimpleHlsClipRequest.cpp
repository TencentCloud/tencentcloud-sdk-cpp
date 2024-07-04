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

#include <tencentcloud/vod/v20180717/model/SimpleHlsClipRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SimpleHlsClipRequest::SimpleHlsClipRequest() :
    m_urlHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_isPersistenceHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_procedureHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_sourceContextHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_precisionHasBeenSet(false),
    m_outputMediaTypeHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

string SimpleHlsClipRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_startTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTimeOffset, allocator);
    }

    if (m_endTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimeOffset, allocator);
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

    if (m_precisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Precision";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_precision.c_str(), allocator).Move(), allocator);
    }

    if (m_outputMediaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputMediaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outputMediaType.c_str(), allocator).Move(), allocator);
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


string SimpleHlsClipRequest::GetUrl() const
{
    return m_url;
}

void SimpleHlsClipRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SimpleHlsClipRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t SimpleHlsClipRequest::GetSubAppId() const
{
    return m_subAppId;
}

void SimpleHlsClipRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool SimpleHlsClipRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

double SimpleHlsClipRequest::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void SimpleHlsClipRequest::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool SimpleHlsClipRequest::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double SimpleHlsClipRequest::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void SimpleHlsClipRequest::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool SimpleHlsClipRequest::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

int64_t SimpleHlsClipRequest::GetIsPersistence() const
{
    return m_isPersistence;
}

void SimpleHlsClipRequest::SetIsPersistence(const int64_t& _isPersistence)
{
    m_isPersistence = _isPersistence;
    m_isPersistenceHasBeenSet = true;
}

bool SimpleHlsClipRequest::IsPersistenceHasBeenSet() const
{
    return m_isPersistenceHasBeenSet;
}

string SimpleHlsClipRequest::GetExpireTime() const
{
    return m_expireTime;
}

void SimpleHlsClipRequest::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool SimpleHlsClipRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string SimpleHlsClipRequest::GetProcedure() const
{
    return m_procedure;
}

void SimpleHlsClipRequest::SetProcedure(const string& _procedure)
{
    m_procedure = _procedure;
    m_procedureHasBeenSet = true;
}

bool SimpleHlsClipRequest::ProcedureHasBeenSet() const
{
    return m_procedureHasBeenSet;
}

int64_t SimpleHlsClipRequest::GetClassId() const
{
    return m_classId;
}

void SimpleHlsClipRequest::SetClassId(const int64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool SimpleHlsClipRequest::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

string SimpleHlsClipRequest::GetSourceContext() const
{
    return m_sourceContext;
}

void SimpleHlsClipRequest::SetSourceContext(const string& _sourceContext)
{
    m_sourceContext = _sourceContext;
    m_sourceContextHasBeenSet = true;
}

bool SimpleHlsClipRequest::SourceContextHasBeenSet() const
{
    return m_sourceContextHasBeenSet;
}

string SimpleHlsClipRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void SimpleHlsClipRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool SimpleHlsClipRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string SimpleHlsClipRequest::GetPrecision() const
{
    return m_precision;
}

void SimpleHlsClipRequest::SetPrecision(const string& _precision)
{
    m_precision = _precision;
    m_precisionHasBeenSet = true;
}

bool SimpleHlsClipRequest::PrecisionHasBeenSet() const
{
    return m_precisionHasBeenSet;
}

string SimpleHlsClipRequest::GetOutputMediaType() const
{
    return m_outputMediaType;
}

void SimpleHlsClipRequest::SetOutputMediaType(const string& _outputMediaType)
{
    m_outputMediaType = _outputMediaType;
    m_outputMediaTypeHasBeenSet = true;
}

bool SimpleHlsClipRequest::OutputMediaTypeHasBeenSet() const
{
    return m_outputMediaTypeHasBeenSet;
}

string SimpleHlsClipRequest::GetExtInfo() const
{
    return m_extInfo;
}

void SimpleHlsClipRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool SimpleHlsClipRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}


