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

#include <tencentcloud/dts/v20211206/model/ModifySyncRateLimitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ModifySyncRateLimitRequest::ModifySyncRateLimitRequest() :
    m_jobIdHasBeenSet(false),
    m_dumpThreadHasBeenSet(false),
    m_dumpRpsHasBeenSet(false),
    m_loadThreadHasBeenSet(false),
    m_sinkerThreadHasBeenSet(false),
    m_loadRpsHasBeenSet(false)
{
}

string ModifySyncRateLimitRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_dumpThreadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DumpThread";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dumpThread, allocator);
    }

    if (m_dumpRpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DumpRps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dumpRps, allocator);
    }

    if (m_loadThreadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadThread";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_loadThread, allocator);
    }

    if (m_sinkerThreadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkerThread";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sinkerThread, allocator);
    }

    if (m_loadRpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadRps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_loadRps, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySyncRateLimitRequest::GetJobId() const
{
    return m_jobId;
}

void ModifySyncRateLimitRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ModifySyncRateLimitRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

int64_t ModifySyncRateLimitRequest::GetDumpThread() const
{
    return m_dumpThread;
}

void ModifySyncRateLimitRequest::SetDumpThread(const int64_t& _dumpThread)
{
    m_dumpThread = _dumpThread;
    m_dumpThreadHasBeenSet = true;
}

bool ModifySyncRateLimitRequest::DumpThreadHasBeenSet() const
{
    return m_dumpThreadHasBeenSet;
}

int64_t ModifySyncRateLimitRequest::GetDumpRps() const
{
    return m_dumpRps;
}

void ModifySyncRateLimitRequest::SetDumpRps(const int64_t& _dumpRps)
{
    m_dumpRps = _dumpRps;
    m_dumpRpsHasBeenSet = true;
}

bool ModifySyncRateLimitRequest::DumpRpsHasBeenSet() const
{
    return m_dumpRpsHasBeenSet;
}

int64_t ModifySyncRateLimitRequest::GetLoadThread() const
{
    return m_loadThread;
}

void ModifySyncRateLimitRequest::SetLoadThread(const int64_t& _loadThread)
{
    m_loadThread = _loadThread;
    m_loadThreadHasBeenSet = true;
}

bool ModifySyncRateLimitRequest::LoadThreadHasBeenSet() const
{
    return m_loadThreadHasBeenSet;
}

int64_t ModifySyncRateLimitRequest::GetSinkerThread() const
{
    return m_sinkerThread;
}

void ModifySyncRateLimitRequest::SetSinkerThread(const int64_t& _sinkerThread)
{
    m_sinkerThread = _sinkerThread;
    m_sinkerThreadHasBeenSet = true;
}

bool ModifySyncRateLimitRequest::SinkerThreadHasBeenSet() const
{
    return m_sinkerThreadHasBeenSet;
}

int64_t ModifySyncRateLimitRequest::GetLoadRps() const
{
    return m_loadRps;
}

void ModifySyncRateLimitRequest::SetLoadRps(const int64_t& _loadRps)
{
    m_loadRps = _loadRps;
    m_loadRpsHasBeenSet = true;
}

bool ModifySyncRateLimitRequest::LoadRpsHasBeenSet() const
{
    return m_loadRpsHasBeenSet;
}


