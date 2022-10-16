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

#include <tencentcloud/faceid/v20180301/model/FileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

FileInfo::FileInfo() :
    m_urlHasBeenSet(false),
    m_mD5HasBeenSet(false),
    m_sizeHasBeenSet(false)
{
}

CoreInternalOutcome FileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("MD5") && !value["MD5"].IsNull())
    {
        if (!value["MD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.MD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mD5 = string(value["MD5"].GetString());
        m_mD5HasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

void FileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_mD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mD5.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

}


string FileInfo::GetUrl() const
{
    return m_url;
}

void FileInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool FileInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string FileInfo::GetMD5() const
{
    return m_mD5;
}

void FileInfo::SetMD5(const string& _mD5)
{
    m_mD5 = _mD5;
    m_mD5HasBeenSet = true;
}

bool FileInfo::MD5HasBeenSet() const
{
    return m_mD5HasBeenSet;
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

