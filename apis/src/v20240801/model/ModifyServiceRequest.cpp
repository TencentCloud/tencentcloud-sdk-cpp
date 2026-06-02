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

#include <tencentcloud/apis/v20240801/model/ModifyServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

ModifyServiceRequest::ModifyServiceRequest() :
    m_instanceIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_paasIDHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_labelIDsHasBeenSet(false),
    m_categoryIDsHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_signTypeHasBeenSet(false),
    m_loginTypesHasBeenSet(false),
    m_targetSelectHasBeenSet(false),
    m_pubPathHasBeenSet(false),
    m_requestMethodHasBeenSet(false),
    m_httpProtocolTypeHasBeenSet(false),
    m_checkTargetCertsErrorHasBeenSet(false),
    m_httpProtocolVersionHasBeenSet(false),
    m_versionsHasBeenSet(false),
    m_targetPathHasBeenSet(false),
    m_requestParamsValidatorStatusHasBeenSet(false),
    m_requestParamsValidatorJsonInfoTHasBeenSet(false),
    m_responseParamsValidatorStatusHasBeenSet(false),
    m_responseParamsValidatorJsonInfoTHasBeenSet(false),
    m_invokeLimitConfigStatusHasBeenSet(false),
    m_invokeLimitConfigHasBeenSet(false),
    m_healthCheckStatusHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false),
    m_sourceTypeStatusHasBeenSet(false),
    m_sourceTypeConfigHasBeenSet(false),
    m_ipWhiteStatusHasBeenSet(false),
    m_ipWhiteListHasBeenSet(false),
    m_ipBlackStatusHasBeenSet(false),
    m_ipBlackListHasBeenSet(false),
    m_pluginConfigsHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

string ModifyServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_paasIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaasID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paasID.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_labelIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelIDs.begin(); itr != m_labelIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_categoryIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryIDs.begin(); itr != m_categoryIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_signTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signType.c_str(), allocator).Move(), allocator);
    }

    if (m_loginTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_loginTypes.begin(); itr != m_loginTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetSelectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSelect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetSelect.c_str(), allocator).Move(), allocator);
    }

    if (m_pubPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PubPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pubPath.c_str(), allocator).Move(), allocator);
    }

    if (m_requestMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_httpProtocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpProtocolType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_httpProtocolType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkTargetCertsErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckTargetCertsError";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkTargetCertsError, allocator);
    }

    if (m_httpProtocolVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpProtocolVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_httpProtocolVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_versionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Versions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_versions.begin(); itr != m_versions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_targetPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetPath.c_str(), allocator).Move(), allocator);
    }

    if (m_requestParamsValidatorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestParamsValidatorStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_requestParamsValidatorStatus, allocator);
    }

    if (m_requestParamsValidatorJsonInfoTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestParamsValidatorJsonInfoT";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestParamsValidatorJsonInfoT.c_str(), allocator).Move(), allocator);
    }

    if (m_responseParamsValidatorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseParamsValidatorStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_responseParamsValidatorStatus, allocator);
    }

    if (m_responseParamsValidatorJsonInfoTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseParamsValidatorJsonInfoT";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_responseParamsValidatorJsonInfoT.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeLimitConfigStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeLimitConfigStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invokeLimitConfigStatus, allocator);
    }

    if (m_invokeLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invokeLimitConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_healthCheckStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthCheckStatus, allocator);
    }

    if (m_healthCheckConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sourceTypeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTypeStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceTypeStatus, allocator);
    }

    if (m_sourceTypeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTypeConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceTypeConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ipWhiteStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhiteStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipWhiteStatus, allocator);
    }

    if (m_ipWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhiteList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipWhiteList.begin(); itr != m_ipWhiteList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipBlackStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpBlackStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipBlackStatus, allocator);
    }

    if (m_ipBlackListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpBlackList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipBlackList.begin(); itr != m_ipBlackList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pluginConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginConfigs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pluginConfigs.begin(); itr != m_pluginConfigs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyServiceRequest::GetInstanceID() const
{
    return m_instanceID;
}

void ModifyServiceRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ModifyServiceRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string ModifyServiceRequest::GetName() const
{
    return m_name;
}

void ModifyServiceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyServiceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyServiceRequest::GetPaasID() const
{
    return m_paasID;
}

void ModifyServiceRequest::SetPaasID(const string& _paasID)
{
    m_paasID = _paasID;
    m_paasIDHasBeenSet = true;
}

bool ModifyServiceRequest::PaasIDHasBeenSet() const
{
    return m_paasIDHasBeenSet;
}

string ModifyServiceRequest::GetDescription() const
{
    return m_description;
}

void ModifyServiceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyServiceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> ModifyServiceRequest::GetLabelIDs() const
{
    return m_labelIDs;
}

void ModifyServiceRequest::SetLabelIDs(const vector<string>& _labelIDs)
{
    m_labelIDs = _labelIDs;
    m_labelIDsHasBeenSet = true;
}

bool ModifyServiceRequest::LabelIDsHasBeenSet() const
{
    return m_labelIDsHasBeenSet;
}

vector<string> ModifyServiceRequest::GetCategoryIDs() const
{
    return m_categoryIDs;
}

void ModifyServiceRequest::SetCategoryIDs(const vector<string>& _categoryIDs)
{
    m_categoryIDs = _categoryIDs;
    m_categoryIDsHasBeenSet = true;
}

bool ModifyServiceRequest::CategoryIDsHasBeenSet() const
{
    return m_categoryIDsHasBeenSet;
}

string ModifyServiceRequest::GetAuthType() const
{
    return m_authType;
}

void ModifyServiceRequest::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool ModifyServiceRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string ModifyServiceRequest::GetSignType() const
{
    return m_signType;
}

void ModifyServiceRequest::SetSignType(const string& _signType)
{
    m_signType = _signType;
    m_signTypeHasBeenSet = true;
}

bool ModifyServiceRequest::SignTypeHasBeenSet() const
{
    return m_signTypeHasBeenSet;
}

vector<string> ModifyServiceRequest::GetLoginTypes() const
{
    return m_loginTypes;
}

void ModifyServiceRequest::SetLoginTypes(const vector<string>& _loginTypes)
{
    m_loginTypes = _loginTypes;
    m_loginTypesHasBeenSet = true;
}

bool ModifyServiceRequest::LoginTypesHasBeenSet() const
{
    return m_loginTypesHasBeenSet;
}

string ModifyServiceRequest::GetTargetSelect() const
{
    return m_targetSelect;
}

void ModifyServiceRequest::SetTargetSelect(const string& _targetSelect)
{
    m_targetSelect = _targetSelect;
    m_targetSelectHasBeenSet = true;
}

bool ModifyServiceRequest::TargetSelectHasBeenSet() const
{
    return m_targetSelectHasBeenSet;
}

string ModifyServiceRequest::GetPubPath() const
{
    return m_pubPath;
}

void ModifyServiceRequest::SetPubPath(const string& _pubPath)
{
    m_pubPath = _pubPath;
    m_pubPathHasBeenSet = true;
}

bool ModifyServiceRequest::PubPathHasBeenSet() const
{
    return m_pubPathHasBeenSet;
}

string ModifyServiceRequest::GetRequestMethod() const
{
    return m_requestMethod;
}

void ModifyServiceRequest::SetRequestMethod(const string& _requestMethod)
{
    m_requestMethod = _requestMethod;
    m_requestMethodHasBeenSet = true;
}

bool ModifyServiceRequest::RequestMethodHasBeenSet() const
{
    return m_requestMethodHasBeenSet;
}

string ModifyServiceRequest::GetHttpProtocolType() const
{
    return m_httpProtocolType;
}

void ModifyServiceRequest::SetHttpProtocolType(const string& _httpProtocolType)
{
    m_httpProtocolType = _httpProtocolType;
    m_httpProtocolTypeHasBeenSet = true;
}

bool ModifyServiceRequest::HttpProtocolTypeHasBeenSet() const
{
    return m_httpProtocolTypeHasBeenSet;
}

bool ModifyServiceRequest::GetCheckTargetCertsError() const
{
    return m_checkTargetCertsError;
}

void ModifyServiceRequest::SetCheckTargetCertsError(const bool& _checkTargetCertsError)
{
    m_checkTargetCertsError = _checkTargetCertsError;
    m_checkTargetCertsErrorHasBeenSet = true;
}

bool ModifyServiceRequest::CheckTargetCertsErrorHasBeenSet() const
{
    return m_checkTargetCertsErrorHasBeenSet;
}

string ModifyServiceRequest::GetHttpProtocolVersion() const
{
    return m_httpProtocolVersion;
}

void ModifyServiceRequest::SetHttpProtocolVersion(const string& _httpProtocolVersion)
{
    m_httpProtocolVersion = _httpProtocolVersion;
    m_httpProtocolVersionHasBeenSet = true;
}

bool ModifyServiceRequest::HttpProtocolVersionHasBeenSet() const
{
    return m_httpProtocolVersionHasBeenSet;
}

vector<VersionDTO> ModifyServiceRequest::GetVersions() const
{
    return m_versions;
}

void ModifyServiceRequest::SetVersions(const vector<VersionDTO>& _versions)
{
    m_versions = _versions;
    m_versionsHasBeenSet = true;
}

bool ModifyServiceRequest::VersionsHasBeenSet() const
{
    return m_versionsHasBeenSet;
}

string ModifyServiceRequest::GetTargetPath() const
{
    return m_targetPath;
}

void ModifyServiceRequest::SetTargetPath(const string& _targetPath)
{
    m_targetPath = _targetPath;
    m_targetPathHasBeenSet = true;
}

bool ModifyServiceRequest::TargetPathHasBeenSet() const
{
    return m_targetPathHasBeenSet;
}

bool ModifyServiceRequest::GetRequestParamsValidatorStatus() const
{
    return m_requestParamsValidatorStatus;
}

void ModifyServiceRequest::SetRequestParamsValidatorStatus(const bool& _requestParamsValidatorStatus)
{
    m_requestParamsValidatorStatus = _requestParamsValidatorStatus;
    m_requestParamsValidatorStatusHasBeenSet = true;
}

bool ModifyServiceRequest::RequestParamsValidatorStatusHasBeenSet() const
{
    return m_requestParamsValidatorStatusHasBeenSet;
}

string ModifyServiceRequest::GetRequestParamsValidatorJsonInfoT() const
{
    return m_requestParamsValidatorJsonInfoT;
}

void ModifyServiceRequest::SetRequestParamsValidatorJsonInfoT(const string& _requestParamsValidatorJsonInfoT)
{
    m_requestParamsValidatorJsonInfoT = _requestParamsValidatorJsonInfoT;
    m_requestParamsValidatorJsonInfoTHasBeenSet = true;
}

bool ModifyServiceRequest::RequestParamsValidatorJsonInfoTHasBeenSet() const
{
    return m_requestParamsValidatorJsonInfoTHasBeenSet;
}

bool ModifyServiceRequest::GetResponseParamsValidatorStatus() const
{
    return m_responseParamsValidatorStatus;
}

void ModifyServiceRequest::SetResponseParamsValidatorStatus(const bool& _responseParamsValidatorStatus)
{
    m_responseParamsValidatorStatus = _responseParamsValidatorStatus;
    m_responseParamsValidatorStatusHasBeenSet = true;
}

bool ModifyServiceRequest::ResponseParamsValidatorStatusHasBeenSet() const
{
    return m_responseParamsValidatorStatusHasBeenSet;
}

string ModifyServiceRequest::GetResponseParamsValidatorJsonInfoT() const
{
    return m_responseParamsValidatorJsonInfoT;
}

void ModifyServiceRequest::SetResponseParamsValidatorJsonInfoT(const string& _responseParamsValidatorJsonInfoT)
{
    m_responseParamsValidatorJsonInfoT = _responseParamsValidatorJsonInfoT;
    m_responseParamsValidatorJsonInfoTHasBeenSet = true;
}

bool ModifyServiceRequest::ResponseParamsValidatorJsonInfoTHasBeenSet() const
{
    return m_responseParamsValidatorJsonInfoTHasBeenSet;
}

bool ModifyServiceRequest::GetInvokeLimitConfigStatus() const
{
    return m_invokeLimitConfigStatus;
}

void ModifyServiceRequest::SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus)
{
    m_invokeLimitConfigStatus = _invokeLimitConfigStatus;
    m_invokeLimitConfigStatusHasBeenSet = true;
}

