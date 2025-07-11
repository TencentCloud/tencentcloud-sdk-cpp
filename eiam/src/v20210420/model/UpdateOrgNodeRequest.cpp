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

#include <tencentcloud/eiam/v20210420/model/UpdateOrgNodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

UpdateOrgNodeRequest::UpdateOrgNodeRequest() :
    m_orgNodeIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_customizedOrgNodeIdHasBeenSet(false)
{
}

string UpdateOrgNodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_orgNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_customizedOrgNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomizedOrgNodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customizedOrgNodeId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateOrgNodeRequest::GetOrgNodeId() const
{
    return m_orgNodeId;
}

void UpdateOrgNodeRequest::SetOrgNodeId(const string& _orgNodeId)
{
    m_orgNodeId = _orgNodeId;
    m_orgNodeIdHasBeenSet = true;
}

bool UpdateOrgNodeRequest::OrgNodeIdHasBeenSet() const
{
    return m_orgNodeIdHasBeenSet;
}

string UpdateOrgNodeRequest::GetDisplayName() const
{
    return m_displayName;
}

void UpdateOrgNodeRequest::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool UpdateOrgNodeRequest::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string UpdateOrgNodeRequest::GetDescription() const
{
    return m_description;
}

void UpdateOrgNodeRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateOrgNodeRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateOrgNodeRequest::GetCustomizedOrgNodeId() const
{
    return m_customizedOrgNodeId;
}

void UpdateOrgNodeRequest::SetCustomizedOrgNodeId(const string& _customizedOrgNodeId)
{
    m_customizedOrgNodeId = _customizedOrgNodeId;
    m_customizedOrgNodeIdHasBeenSet = true;
}

bool UpdateOrgNodeRequest::CustomizedOrgNodeIdHasBeenSet() const
{
    return m_customizedOrgNodeIdHasBeenSet;
}


