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

#include <tencentcloud/vpc/v20170312/model/CreateServiceTemplateGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateServiceTemplateGroupRequest::CreateServiceTemplateGroupRequest() :
    m_serviceTemplateGroupNameHasBeenSet(false),
    m_serviceTemplateIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateServiceTemplateGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceTemplateGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceTemplateGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTemplateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceTemplateIds.begin(); itr != m_serviceTemplateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateServiceTemplateGroupRequest::GetServiceTemplateGroupName() const
{
    return m_serviceTemplateGroupName;
}

void CreateServiceTemplateGroupRequest::SetServiceTemplateGroupName(const string& _serviceTemplateGroupName)
{
    m_serviceTemplateGroupName = _serviceTemplateGroupName;
    m_serviceTemplateGroupNameHasBeenSet = true;
}

bool CreateServiceTemplateGroupRequest::ServiceTemplateGroupNameHasBeenSet() const
{
    return m_serviceTemplateGroupNameHasBeenSet;
}

vector<string> CreateServiceTemplateGroupRequest::GetServiceTemplateIds() const
{
    return m_serviceTemplateIds;
}

void CreateServiceTemplateGroupRequest::SetServiceTemplateIds(const vector<string>& _serviceTemplateIds)
{
    m_serviceTemplateIds = _serviceTemplateIds;
    m_serviceTemplateIdsHasBeenSet = true;
}

bool CreateServiceTemplateGroupRequest::ServiceTemplateIdsHasBeenSet() const
{
    return m_serviceTemplateIdsHasBeenSet;
}

vector<Tag> CreateServiceTemplateGroupRequest::GetTags() const
{
    return m_tags;
}

void CreateServiceTemplateGroupRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateServiceTemplateGroupRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