bool ModifyServiceRequest::InvokeLimitConfigStatusHasBeenSet() const
{
    return m_invokeLimitConfigStatusHasBeenSet;
}

InvokeLimitConfigDTO ModifyServiceRequest::GetInvokeLimitConfig() const
{
    return m_invokeLimitConfig;
}

void ModifyServiceRequest::SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig)
{
    m_invokeLimitConfig = _invokeLimitConfig;
    m_invokeLimitConfigHasBeenSet = true;
}

bool ModifyServiceRequest::InvokeLimitConfigHasBeenSet() const
{
    return m_invokeLimitConfigHasBeenSet;
}

bool ModifyServiceRequest::GetHealthCheckStatus() const
{
    return m_healthCheckStatus;
}

void ModifyServiceRequest::SetHealthCheckStatus(const bool& _healthCheckStatus)
{
    m_healthCheckStatus = _healthCheckStatus;
    m_healthCheckStatusHasBeenSet = true;
}

bool ModifyServiceRequest::HealthCheckStatusHasBeenSet() const
{
    return m_healthCheckStatusHasBeenSet;
}

HealthCheckConfigDTO ModifyServiceRequest::GetHealthCheckConfig() const
{
    return m_healthCheckConfig;
}

void ModifyServiceRequest::SetHealthCheckConfig(const HealthCheckConfigDTO& _healthCheckConfig)
{
    m_healthCheckConfig = _healthCheckConfig;
    m_healthCheckConfigHasBeenSet = true;
}

