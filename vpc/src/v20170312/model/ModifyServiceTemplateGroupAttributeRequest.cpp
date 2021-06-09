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

#include <tencentcloud/vpc/v20170312/model/ModifyServiceTemplateGroupAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyServiceTemplateGroupAttributeRequest::ModifyServiceTemplateGroupAttributeRequest() :
    m_serviceTemplateGroupIdHasBeenSet(false),
    m_serviceTemplateGroupNameHasBeenSet(false),
    m_serviceTemplateIdsHasBeenSet(false)
{
}

string ModifyServiceTemplateGroupAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceTemplateGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceTemplateGroupId.c_str(), allocator).Move(), allocator);
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyServiceTemplateGroupAttributeRequest::GetServiceTemplateGroupId() const
{
    return m_serviceTemplateGroupId;
}

void ModifyServiceTemplateGroupAttributeRequest::SetServiceTemplateGroupId(const string& _serviceTemplateGroupId)
{
    m_serviceTemplateGroupId = _serviceTemplateGroupId;
    m_serviceTemplateGroupIdHasBeenSet = true;
}

bool ModifyServiceTemplateGroupAttributeRequest::ServiceTemplateGroupIdHasBeenSet() const
{
    return m_serviceTemplateGroupIdHasBeenSet;
}

string ModifyServiceTemplateGroupAttributeRequest::GetServiceTemplateGroupName() const
{
    return m_serviceTemplateGroupName;
}

void ModifyServiceTemplateGroupAttributeRequest::SetServiceTemplateGroupName(const string& _serviceTemplateGroupName)
{
    m_serviceTemplateGroupName = _serviceTemplateGroupName;
    m_serviceTemplateGroupNameHasBeenSet = true;
}

bool ModifyServiceTemplateGroupAttributeRequest::ServiceTemplateGroupNameHasBeenSet() const
{
    return m_serviceTemplateGroupNameHasBeenSet;
}

vector<string> ModifyServiceTemplateGroupAttributeRequest::GetServiceTemplateIds() const
{
    return m_serviceTemplateIds;
}

void ModifyServiceTemplateGroupAttributeRequest::SetServiceTemplateIds(const vector<string>& _serviceTemplateIds)
{
    m_serviceTemplateIds = _serviceTemplateIds;
    m_serviceTemplateIdsHasBeenSet = true;
}

bool ModifyServiceTemplateGroupAttributeRequest::ServiceTemplateIdsHasBeenSet() const
{
    return m_serviceTemplateIdsHasBeenSet;
}


