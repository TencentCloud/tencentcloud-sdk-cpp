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

#include <tencentcloud/vod/v20180717/model/FileVerifyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

FileVerifyInfo::FileVerifyInfo() :
    m_fileVerifyUrlHasBeenSet(false),
    m_fileVerifyDomainsHasBeenSet(false),
    m_fileVerifyNameHasBeenSet(false)
{
}

CoreInternalOutcome FileVerifyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileVerifyUrl") && !value["FileVerifyUrl"].IsNull())
    {
        if (!value["FileVerifyUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileVerifyInfo.FileVerifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileVerifyUrl = string(value["FileVerifyUrl"].GetString());
        m_fileVerifyUrlHasBeenSet = true;
    }

    if (value.HasMember("FileVerifyDomains") && !value["FileVerifyDomains"].IsNull())
    {
        if (!value["FileVerifyDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileVerifyInfo.FileVerifyDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["FileVerifyDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileVerifyDomains.push_back((*itr).GetString());
        }
        m_fileVerifyDomainsHasBeenSet = true;
    }

    if (value.HasMember("FileVerifyName") && !value["FileVerifyName"].IsNull())
    {
        if (!value["FileVerifyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileVerifyInfo.FileVerifyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileVerifyName = string(value["FileVerifyName"].GetString());
        m_fileVerifyNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileVerifyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileVerifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileVerifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileVerifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileVerifyDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileVerifyDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileVerifyDomains.begin(); itr != m_fileVerifyDomains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileVerifyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileVerifyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileVerifyName.c_str(), allocator).Move(), allocator);
    }

}


string FileVerifyInfo::GetFileVerifyUrl() const
{
    return m_fileVerifyUrl;
}

void FileVerifyInfo::SetFileVerifyUrl(const string& _fileVerifyUrl)
{
    m_fileVerifyUrl = _fileVerifyUrl;
    m_fileVerifyUrlHasBeenSet = true;
}

bool FileVerifyInfo::FileVerifyUrlHasBeenSet() const
{
    return m_fileVerifyUrlHasBeenSet;
}

vector<string> FileVerifyInfo::GetFileVerifyDomains() const
{
    return m_fileVerifyDomains;
}

void FileVerifyInfo::SetFileVerifyDomains(const vector<string>& _fileVerifyDomains)
{
    m_fileVerifyDomains = _fileVerifyDomains;
    m_fileVerifyDomainsHasBeenSet = true;
}

bool FileVerifyInfo::FileVerifyDomainsHasBeenSet() const
{
    return m_fileVerifyDomainsHasBeenSet;
}

string FileVerifyInfo::GetFileVerifyName() const
{
    return m_fileVerifyName;
}

void FileVerifyInfo::SetFileVerifyName(const string& _fileVerifyName)
{
    m_fileVerifyName = _fileVerifyName;
    m_fileVerifyNameHasBeenSet = true;
}

bool FileVerifyInfo::FileVerifyNameHasBeenSet() const
{
    return m_fileVerifyNameHasBeenSet;
}

