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

#include <tencentcloud/wedata/v20250806/model/NotebookSessionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

NotebookSessionInfo::NotebookSessionInfo() :
    m_notebookSessionIdHasBeenSet(false),
    m_notebookSessionNameHasBeenSet(false)
{
}

CoreInternalOutcome NotebookSessionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NotebookSessionId") && !value["NotebookSessionId"].IsNull())
    {
        if (!value["NotebookSessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.NotebookSessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notebookSessionId = string(value["NotebookSessionId"].GetString());
        m_notebookSessionIdHasBeenSet = true;
    }

    if (value.HasMember("NotebookSessionName") && !value["NotebookSessionName"].IsNull())
    {
        if (!value["NotebookSessionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.NotebookSessionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notebookSessionName = string(value["NotebookSessionName"].GetString());
        m_notebookSessionNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotebookSessionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_notebookSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotebookSessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notebookSessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_notebookSessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotebookSessionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notebookSessionName.c_str(), allocator).Move(), allocator);
    }

}


string NotebookSessionInfo::GetNotebookSessionId() const
{
    return m_notebookSessionId;
}

void NotebookSessionInfo::SetNotebookSessionId(const string& _notebookSessionId)
{
    m_notebookSessionId = _notebookSessionId;
    m_notebookSessionIdHasBeenSet = true;
}

bool NotebookSessionInfo::NotebookSessionIdHasBeenSet() const
{
    return m_notebookSessionIdHasBeenSet;
}

string NotebookSessionInfo::GetNotebookSessionName() const
{
    return m_notebookSessionName;
}

void NotebookSessionInfo::SetNotebookSessionName(const string& _notebookSessionName)
{
    m_notebookSessionName = _notebookSessionName;
    m_notebookSessionNameHasBeenSet = true;
}

bool NotebookSessionInfo::NotebookSessionNameHasBeenSet() const
{
    return m_notebookSessionNameHasBeenSet;
}

