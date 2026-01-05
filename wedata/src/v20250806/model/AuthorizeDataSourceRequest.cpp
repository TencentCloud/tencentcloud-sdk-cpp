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

#include <tencentcloud/wedata/v20250806/model/AuthorizeDataSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

AuthorizeDataSourceRequest::AuthorizeDataSourceRequest() :
    m_dataSourceIdHasBeenSet(false),
    m_authProjectIdHasBeenSet(false),
    m_authUsersHasBeenSet(false)
{
}

string AuthorizeDataSourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_authProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_authUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthUsers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authUsers.begin(); itr != m_authUsers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AuthorizeDataSourceRequest::GetDataSourceId() const
{
    return m_dataSourceId;
}

void AuthorizeDataSourceRequest::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool AuthorizeDataSourceRequest::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string AuthorizeDataSourceRequest::GetAuthProjectId() const
{
    return m_authProjectId;
}

void AuthorizeDataSourceRequest::SetAuthProjectId(const string& _authProjectId)
{
    m_authProjectId = _authProjectId;
    m_authProjectIdHasBeenSet = true;
}

bool AuthorizeDataSourceRequest::AuthProjectIdHasBeenSet() const
{
    return m_authProjectIdHasBeenSet;
}

vector<string> AuthorizeDataSourceRequest::GetAuthUsers() const
{
    return m_authUsers;
}

void AuthorizeDataSourceRequest::SetAuthUsers(const vector<string>& _authUsers)
{
    m_authUsers = _authUsers;
    m_authUsersHasBeenSet = true;
}

bool AuthorizeDataSourceRequest::AuthUsersHasBeenSet() const
{
    return m_authUsersHasBeenSet;
}


