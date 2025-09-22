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

#include <tencentcloud/wedata/v20250806/model/InstanceLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

InstanceLog::InstanceLog() :
    m_instanceKeyHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_codeContentHasBeenSet(false),
    m_logInfoHasBeenSet(false),
    m_nextCursorHasBeenSet(false)
{
}

CoreInternalOutcome InstanceLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceKey") && !value["InstanceKey"].IsNull())
    {
        if (!value["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(value["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("CodeContent") && !value["CodeContent"].IsNull())
    {
        if (!value["CodeContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.CodeContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeContent = string(value["CodeContent"].GetString());
        m_codeContentHasBeenSet = true;
    }

    if (value.HasMember("LogInfo") && !value["LogInfo"].IsNull())
    {
        if (!value["LogInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.LogInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logInfo = string(value["LogInfo"].GetString());
        m_logInfoHasBeenSet = true;
    }

    if (value.HasMember("NextCursor") && !value["NextCursor"].IsNull())
    {
        if (!value["NextCursor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.NextCursor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextCursor = string(value["NextCursor"].GetString());
        m_nextCursorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeContent.c_str(), allocator).Move(), allocator);
    }

    if (m_logInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_nextCursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextCursor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextCursor.c_str(), allocator).Move(), allocator);
    }

}


string InstanceLog::GetInstanceKey() const
{
    return m_instanceKey;
}

void InstanceLog::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool InstanceLog::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

string InstanceLog::GetProjectId() const
{
    return m_projectId;
}

void InstanceLog::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InstanceLog::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string InstanceLog::GetCodeContent() const
{
    return m_codeContent;
}

void InstanceLog::SetCodeContent(const string& _codeContent)
{
    m_codeContent = _codeContent;
    m_codeContentHasBeenSet = true;
}

bool InstanceLog::CodeContentHasBeenSet() const
{
    return m_codeContentHasBeenSet;
}

string InstanceLog::GetLogInfo() const
{
    return m_logInfo;
}

void InstanceLog::SetLogInfo(const string& _logInfo)
{
    m_logInfo = _logInfo;
    m_logInfoHasBeenSet = true;
}

bool InstanceLog::LogInfoHasBeenSet() const
{
    return m_logInfoHasBeenSet;
}

string InstanceLog::GetNextCursor() const
{
    return m_nextCursor;
}

void InstanceLog::SetNextCursor(const string& _nextCursor)
{
    m_nextCursor = _nextCursor;
    m_nextCursorHasBeenSet = true;
}

bool InstanceLog::NextCursorHasBeenSet() const
{
    return m_nextCursorHasBeenSet;
}

