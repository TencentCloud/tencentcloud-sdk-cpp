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

#include <tencentcloud/rum/v20210622/model/CreateTDEMBusinessSystemRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

CreateTDEMBusinessSystemRequest::CreateTDEMBusinessSystemRequest() :
    m_instanceNameHasBeenSet(false),
    m_instanceDescHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateTDEMBusinessSystemRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceDesc.c_str(), allocator).Move(), allocator);
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


string CreateTDEMBusinessSystemRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateTDEMBusinessSystemRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateTDEMBusinessSystemRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CreateTDEMBusinessSystemRequest::GetInstanceDesc() const
{
    return m_instanceDesc;
}

void CreateTDEMBusinessSystemRequest::SetInstanceDesc(const string& _instanceDesc)
{
    m_instanceDesc = _instanceDesc;
    m_instanceDescHasBeenSet = true;
}

bool CreateTDEMBusinessSystemRequest::InstanceDescHasBeenSet() const
{
    return m_instanceDescHasBeenSet;
}

vector<Tag> CreateTDEMBusinessSystemRequest::GetTags() const
{
    return m_tags;
}

void CreateTDEMBusinessSystemRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateTDEMBusinessSystemRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


