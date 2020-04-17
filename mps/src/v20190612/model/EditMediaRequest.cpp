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

#include <tencentcloud/mps/v20190612/model/EditMediaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

EditMediaRequest::EditMediaRequest() :
    m_fileInfosHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_outputObjectPathHasBeenSet(false),
    m_taskNotifyConfigHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

string EditMediaRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileInfosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileInfos.begin(); itr != m_fileInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_outputStorageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_outputObjectPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutputObjectPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_outputObjectPath.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNotifyConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskNotifyConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_taskNotifyConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tasksPriorityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TasksPriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tasksPriority, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<EditMediaFileInfo> EditMediaRequest::GetFileInfos() const
{
    return m_fileInfos;
}

void EditMediaRequest::SetFileInfos(const vector<EditMediaFileInfo>& _fileInfos)
{
    m_fileInfos = _fileInfos;
    m_fileInfosHasBeenSet = true;
}

bool EditMediaRequest::FileInfosHasBeenSet() const
{
    return m_fileInfosHasBeenSet;
}

TaskOutputStorage EditMediaRequest::GetOutputStorage() const
{
    return m_outputStorage;
}

void EditMediaRequest::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool EditMediaRequest::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string EditMediaRequest::GetOutputObjectPath() const
{
    return m_outputObjectPath;
}

void EditMediaRequest::SetOutputObjectPath(const string& _outputObjectPath)
{
    m_outputObjectPath = _outputObjectPath;
    m_outputObjectPathHasBeenSet = true;
}

bool EditMediaRequest::OutputObjectPathHasBeenSet() const
{
    return m_outputObjectPathHasBeenSet;
}

TaskNotifyConfig EditMediaRequest::GetTaskNotifyConfig() const
{
    return m_taskNotifyConfig;
}

void EditMediaRequest::SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig)
{
    m_taskNotifyConfig = _taskNotifyConfig;
    m_taskNotifyConfigHasBeenSet = true;
}

bool EditMediaRequest::TaskNotifyConfigHasBeenSet() const
{
    return m_taskNotifyConfigHasBeenSet;
}

int64_t EditMediaRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void EditMediaRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool EditMediaRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string EditMediaRequest::GetSessionId() const
{
    return m_sessionId;
}

void EditMediaRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool EditMediaRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string EditMediaRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void EditMediaRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool EditMediaRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}


