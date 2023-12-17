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

#include <tencentcloud/ess/v20201111/model/HasAuthOrganization.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

HasAuthOrganization::HasAuthOrganization() :
    m_organizationIdHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_authorizedOrganizationIdHasBeenSet(false),
    m_authorizedOrganizationNameHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_authorizeTimeHasBeenSet(false)
{
}

CoreInternalOutcome HasAuthOrganization::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrganizationId") && !value["OrganizationId"].IsNull())
    {
        if (!value["OrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HasAuthOrganization.OrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationId = string(value["OrganizationId"].GetString());
        m_organizationIdHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HasAuthOrganization.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("AuthorizedOrganizationId") && !value["AuthorizedOrganizationId"].IsNull())
    {
        if (!value["AuthorizedOrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HasAuthOrganization.AuthorizedOrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizedOrganizationId = string(value["AuthorizedOrganizationId"].GetString());
        m_authorizedOrganizationIdHasBeenSet = true;
    }

    if (value.HasMember("AuthorizedOrganizationName") && !value["AuthorizedOrganizationName"].IsNull())
    {
        if (!value["AuthorizedOrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HasAuthOrganization.AuthorizedOrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizedOrganizationName = string(value["AuthorizedOrganizationName"].GetString());
        m_authorizedOrganizationNameHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HasAuthOrganization.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HasAuthOrganization.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("AuthorizeTime") && !value["AuthorizeTime"].IsNull())
    {
        if (!value["AuthorizeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HasAuthOrganization.AuthorizeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authorizeTime = value["AuthorizeTime"].GetInt64();
        m_authorizeTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HasAuthOrganization::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_organizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedOrganizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedOrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizedOrganizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedOrganizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedOrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizedOrganizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizeTime, allocator);
    }

}


string HasAuthOrganization::GetOrganizationId() const
{
    return m_organizationId;
}

void HasAuthOrganization::SetOrganizationId(const string& _organizationId)
{
    m_organizationId = _organizationId;
    m_organizationIdHasBeenSet = true;
}

bool HasAuthOrganization::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}

string HasAuthOrganization::GetOrganizationName() const
{
    return m_organizationName;
}

void HasAuthOrganization::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool HasAuthOrganization::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string HasAuthOrganization::GetAuthorizedOrganizationId() const
{
    return m_authorizedOrganizationId;
}

void HasAuthOrganization::SetAuthorizedOrganizationId(const string& _authorizedOrganizationId)
{
    m_authorizedOrganizationId = _authorizedOrganizationId;
    m_authorizedOrganizationIdHasBeenSet = true;
}

bool HasAuthOrganization::AuthorizedOrganizationIdHasBeenSet() const
{
    return m_authorizedOrganizationIdHasBeenSet;
}

string HasAuthOrganization::GetAuthorizedOrganizationName() const
{
    return m_authorizedOrganizationName;
}

void HasAuthOrganization::SetAuthorizedOrganizationName(const string& _authorizedOrganizationName)
{
    m_authorizedOrganizationName = _authorizedOrganizationName;
    m_authorizedOrganizationNameHasBeenSet = true;
}

bool HasAuthOrganization::AuthorizedOrganizationNameHasBeenSet() const
{
    return m_authorizedOrganizationNameHasBeenSet;
}

string HasAuthOrganization::GetTemplateId() const
{
    return m_templateId;
}

void HasAuthOrganization::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool HasAuthOrganization::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string HasAuthOrganization::GetTemplateName() const
{
    return m_templateName;
}

void HasAuthOrganization::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool HasAuthOrganization::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

int64_t HasAuthOrganization::GetAuthorizeTime() const
{
    return m_authorizeTime;
}

void HasAuthOrganization::SetAuthorizeTime(const int64_t& _authorizeTime)
{
    m_authorizeTime = _authorizeTime;
    m_authorizeTimeHasBeenSet = true;
}

bool HasAuthOrganization::AuthorizeTimeHasBeenSet() const
{
    return m_authorizeTimeHasBeenSet;
}

