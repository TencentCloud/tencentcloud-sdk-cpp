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

#include <tencentcloud/live/v20180801/model/LogInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

LogInfo::LogInfo() :
    m_logNameHasBeenSet(false),
    m_logUrlHasBeenSet(false),
    m_logTimeHasBeenSet(false),
    m_fileSizeHasBeenSet(false)
{
}

CoreInternalOutcome LogInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogName") && !value["LogName"].IsNull())
    {
        if (!value["LogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.LogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logName = string(value["LogName"].GetString());
        m_logNameHasBeenSet = true;
    }

    if (value.HasMember("LogUrl") && !value["LogUrl"].IsNull())
    {
        if (!value["LogUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.LogUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logUrl = string(value["LogUrl"].GetString());
        m_logUrlHasBeenSet = true;
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

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logName.c_str(), allocator).Move(), allocator);
    }

    if (m_logUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_logTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

}


string LogInfo::GetLogName() const
{
    return m_logName;
}

void LogInfo::SetLogName(const string& _logName)
{
    m_logName = _logName;
    m_logNameHasBeenSet = true;
}

bool LogInfo::LogNameHasBeenSet() const
{
    return m_logNameHasBeenSet;
}

string LogInfo::GetLogUrl() const
{
    return m_logUrl;
}

void LogInfo::SetLogUrl(const string& _logUrl)
{
    m_logUrl = _logUrl;
    m_logUrlHasBeenSet = true;
}

bool LogInfo::LogUrlHasBeenSet() const
{
    return m_logUrlHasBeenSet;
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

int64_t LogInfo::GetFileSize() const
{
    return m_fileSize;
}

void LogInfo::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool LogInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

