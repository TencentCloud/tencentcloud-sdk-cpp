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

#include <tencentcloud/databuddy/v20260715/model/TaskTypeNotebookExt.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

TaskTypeNotebookExt::TaskTypeNotebookExt() :
    m_sourceHasBeenSet(false),
    m_displayPathHasBeenSet(false),
    m_notebookPathHasBeenSet(false),
    m_notebookAbsolutePathHasBeenSet(false)
{
}

CoreInternalOutcome TaskTypeNotebookExt::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeNotebookExt.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("DisplayPath") && !value["DisplayPath"].IsNull())
    {
        if (!value["DisplayPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeNotebookExt.DisplayPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayPath = string(value["DisplayPath"].GetString());
        m_displayPathHasBeenSet = true;
    }

    if (value.HasMember("NotebookPath") && !value["NotebookPath"].IsNull())
    {
        if (!value["NotebookPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeNotebookExt.NotebookPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notebookPath = string(value["NotebookPath"].GetString());
        m_notebookPathHasBeenSet = true;
    }

    if (value.HasMember("NotebookAbsolutePath") && !value["NotebookAbsolutePath"].IsNull())
    {
        if (!value["NotebookAbsolutePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeNotebookExt.NotebookAbsolutePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notebookAbsolutePath = string(value["NotebookAbsolutePath"].GetString());
        m_notebookAbsolutePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskTypeNotebookExt::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_displayPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayPath.c_str(), allocator).Move(), allocator);
    }

    if (m_notebookPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotebookPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notebookPath.c_str(), allocator).Move(), allocator);
    }

    if (m_notebookAbsolutePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotebookAbsolutePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notebookAbsolutePath.c_str(), allocator).Move(), allocator);
    }

}


string TaskTypeNotebookExt::GetSource() const
{
    return m_source;
}

void TaskTypeNotebookExt::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool TaskTypeNotebookExt::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string TaskTypeNotebookExt::GetDisplayPath() const
{
    return m_displayPath;
}

void TaskTypeNotebookExt::SetDisplayPath(const string& _displayPath)
{
    m_displayPath = _displayPath;
    m_displayPathHasBeenSet = true;
}

bool TaskTypeNotebookExt::DisplayPathHasBeenSet() const
{
    return m_displayPathHasBeenSet;
}

string TaskTypeNotebookExt::GetNotebookPath() const
{
    return m_notebookPath;
}

void TaskTypeNotebookExt::SetNotebookPath(const string& _notebookPath)
{
    m_notebookPath = _notebookPath;
    m_notebookPathHasBeenSet = true;
}

bool TaskTypeNotebookExt::NotebookPathHasBeenSet() const
{
    return m_notebookPathHasBeenSet;
}

string TaskTypeNotebookExt::GetNotebookAbsolutePath() const
{
    return m_notebookAbsolutePath;
}

void TaskTypeNotebookExt::SetNotebookAbsolutePath(const string& _notebookAbsolutePath)
{
    m_notebookAbsolutePath = _notebookAbsolutePath;
    m_notebookAbsolutePathHasBeenSet = true;
}

bool TaskTypeNotebookExt::NotebookAbsolutePathHasBeenSet() const
{
    return m_notebookAbsolutePathHasBeenSet;
}

