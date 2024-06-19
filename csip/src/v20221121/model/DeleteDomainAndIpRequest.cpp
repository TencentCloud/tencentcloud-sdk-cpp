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

#include <tencentcloud/csip/v20221121/model/DeleteDomainAndIpRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DeleteDomainAndIpRequest::DeleteDomainAndIpRequest() :
    m_memberIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_retainPathHasBeenSet(false),
    m_ignoreAssetHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string DeleteDomainAndIpRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_content.begin(); itr != m_content.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_retainPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetainPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retainPath, allocator);
    }

    if (m_ignoreAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreAsset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ignoreAsset, allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteDomainAndIpRequest::GetMemberId() const
{
    return m_memberId;
}

void DeleteDomainAndIpRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DeleteDomainAndIpRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<PublicIpDomainListKey> DeleteDomainAndIpRequest::GetContent() const
{
    return m_content;
}

void DeleteDomainAndIpRequest::SetContent(const vector<PublicIpDomainListKey>& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DeleteDomainAndIpRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t DeleteDomainAndIpRequest::GetRetainPath() const
{
    return m_retainPath;
}

void DeleteDomainAndIpRequest::SetRetainPath(const int64_t& _retainPath)
{
    m_retainPath = _retainPath;
    m_retainPathHasBeenSet = true;
}

bool DeleteDomainAndIpRequest::RetainPathHasBeenSet() const
{
    return m_retainPathHasBeenSet;
}

int64_t DeleteDomainAndIpRequest::GetIgnoreAsset() const
{
    return m_ignoreAsset;
}

void DeleteDomainAndIpRequest::SetIgnoreAsset(const int64_t& _ignoreAsset)
{
    m_ignoreAsset = _ignoreAsset;
    m_ignoreAssetHasBeenSet = true;
}

bool DeleteDomainAndIpRequest::IgnoreAssetHasBeenSet() const
{
    return m_ignoreAssetHasBeenSet;
}

vector<AssetTag> DeleteDomainAndIpRequest::GetTags() const
{
    return m_tags;
}

void DeleteDomainAndIpRequest::SetTags(const vector<AssetTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DeleteDomainAndIpRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DeleteDomainAndIpRequest::GetType() const
{
    return m_type;
}

void DeleteDomainAndIpRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DeleteDomainAndIpRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


