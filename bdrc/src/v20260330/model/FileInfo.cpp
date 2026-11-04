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

#include <tencentcloud/bdrc/v20260330/model/FileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

FileInfo::FileInfo() :
    m_pathHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_changeTimeHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome FileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.ModifyTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = value["ModifyTime"].GetInt64();
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("ChangeTime") && !value["ChangeTime"].IsNull())
    {
        if (!value["ChangeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.ChangeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_changeTime = value["ChangeTime"].GetInt64();
        m_changeTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyTime, allocator);
    }

    if (m_changeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_changeTime, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string FileInfo::GetPath() const
{
    return m_path;
}

void FileInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool FileInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

int64_t FileInfo::GetSize() const
{
    return m_size;
}

void FileInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool FileInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t FileInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void FileInfo::SetModifyTime(const int64_t& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool FileInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

int64_t FileInfo::GetChangeTime() const
{
    return m_changeTime;
}

void FileInfo::SetChangeTime(const int64_t& _changeTime)
{
    m_changeTime = _changeTime;
    m_changeTimeHasBeenSet = true;
}

bool FileInfo::ChangeTimeHasBeenSet() const
{
    return m_changeTimeHasBeenSet;
}

string FileInfo::GetType() const
{
    return m_type;
}

void FileInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool FileInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

