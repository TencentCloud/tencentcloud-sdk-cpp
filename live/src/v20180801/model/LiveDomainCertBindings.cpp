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

#include <tencentcloud/live/v20180801/model/LiveDomainCertBindings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

LiveDomainCertBindings::LiveDomainCertBindings() :
    m_domainNameHasBeenSet(false),
    m_certificateAliasHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_certExpireTimeHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_cloudCertIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome LiveDomainCertBindings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveDomainCertBindings.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("CertificateAlias") && !value["CertificateAlias"].IsNull())
    {
        if (!value["CertificateAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveDomainCertBindings.CertificateAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateAlias = string(value["CertificateAlias"].GetString());
        m_certificateAliasHasBeenSet = true;
    }

    if (value.HasMember("CertType") && !value["CertType"].IsNull())
    {
        if (!value["CertType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveDomainCertBindings.CertType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certType = value["CertType"].GetInt64();
        m_certTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveDomainCertBindings.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CertExpireTime") && !value["CertExpireTime"].IsNull())
    {
        if (!value["CertExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveDomainCertBindings.CertExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certExpireTime = string(value["CertExpireTime"].GetString());
        m_certExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveDomainCertBindings.CertId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certId = value["CertId"].GetInt64();
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("CloudCertId") && !value["CloudCertId"].IsNull())
    {
        if (!value["CloudCertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveDomainCertBindings.CloudCertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudCertId = string(value["CloudCertId"].GetString());
        m_cloudCertIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveDomainCertBindings.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveDomainCertBindings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certType, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_certExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certId, allocator);
    }

    if (m_cloudCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudCertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudCertId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string LiveDomainCertBindings::GetDomainName() const
{
    return m_domainName;
}

void LiveDomainCertBindings::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool LiveDomainCertBindings::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string LiveDomainCertBindings::GetCertificateAlias() const
{
    return m_certificateAlias;
}

void LiveDomainCertBindings::SetCertificateAlias(const string& _certificateAlias)
{
    m_certificateAlias = _certificateAlias;
    m_certificateAliasHasBeenSet = true;
}

bool LiveDomainCertBindings::CertificateAliasHasBeenSet() const
{
    return m_certificateAliasHasBeenSet;
}

int64_t LiveDomainCertBindings::GetCertType() const
{
    return m_certType;
}

void LiveDomainCertBindings::SetCertType(const int64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool LiveDomainCertBindings::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

int64_t LiveDomainCertBindings::GetStatus() const
{
    return m_status;
}

void LiveDomainCertBindings::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LiveDomainCertBindings::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LiveDomainCertBindings::GetCertExpireTime() const
{
    return m_certExpireTime;
}

void LiveDomainCertBindings::SetCertExpireTime(const string& _certExpireTime)
{
    m_certExpireTime = _certExpireTime;
    m_certExpireTimeHasBeenSet = true;
}

bool LiveDomainCertBindings::CertExpireTimeHasBeenSet() const
{
    return m_certExpireTimeHasBeenSet;
}

int64_t LiveDomainCertBindings::GetCertId() const
{
    return m_certId;
}

void LiveDomainCertBindings::SetCertId(const int64_t& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool LiveDomainCertBindings::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string LiveDomainCertBindings::GetCloudCertId() const
{
    return m_cloudCertId;
}

void LiveDomainCertBindings::SetCloudCertId(const string& _cloudCertId)
{
    m_cloudCertId = _cloudCertId;
    m_cloudCertIdHasBeenSet = true;
}

bool LiveDomainCertBindings::CloudCertIdHasBeenSet() const
{
    return m_cloudCertIdHasBeenSet;
}

string LiveDomainCertBindings::GetUpdateTime() const
{
    return m_updateTime;
}

void LiveDomainCertBindings::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LiveDomainCertBindings::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

