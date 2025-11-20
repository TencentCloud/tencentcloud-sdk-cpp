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

#include <tencentcloud/bh/v20230418/model/CreateUserDirectoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

CreateUserDirectoryRequest::CreateUserDirectoryRequest() :
    m_dirIdHasBeenSet(false),
    m_dirNameHasBeenSet(false),
    m_userOrgSetHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_userCountHasBeenSet(false)
{
}

string CreateUserDirectoryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dirIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dirId, allocator);
    }

    if (m_dirNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dirName.c_str(), allocator).Move(), allocator);
    }

    if (m_userOrgSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserOrgSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userOrgSet.begin(); itr != m_userOrgSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_source, allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_userCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_userCount, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateUserDirectoryRequest::GetDirId() const
{
    return m_dirId;
}

void CreateUserDirectoryRequest::SetDirId(const uint64_t& _dirId)
{
    m_dirId = _dirId;
    m_dirIdHasBeenSet = true;
}

bool CreateUserDirectoryRequest::DirIdHasBeenSet() const
{
    return m_dirIdHasBeenSet;
}

string CreateUserDirectoryRequest::GetDirName() const
{
    return m_dirName;
}

void CreateUserDirectoryRequest::SetDirName(const string& _dirName)
{
    m_dirName = _dirName;
    m_dirNameHasBeenSet = true;
}

bool CreateUserDirectoryRequest::DirNameHasBeenSet() const
{
    return m_dirNameHasBeenSet;
}

vector<UserOrg> CreateUserDirectoryRequest::GetUserOrgSet() const
{
    return m_userOrgSet;
}

void CreateUserDirectoryRequest::SetUserOrgSet(const vector<UserOrg>& _userOrgSet)
{
    m_userOrgSet = _userOrgSet;
    m_userOrgSetHasBeenSet = true;
}

bool CreateUserDirectoryRequest::UserOrgSetHasBeenSet() const
{
    return m_userOrgSetHasBeenSet;
}

uint64_t CreateUserDirectoryRequest::GetSource() const
{
    return m_source;
}

void CreateUserDirectoryRequest::SetSource(const uint64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateUserDirectoryRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string CreateUserDirectoryRequest::GetSourceName() const
{
    return m_sourceName;
}

void CreateUserDirectoryRequest::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool CreateUserDirectoryRequest::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

uint64_t CreateUserDirectoryRequest::GetUserCount() const
{
    return m_userCount;
}

void CreateUserDirectoryRequest::SetUserCount(const uint64_t& _userCount)
{
    m_userCount = _userCount;
    m_userCountHasBeenSet = true;
}

bool CreateUserDirectoryRequest::UserCountHasBeenSet() const
{
    return m_userCountHasBeenSet;
}


