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

#include <tencentcloud/sslpod/v20190605/model/DomainSiteInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sslpod::V20190605::Model;
using namespace std;

DomainSiteInfo::DomainSiteInfo() :
    m_idHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_autoIPHasBeenSet(false),
    m_gradeHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_serverTypeHasBeenSet(false),
    m_gradeCodeHasBeenSet(false),
    m_noticeHasBeenSet(false),
    m_accountDomainIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_portHasBeenSet(false)
{
}

CoreInternalOutcome DomainSiteInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSiteInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSiteInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSiteInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("AutoIP") && !value["AutoIP"].IsNull())
    {
        if (!value["AutoIP"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSiteInfo.AutoIP` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoIP = value["AutoIP"].GetBool();
        m_autoIPHasBeenSet = true;
    }

    if (value.HasMember("Grade") && !value["Grade"].IsNull())
    {
        if (!value["Grade"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSiteInfo.Grade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grade = string(value["Grade"].GetString());
        m_gradeHasBeenSet = true;
    }

    if (value.HasMember("Brand") && !value["Brand"].IsNull())
    {
        if (!value["Brand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSiteInfo.Brand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brand = string(value["Brand"].GetString());
        m_brandHasBeenSet = true;
    }

    if (value.HasMember("ServerType") && !value["ServerType"].IsNull())
    {
        if (!value["ServerType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSiteInfo.ServerType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serverType = value["ServerType"].GetInt64();
        m_serverTypeHasBeenSet = true;
    }

    if (value.HasMember("GradeCode") && !value["GradeCode"].IsNull())
    {
        if (!value["GradeCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSiteInfo.GradeCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gradeCode = value["GradeCode"].GetInt64();
        m_gradeCodeHasBeenSet = true;
    }

    if (value.HasMember("Notice") && !value["Notice"].IsNull())
    {
        if (!value["Notice"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSiteInfo.Notice` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_notice = value["Notice"].GetBool();
        m_noticeHasBeenSet = true;
    }

    if (value.HasMember("AccountDomainId") && !value["AccountDomainId"].IsNull())
    {
        if (!value["AccountDomainId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSiteInfo.AccountDomainId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountDomainId = value["AccountDomainId"].GetInt64();
        m_accountDomainIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainSiteInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSiteInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainSiteInfo.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainSiteInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_autoIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoIP, allocator);
    }

    if (m_gradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grade.c_str(), allocator).Move(), allocator);
    }

    if (m_brandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brand.c_str(), allocator).Move(), allocator);
    }

    if (m_serverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serverType, allocator);
    }

    if (m_gradeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GradeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gradeCode, allocator);
    }

    if (m_noticeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notice, allocator);
    }

    if (m_accountDomainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountDomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountDomainId, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

}


int64_t DomainSiteInfo::GetId() const
{
    return m_id;
}

void DomainSiteInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DomainSiteInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DomainSiteInfo::GetDomain() const
{
    return m_domain;
}

void DomainSiteInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DomainSiteInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DomainSiteInfo::GetIp() const
{
    return m_ip;
}

void DomainSiteInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DomainSiteInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

bool DomainSiteInfo::GetAutoIP() const
{
    return m_autoIP;
}

void DomainSiteInfo::SetAutoIP(const bool& _autoIP)
{
    m_autoIP = _autoIP;
    m_autoIPHasBeenSet = true;
}

bool DomainSiteInfo::AutoIPHasBeenSet() const
{
    return m_autoIPHasBeenSet;
}

string DomainSiteInfo::GetGrade() const
{
    return m_grade;
}

void DomainSiteInfo::SetGrade(const string& _grade)
{
    m_grade = _grade;
    m_gradeHasBeenSet = true;
}

bool DomainSiteInfo::GradeHasBeenSet() const
{
    return m_gradeHasBeenSet;
}

string DomainSiteInfo::GetBrand() const
{
    return m_brand;
}

void DomainSiteInfo::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool DomainSiteInfo::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

int64_t DomainSiteInfo::GetServerType() const
{
    return m_serverType;
}

void DomainSiteInfo::SetServerType(const int64_t& _serverType)
{
    m_serverType = _serverType;
    m_serverTypeHasBeenSet = true;
}

bool DomainSiteInfo::ServerTypeHasBeenSet() const
{
    return m_serverTypeHasBeenSet;
}

int64_t DomainSiteInfo::GetGradeCode() const
{
    return m_gradeCode;
}

void DomainSiteInfo::SetGradeCode(const int64_t& _gradeCode)
{
    m_gradeCode = _gradeCode;
    m_gradeCodeHasBeenSet = true;
}

bool DomainSiteInfo::GradeCodeHasBeenSet() const
{
    return m_gradeCodeHasBeenSet;
}

bool DomainSiteInfo::GetNotice() const
{
    return m_notice;
}

void DomainSiteInfo::SetNotice(const bool& _notice)
{
    m_notice = _notice;
    m_noticeHasBeenSet = true;
}

bool DomainSiteInfo::NoticeHasBeenSet() const
{
    return m_noticeHasBeenSet;
}

int64_t DomainSiteInfo::GetAccountDomainId() const
{
    return m_accountDomainId;
}

void DomainSiteInfo::SetAccountDomainId(const int64_t& _accountDomainId)
{
    m_accountDomainId = _accountDomainId;
    m_accountDomainIdHasBeenSet = true;
}

bool DomainSiteInfo::AccountDomainIdHasBeenSet() const
{
    return m_accountDomainIdHasBeenSet;
}

vector<string> DomainSiteInfo::GetTags() const
{
    return m_tags;
}

void DomainSiteInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DomainSiteInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DomainSiteInfo::GetStatus() const
{
    return m_status;
}

void DomainSiteInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DomainSiteInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DomainSiteInfo::GetPort() const
{
    return m_port;
}

void DomainSiteInfo::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DomainSiteInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

