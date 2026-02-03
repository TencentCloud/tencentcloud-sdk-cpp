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

#include <tencentcloud/tcb/v20180608/model/CloudBaseGWAPI.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseGWAPI::CloudBaseGWAPI() :
    m_serviceIdHasBeenSet(false),
    m_aPIIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_customHasBeenSet(false),
    m_enableAuthHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_unionStatusHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_conflictFlagHasBeenSet(false),
    m_domainStatusHasBeenSet(false),
    m_isShortPathHasBeenSet(false),
    m_pathTransmissionHasBeenSet(false),
    m_enableCheckAcrossDomainHasBeenSet(false),
    m_staticFileDirectoryHasBeenSet(false),
    m_qPSPolicyHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseGWAPI::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("APIId") && !value["APIId"].IsNull())
    {
        if (!value["APIId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.APIId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIId = string(value["APIId"].GetString());
        m_aPIIdHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Custom") && !value["Custom"].IsNull())
    {
        if (!value["Custom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.Custom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_custom = string(value["Custom"].GetString());
        m_customHasBeenSet = true;
    }

    if (value.HasMember("EnableAuth") && !value["EnableAuth"].IsNull())
    {
        if (!value["EnableAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.EnableAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAuth = value["EnableAuth"].GetBool();
        m_enableAuthHasBeenSet = true;
    }

    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.AccessType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = value["AccessType"].GetInt64();
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("UnionStatus") && !value["UnionStatus"].IsNull())
    {
        if (!value["UnionStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.UnionStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unionStatus = value["UnionStatus"].GetInt64();
        m_unionStatusHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("ConflictFlag") && !value["ConflictFlag"].IsNull())
    {
        if (!value["ConflictFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.ConflictFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_conflictFlag = value["ConflictFlag"].GetBool();
        m_conflictFlagHasBeenSet = true;
    }

    if (value.HasMember("DomainStatus") && !value["DomainStatus"].IsNull())
    {
        if (!value["DomainStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.DomainStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_domainStatus = value["DomainStatus"].GetInt64();
        m_domainStatusHasBeenSet = true;
    }

    if (value.HasMember("IsShortPath") && !value["IsShortPath"].IsNull())
    {
        if (!value["IsShortPath"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.IsShortPath` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isShortPath = value["IsShortPath"].GetBool();
        m_isShortPathHasBeenSet = true;
    }

    if (value.HasMember("PathTransmission") && !value["PathTransmission"].IsNull())
    {
        if (!value["PathTransmission"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.PathTransmission` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pathTransmission = value["PathTransmission"].GetUint64();
        m_pathTransmissionHasBeenSet = true;
    }

    if (value.HasMember("EnableCheckAcrossDomain") && !value["EnableCheckAcrossDomain"].IsNull())
    {
        if (!value["EnableCheckAcrossDomain"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.EnableCheckAcrossDomain` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableCheckAcrossDomain = value["EnableCheckAcrossDomain"].GetUint64();
        m_enableCheckAcrossDomainHasBeenSet = true;
    }

    if (value.HasMember("StaticFileDirectory") && !value["StaticFileDirectory"].IsNull())
    {
        if (!value["StaticFileDirectory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.StaticFileDirectory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staticFileDirectory = string(value["StaticFileDirectory"].GetString());
        m_staticFileDirectoryHasBeenSet = true;
    }

    if (value.HasMember("QPSPolicy") && !value["QPSPolicy"].IsNull())
    {
        if (!value["QPSPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPI.QPSPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qPSPolicy.Deserialize(value["QPSPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qPSPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseGWAPI::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_customHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Custom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_custom.c_str(), allocator).Move(), allocator);
    }

    if (m_enableAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAuth, allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessType, allocator);
    }

    if (m_unionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unionStatus, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_conflictFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_conflictFlag, allocator);
    }

    if (m_domainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainStatus, allocator);
    }

    if (m_isShortPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShortPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShortPath, allocator);
    }

    if (m_pathTransmissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathTransmission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pathTransmission, allocator);
    }

    if (m_enableCheckAcrossDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCheckAcrossDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCheckAcrossDomain, allocator);
    }

    if (m_staticFileDirectoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticFileDirectory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staticFileDirectory.c_str(), allocator).Move(), allocator);
    }

    if (m_qPSPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QPSPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qPSPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CloudBaseGWAPI::GetServiceId() const
{
    return m_serviceId;
}

void CloudBaseGWAPI::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool CloudBaseGWAPI::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string CloudBaseGWAPI::GetAPIId() const
{
    return m_aPIId;
}

void CloudBaseGWAPI::SetAPIId(const string& _aPIId)
{
    m_aPIId = _aPIId;
    m_aPIIdHasBeenSet = true;
}

bool CloudBaseGWAPI::APIIdHasBeenSet() const
{
    return m_aPIIdHasBeenSet;
}

string CloudBaseGWAPI::GetPath() const
{
    return m_path;
}

void CloudBaseGWAPI::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CloudBaseGWAPI::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

uint64_t CloudBaseGWAPI::GetType() const
{
    return m_type;
}

void CloudBaseGWAPI::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CloudBaseGWAPI::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CloudBaseGWAPI::GetName() const
{
    return m_name;
}

void CloudBaseGWAPI::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CloudBaseGWAPI::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CloudBaseGWAPI::GetCreateTime() const
{
    return m_createTime;
}

void CloudBaseGWAPI::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudBaseGWAPI::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CloudBaseGWAPI::GetCustom() const
{
    return m_custom;
}

void CloudBaseGWAPI::SetCustom(const string& _custom)
{
    m_custom = _custom;
    m_customHasBeenSet = true;
}

bool CloudBaseGWAPI::CustomHasBeenSet() const
{
    return m_customHasBeenSet;
}

bool CloudBaseGWAPI::GetEnableAuth() const
{
    return m_enableAuth;
}

void CloudBaseGWAPI::SetEnableAuth(const bool& _enableAuth)
{
    m_enableAuth = _enableAuth;
    m_enableAuthHasBeenSet = true;
}

bool CloudBaseGWAPI::EnableAuthHasBeenSet() const
{
    return m_enableAuthHasBeenSet;
}

string CloudBaseGWAPI::GetEnvId() const
{
    return m_envId;
}

void CloudBaseGWAPI::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CloudBaseGWAPI::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

int64_t CloudBaseGWAPI::GetAccessType() const
{
    return m_accessType;
}

void CloudBaseGWAPI::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool CloudBaseGWAPI::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

int64_t CloudBaseGWAPI::GetUnionStatus() const
{
    return m_unionStatus;
}

void CloudBaseGWAPI::SetUnionStatus(const int64_t& _unionStatus)
{
    m_unionStatus = _unionStatus;
    m_unionStatusHasBeenSet = true;
}

bool CloudBaseGWAPI::UnionStatusHasBeenSet() const
{
    return m_unionStatusHasBeenSet;
}

string CloudBaseGWAPI::GetDomain() const
{
    return m_domain;
}

void CloudBaseGWAPI::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CloudBaseGWAPI::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

bool CloudBaseGWAPI::GetConflictFlag() const
{
    return m_conflictFlag;
}

void CloudBaseGWAPI::SetConflictFlag(const bool& _conflictFlag)
{
    m_conflictFlag = _conflictFlag;
    m_conflictFlagHasBeenSet = true;
}

bool CloudBaseGWAPI::ConflictFlagHasBeenSet() const
{
    return m_conflictFlagHasBeenSet;
}

int64_t CloudBaseGWAPI::GetDomainStatus() const
{
    return m_domainStatus;
}

void CloudBaseGWAPI::SetDomainStatus(const int64_t& _domainStatus)
{
    m_domainStatus = _domainStatus;
    m_domainStatusHasBeenSet = true;
}

bool CloudBaseGWAPI::DomainStatusHasBeenSet() const
{
    return m_domainStatusHasBeenSet;
}

bool CloudBaseGWAPI::GetIsShortPath() const
{
    return m_isShortPath;
}

void CloudBaseGWAPI::SetIsShortPath(const bool& _isShortPath)
{
    m_isShortPath = _isShortPath;
    m_isShortPathHasBeenSet = true;
}

bool CloudBaseGWAPI::IsShortPathHasBeenSet() const
{
    return m_isShortPathHasBeenSet;
}

uint64_t CloudBaseGWAPI::GetPathTransmission() const
{
    return m_pathTransmission;
}

void CloudBaseGWAPI::SetPathTransmission(const uint64_t& _pathTransmission)
{
    m_pathTransmission = _pathTransmission;
    m_pathTransmissionHasBeenSet = true;
}

bool CloudBaseGWAPI::PathTransmissionHasBeenSet() const
{
    return m_pathTransmissionHasBeenSet;
}

uint64_t CloudBaseGWAPI::GetEnableCheckAcrossDomain() const
{
    return m_enableCheckAcrossDomain;
}

void CloudBaseGWAPI::SetEnableCheckAcrossDomain(const uint64_t& _enableCheckAcrossDomain)
{
    m_enableCheckAcrossDomain = _enableCheckAcrossDomain;
    m_enableCheckAcrossDomainHasBeenSet = true;
}

bool CloudBaseGWAPI::EnableCheckAcrossDomainHasBeenSet() const
{
    return m_enableCheckAcrossDomainHasBeenSet;
}

string CloudBaseGWAPI::GetStaticFileDirectory() const
{
    return m_staticFileDirectory;
}

void CloudBaseGWAPI::SetStaticFileDirectory(const string& _staticFileDirectory)
{
    m_staticFileDirectory = _staticFileDirectory;
    m_staticFileDirectoryHasBeenSet = true;
}

bool CloudBaseGWAPI::StaticFileDirectoryHasBeenSet() const
{
    return m_staticFileDirectoryHasBeenSet;
}

CloudBaseGWAPIQPSPolicy CloudBaseGWAPI::GetQPSPolicy() const
{
    return m_qPSPolicy;
}

void CloudBaseGWAPI::SetQPSPolicy(const CloudBaseGWAPIQPSPolicy& _qPSPolicy)
{
    m_qPSPolicy = _qPSPolicy;
    m_qPSPolicyHasBeenSet = true;
}

bool CloudBaseGWAPI::QPSPolicyHasBeenSet() const
{
    return m_qPSPolicyHasBeenSet;
}

