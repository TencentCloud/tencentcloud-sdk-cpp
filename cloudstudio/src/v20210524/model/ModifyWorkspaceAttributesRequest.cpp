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

#include <tencentcloud/cloudstudio/v20210524/model/ModifyWorkspaceAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

ModifyWorkspaceAttributesRequest::ModifyWorkspaceAttributesRequest() :
    m_cloudStudioSessionTeamHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_priceIdHasBeenSet(false)
{
}

string ModifyWorkspaceAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cloudStudioSessionTeamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudStudioSessionTeam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudStudioSessionTeam.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_priceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priceId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyWorkspaceAttributesRequest::GetCloudStudioSessionTeam() const
{
    return m_cloudStudioSessionTeam;
}

void ModifyWorkspaceAttributesRequest::SetCloudStudioSessionTeam(const string& _cloudStudioSessionTeam)
{
    m_cloudStudioSessionTeam = _cloudStudioSessionTeam;
    m_cloudStudioSessionTeamHasBeenSet = true;
}

bool ModifyWorkspaceAttributesRequest::CloudStudioSessionTeamHasBeenSet() const
{
    return m_cloudStudioSessionTeamHasBeenSet;
}

int64_t ModifyWorkspaceAttributesRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ModifyWorkspaceAttributesRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ModifyWorkspaceAttributesRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string ModifyWorkspaceAttributesRequest::GetName() const
{
    return m_name;
}

void ModifyWorkspaceAttributesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyWorkspaceAttributesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyWorkspaceAttributesRequest::GetDescription() const
{
    return m_description;
}

void ModifyWorkspaceAttributesRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyWorkspaceAttributesRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ModifyWorkspaceAttributesRequest::GetPriceId() const
{
    return m_priceId;
}

void ModifyWorkspaceAttributesRequest::SetPriceId(const int64_t& _priceId)
{
    m_priceId = _priceId;
    m_priceIdHasBeenSet = true;
}

bool ModifyWorkspaceAttributesRequest::PriceIdHasBeenSet() const
{
    return m_priceIdHasBeenSet;
}


