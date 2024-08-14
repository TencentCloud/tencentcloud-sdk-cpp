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

#include <tencentcloud/iss/v20230517/model/DescribeDomainData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeDomainData::DescribeDomainData() :
    m_idHasBeenSet(false),
    m_playDomainHasBeenSet(false),
    m_internalDomainHasBeenSet(false),
    m_haveCertHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_domainTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDomainData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomainData.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("PlayDomain") && !value["PlayDomain"].IsNull())
    {
        if (!value["PlayDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomainData.PlayDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playDomain = string(value["PlayDomain"].GetString());
        m_playDomainHasBeenSet = true;
    }

    if (value.HasMember("InternalDomain") && !value["InternalDomain"].IsNull())
    {
        if (!value["InternalDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomainData.InternalDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalDomain = string(value["InternalDomain"].GetString());
        m_internalDomainHasBeenSet = true;
    }

    if (value.HasMember("HaveCert") && !value["HaveCert"].IsNull())
    {
        if (!value["HaveCert"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomainData.HaveCert` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_haveCert = value["HaveCert"].GetInt64();
        m_haveCertHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomainData.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomainData.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomainData.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomainData.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("DomainType") && !value["DomainType"].IsNull())
    {
        if (!value["DomainType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomainData.DomainType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_domainType = value["DomainType"].GetInt64();
        m_domainTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDomainData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_playDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_internalDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_haveCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaveCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_haveCert, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainType, allocator);
    }

}


string DescribeDomainData::GetId() const
{
    return m_id;
}

void DescribeDomainData::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeDomainData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeDomainData::GetPlayDomain() const
{
    return m_playDomain;
}

void DescribeDomainData::SetPlayDomain(const string& _playDomain)
{
    m_playDomain = _playDomain;
    m_playDomainHasBeenSet = true;
}

bool DescribeDomainData::PlayDomainHasBeenSet() const
{
    return m_playDomainHasBeenSet;
}

string DescribeDomainData::GetInternalDomain() const
{
    return m_internalDomain;
}

void DescribeDomainData::SetInternalDomain(const string& _internalDomain)
{
    m_internalDomain = _internalDomain;
    m_internalDomainHasBeenSet = true;
}

bool DescribeDomainData::InternalDomainHasBeenSet() const
{
    return m_internalDomainHasBeenSet;
}

int64_t DescribeDomainData::GetHaveCert() const
{
    return m_haveCert;
}

void DescribeDomainData::SetHaveCert(const int64_t& _haveCert)
{
    m_haveCert = _haveCert;
    m_haveCertHasBeenSet = true;
}

bool DescribeDomainData::HaveCertHasBeenSet() const
{
    return m_haveCertHasBeenSet;
}

string DescribeDomainData::GetClusterId() const
{
    return m_clusterId;
}

void DescribeDomainData::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeDomainData::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeDomainData::GetClusterName() const
{
    return m_clusterName;
}

void DescribeDomainData::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool DescribeDomainData::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

int64_t DescribeDomainData::GetAppId() const
{
    return m_appId;
}

void DescribeDomainData::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeDomainData::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeDomainData::GetCertId() const
{
    return m_certId;
}

void DescribeDomainData::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool DescribeDomainData::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

int64_t DescribeDomainData::GetDomainType() const
{
    return m_domainType;
}

void DescribeDomainData::SetDomainType(const int64_t& _domainType)
{
    m_domainType = _domainType;
    m_domainTypeHasBeenSet = true;
}

bool DescribeDomainData::DomainTypeHasBeenSet() const
{
    return m_domainTypeHasBeenSet;
}

