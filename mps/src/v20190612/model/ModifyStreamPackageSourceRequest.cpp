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

#include <tencentcloud/mps/v20190612/model/ModifyStreamPackageSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifyStreamPackageSourceRequest::ModifyStreamPackageSourceRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_packageConfsHasBeenSet(false),
    m_sourceTagsHasBeenSet(false)
{
}

string ModifyStreamPackageSourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_packageConfsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageConfs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_packageConfs.begin(); itr != m_packageConfs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceTags.begin(); itr != m_sourceTags.end(); ++itr, ++i)
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


string ModifyStreamPackageSourceRequest::GetId() const
{
    return m_id;
}

void ModifyStreamPackageSourceRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyStreamPackageSourceRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyStreamPackageSourceRequest::GetName() const
{
    return m_name;
}

void ModifyStreamPackageSourceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyStreamPackageSourceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyStreamPackageSourceRequest::GetType() const
{
    return m_type;
}

void ModifyStreamPackageSourceRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyStreamPackageSourceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<SourcePackageConf> ModifyStreamPackageSourceRequest::GetPackageConfs() const
{
    return m_packageConfs;
}

void ModifyStreamPackageSourceRequest::SetPackageConfs(const vector<SourcePackageConf>& _packageConfs)
{
    m_packageConfs = _packageConfs;
    m_packageConfsHasBeenSet = true;
}

bool ModifyStreamPackageSourceRequest::PackageConfsHasBeenSet() const
{
    return m_packageConfsHasBeenSet;
}

vector<SourceTag> ModifyStreamPackageSourceRequest::GetSourceTags() const
{
    return m_sourceTags;
}

void ModifyStreamPackageSourceRequest::SetSourceTags(const vector<SourceTag>& _sourceTags)
{
    m_sourceTags = _sourceTags;
    m_sourceTagsHasBeenSet = true;
}

bool ModifyStreamPackageSourceRequest::SourceTagsHasBeenSet() const
{
    return m_sourceTagsHasBeenSet;
}


