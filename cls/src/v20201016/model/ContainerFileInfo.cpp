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

#include <tencentcloud/cls/v20201016/model/ContainerFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ContainerFileInfo::ContainerFileInfo() :
    m_namespaceHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_logPathHasBeenSet(false),
    m_filePatternHasBeenSet(false),
    m_filePathsHasBeenSet(false),
    m_includeLabelsHasBeenSet(false),
    m_workLoadHasBeenSet(false),
    m_excludeNamespaceHasBeenSet(false),
    m_excludeLabelsHasBeenSet(false),
    m_customLabelsHasBeenSet(false)
{
}

CoreInternalOutcome ContainerFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerFileInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerFileInfo.Container` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_container = string(value["Container"].GetString());
        m_containerHasBeenSet = true;
    }

    if (value.HasMember("LogPath") && !value["LogPath"].IsNull())
    {
        if (!value["LogPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerFileInfo.LogPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logPath = string(value["LogPath"].GetString());
        m_logPathHasBeenSet = true;
    }

    if (value.HasMember("FilePattern") && !value["FilePattern"].IsNull())
    {
        if (!value["FilePattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerFileInfo.FilePattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePattern = string(value["FilePattern"].GetString());
        m_filePatternHasBeenSet = true;
    }

    if (value.HasMember("FilePaths") && !value["FilePaths"].IsNull())
    {
        if (!value["FilePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerFileInfo.FilePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["FilePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilePathInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filePaths.push_back(item);
        }
        m_filePathsHasBeenSet = true;
    }

    if (value.HasMember("IncludeLabels") && !value["IncludeLabels"].IsNull())
    {
        if (!value["IncludeLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerFileInfo.IncludeLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["IncludeLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_includeLabels.push_back((*itr).GetString());
        }
        m_includeLabelsHasBeenSet = true;
    }

    if (value.HasMember("WorkLoad") && !value["WorkLoad"].IsNull())
    {
        if (!value["WorkLoad"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerFileInfo.WorkLoad` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workLoad.Deserialize(value["WorkLoad"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workLoadHasBeenSet = true;
    }

    if (value.HasMember("ExcludeNamespace") && !value["ExcludeNamespace"].IsNull())
    {
        if (!value["ExcludeNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerFileInfo.ExcludeNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_excludeNamespace = string(value["ExcludeNamespace"].GetString());
        m_excludeNamespaceHasBeenSet = true;
    }

    if (value.HasMember("ExcludeLabels") && !value["ExcludeLabels"].IsNull())
    {
        if (!value["ExcludeLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerFileInfo.ExcludeLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludeLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeLabels.push_back((*itr).GetString());
        }
        m_excludeLabelsHasBeenSet = true;
    }

    if (value.HasMember("CustomLabels") && !value["CustomLabels"].IsNull())
    {
        if (!value["CustomLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerFileInfo.CustomLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customLabels.push_back((*itr).GetString());
        }
        m_customLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_container.c_str(), allocator).Move(), allocator);
    }

    if (m_logPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logPath.c_str(), allocator).Move(), allocator);
    }

    if (m_filePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePattern.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filePaths.begin(); itr != m_filePaths.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_includeLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includeLabels.begin(); itr != m_includeLabels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workLoad.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_excludeNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_excludeNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_excludeLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeLabels.begin(); itr != m_excludeLabels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customLabels.begin(); itr != m_customLabels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ContainerFileInfo::GetNamespace() const
{
    return m_namespace;
}

void ContainerFileInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ContainerFileInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ContainerFileInfo::GetContainer() const
{
    return m_container;
}

void ContainerFileInfo::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool ContainerFileInfo::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

string ContainerFileInfo::GetLogPath() const
{
    return m_logPath;
}

void ContainerFileInfo::SetLogPath(const string& _logPath)
{
    m_logPath = _logPath;
    m_logPathHasBeenSet = true;
}

bool ContainerFileInfo::LogPathHasBeenSet() const
{
    return m_logPathHasBeenSet;
}

string ContainerFileInfo::GetFilePattern() const
{
    return m_filePattern;
}

void ContainerFileInfo::SetFilePattern(const string& _filePattern)
{
    m_filePattern = _filePattern;
    m_filePatternHasBeenSet = true;
}

bool ContainerFileInfo::FilePatternHasBeenSet() const
{
    return m_filePatternHasBeenSet;
}

vector<FilePathInfo> ContainerFileInfo::GetFilePaths() const
{
    return m_filePaths;
}

void ContainerFileInfo::SetFilePaths(const vector<FilePathInfo>& _filePaths)
{
    m_filePaths = _filePaths;
    m_filePathsHasBeenSet = true;
}

bool ContainerFileInfo::FilePathsHasBeenSet() const
{
    return m_filePathsHasBeenSet;
}

vector<string> ContainerFileInfo::GetIncludeLabels() const
{
    return m_includeLabels;
}

void ContainerFileInfo::SetIncludeLabels(const vector<string>& _includeLabels)
{
    m_includeLabels = _includeLabels;
    m_includeLabelsHasBeenSet = true;
}

bool ContainerFileInfo::IncludeLabelsHasBeenSet() const
{
    return m_includeLabelsHasBeenSet;
}

ContainerWorkLoadInfo ContainerFileInfo::GetWorkLoad() const
{
    return m_workLoad;
}

void ContainerFileInfo::SetWorkLoad(const ContainerWorkLoadInfo& _workLoad)
{
    m_workLoad = _workLoad;
    m_workLoadHasBeenSet = true;
}

bool ContainerFileInfo::WorkLoadHasBeenSet() const
{
    return m_workLoadHasBeenSet;
}

string ContainerFileInfo::GetExcludeNamespace() const
{
    return m_excludeNamespace;
}

void ContainerFileInfo::SetExcludeNamespace(const string& _excludeNamespace)
{
    m_excludeNamespace = _excludeNamespace;
    m_excludeNamespaceHasBeenSet = true;
}

bool ContainerFileInfo::ExcludeNamespaceHasBeenSet() const
{
    return m_excludeNamespaceHasBeenSet;
}

vector<string> ContainerFileInfo::GetExcludeLabels() const
{
    return m_excludeLabels;
}

void ContainerFileInfo::SetExcludeLabels(const vector<string>& _excludeLabels)
{
    m_excludeLabels = _excludeLabels;
    m_excludeLabelsHasBeenSet = true;
}

bool ContainerFileInfo::ExcludeLabelsHasBeenSet() const
{
    return m_excludeLabelsHasBeenSet;
}

vector<string> ContainerFileInfo::GetCustomLabels() const
{
    return m_customLabels;
}

void ContainerFileInfo::SetCustomLabels(const vector<string>& _customLabels)
{
    m_customLabels = _customLabels;
    m_customLabelsHasBeenSet = true;
}

bool ContainerFileInfo::CustomLabelsHasBeenSet() const
{
    return m_customLabelsHasBeenSet;
}

