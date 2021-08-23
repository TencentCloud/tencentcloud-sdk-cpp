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

#include <tencentcloud/tione/v20191022/model/NotebookLifecycleScriptsSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

NotebookLifecycleScriptsSummary::NotebookLifecycleScriptsSummary() :
    m_notebookLifecycleScriptsNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

CoreInternalOutcome NotebookLifecycleScriptsSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NotebookLifecycleScriptsName") && !value["NotebookLifecycleScriptsName"].IsNull())
    {
        if (!value["NotebookLifecycleScriptsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookLifecycleScriptsSummary.NotebookLifecycleScriptsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notebookLifecycleScriptsName = string(value["NotebookLifecycleScriptsName"].GetString());
        m_notebookLifecycleScriptsNameHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookLifecycleScriptsSummary.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedTime") && !value["LastModifiedTime"].IsNull())
    {
        if (!value["LastModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookLifecycleScriptsSummary.LastModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedTime = string(value["LastModifiedTime"].GetString());
        m_lastModifiedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotebookLifecycleScriptsSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_notebookLifecycleScriptsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotebookLifecycleScriptsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notebookLifecycleScriptsName.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifiedTime.c_str(), allocator).Move(), allocator);
    }

}


string NotebookLifecycleScriptsSummary::GetNotebookLifecycleScriptsName() const
{
    return m_notebookLifecycleScriptsName;
}

void NotebookLifecycleScriptsSummary::SetNotebookLifecycleScriptsName(const string& _notebookLifecycleScriptsName)
{
    m_notebookLifecycleScriptsName = _notebookLifecycleScriptsName;
    m_notebookLifecycleScriptsNameHasBeenSet = true;
}

bool NotebookLifecycleScriptsSummary::NotebookLifecycleScriptsNameHasBeenSet() const
{
    return m_notebookLifecycleScriptsNameHasBeenSet;
}

string NotebookLifecycleScriptsSummary::GetCreationTime() const
{
    return m_creationTime;
}

void NotebookLifecycleScriptsSummary::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool NotebookLifecycleScriptsSummary::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string NotebookLifecycleScriptsSummary::GetLastModifiedTime() const
{
    return m_lastModifiedTime;
}

void NotebookLifecycleScriptsSummary::SetLastModifiedTime(const string& _lastModifiedTime)
{
    m_lastModifiedTime = _lastModifiedTime;
    m_lastModifiedTimeHasBeenSet = true;
}

bool NotebookLifecycleScriptsSummary::LastModifiedTimeHasBeenSet() const
{
    return m_lastModifiedTimeHasBeenSet;
}

