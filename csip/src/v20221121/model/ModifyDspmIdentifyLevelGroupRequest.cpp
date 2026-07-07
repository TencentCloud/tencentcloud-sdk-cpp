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

#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyLevelGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyDspmIdentifyLevelGroupRequest::ModifyDspmIdentifyLevelGroupRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_levelItemsHasBeenSet(false)
{
}

string ModifyDspmIdentifyLevelGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

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

    if (m_levelItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_levelItems.begin(); itr != m_levelItems.end(); ++itr, ++i)
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


uint64_t ModifyDspmIdentifyLevelGroupRequest::GetId() const
{
    return m_id;
}

void ModifyDspmIdentifyLevelGroupRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyDspmIdentifyLevelGroupRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyDspmIdentifyLevelGroupRequest::GetName() const
{
    return m_name;
}

void ModifyDspmIdentifyLevelGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyDspmIdentifyLevelGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> ModifyDspmIdentifyLevelGroupRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyDspmIdentifyLevelGroupRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyDspmIdentifyLevelGroupRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string ModifyDspmIdentifyLevelGroupRequest::GetDescription() const
{
    return m_description;
}

void ModifyDspmIdentifyLevelGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyDspmIdentifyLevelGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<DspmIdentifyLevelItem> ModifyDspmIdentifyLevelGroupRequest::GetLevelItems() const
{
    return m_levelItems;
}

void ModifyDspmIdentifyLevelGroupRequest::SetLevelItems(const vector<DspmIdentifyLevelItem>& _levelItems)
{
    m_levelItems = _levelItems;
    m_levelItemsHasBeenSet = true;
}

bool ModifyDspmIdentifyLevelGroupRequest::LevelItemsHasBeenSet() const
{
    return m_levelItemsHasBeenSet;
}


