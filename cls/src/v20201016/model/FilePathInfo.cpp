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

#include <tencentcloud/cls/v20201016/model/FilePathInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

FilePathInfo::FilePathInfo() :
    m_pathHasBeenSet(false),
    m_fileHasBeenSet(false)
{
}

CoreInternalOutcome FilePathInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilePathInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("File") && !value["File"].IsNull())
    {
        if (!value["File"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilePathInfo.File` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_file = string(value["File"].GetString());
        m_fileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FilePathInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_fileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "File";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_file.c_str(), allocator).Move(), allocator);
    }

}


string FilePathInfo::GetPath() const
{
    return m_path;
}

void FilePathInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool FilePathInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string FilePathInfo::GetFile() const
{
    return m_file;
}

void FilePathInfo::SetFile(const string& _file)
{
    m_file = _file;
    m_fileHasBeenSet = true;
}

bool FilePathInfo::FileHasBeenSet() const
{
    return m_fileHasBeenSet;
}

