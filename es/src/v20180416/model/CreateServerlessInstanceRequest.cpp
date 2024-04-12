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

#include <tencentcloud/es/v20180416/model/CreateServerlessInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CreateServerlessInstanceRequest::CreateServerlessInstanceRequest() :
    m_indexNameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_indexMetaJsonHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_serverlessDiHasBeenSet(false),
    m_autoGetIpHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_kibanaWhiteIpListHasBeenSet(false)
{
}

string CreateServerlessInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

    if (m_indexMetaJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexMetaJson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indexMetaJson.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_serverlessDiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerlessDi";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serverlessDi.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoGetIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoGetIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoGetIp, allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_kibanaWhiteIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaWhiteIpList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kibanaWhiteIpList.begin(); itr != m_kibanaWhiteIpList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateServerlessInstanceRequest::GetIndexName() const
{
    return m_indexName;
}

void CreateServerlessInstanceRequest::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool CreateServerlessInstanceRequest::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

string CreateServerlessInstanceRequest::GetZone() const
{
    return m_zone;
}

void CreateServerlessInstanceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateServerlessInstanceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateServerlessInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateServerlessInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateServerlessInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateServerlessInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateServerlessInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateServerlessInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateServerlessInstanceRequest::GetIndexMetaJson() const
{
    return m_indexMetaJson;
}

void CreateServerlessInstanceRequest::SetIndexMetaJson(const string& _indexMetaJson)
{
    m_indexMetaJson = _indexMetaJson;
    m_indexMetaJsonHasBeenSet = true;
}

bool CreateServerlessInstanceRequest::IndexMetaJsonHasBeenSet() const
{
    return m_indexMetaJsonHasBeenSet;
}

string CreateServerlessInstanceRequest::GetSpaceId() const
{
    return m_spaceId;
}

void CreateServerlessInstanceRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool CreateServerlessInstanceRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string CreateServerlessInstanceRequest::GetUsername() const
{
    return m_username;
}

void CreateServerlessInstanceRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool CreateServerlessInstanceRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string CreateServerlessInstanceRequest::GetPassword() const
{
    return m_password;
}

void CreateServerlessInstanceRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateServerlessInstanceRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

ServerlessDi CreateServerlessInstanceRequest::GetServerlessDi() const
{
    return m_serverlessDi;
}

void CreateServerlessInstanceRequest::SetServerlessDi(const ServerlessDi& _serverlessDi)
{
    m_serverlessDi = _serverlessDi;
    m_serverlessDiHasBeenSet = true;
}

bool CreateServerlessInstanceRequest::ServerlessDiHasBeenSet() const
{
    return m_serverlessDiHasBeenSet;
}

uint64_t CreateServerlessInstanceRequest::GetAutoGetIp() const
{
    return m_autoGetIp;
}

void CreateServerlessInstanceRequest::SetAutoGetIp(const uint64_t& _autoGetIp)
{
    m_autoGetIp = _autoGetIp;
    m_autoGetIpHasBeenSet = true;
}

bool CreateServerlessInstanceRequest::AutoGetIpHasBeenSet() const
{
    return m_autoGetIpHasBeenSet;
}

vector<TagInfo> CreateServerlessInstanceRequest::GetTagList() const
{
    return m_tagList;
}

void CreateServerlessInstanceRequest::SetTagList(const vector<TagInfo>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool CreateServerlessInstanceRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

vector<string> CreateServerlessInstanceRequest::GetKibanaWhiteIpList() const
{
    return m_kibanaWhiteIpList;
}

void CreateServerlessInstanceRequest::SetKibanaWhiteIpList(const vector<string>& _kibanaWhiteIpList)
{
    m_kibanaWhiteIpList = _kibanaWhiteIpList;
    m_kibanaWhiteIpListHasBeenSet = true;
}

bool CreateServerlessInstanceRequest::KibanaWhiteIpListHasBeenSet() const
{
    return m_kibanaWhiteIpListHasBeenSet;
}


