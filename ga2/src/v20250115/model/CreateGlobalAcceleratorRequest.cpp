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

#include <tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

CreateGlobalAcceleratorRequest::CreateGlobalAcceleratorRequest() :
    m_nameHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_crossBorderTypeHasBeenSet(false),
    m_crossBorderPromiseFlagHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateGlobalAcceleratorRequest::ToJsonString() const
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

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_crossBorderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBorderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_crossBorderType.c_str(), allocator).Move(), allocator);
    }

    if (m_crossBorderPromiseFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBorderPromiseFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_crossBorderPromiseFlag, allocator);
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


string CreateGlobalAcceleratorRequest::GetName() const
{
    return m_name;
}

void CreateGlobalAcceleratorRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateGlobalAcceleratorRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateGlobalAcceleratorRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateGlobalAcceleratorRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateGlobalAcceleratorRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string CreateGlobalAcceleratorRequest::GetDescription() const
{
    return m_description;
}

void CreateGlobalAcceleratorRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateGlobalAcceleratorRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateGlobalAcceleratorRequest::GetCrossBorderType() const
{
    return m_crossBorderType;
}

void CreateGlobalAcceleratorRequest::SetCrossBorderType(const string& _crossBorderType)
{
    m_crossBorderType = _crossBorderType;
    m_crossBorderTypeHasBeenSet = true;
}

bool CreateGlobalAcceleratorRequest::CrossBorderTypeHasBeenSet() const
{
    return m_crossBorderTypeHasBeenSet;
}

bool CreateGlobalAcceleratorRequest::GetCrossBorderPromiseFlag() const
{
    return m_crossBorderPromiseFlag;
}

void CreateGlobalAcceleratorRequest::SetCrossBorderPromiseFlag(const bool& _crossBorderPromiseFlag)
{
    m_crossBorderPromiseFlag = _crossBorderPromiseFlag;
    m_crossBorderPromiseFlagHasBeenSet = true;
}

bool CreateGlobalAcceleratorRequest::CrossBorderPromiseFlagHasBeenSet() const
{
    return m_crossBorderPromiseFlagHasBeenSet;
}

vector<Tag> CreateGlobalAcceleratorRequest::GetTags() const
{
    return m_tags;
}

void CreateGlobalAcceleratorRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateGlobalAcceleratorRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


