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

#include <tencentcloud/tcaplusdb/v20190823/model/CreateClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

CreateClusterRequest::CreateClusterRequest() :
    m_idlTypeHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_ipv6EnableHasBeenSet(false)
{
}

string CreateClusterRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idlTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdlType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_idlType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ipv6EnableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ipv6Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipv6Enable, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClusterRequest::GetIdlType() const
{
    return m_idlType;
}

void CreateClusterRequest::SetIdlType(const string& _idlType)
{
    m_idlType = _idlType;
    m_idlTypeHasBeenSet = true;
}

bool CreateClusterRequest::IdlTypeHasBeenSet() const
{
    return m_idlTypeHasBeenSet;
}

string CreateClusterRequest::GetClusterName() const
{
    return m_clusterName;
}

void CreateClusterRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CreateClusterRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CreateClusterRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateClusterRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateClusterRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateClusterRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateClusterRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateClusterRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateClusterRequest::GetPassword() const
{
    return m_password;
}

void CreateClusterRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateClusterRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

vector<TagInfoUnit> CreateClusterRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateClusterRequest::SetResourceTags(const vector<TagInfoUnit>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateClusterRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

int64_t CreateClusterRequest::GetIpv6Enable() const
{
    return m_ipv6Enable;
}

void CreateClusterRequest::SetIpv6Enable(const int64_t& _ipv6Enable)
{
    m_ipv6Enable = _ipv6Enable;
    m_ipv6EnableHasBeenSet = true;
}

bool CreateClusterRequest::Ipv6EnableHasBeenSet() const
{
    return m_ipv6EnableHasBeenSet;
}


