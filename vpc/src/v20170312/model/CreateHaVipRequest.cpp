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

#include <tencentcloud/vpc/v20170312/model/CreateHaVipRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateHaVipRequest::CreateHaVipRequest() :
    m_vpcIdHasBeenSet(false),
    m_haVipNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_checkAssociateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_haVipAssociationSetHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string CreateHaVipRequest::ToJsonString() const
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

    if (m_haVipNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaVipName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_haVipName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_checkAssociateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAssociate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkAssociate, allocator);
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

    if (m_haVipAssociationSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaVipAssociationSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_haVipAssociationSet.begin(); itr != m_haVipAssociationSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateHaVipRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateHaVipRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateHaVipRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateHaVipRequest::GetHaVipName() const
{
    return m_haVipName;
}

void CreateHaVipRequest::SetHaVipName(const string& _haVipName)
{
    m_haVipName = _haVipName;
    m_haVipNameHasBeenSet = true;
}

bool CreateHaVipRequest::HaVipNameHasBeenSet() const
{
    return m_haVipNameHasBeenSet;
}

string CreateHaVipRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateHaVipRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateHaVipRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateHaVipRequest::GetVip() const
{
    return m_vip;
}

void CreateHaVipRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CreateHaVipRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string CreateHaVipRequest::GetNetworkInterfaceId() const
{
    return m_networkInterfaceId;
}

void CreateHaVipRequest::SetNetworkInterfaceId(const string& _networkInterfaceId)
{
    m_networkInterfaceId = _networkInterfaceId;
    m_networkInterfaceIdHasBeenSet = true;
}

bool CreateHaVipRequest::NetworkInterfaceIdHasBeenSet() const
{
    return m_networkInterfaceIdHasBeenSet;
}

bool CreateHaVipRequest::GetCheckAssociate() const
{
    return m_checkAssociate;
}

void CreateHaVipRequest::SetCheckAssociate(const bool& _checkAssociate)
{
    m_checkAssociate = _checkAssociate;
    m_checkAssociateHasBeenSet = true;
}

bool CreateHaVipRequest::CheckAssociateHasBeenSet() const
{
    return m_checkAssociateHasBeenSet;
}

vector<Tag> CreateHaVipRequest::GetTags() const
{
    return m_tags;
}

void CreateHaVipRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateHaVipRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<HaVipAssociation> CreateHaVipRequest::GetHaVipAssociationSet() const
{
    return m_haVipAssociationSet;
}

void CreateHaVipRequest::SetHaVipAssociationSet(const vector<HaVipAssociation>& _haVipAssociationSet)
{
    m_haVipAssociationSet = _haVipAssociationSet;
    m_haVipAssociationSetHasBeenSet = true;
}

bool CreateHaVipRequest::HaVipAssociationSetHasBeenSet() const
{
    return m_haVipAssociationSetHasBeenSet;
}

string CreateHaVipRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateHaVipRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateHaVipRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


