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

#include <tencentcloud/chdfs/v20201112/model/ModifyAccessGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

ModifyAccessGroupRequest::ModifyAccessGroupRequest() :
    m_accessGroupIdHasBeenSet(false),
    m_accessGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string ModifyAccessGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAccessGroupRequest::GetAccessGroupId() const
{
    return m_accessGroupId;
}

void ModifyAccessGroupRequest::SetAccessGroupId(const string& _accessGroupId)
{
    m_accessGroupId = _accessGroupId;
    m_accessGroupIdHasBeenSet = true;
}

bool ModifyAccessGroupRequest::AccessGroupIdHasBeenSet() const
{
    return m_accessGroupIdHasBeenSet;
}

string ModifyAccessGroupRequest::GetAccessGroupName() const
{
    return m_accessGroupName;
}

void ModifyAccessGroupRequest::SetAccessGroupName(const string& _accessGroupName)
{
    m_accessGroupName = _accessGroupName;
    m_accessGroupNameHasBeenSet = true;
}

bool ModifyAccessGroupRequest::AccessGroupNameHasBeenSet() const
{
    return m_accessGroupNameHasBeenSet;
}

string ModifyAccessGroupRequest::GetDescription() const
{
    return m_description;
}

void ModifyAccessGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyAccessGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


