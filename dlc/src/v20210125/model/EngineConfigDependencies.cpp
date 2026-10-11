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

#include <tencentcloud/dlc/v20210125/model/EngineConfigDependencies.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

EngineConfigDependencies::EngineConfigDependencies() :
    m_jarsHasBeenSet(false),
    m_filesHasBeenSet(false),
    m_archivesHasBeenSet(false),
    m_pyFilesHasBeenSet(false)
{
}

CoreInternalOutcome EngineConfigDependencies::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Jars") && !value["Jars"].IsNull())
    {
        if (!value["Jars"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EngineConfigDependencies.Jars` is not array type"));

        const rapidjson::Value &tmpValue = value["Jars"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_jars.push_back((*itr).GetString());
        }
        m_jarsHasBeenSet = true;
    }

    if (value.HasMember("Files") && !value["Files"].IsNull())
    {
        if (!value["Files"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EngineConfigDependencies.Files` is not array type"));

        const rapidjson::Value &tmpValue = value["Files"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_files.push_back((*itr).GetString());
        }
        m_filesHasBeenSet = true;
    }

    if (value.HasMember("Archives") && !value["Archives"].IsNull())
    {
        if (!value["Archives"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EngineConfigDependencies.Archives` is not array type"));

        const rapidjson::Value &tmpValue = value["Archives"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_archives.push_back((*itr).GetString());
        }
        m_archivesHasBeenSet = true;
    }

    if (value.HasMember("PyFiles") && !value["PyFiles"].IsNull())
    {
        if (!value["PyFiles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EngineConfigDependencies.PyFiles` is not array type"));

        const rapidjson::Value &tmpValue = value["PyFiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_pyFiles.push_back((*itr).GetString());
        }
        m_pyFilesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EngineConfigDependencies::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Jars";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_jars.begin(); itr != m_jars.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Files";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_files.begin(); itr != m_files.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_archivesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Archives";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_archives.begin(); itr != m_archives.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pyFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PyFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_pyFiles.begin(); itr != m_pyFiles.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> EngineConfigDependencies::GetJars() const
{
    return m_jars;
}

void EngineConfigDependencies::SetJars(const vector<string>& _jars)
{
    m_jars = _jars;
    m_jarsHasBeenSet = true;
}

bool EngineConfigDependencies::JarsHasBeenSet() const
{
    return m_jarsHasBeenSet;
}

vector<string> EngineConfigDependencies::GetFiles() const
{
    return m_files;
}

void EngineConfigDependencies::SetFiles(const vector<string>& _files)
{
    m_files = _files;
    m_filesHasBeenSet = true;
}

bool EngineConfigDependencies::FilesHasBeenSet() const
{
    return m_filesHasBeenSet;
}

vector<string> EngineConfigDependencies::GetArchives() const
{
    return m_archives;
}

void EngineConfigDependencies::SetArchives(const vector<string>& _archives)
{
    m_archives = _archives;
    m_archivesHasBeenSet = true;
}

bool EngineConfigDependencies::ArchivesHasBeenSet() const
{
    return m_archivesHasBeenSet;
}

vector<string> EngineConfigDependencies::GetPyFiles() const
{
    return m_pyFiles;
}

void EngineConfigDependencies::SetPyFiles(const vector<string>& _pyFiles)
{
    m_pyFiles = _pyFiles;
    m_pyFilesHasBeenSet = true;
}

bool EngineConfigDependencies::PyFilesHasBeenSet() const
{
    return m_pyFilesHasBeenSet;
}

