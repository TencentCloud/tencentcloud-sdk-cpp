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

#include <tencentcloud/ckafka/v20190819/model/IcebergConnectParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

IcebergConnectParam::IcebergConnectParam() :
    m_serviceVipHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_eniIdListHasBeenSet(false),
    m_catalogTypeHasBeenSet(false),
    m_keyTabContentHasBeenSet(false),
    m_kRB5ConfContentHasBeenSet(false),
    m_kerberosUserPrincipalHasBeenSet(false),
    m_kerberosPrincipalHasBeenSet(false),
    m_isUpdateHasBeenSet(false)
{
}

CoreInternalOutcome IcebergConnectParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceVip") && !value["ServiceVip"].IsNull())
    {
        if (!value["ServiceVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergConnectParam.ServiceVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceVip = string(value["ServiceVip"].GetString());
        m_serviceVipHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergConnectParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergConnectParam.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergConnectParam.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("EniIdList") && !value["EniIdList"].IsNull())
    {
        if (!value["EniIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IcebergConnectParam.EniIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["EniIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eniIdList.push_back((*itr).GetString());
        }
        m_eniIdListHasBeenSet = true;
    }

    if (value.HasMember("CatalogType") && !value["CatalogType"].IsNull())
    {
        if (!value["CatalogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergConnectParam.CatalogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogType = string(value["CatalogType"].GetString());
        m_catalogTypeHasBeenSet = true;
    }

    if (value.HasMember("KeyTabContent") && !value["KeyTabContent"].IsNull())
    {
        if (!value["KeyTabContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergConnectParam.KeyTabContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyTabContent = string(value["KeyTabContent"].GetString());
        m_keyTabContentHasBeenSet = true;
    }

    if (value.HasMember("KRB5ConfContent") && !value["KRB5ConfContent"].IsNull())
    {
        if (!value["KRB5ConfContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergConnectParam.KRB5ConfContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kRB5ConfContent = string(value["KRB5ConfContent"].GetString());
        m_kRB5ConfContentHasBeenSet = true;
    }

    if (value.HasMember("KerberosUserPrincipal") && !value["KerberosUserPrincipal"].IsNull())
    {
        if (!value["KerberosUserPrincipal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergConnectParam.KerberosUserPrincipal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kerberosUserPrincipal = string(value["KerberosUserPrincipal"].GetString());
        m_kerberosUserPrincipalHasBeenSet = true;
    }

    if (value.HasMember("KerberosPrincipal") && !value["KerberosPrincipal"].IsNull())
    {
        if (!value["KerberosPrincipal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergConnectParam.KerberosPrincipal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kerberosPrincipal = string(value["KerberosPrincipal"].GetString());
        m_kerberosPrincipalHasBeenSet = true;
    }

    if (value.HasMember("IsUpdate") && !value["IsUpdate"].IsNull())
    {
        if (!value["IsUpdate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergConnectParam.IsUpdate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUpdate = value["IsUpdate"].GetBool();
        m_isUpdateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IcebergConnectParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceVip.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_eniIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eniIdList.begin(); itr != m_eniIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_catalogTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogType.c_str(), allocator).Move(), allocator);
    }

    if (m_keyTabContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyTabContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyTabContent.c_str(), allocator).Move(), allocator);
    }

    if (m_kRB5ConfContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KRB5ConfContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kRB5ConfContent.c_str(), allocator).Move(), allocator);
    }

    if (m_kerberosUserPrincipalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KerberosUserPrincipal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kerberosUserPrincipal.c_str(), allocator).Move(), allocator);
    }

    if (m_kerberosPrincipalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KerberosPrincipal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kerberosPrincipal.c_str(), allocator).Move(), allocator);
    }

    if (m_isUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUpdate, allocator);
    }

}


string IcebergConnectParam::GetServiceVip() const
{
    return m_serviceVip;
}

void IcebergConnectParam::SetServiceVip(const string& _serviceVip)
{
    m_serviceVip = _serviceVip;
    m_serviceVipHasBeenSet = true;
}

bool IcebergConnectParam::ServiceVipHasBeenSet() const
{
    return m_serviceVipHasBeenSet;
}

string IcebergConnectParam::GetResource() const
{
    return m_resource;
}

void IcebergConnectParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool IcebergConnectParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string IcebergConnectParam::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void IcebergConnectParam::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool IcebergConnectParam::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string IcebergConnectParam::GetAuthType() const
{
    return m_authType;
}

void IcebergConnectParam::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool IcebergConnectParam::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

vector<string> IcebergConnectParam::GetEniIdList() const
{
    return m_eniIdList;
}

void IcebergConnectParam::SetEniIdList(const vector<string>& _eniIdList)
{
    m_eniIdList = _eniIdList;
    m_eniIdListHasBeenSet = true;
}

bool IcebergConnectParam::EniIdListHasBeenSet() const
{
    return m_eniIdListHasBeenSet;
}

string IcebergConnectParam::GetCatalogType() const
{
    return m_catalogType;
}

void IcebergConnectParam::SetCatalogType(const string& _catalogType)
{
    m_catalogType = _catalogType;
    m_catalogTypeHasBeenSet = true;
}

bool IcebergConnectParam::CatalogTypeHasBeenSet() const
{
    return m_catalogTypeHasBeenSet;
}

string IcebergConnectParam::GetKeyTabContent() const
{
    return m_keyTabContent;
}

void IcebergConnectParam::SetKeyTabContent(const string& _keyTabContent)
{
    m_keyTabContent = _keyTabContent;
    m_keyTabContentHasBeenSet = true;
}

bool IcebergConnectParam::KeyTabContentHasBeenSet() const
{
    return m_keyTabContentHasBeenSet;
}

string IcebergConnectParam::GetKRB5ConfContent() const
{
    return m_kRB5ConfContent;
}

void IcebergConnectParam::SetKRB5ConfContent(const string& _kRB5ConfContent)
{
    m_kRB5ConfContent = _kRB5ConfContent;
    m_kRB5ConfContentHasBeenSet = true;
}

bool IcebergConnectParam::KRB5ConfContentHasBeenSet() const
{
    return m_kRB5ConfContentHasBeenSet;
}

string IcebergConnectParam::GetKerberosUserPrincipal() const
{
    return m_kerberosUserPrincipal;
}

void IcebergConnectParam::SetKerberosUserPrincipal(const string& _kerberosUserPrincipal)
{
    m_kerberosUserPrincipal = _kerberosUserPrincipal;
    m_kerberosUserPrincipalHasBeenSet = true;
}

bool IcebergConnectParam::KerberosUserPrincipalHasBeenSet() const
{
    return m_kerberosUserPrincipalHasBeenSet;
}

string IcebergConnectParam::GetKerberosPrincipal() const
{
    return m_kerberosPrincipal;
}

void IcebergConnectParam::SetKerberosPrincipal(const string& _kerberosPrincipal)
{
    m_kerberosPrincipal = _kerberosPrincipal;
    m_kerberosPrincipalHasBeenSet = true;
}

bool IcebergConnectParam::KerberosPrincipalHasBeenSet() const
{
    return m_kerberosPrincipalHasBeenSet;
}

bool IcebergConnectParam::GetIsUpdate() const
{
    return m_isUpdate;
}

void IcebergConnectParam::SetIsUpdate(const bool& _isUpdate)
{
    m_isUpdate = _isUpdate;
    m_isUpdateHasBeenSet = true;
}

bool IcebergConnectParam::IsUpdateHasBeenSet() const
{
    return m_isUpdateHasBeenSet;
}

