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

#include <tencentcloud/iotexplorer/v20190423/model/GetProjectListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

GetProjectListRequest::GetProjectListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_includesHasBeenSet(false),
    m_projectNameHasBeenSet(false)
{
}

string GetProjectListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_includesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Includes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includes.begin(); itr != m_includes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t GetProjectListRequest::GetOffset() const
{
    return m_offset;
}

void GetProjectListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetProjectListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t GetProjectListRequest::GetLimit() const
{
    return m_limit;
}

void GetProjectListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetProjectListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string GetProjectListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void GetProjectListRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool GetProjectListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string GetProjectListRequest::GetProjectId() const
{
    return m_projectId;
}

void GetProjectListRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetProjectListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GetProjectListRequest::GetProductId() const
{
    return m_productId;
}

void GetProjectListRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool GetProjectListRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

vector<string> GetProjectListRequest::GetIncludes() const
{
    return m_includes;
}

void GetProjectListRequest::SetIncludes(const vector<string>& _includes)
{
    m_includes = _includes;
    m_includesHasBeenSet = true;
}

bool GetProjectListRequest::IncludesHasBeenSet() const
{
    return m_includesHasBeenSet;
}

string GetProjectListRequest::GetProjectName() const
{
    return m_projectName;
}

void GetProjectListRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool GetProjectListRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}


