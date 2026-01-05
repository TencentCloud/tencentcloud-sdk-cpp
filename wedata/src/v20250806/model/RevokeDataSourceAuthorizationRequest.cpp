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

#include <tencentcloud/wedata/v20250806/model/RevokeDataSourceAuthorizationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

RevokeDataSourceAuthorizationRequest::RevokeDataSourceAuthorizationRequest() :
    m_dataSourceIdHasBeenSet(false),
    m_revokeProjectIdHasBeenSet(false),
    m_revokeUserHasBeenSet(false)
{
}

string RevokeDataSourceAuthorizationRequest::ToJsonString() const
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

    if (m_revokeProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RevokeProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_revokeProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_revokeUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RevokeUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_revokeUser.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RevokeDataSourceAuthorizationRequest::GetDataSourceId() const
{
    return m_dataSourceId;
}

void RevokeDataSourceAuthorizationRequest::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool RevokeDataSourceAuthorizationRequest::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string RevokeDataSourceAuthorizationRequest::GetRevokeProjectId() const
{
    return m_revokeProjectId;
}

void RevokeDataSourceAuthorizationRequest::SetRevokeProjectId(const string& _revokeProjectId)
{
    m_revokeProjectId = _revokeProjectId;
    m_revokeProjectIdHasBeenSet = true;
}

bool RevokeDataSourceAuthorizationRequest::RevokeProjectIdHasBeenSet() const
{
    return m_revokeProjectIdHasBeenSet;
}

string RevokeDataSourceAuthorizationRequest::GetRevokeUser() const
{
    return m_revokeUser;
}

void RevokeDataSourceAuthorizationRequest::SetRevokeUser(const string& _revokeUser)
{
    m_revokeUser = _revokeUser;
    m_revokeUserHasBeenSet = true;
}

bool RevokeDataSourceAuthorizationRequest::RevokeUserHasBeenSet() const
{
    return m_revokeUserHasBeenSet;
}


