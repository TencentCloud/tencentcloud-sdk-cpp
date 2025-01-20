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

#include <tencentcloud/vpc/v20170312/model/CreateNetworkAclRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateNetworkAclRequest::CreateNetworkAclRequest() :
    m_vpcIdHasBeenSet(false),
    m_networkAclNameHasBeenSet(false),
    m_networkAclTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateNetworkAclRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAclNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAclName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkAclName.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAclTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAclType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkAclType.c_str(), allocator).Move(), allocator);
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


string CreateNetworkAclRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateNetworkAclRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateNetworkAclRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateNetworkAclRequest::GetNetworkAclName() const
{
    return m_networkAclName;
}

void CreateNetworkAclRequest::SetNetworkAclName(const string& _networkAclName)
{
    m_networkAclName = _networkAclName;
    m_networkAclNameHasBeenSet = true;
}

bool CreateNetworkAclRequest::NetworkAclNameHasBeenSet() const
{
    return m_networkAclNameHasBeenSet;
}

string CreateNetworkAclRequest::GetNetworkAclType() const
{
    return m_networkAclType;
}

void CreateNetworkAclRequest::SetNetworkAclType(const string& _networkAclType)
{
    m_networkAclType = _networkAclType;
    m_networkAclTypeHasBeenSet = true;
}

bool CreateNetworkAclRequest::NetworkAclTypeHasBeenSet() const
{
    return m_networkAclTypeHasBeenSet;
}

vector<Tag> CreateNetworkAclRequest::GetTags() const
{
    return m_tags;
}

void CreateNetworkAclRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateNetworkAclRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


