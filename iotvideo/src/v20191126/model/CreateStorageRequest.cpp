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

#include <tencentcloud/iotvideo/v20191126/model/CreateStorageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

CreateStorageRequest::CreateStorageRequest() :
    m_pkgIdHasBeenSet(false),
    m_tidHasBeenSet(false),
    m_userTagHasBeenSet(false)
{
}

string CreateStorageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_userTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userTag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStorageRequest::GetPkgId() const
{
    return m_pkgId;
}

void CreateStorageRequest::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool CreateStorageRequest::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string CreateStorageRequest::GetTid() const
{
    return m_tid;
}

void CreateStorageRequest::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool CreateStorageRequest::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

string CreateStorageRequest::GetUserTag() const
{
    return m_userTag;
}

void CreateStorageRequest::SetUserTag(const string& _userTag)
{
    m_userTag = _userTag;
    m_userTagHasBeenSet = true;
}

bool CreateStorageRequest::UserTagHasBeenSet() const
{
    return m_userTagHasBeenSet;
}


