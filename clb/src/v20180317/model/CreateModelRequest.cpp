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

#include <tencentcloud/clb/v20180317/model/CreateModelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CreateModelRequest::CreateModelRequest() :
    m_accessTypeHasBeenSet(false),
    m_modelProviderHasBeenSet(false),
    m_modelIdsHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_serviceProviderIdHasBeenSet(false),
    m_serviceProviderNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_apiBaseHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_hostHeaderHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_verifySSLHasBeenSet(false)
{
}

string CreateModelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelProviderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelProvider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelProvider.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modelIds.begin(); itr != m_modelIds.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keys.begin(); itr != m_keys.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_serviceProviderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceProviderId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceProviderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceProviderName.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_apiBaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiBase";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiBase.c_str(), allocator).Move(), allocator);
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

    if (m_hostHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostHeader.c_str(), allocator).Move(), allocator);
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

    if (m_verifySSLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifySSL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_verifySSL, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateModelRequest::GetAccessType() const
{
    return m_accessType;
}

void CreateModelRequest::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool CreateModelRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string CreateModelRequest::GetModelProvider() const
{
    return m_modelProvider;
}

void CreateModelRequest::SetModelProvider(const string& _modelProvider)
{
    m_modelProvider = _modelProvider;
    m_modelProviderHasBeenSet = true;
}

bool CreateModelRequest::ModelProviderHasBeenSet() const
{
    return m_modelProviderHasBeenSet;
}

vector<ModelItem> CreateModelRequest::GetModelIds() const
{
    return m_modelIds;
}

void CreateModelRequest::SetModelIds(const vector<ModelItem>& _modelIds)
{
    m_modelIds = _modelIds;
    m_modelIdsHasBeenSet = true;
}

bool CreateModelRequest::ModelIdsHasBeenSet() const
{
    return m_modelIdsHasBeenSet;
}

vector<KeyItem> CreateModelRequest::GetKeys() const
{
    return m_keys;
}

void CreateModelRequest::SetKeys(const vector<KeyItem>& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool CreateModelRequest::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

string CreateModelRequest::GetServiceProviderId() const
{
    return m_serviceProviderId;
}

void CreateModelRequest::SetServiceProviderId(const string& _serviceProviderId)
{
    m_serviceProviderId = _serviceProviderId;
    m_serviceProviderIdHasBeenSet = true;
}

bool CreateModelRequest::ServiceProviderIdHasBeenSet() const
{
    return m_serviceProviderIdHasBeenSet;
}

string CreateModelRequest::GetServiceProviderName() const
{
    return m_serviceProviderName;
}

void CreateModelRequest::SetServiceProviderName(const string& _serviceProviderName)
{
    m_serviceProviderName = _serviceProviderName;
    m_serviceProviderNameHasBeenSet = true;
}

bool CreateModelRequest::ServiceProviderNameHasBeenSet() const
{
    return m_serviceProviderNameHasBeenSet;
}

string CreateModelRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateModelRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateModelRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateModelRequest::GetApiBase() const
{
    return m_apiBase;
}

void CreateModelRequest::SetApiBase(const string& _apiBase)
{
    m_apiBase = _apiBase;
    m_apiBaseHasBeenSet = true;
}

bool CreateModelRequest::ApiBaseHasBeenSet() const
{
    return m_apiBaseHasBeenSet;
}

string CreateModelRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateModelRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateModelRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateModelRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateModelRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateModelRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateModelRequest::GetHostHeader() const
{
    return m_hostHeader;
}

void CreateModelRequest::SetHostHeader(const string& _hostHeader)
{
    m_hostHeader = _hostHeader;
    m_hostHeaderHasBeenSet = true;
}

bool CreateModelRequest::HostHeaderHasBeenSet() const
{
    return m_hostHeaderHasBeenSet;
}

vector<TagInfo> CreateModelRequest::GetTags() const
{
    return m_tags;
}

void CreateModelRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateModelRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool CreateModelRequest::GetVerifySSL() const
{
    return m_verifySSL;
}

void CreateModelRequest::SetVerifySSL(const bool& _verifySSL)
{
    m_verifySSL = _verifySSL;
    m_verifySSLHasBeenSet = true;
}

bool CreateModelRequest::VerifySSLHasBeenSet() const
{
    return m_verifySSLHasBeenSet;
}


