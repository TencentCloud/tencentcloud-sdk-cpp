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

#include <tencentcloud/dts/v20211206/model/RateLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

RateLimit::RateLimit() :
    m_dumpThreadHasBeenSet(false),
    m_dumpRpsHasBeenSet(false),
    m_loadThreadHasBeenSet(false),
    m_loadRpsHasBeenSet(false),
    m_sinkerThreadHasBeenSet(false),
    m_loadBpsHasBeenSet(false),
    m_dstShardCountHasBeenSet(false),
    m_dumpBpsHasBeenSet(false),
    m_sinkerRpsHasBeenSet(false),
    m_sinkerBpsHasBeenSet(false)
{
}

CoreInternalOutcome RateLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DumpThread") && !value["DumpThread"].IsNull())
    {
        if (!value["DumpThread"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimit.DumpThread` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dumpThread = value["DumpThread"].GetInt64();
        m_dumpThreadHasBeenSet = true;
    }

    if (value.HasMember("DumpRps") && !value["DumpRps"].IsNull())
    {
        if (!value["DumpRps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimit.DumpRps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dumpRps = value["DumpRps"].GetInt64();
        m_dumpRpsHasBeenSet = true;
    }

    if (value.HasMember("LoadThread") && !value["LoadThread"].IsNull())
    {
        if (!value["LoadThread"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimit.LoadThread` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loadThread = value["LoadThread"].GetInt64();
        m_loadThreadHasBeenSet = true;
    }

    if (value.HasMember("LoadRps") && !value["LoadRps"].IsNull())
    {
        if (!value["LoadRps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimit.LoadRps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loadRps = value["LoadRps"].GetInt64();
        m_loadRpsHasBeenSet = true;
    }

    if (value.HasMember("SinkerThread") && !value["SinkerThread"].IsNull())
    {
        if (!value["SinkerThread"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimit.SinkerThread` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sinkerThread = value["SinkerThread"].GetInt64();
        m_sinkerThreadHasBeenSet = true;
    }

    if (value.HasMember("LoadBps") && !value["LoadBps"].IsNull())
    {
        if (!value["LoadBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimit.LoadBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loadBps = value["LoadBps"].GetInt64();
        m_loadBpsHasBeenSet = true;
    }

    if (value.HasMember("DstShardCount") && !value["DstShardCount"].IsNull())
    {
        if (!value["DstShardCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimit.DstShardCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dstShardCount = value["DstShardCount"].GetInt64();
        m_dstShardCountHasBeenSet = true;
    }

    if (value.HasMember("DumpBps") && !value["DumpBps"].IsNull())
    {
        if (!value["DumpBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimit.DumpBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dumpBps = value["DumpBps"].GetInt64();
        m_dumpBpsHasBeenSet = true;
    }

    if (value.HasMember("SinkerRps") && !value["SinkerRps"].IsNull())
    {
        if (!value["SinkerRps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimit.SinkerRps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sinkerRps = value["SinkerRps"].GetInt64();
        m_sinkerRpsHasBeenSet = true;
    }

    if (value.HasMember("SinkerBps") && !value["SinkerBps"].IsNull())
    {
        if (!value["SinkerBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimit.SinkerBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sinkerBps = value["SinkerBps"].GetInt64();
        m_sinkerBpsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RateLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dumpThreadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DumpThread";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dumpThread, allocator);
    }

    if (m_dumpRpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DumpRps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dumpRps, allocator);
    }

    if (m_loadThreadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadThread";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadThread, allocator);
    }

    if (m_loadRpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadRps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadRps, allocator);
    }

    if (m_sinkerThreadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkerThread";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sinkerThread, allocator);
    }

    if (m_loadBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadBps, allocator);
    }

    if (m_dstShardCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstShardCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstShardCount, allocator);
    }

    if (m_dumpBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DumpBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dumpBps, allocator);
    }

    if (m_sinkerRpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkerRps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sinkerRps, allocator);
    }

    if (m_sinkerBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkerBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sinkerBps, allocator);
    }

}


int64_t RateLimit::GetDumpThread() const
{
    return m_dumpThread;
}

void RateLimit::SetDumpThread(const int64_t& _dumpThread)
{
    m_dumpThread = _dumpThread;
    m_dumpThreadHasBeenSet = true;
}

bool RateLimit::DumpThreadHasBeenSet() const
{
    return m_dumpThreadHasBeenSet;
}

int64_t RateLimit::GetDumpRps() const
{
    return m_dumpRps;
}

void RateLimit::SetDumpRps(const int64_t& _dumpRps)
{
    m_dumpRps = _dumpRps;
    m_dumpRpsHasBeenSet = true;
}

bool RateLimit::DumpRpsHasBeenSet() const
{
    return m_dumpRpsHasBeenSet;
}

int64_t RateLimit::GetLoadThread() const
{
    return m_loadThread;
}

void RateLimit::SetLoadThread(const int64_t& _loadThread)
{
    m_loadThread = _loadThread;
    m_loadThreadHasBeenSet = true;
}

bool RateLimit::LoadThreadHasBeenSet() const
{
    return m_loadThreadHasBeenSet;
}

int64_t RateLimit::GetLoadRps() const
{
    return m_loadRps;
}

void RateLimit::SetLoadRps(const int64_t& _loadRps)
{
    m_loadRps = _loadRps;
    m_loadRpsHasBeenSet = true;
}

bool RateLimit::LoadRpsHasBeenSet() const
{
    return m_loadRpsHasBeenSet;
}

int64_t RateLimit::GetSinkerThread() const
{
    return m_sinkerThread;
}

void RateLimit::SetSinkerThread(const int64_t& _sinkerThread)
{
    m_sinkerThread = _sinkerThread;
    m_sinkerThreadHasBeenSet = true;
}

bool RateLimit::SinkerThreadHasBeenSet() const
{
    return m_sinkerThreadHasBeenSet;
}

int64_t RateLimit::GetLoadBps() const
{
    return m_loadBps;
}

void RateLimit::SetLoadBps(const int64_t& _loadBps)
{
    m_loadBps = _loadBps;
    m_loadBpsHasBeenSet = true;
}

bool RateLimit::LoadBpsHasBeenSet() const
{
    return m_loadBpsHasBeenSet;
}

int64_t RateLimit::GetDstShardCount() const
{
    return m_dstShardCount;
}

void RateLimit::SetDstShardCount(const int64_t& _dstShardCount)
{
    m_dstShardCount = _dstShardCount;
    m_dstShardCountHasBeenSet = true;
}

bool RateLimit::DstShardCountHasBeenSet() const
{
    return m_dstShardCountHasBeenSet;
}

int64_t RateLimit::GetDumpBps() const
{
    return m_dumpBps;
}

void RateLimit::SetDumpBps(const int64_t& _dumpBps)
{
    m_dumpBps = _dumpBps;
    m_dumpBpsHasBeenSet = true;
}

bool RateLimit::DumpBpsHasBeenSet() const
{
    return m_dumpBpsHasBeenSet;
}

int64_t RateLimit::GetSinkerRps() const
{
    return m_sinkerRps;
}

void RateLimit::SetSinkerRps(const int64_t& _sinkerRps)
{
    m_sinkerRps = _sinkerRps;
    m_sinkerRpsHasBeenSet = true;
}

bool RateLimit::SinkerRpsHasBeenSet() const
{
    return m_sinkerRpsHasBeenSet;
}

int64_t RateLimit::GetSinkerBps() const
{
    return m_sinkerBps;
}

void RateLimit::SetSinkerBps(const int64_t& _sinkerBps)
{
    m_sinkerBps = _sinkerBps;
    m_sinkerBpsHasBeenSet = true;
}

bool RateLimit::SinkerBpsHasBeenSet() const
{
    return m_sinkerBpsHasBeenSet;
}

