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

#include <tencentcloud/cls/v20201016/model/HostFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

HostFileInfo::HostFileInfo() :
    m_logPathHasBeenSet(false),
    m_filePatternHasBeenSet(false),
    m_customLabelsHasBeenSet(false)
{
}

CoreInternalOutcome HostFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogPath") && !value["LogPath"].IsNull())
    {
        if (!value["LogPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostFileInfo.LogPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logPath = string(value["LogPath"].GetString());
        m_logPathHasBeenSet = true;
    }

    if (value.HasMember("FilePattern") && !value["FilePattern"].IsNull())
    {
        if (!value["FilePattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostFileInfo.FilePattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePattern = string(value["FilePattern"].GetString());
        m_filePatternHasBeenSet = true;
    }

    if (value.HasMember("CustomLabels") && !value["CustomLabels"].IsNull())
    {
        if (!value["CustomLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostFileInfo.CustomLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customLabels.push_back((*itr).GetString());
        }
        m_customLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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


string HostFileInfo::GetLogPath() const
{
    return m_logPath;
}

void HostFileInfo::SetLogPath(const string& _logPath)
{
    m_logPath = _logPath;
    m_logPathHasBeenSet = true;
}

bool HostFileInfo::LogPathHasBeenSet() const
{
    return m_logPathHasBeenSet;
}

string HostFileInfo::GetFilePattern() const
{
    return m_filePattern;
}

void HostFileInfo::SetFilePattern(const string& _filePattern)
{
    m_filePattern = _filePattern;
    m_filePatternHasBeenSet = true;
}

bool HostFileInfo::FilePatternHasBeenSet() const
{
    return m_filePatternHasBeenSet;
}

vector<string> HostFileInfo::GetCustomLabels() const
{
    return m_customLabels;
}

void HostFileInfo::SetCustomLabels(const vector<string>& _customLabels)
{
    m_customLabels = _customLabels;
    m_customLabelsHasBeenSet = true;
}

bool HostFileInfo::CustomLabelsHasBeenSet() const
{
    return m_customLabelsHasBeenSet;
}

