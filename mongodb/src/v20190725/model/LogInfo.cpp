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

#include <tencentcloud/mongodb/v20190725/model/LogInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

LogInfo::LogInfo() :
    m_logComponentHasBeenSet(false),
    m_logLevelHasBeenSet(false),
    m_logTimeHasBeenSet(false),
    m_logDetailHasBeenSet(false),
    m_logConnectionHasBeenSet(false),
    m_logIdHasBeenSet(false)
{
}

CoreInternalOutcome LogInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogComponent") && !value["LogComponent"].IsNull())
    {
        if (!value["LogComponent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.LogComponent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logComponent = string(value["LogComponent"].GetString());
        m_logComponentHasBeenSet = true;
    }

    if (value.HasMember("LogLevel") && !value["LogLevel"].IsNull())
    {
        if (!value["LogLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.LogLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logLevel = string(value["LogLevel"].GetString());
        m_logLevelHasBeenSet = true;
    }

    if (value.HasMember("LogTime") && !value["LogTime"].IsNull())
    {
        if (!value["LogTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.LogTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTime = string(value["LogTime"].GetString());
        m_logTimeHasBeenSet = true;
    }

    if (value.HasMember("LogDetail") && !value["LogDetail"].IsNull())
    {
        if (!value["LogDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.LogDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logDetail = string(value["LogDetail"].GetString());
        m_logDetailHasBeenSet = true;
    }

    if (value.HasMember("LogConnection") && !value["LogConnection"].IsNull())
    {
        if (!value["LogConnection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.LogConnection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logConnection = string(value["LogConnection"].GetString());
        m_logConnectionHasBeenSet = true;
    }

    if (value.HasMember("LogId") && !value["LogId"].IsNull())
    {
        if (!value["LogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.LogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logId = string(value["LogId"].GetString());
        m_logIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logComponentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogComponent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logComponent.c_str(), allocator).Move(), allocator);
    }

    if (m_logLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_logTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTime.c_str(), allocator).Move(), allocator);
    }

    if (m_logDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_logConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logConnection.c_str(), allocator).Move(), allocator);
    }

    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logId.c_str(), allocator).Move(), allocator);
    }

}


string LogInfo::GetLogComponent() const
{
    return m_logComponent;
}

void LogInfo::SetLogComponent(const string& _logComponent)
{
    m_logComponent = _logComponent;
    m_logComponentHasBeenSet = true;
}

bool LogInfo::LogComponentHasBeenSet() const
{
    return m_logComponentHasBeenSet;
}

string LogInfo::GetLogLevel() const
{
    return m_logLevel;
}

void LogInfo::SetLogLevel(const string& _logLevel)
{
    m_logLevel = _logLevel;
    m_logLevelHasBeenSet = true;
}

bool LogInfo::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}

string LogInfo::GetLogTime() const
{
    return m_logTime;
}

void LogInfo::SetLogTime(const string& _logTime)
{
    m_logTime = _logTime;
    m_logTimeHasBeenSet = true;
}

bool LogInfo::LogTimeHasBeenSet() const
{
    return m_logTimeHasBeenSet;
}

string LogInfo::GetLogDetail() const
{
    return m_logDetail;
}

void LogInfo::SetLogDetail(const string& _logDetail)
{
    m_logDetail = _logDetail;
    m_logDetailHasBeenSet = true;
}

bool LogInfo::LogDetailHasBeenSet() const
{
    return m_logDetailHasBeenSet;
}

string LogInfo::GetLogConnection() const
{
    return m_logConnection;
}

void LogInfo::SetLogConnection(const string& _logConnection)
{
    m_logConnection = _logConnection;
    m_logConnectionHasBeenSet = true;
}

bool LogInfo::LogConnectionHasBeenSet() const
{
    return m_logConnectionHasBeenSet;
}

string LogInfo::GetLogId() const
{
    return m_logId;
}

void LogInfo::SetLogId(const string& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool LogInfo::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

