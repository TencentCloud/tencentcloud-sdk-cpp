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

#include <tencentcloud/mariadb/v20170312/model/LogFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

LogFileInfo::LogFileInfo() :
    m_mtimeHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
}

CoreInternalOutcome LogFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mtime") && !value["Mtime"].IsNull())
    {
        if (!value["Mtime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogFileInfo.Mtime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mtime = value["Mtime"].GetUint64();
        m_mtimeHasBeenSet = true;
    }

    if (value.HasMember("Length") && !value["Length"].IsNull())
    {
        if (!value["Length"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogFileInfo.Length` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_length = value["Length"].GetUint64();
        m_lengthHasBeenSet = true;
    }

    if (value.HasMember("Uri") && !value["Uri"].IsNull())
    {
        if (!value["Uri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogFileInfo.Uri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uri = string(value["Uri"].GetString());
        m_uriHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogFileInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mtimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mtime, allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_length, allocator);
    }

    if (m_uriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uri.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t LogFileInfo::GetMtime() const
{
    return m_mtime;
}

void LogFileInfo::SetMtime(const uint64_t& _mtime)
{
    m_mtime = _mtime;
    m_mtimeHasBeenSet = true;
}

bool LogFileInfo::MtimeHasBeenSet() const
{
    return m_mtimeHasBeenSet;
}

uint64_t LogFileInfo::GetLength() const
{
    return m_length;
}

void LogFileInfo::SetLength(const uint64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool LogFileInfo::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

string LogFileInfo::GetUri() const
{
    return m_uri;
}

void LogFileInfo::SetUri(const string& _uri)
{
    m_uri = _uri;
    m_uriHasBeenSet = true;
}

bool LogFileInfo::UriHasBeenSet() const
{
    return m_uriHasBeenSet;
}

string LogFileInfo::GetFileName() const
{
    return m_fileName;
}

void LogFileInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool LogFileInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

