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

#include <tencentcloud/wedata/v20210820/model/LogContentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

LogContentInfo::LogContentInfo() :
    m_logHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_pkgLogIdHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_containerNameHasBeenSet(false)
{
}

CoreInternalOutcome LogContentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Log") && !value["Log"].IsNull())
    {
        if (!value["Log"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogContentInfo.Log` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_log = string(value["Log"].GetString());
        m_logHasBeenSet = true;
    }

    if (value.HasMember("PkgId") && !value["PkgId"].IsNull())
    {
        if (!value["PkgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogContentInfo.PkgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgId = string(value["PkgId"].GetString());
        m_pkgIdHasBeenSet = true;
    }

    if (value.HasMember("PkgLogId") && !value["PkgLogId"].IsNull())
    {
        if (!value["PkgLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogContentInfo.PkgLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgLogId = string(value["PkgLogId"].GetString());
        m_pkgLogIdHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogContentInfo.Time` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetUint64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogContentInfo.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogContentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Log";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_log.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

}


string LogContentInfo::GetLog() const
{
    return m_log;
}

void LogContentInfo::SetLog(const string& _log)
{
    m_log = _log;
    m_logHasBeenSet = true;
}

bool LogContentInfo::LogHasBeenSet() const
{
    return m_logHasBeenSet;
}

string LogContentInfo::GetPkgId() const
{
    return m_pkgId;
}

void LogContentInfo::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool LogContentInfo::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string LogContentInfo::GetPkgLogId() const
{
    return m_pkgLogId;
}

void LogContentInfo::SetPkgLogId(const string& _pkgLogId)
{
    m_pkgLogId = _pkgLogId;
    m_pkgLogIdHasBeenSet = true;
}

bool LogContentInfo::PkgLogIdHasBeenSet() const
{
    return m_pkgLogIdHasBeenSet;
}

uint64_t LogContentInfo::GetTime() const
{
    return m_time;
}

void LogContentInfo::SetTime(const uint64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool LogContentInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string LogContentInfo::GetContainerName() const
{
    return m_containerName;
}

void LogContentInfo::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool LogContentInfo::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

