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

#include <tencentcloud/smh/v20210712/model/CreateUserLifecycleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Smh::V20210712::Model;
using namespace std;

CreateUserLifecycleRequest::CreateUserLifecycleRequest() :
    m_libraryIdHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_destroyTimeHasBeenSet(false)
{
}

string CreateUserLifecycleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_libraryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_libraryId.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isolateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_destroyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destroyTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateUserLifecycleRequest::GetLibraryId() const
{
    return m_libraryId;
}

void CreateUserLifecycleRequest::SetLibraryId(const string& _libraryId)
{
    m_libraryId = _libraryId;
    m_libraryIdHasBeenSet = true;
}

bool CreateUserLifecycleRequest::LibraryIdHasBeenSet() const
{
    return m_libraryIdHasBeenSet;
}

UserFilter CreateUserLifecycleRequest::GetFilter() const
{
    return m_filter;
}

void CreateUserLifecycleRequest::SetFilter(const UserFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool CreateUserLifecycleRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

string CreateUserLifecycleRequest::GetIsolateTime() const
{
    return m_isolateTime;
}

void CreateUserLifecycleRequest::SetIsolateTime(const string& _isolateTime)
{
    m_isolateTime = _isolateTime;
    m_isolateTimeHasBeenSet = true;
}

bool CreateUserLifecycleRequest::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

string CreateUserLifecycleRequest::GetDestroyTime() const
{
    return m_destroyTime;
}

void CreateUserLifecycleRequest::SetDestroyTime(const string& _destroyTime)
{
    m_destroyTime = _destroyTime;
    m_destroyTimeHasBeenSet = true;
}

bool CreateUserLifecycleRequest::DestroyTimeHasBeenSet() const
{
    return m_destroyTimeHasBeenSet;
}


