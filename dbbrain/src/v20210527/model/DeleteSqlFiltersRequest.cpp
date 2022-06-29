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

#include <tencentcloud/dbbrain/v20210527/model/DeleteSqlFiltersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DeleteSqlFiltersRequest::DeleteSqlFiltersRequest() :
    m_instanceIdHasBeenSet(false),
    m_sessionTokenHasBeenSet(false),
    m_filterIdsHasBeenSet(false)
{
}

string DeleteSqlFiltersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionToken.c_str(), allocator).Move(), allocator);
    }

    if (m_filterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterIds.begin(); itr != m_filterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteSqlFiltersRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteSqlFiltersRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteSqlFiltersRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DeleteSqlFiltersRequest::GetSessionToken() const
{
    return m_sessionToken;
}

void DeleteSqlFiltersRequest::SetSessionToken(const string& _sessionToken)
{
    m_sessionToken = _sessionToken;
    m_sessionTokenHasBeenSet = true;
}

bool DeleteSqlFiltersRequest::SessionTokenHasBeenSet() const
{
    return m_sessionTokenHasBeenSet;
}

vector<int64_t> DeleteSqlFiltersRequest::GetFilterIds() const
{
    return m_filterIds;
}

void DeleteSqlFiltersRequest::SetFilterIds(const vector<int64_t>& _filterIds)
{
    m_filterIds = _filterIds;
    m_filterIdsHasBeenSet = true;
}

bool DeleteSqlFiltersRequest::FilterIdsHasBeenSet() const
{
    return m_filterIdsHasBeenSet;
}


