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

#include <tencentcloud/live/v20180801/model/CertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CertInfo::CertInfo() :
    m_certIdHasBeenSet(false),
    m_certNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_httpsCrtHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_certExpireTimeHasBeenSet(false),
    m_domainListHasBeenSet(false)
{
}

CoreInternalOutcome CertInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.CertId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certId = value["CertId"].GetInt64();
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("CertName") && !value["CertName"].IsNull())
    {
        if (!value["CertName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.CertName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certName = string(value["CertName"].GetString());
        m_certNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("HttpsCrt") && !value["HttpsCrt"].IsNull())
    {
        if (!value["HttpsCrt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.HttpsCrt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpsCrt = string(value["HttpsCrt"].GetString());
        m_httpsCrtHasBeenSet = true;
    }

    if (value.HasMember("CertType") && !value["CertType"].IsNull())
    {
        if (!value["CertType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.CertType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certType = value["CertType"].GetInt64();
        m_certTypeHasBeenSet = true;
    }

    if (value.HasMember("CertExpireTime") && !value["CertExpireTime"].IsNull())
    {
        if (!value["CertExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.CertExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certExpireTime = string(value["CertExpireTime"].GetString());
        m_certExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("DomainList") && !value["DomainList"].IsNull())
    {
        if (!value["DomainList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CertInfo.DomainList` is not array type"));

        const rapidjson::Value &tmpValue = value["DomainList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domainList.push_back((*itr).GetString());
        }
        m_domainListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certId, allocator);
    }

    if (m_certNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_httpsCrtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsCrt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpsCrt.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certType, allocator);
    }

    if (m_certExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_domainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainList.begin(); itr != m_domainList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t CertInfo::GetCertId() const
{
    return m_certId;
}

void CertInfo::SetCertId(const int64_t& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CertInfo::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string CertInfo::GetCertName() const
{
    return m_certName;
}

void CertInfo::SetCertName(const string& _certName)
{
    m_certName = _certName;
    m_certNameHasBeenSet = true;
}

bool CertInfo::CertNameHasBeenSet() const
{
    return m_certNameHasBeenSet;
}

string CertInfo::GetDescription() const
{
    return m_description;
}

void CertInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CertInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CertInfo::GetCreateTime() const
{
    return m_createTime;
}

void CertInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CertInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CertInfo::GetHttpsCrt() const
{
    return m_httpsCrt;
}

void CertInfo::SetHttpsCrt(const string& _httpsCrt)
{
    m_httpsCrt = _httpsCrt;
    m_httpsCrtHasBeenSet = true;
}

bool CertInfo::HttpsCrtHasBeenSet() const
{
    return m_httpsCrtHasBeenSet;
}

int64_t CertInfo::GetCertType() const
{
    return m_certType;
}

void CertInfo::SetCertType(const int64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool CertInfo::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string CertInfo::GetCertExpireTime() const
{
    return m_certExpireTime;
}

void CertInfo::SetCertExpireTime(const string& _certExpireTime)
{
    m_certExpireTime = _certExpireTime;
    m_certExpireTimeHasBeenSet = true;
}

bool CertInfo::CertExpireTimeHasBeenSet() const
{
    return m_certExpireTimeHasBeenSet;
}

vector<string> CertInfo::GetDomainList() const
{
    return m_domainList;
}

void CertInfo::SetDomainList(const vector<string>& _domainList)
{
    m_domainList = _domainList;
    m_domainListHasBeenSet = true;
}

bool CertInfo::DomainListHasBeenSet() const
{
    return m_domainListHasBeenSet;
}

