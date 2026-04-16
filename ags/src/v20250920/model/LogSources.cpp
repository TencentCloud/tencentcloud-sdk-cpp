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

#include <tencentcloud/ags/v20250920/model/LogSources.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

LogSources::LogSources() :
    m_filesHasBeenSet(false)
{
}

CoreInternalOutcome LogSources::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Files") && !value["Files"].IsNull())
    {
        if (!value["Files"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogSources.Files` is not array type"));

        const rapidjson::Value &tmpValue = value["Files"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_files.push_back((*itr).GetString());
        }
        m_filesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogSources::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

}


vector<string> LogSources::GetFiles() const
{
    return m_files;
}

void LogSources::SetFiles(const vector<string>& _files)
{
    m_files = _files;
    m_filesHasBeenSet = true;
}

bool LogSources::FilesHasBeenSet() const
{
    return m_filesHasBeenSet;
}

