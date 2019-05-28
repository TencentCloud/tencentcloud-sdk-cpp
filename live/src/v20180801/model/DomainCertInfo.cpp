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

#include <tencentcloud/live/v20180801/model/DomainCertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

DomainCertInfo::DomainCertInfo() :
    m_certIdHasBeenSet(false),
    m_certNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_httpsCrtHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_certExpireTimeHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DomainCertInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DomainCertInfo.CertId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certId = value["CertId"].GetInt64();
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("CertName") && !value["CertName"].IsNull())
    {
        if (!value["CertName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainCertInfo.CertName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certName = string(value["CertName"].GetString());
        m_certNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainCertInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainCertInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("HttpsCrt") && !value["HttpsCrt"].IsNull())
    {
        if (!value["HttpsCrt"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainCertInfo.HttpsCrt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpsCrt = string(value["HttpsCrt"].GetString());
        m_httpsCrtHasBeenSet = true;
    }

    if (value.HasMember("CertType") && !value["CertType"].IsNull())
    {
        if (!value["CertType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DomainCertInfo.CertType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certType = value["CertType"].GetInt64();
        m_certTypeHasBeenSet = true;
    }

    if (value.HasMember("CertExpireTime") && !value["CertExpireTime"].IsNull())
    {
        if (!value["CertExpireTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainCertInfo.CertExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certExpireTime = string(value["CertExpireTime"].GetString());
        m_certExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainCertInfo.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DomainCertInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainCertInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_certIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certId, allocator);
    }

    if (m_certNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_certName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_httpsCrtHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HttpsCrt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_httpsCrt.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certType, allocator);
    }

    if (m_certExpireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_certExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


int64_t DomainCertInfo::GetCertId() const
{
    return m_certId;
}

void DomainCertInfo::SetCertId(const int64_t& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool DomainCertInfo::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string DomainCertInfo::GetCertName() const
{
    return m_certName;
}

void DomainCertInfo::SetCertName(const string& _certName)
{
    m_certName = _certName;
    m_certNameHasBeenSet = true;
}

bool DomainCertInfo::CertNameHasBeenSet() const
{
    return m_certNameHasBeenSet;
}

string DomainCertInfo::GetDescription() const
{
    return m_description;
}

void DomainCertInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DomainCertInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DomainCertInfo::GetCreateTime() const
{
    return m_createTime;
}

void DomainCertInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DomainCertInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DomainCertInfo::GetHttpsCrt() const
{
    return m_httpsCrt;
}

void DomainCertInfo::SetHttpsCrt(const string& _httpsCrt)
{
    m_httpsCrt = _httpsCrt;
    m_httpsCrtHasBeenSet = true;
}

bool DomainCertInfo::HttpsCrtHasBeenSet() const
{
    return m_httpsCrtHasBeenSet;
}

int64_t DomainCertInfo::GetCertType() const
{
    return m_certType;
}

void DomainCertInfo::SetCertType(const int64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool DomainCertInfo::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string DomainCertInfo::GetCertExpireTime() const
{
    return m_certExpireTime;
}

void DomainCertInfo::SetCertExpireTime(const string& _certExpireTime)
{
    m_certExpireTime = _certExpireTime;
    m_certExpireTimeHasBeenSet = true;
}

bool DomainCertInfo::CertExpireTimeHasBeenSet() const
{
    return m_certExpireTimeHasBeenSet;
}

string DomainCertInfo::GetDomainName() const
{
    return m_domainName;
}

void DomainCertInfo::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool DomainCertInfo::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

int64_t DomainCertInfo::GetStatus() const
{
    return m_status;
}

void DomainCertInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DomainCertInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

