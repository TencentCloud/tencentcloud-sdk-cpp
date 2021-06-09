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

#include <tencentcloud/chdfs/v20201112/model/CreateAccessGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

CreateAccessGroupRequest::CreateAccessGroupRequest() :
    m_accessGroupNameHasBeenSet(false),
    m_vpcTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateAccessGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vpcType, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
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


string CreateAccessGroupRequest::GetAccessGroupName() const
{
    return m_accessGroupName;
}

void CreateAccessGroupRequest::SetAccessGroupName(const string& _accessGroupName)
{
    m_accessGroupName = _accessGroupName;
    m_accessGroupNameHasBeenSet = true;
}

bool CreateAccessGroupRequest::AccessGroupNameHasBeenSet() const
{
    return m_accessGroupNameHasBeenSet;
}

uint64_t CreateAccessGroupRequest::GetVpcType() const
{
    return m_vpcType;
}

void CreateAccessGroupRequest::SetVpcType(const uint64_t& _vpcType)
{
    m_vpcType = _vpcType;
    m_vpcTypeHasBeenSet = true;
}

bool CreateAccessGroupRequest::VpcTypeHasBeenSet() const
{
    return m_vpcTypeHasBeenSet;
}

string CreateAccessGroupRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateAccessGroupRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateAccessGroupRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateAccessGroupRequest::GetDescription() const
{
    return m_description;
}

void CreateAccessGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAccessGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


