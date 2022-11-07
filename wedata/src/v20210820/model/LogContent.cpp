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

#include <tencentcloud/wedata/v20210820/model/LogContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

LogContent::LogContent() :
    m_timeHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_logHasBeenSet(false)
{
}

CoreInternalOutcome LogContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogContent.Time` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetUint64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("PkgId") && !value["PkgId"].IsNull())
    {
        if (!value["PkgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogContent.PkgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgId = string(value["PkgId"].GetString());
        m_pkgIdHasBeenSet = true;
    }

    if (value.HasMember("Log") && !value["Log"].IsNull())
    {
        if (!value["Log"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogContent.Log` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_log = string(value["Log"].GetString());
        m_logHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_logHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Log";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_log.c_str(), allocator).Move(), allocator);
    }

}


uint64_t LogContent::GetTime() const
{
    return m_time;
}

void LogContent::SetTime(const uint64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool LogContent::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string LogContent::GetPkgId() const
{
    return m_pkgId;
}

void LogContent::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool LogContent::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string LogContent::GetLog() const
{
    return m_log;
}

void LogContent::SetLog(const string& _log)
{
    m_log = _log;
    m_logHasBeenSet = true;
}

bool LogContent::LogHasBeenSet() const
{
    return m_logHasBeenSet;
}

