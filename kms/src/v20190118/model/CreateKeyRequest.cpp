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

#include <tencentcloud/kms/v20190118/model/CreateKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

CreateKeyRequest::CreateKeyRequest() :
    m_aliasHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_keyUsageHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_hsmClusterIdHasBeenSet(false)
{
}

string CreateKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_keyUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyUsage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
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

    if (m_hsmClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HsmClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hsmClusterId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateKeyRequest::GetAlias() const
{
    return m_alias;
}

void CreateKeyRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool CreateKeyRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string CreateKeyRequest::GetDescription() const
{
    return m_description;
}

void CreateKeyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateKeyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateKeyRequest::GetKeyUsage() const
{
    return m_keyUsage;
}

void CreateKeyRequest::SetKeyUsage(const string& _keyUsage)
{
    m_keyUsage = _keyUsage;
    m_keyUsageHasBeenSet = true;
}

bool CreateKeyRequest::KeyUsageHasBeenSet() const
{
    return m_keyUsageHasBeenSet;
}

uint64_t CreateKeyRequest::GetType() const
{
    return m_type;
}

void CreateKeyRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateKeyRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<Tag> CreateKeyRequest::GetTags() const
{
    return m_tags;
}

void CreateKeyRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateKeyRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateKeyRequest::GetHsmClusterId() const
{
    return m_hsmClusterId;
}

void CreateKeyRequest::SetHsmClusterId(const string& _hsmClusterId)
{
    m_hsmClusterId = _hsmClusterId;
    m_hsmClusterIdHasBeenSet = true;
}

bool CreateKeyRequest::HsmClusterIdHasBeenSet() const
{
    return m_hsmClusterIdHasBeenSet;
}


