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

#include <tencentcloud/goosefs/v20220519/model/CreateFileSystemRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

CreateFileSystemRequest::CreateFileSystemRequest() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_gooseFSxBuildElementsHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_clusterPortHasBeenSet(false)
{
}

string CreateFileSystemRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_gooseFSxBuildElementsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GooseFSxBuildElements";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gooseFSxBuildElements.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_securityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clusterPort, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFileSystemRequest::GetType() const
{
    return m_type;
}

void CreateFileSystemRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateFileSystemRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateFileSystemRequest::GetName() const
{
    return m_name;
}

void CreateFileSystemRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateFileSystemRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateFileSystemRequest::GetDescription() const
{
    return m_description;
}

void CreateFileSystemRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateFileSystemRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateFileSystemRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateFileSystemRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateFileSystemRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateFileSystemRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateFileSystemRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateFileSystemRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateFileSystemRequest::GetZone() const
{
    return m_zone;
}

void CreateFileSystemRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateFileSystemRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<Tag> CreateFileSystemRequest::GetTag() const
{
    return m_tag;
}

void CreateFileSystemRequest::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool CreateFileSystemRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

GooseFSxBuildElement CreateFileSystemRequest::GetGooseFSxBuildElements() const
{
    return m_gooseFSxBuildElements;
}

void CreateFileSystemRequest::SetGooseFSxBuildElements(const GooseFSxBuildElement& _gooseFSxBuildElements)
{
    m_gooseFSxBuildElements = _gooseFSxBuildElements;
    m_gooseFSxBuildElementsHasBeenSet = true;
}

bool CreateFileSystemRequest::GooseFSxBuildElementsHasBeenSet() const
{
    return m_gooseFSxBuildElementsHasBeenSet;
}

string CreateFileSystemRequest::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void CreateFileSystemRequest::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool CreateFileSystemRequest::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

uint64_t CreateFileSystemRequest::GetClusterPort() const
{
    return m_clusterPort;
}

void CreateFileSystemRequest::SetClusterPort(const uint64_t& _clusterPort)
{
    m_clusterPort = _clusterPort;
    m_clusterPortHasBeenSet = true;
}

bool CreateFileSystemRequest::ClusterPortHasBeenSet() const
{
    return m_clusterPortHasBeenSet;
}