bool ModifyServiceRequest::HealthCheckConfigHasBeenSet() const
{
    return m_healthCheckConfigHasBeenSet;
}

bool ModifyServiceRequest::GetSourceTypeStatus() const
{
    return m_sourceTypeStatus;
}

void ModifyServiceRequest::SetSourceTypeStatus(const bool& _sourceTypeStatus)
{
    m_sourceTypeStatus = _sourceTypeStatus;
    m_sourceTypeStatusHasBeenSet = true;
}

bool ModifyServiceRequest::SourceTypeStatusHasBeenSet() const
{
    return m_sourceTypeStatusHasBeenSet;
}

SourceTypeConfigDTO ModifyServiceRequest::GetSourceTypeConfig() const
{
    return m_sourceTypeConfig;
}

void ModifyServiceRequest::SetSourceTypeConfig(const SourceTypeConfigDTO& _sourceTypeConfig)
{
    m_sourceTypeConfig = _sourceTypeConfig;
    m_sourceTypeConfigHasBeenSet = true;
}

bool ModifyServiceRequest::SourceTypeConfigHasBeenSet() const
{
    return m_sourceTypeConfigHasBeenSet;
}

bool ModifyServiceRequest::GetIpWhiteStatus() const
{
    return m_ipWhiteStatus;
}

void ModifyServiceRequest::SetIpWhiteStatus(const bool& _ipWhiteStatus)
{
    m_ipWhiteStatus = _ipWhiteStatus;
    m_ipWhiteStatusHasBeenSet = true;
}

bool ModifyServiceRequest::IpWhiteStatusHasBeenSet() const
{
    return m_ipWhiteStatusHasBeenSet;
}

vector<string> ModifyServiceRequest::GetIpWhiteList() const
{
    return m_ipWhiteList;
}

void ModifyServiceRequest::SetIpWhiteList(const vector<string>& _ipWhiteList)
{
    m_ipWhiteList = _ipWhiteList;
    m_ipWhiteListHasBeenSet = true;
}

bool ModifyServiceRequest::IpWhiteListHasBeenSet() const
{
    return m_ipWhiteListHasBeenSet;
}

bool ModifyServiceRequest::GetIpBlackStatus() const
{
    return m_ipBlackStatus;
}

void ModifyServiceRequest::SetIpBlackStatus(const bool& _ipBlackStatus)
{
    m_ipBlackStatus = _ipBlackStatus;
    m_ipBlackStatusHasBeenSet = true;
}

bool ModifyServiceRequest::IpBlackStatusHasBeenSet() const
{
    return m_ipBlackStatusHasBeenSet;
}

vector<string> ModifyServiceRequest::GetIpBlackList() const
{
    return m_ipBlackList;
}

void ModifyServiceRequest::SetIpBlackList(const vector<string>& _ipBlackList)
{
    m_ipBlackList = _ipBlackList;
    m_ipBlackListHasBeenSet = true;
}

bool ModifyServiceRequest::IpBlackListHasBeenSet() const
{
    return m_ipBlackListHasBeenSet;
}

vector<PluginConfigDTO> ModifyServiceRequest::GetPluginConfigs() const
{
    return m_pluginConfigs;
}

void ModifyServiceRequest::SetPluginConfigs(const vector<PluginConfigDTO>& _pluginConfigs)
{
    m_pluginConfigs = _pluginConfigs;
    m_pluginConfigsHasBeenSet = true;
}

bool ModifyServiceRequest::PluginConfigsHasBeenSet() const
{
    return m_pluginConfigsHasBeenSet;
}

string ModifyServiceRequest::GetID() const
{
    return m_iD;
}

void ModifyServiceRequest::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ModifyServiceRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}


