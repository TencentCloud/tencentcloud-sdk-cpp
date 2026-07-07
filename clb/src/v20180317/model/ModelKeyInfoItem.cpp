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

#include <tencentcloud/clb/v20180317/model/ModelKeyInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelKeyInfoItem::ModelKeyInfoItem() :
    m_accessTypeHasBeenSet(false),
    m_apiBaseHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_hostHeaderHasBeenSet(false),
    m_keyCountHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_modelIdsWithAliasHasBeenSet(false),
    m_modelProviderHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_serviceIpsHasBeenSet(false),
    m_serviceProviderIdHasBeenSet(false),
    m_serviceProviderNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_verifySSLHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

CoreInternalOutcome ModelKeyInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("ApiBase") && !value["ApiBase"].IsNull())
    {
        if (!value["ApiBase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.ApiBase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiBase = string(value["ApiBase"].GetString());
        m_apiBaseHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("HostHeader") && !value["HostHeader"].IsNull())
    {
        if (!value["HostHeader"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.HostHeader` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostHeader = string(value["HostHeader"].GetString());
        m_hostHeaderHasBeenSet = true;
    }

    if (value.HasMember("KeyCount") && !value["KeyCount"].IsNull())
    {
        if (!value["KeyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.KeyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keyCount = value["KeyCount"].GetInt64();
        m_keyCountHasBeenSet = true;
    }

    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.Keys` is not array type"));

        const rapidjson::Value &tmpValue = value["Keys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyDetailItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keys.push_back(item);
        }
        m_keysHasBeenSet = true;
    }

    if (value.HasMember("ModelIdsWithAlias") && !value["ModelIdsWithAlias"].IsNull())
    {
        if (!value["ModelIdsWithAlias"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.ModelIdsWithAlias` is not array type"));

        const rapidjson::Value &tmpValue = value["ModelIdsWithAlias"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceProviderModelItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_modelIdsWithAlias.push_back(item);
        }
        m_modelIdsWithAliasHasBeenSet = true;
    }

    if (value.HasMember("ModelProvider") && !value["ModelProvider"].IsNull())
    {
        if (!value["ModelProvider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.ModelProvider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelProvider = string(value["ModelProvider"].GetString());
        m_modelProviderHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("ServiceIps") && !value["ServiceIps"].IsNull())
    {
        if (!value["ServiceIps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.ServiceIps` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceIps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_serviceIps.push_back((*itr).GetString());
        }
        m_serviceIpsHasBeenSet = true;
    }

    if (value.HasMember("ServiceProviderId") && !value["ServiceProviderId"].IsNull())
    {
        if (!value["ServiceProviderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.ServiceProviderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceProviderId = string(value["ServiceProviderId"].GetString());
        m_serviceProviderIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceProviderName") && !value["ServiceProviderName"].IsNull())
    {
        if (!value["ServiceProviderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.ServiceProviderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceProviderName = string(value["ServiceProviderName"].GetString());
        m_serviceProviderNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("VerifySSL") && !value["VerifySSL"].IsNull())
    {
        if (!value["VerifySSL"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.VerifySSL` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_verifySSL = value["VerifySSL"].GetBool();
        m_verifySSLHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelKeyInfoItem.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelKeyInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_apiBaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiBase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiBase.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostHeader.c_str(), allocator).Move(), allocator);
    }

    if (m_keyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keyCount, allocator);
    }

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keys.begin(); itr != m_keys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modelIdsWithAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelIdsWithAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modelIdsWithAlias.begin(); itr != m_modelIdsWithAlias.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modelProviderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelProvider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelProvider.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceIps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceIps.begin(); itr != m_serviceIps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_serviceProviderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceProviderId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceProviderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceProviderName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_verifySSLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifySSL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifySSL, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

}


string ModelKeyInfoItem::GetAccessType() const
{
    return m_accessType;
}

void ModelKeyInfoItem::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool ModelKeyInfoItem::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string ModelKeyInfoItem::GetApiBase() const
{
    return m_apiBase;
}

void ModelKeyInfoItem::SetApiBase(const string& _apiBase)
{
    m_apiBase = _apiBase;
    m_apiBaseHasBeenSet = true;
}

bool ModelKeyInfoItem::ApiBaseHasBeenSet() const
{
    return m_apiBaseHasBeenSet;
}

string ModelKeyInfoItem::GetCreatedAt() const
{
    return m_createdAt;
}

void ModelKeyInfoItem::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool ModelKeyInfoItem::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string ModelKeyInfoItem::GetHostHeader() const
{
    return m_hostHeader;
}

void ModelKeyInfoItem::SetHostHeader(const string& _hostHeader)
{
    m_hostHeader = _hostHeader;
    m_hostHeaderHasBeenSet = true;
}

bool ModelKeyInfoItem::HostHeaderHasBeenSet() const
{
    return m_hostHeaderHasBeenSet;
}

int64_t ModelKeyInfoItem::GetKeyCount() const
{
    return m_keyCount;
}

void ModelKeyInfoItem::SetKeyCount(const int64_t& _keyCount)
{
    m_keyCount = _keyCount;
    m_keyCountHasBeenSet = true;
}

bool ModelKeyInfoItem::KeyCountHasBeenSet() const
{
    return m_keyCountHasBeenSet;
}

vector<KeyDetailItem> ModelKeyInfoItem::GetKeys() const
{
    return m_keys;
}

void ModelKeyInfoItem::SetKeys(const vector<KeyDetailItem>& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool ModelKeyInfoItem::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

vector<ServiceProviderModelItem> ModelKeyInfoItem::GetModelIdsWithAlias() const
{
    return m_modelIdsWithAlias;
}

void ModelKeyInfoItem::SetModelIdsWithAlias(const vector<ServiceProviderModelItem>& _modelIdsWithAlias)
{
    m_modelIdsWithAlias = _modelIdsWithAlias;
    m_modelIdsWithAliasHasBeenSet = true;
}

bool ModelKeyInfoItem::ModelIdsWithAliasHasBeenSet() const
{
    return m_modelIdsWithAliasHasBeenSet;
}

string ModelKeyInfoItem::GetModelProvider() const
{
    return m_modelProvider;
}

void ModelKeyInfoItem::SetModelProvider(const string& _modelProvider)
{
    m_modelProvider = _modelProvider;
    m_modelProviderHasBeenSet = true;
}

bool ModelKeyInfoItem::ModelProviderHasBeenSet() const
{
    return m_modelProviderHasBeenSet;
}

string ModelKeyInfoItem::GetProtocol() const
{
    return m_protocol;
}

void ModelKeyInfoItem::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ModelKeyInfoItem::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<string> ModelKeyInfoItem::GetServiceIps() const
{
    return m_serviceIps;
}

void ModelKeyInfoItem::SetServiceIps(const vector<string>& _serviceIps)
{
    m_serviceIps = _serviceIps;
    m_serviceIpsHasBeenSet = true;
}

bool ModelKeyInfoItem::ServiceIpsHasBeenSet() const
{
    return m_serviceIpsHasBeenSet;
}

string ModelKeyInfoItem::GetServiceProviderId() const
{
    return m_serviceProviderId;
}

void ModelKeyInfoItem::SetServiceProviderId(const string& _serviceProviderId)
{
    m_serviceProviderId = _serviceProviderId;
    m_serviceProviderIdHasBeenSet = true;
}

bool ModelKeyInfoItem::ServiceProviderIdHasBeenSet() const
{
    return m_serviceProviderIdHasBeenSet;
}

string ModelKeyInfoItem::GetServiceProviderName() const
{
    return m_serviceProviderName;
}

void ModelKeyInfoItem::SetServiceProviderName(const string& _serviceProviderName)
{
    m_serviceProviderName = _serviceProviderName;
    m_serviceProviderNameHasBeenSet = true;
}

bool ModelKeyInfoItem::ServiceProviderNameHasBeenSet() const
{
    return m_serviceProviderNameHasBeenSet;
}

string ModelKeyInfoItem::GetStatus() const
{
    return m_status;
}

void ModelKeyInfoItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModelKeyInfoItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModelKeyInfoItem::GetSubnetId() const
{
    return m_subnetId;
}

void ModelKeyInfoItem::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ModelKeyInfoItem::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<TagInfo> ModelKeyInfoItem::GetTags() const
{
    return m_tags;
}

void ModelKeyInfoItem::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModelKeyInfoItem::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool ModelKeyInfoItem::GetVerifySSL() const
{
    return m_verifySSL;
}

void ModelKeyInfoItem::SetVerifySSL(const bool& _verifySSL)
{
    m_verifySSL = _verifySSL;
    m_verifySSLHasBeenSet = true;
}

bool ModelKeyInfoItem::VerifySSLHasBeenSet() const
{
    return m_verifySSLHasBeenSet;
}

string ModelKeyInfoItem::GetVpcId() const
{
    return m_vpcId;
}

void ModelKeyInfoItem::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModelKeyInfoItem::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

