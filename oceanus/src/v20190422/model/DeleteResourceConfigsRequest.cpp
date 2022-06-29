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

#include <tencentcloud/oceanus/v20190422/model/DeleteResourceConfigsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

DeleteResourceConfigsRequest::DeleteResourceConfigsRequest() :
    m_resourceIdHasBeenSet(false),
    m_resourceConfigVersionsHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false)
{
}

string DeleteResourceConfigsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigVersions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceConfigVersions.begin(); itr != m_resourceConfigVersions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteResourceConfigsRequest::GetResourceId() const
{
    return m_resourceId;
}

void DeleteResourceConfigsRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DeleteResourceConfigsRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

vector<int64_t> DeleteResourceConfigsRequest::GetResourceConfigVersions() const
{
    return m_resourceConfigVersions;
}

void DeleteResourceConfigsRequest::SetResourceConfigVersions(const vector<int64_t>& _resourceConfigVersions)
{
    m_resourceConfigVersions = _resourceConfigVersions;
    m_resourceConfigVersionsHasBeenSet = true;
}

bool DeleteResourceConfigsRequest::ResourceConfigVersionsHasBeenSet() const
{
    return m_resourceConfigVersionsHasBeenSet;
}

string DeleteResourceConfigsRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void DeleteResourceConfigsRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool DeleteResourceConfigsRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}


