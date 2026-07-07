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

#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateDspmIdentifyComplianceGroupRequest::CreateDspmIdentifyComplianceGroupRequest() :
    m_nameHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_levelGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string CreateDspmIdentifyComplianceGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_levelGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_levelGroupId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDspmIdentifyComplianceGroupRequest::GetName() const
{
    return m_name;
}

void CreateDspmIdentifyComplianceGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDspmIdentifyComplianceGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> CreateDspmIdentifyComplianceGroupRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateDspmIdentifyComplianceGroupRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateDspmIdentifyComplianceGroupRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string CreateDspmIdentifyComplianceGroupRequest::GetDescription() const
{
    return m_description;
}

void CreateDspmIdentifyComplianceGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateDspmIdentifyComplianceGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t CreateDspmIdentifyComplianceGroupRequest::GetLevelGroupId() const
{
    return m_levelGroupId;
}

void CreateDspmIdentifyComplianceGroupRequest::SetLevelGroupId(const uint64_t& _levelGroupId)
{
    m_levelGroupId = _levelGroupId;
    m_levelGroupIdHasBeenSet = true;
}

bool CreateDspmIdentifyComplianceGroupRequest::LevelGroupIdHasBeenSet() const
{
    return m_levelGroupIdHasBeenSet;
}

uint64_t CreateDspmIdentifyComplianceGroupRequest::GetStatus() const
{
    return m_status;
}

void CreateDspmIdentifyComplianceGroupRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateDspmIdentifyComplianceGroupRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


