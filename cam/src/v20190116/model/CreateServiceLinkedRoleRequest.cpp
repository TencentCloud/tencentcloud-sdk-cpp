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

#include <tencentcloud/cam/v20190116/model/CreateServiceLinkedRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

CreateServiceLinkedRoleRequest::CreateServiceLinkedRoleRequest() :
    m_qCSServiceNameHasBeenSet(false),
    m_customSuffixHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateServiceLinkedRoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_qCSServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QCSServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_qCSServiceName.begin(); itr != m_qCSServiceName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customSuffixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomSuffix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customSuffix.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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


vector<string> CreateServiceLinkedRoleRequest::GetQCSServiceName() const
{
    return m_qCSServiceName;
}

void CreateServiceLinkedRoleRequest::SetQCSServiceName(const vector<string>& _qCSServiceName)
{
    m_qCSServiceName = _qCSServiceName;
    m_qCSServiceNameHasBeenSet = true;
}

bool CreateServiceLinkedRoleRequest::QCSServiceNameHasBeenSet() const
{
    return m_qCSServiceNameHasBeenSet;
}

string CreateServiceLinkedRoleRequest::GetCustomSuffix() const
{
    return m_customSuffix;
}

void CreateServiceLinkedRoleRequest::SetCustomSuffix(const string& _customSuffix)
{
    m_customSuffix = _customSuffix;
    m_customSuffixHasBeenSet = true;
}

bool CreateServiceLinkedRoleRequest::CustomSuffixHasBeenSet() const
{
    return m_customSuffixHasBeenSet;
}

string CreateServiceLinkedRoleRequest::GetDescription() const
{
    return m_description;
}

void CreateServiceLinkedRoleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateServiceLinkedRoleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<RoleTags> CreateServiceLinkedRoleRequest::GetTags() const
{
    return m_tags;
}

void CreateServiceLinkedRoleRequest::SetTags(const vector<RoleTags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateServiceLinkedRoleRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


