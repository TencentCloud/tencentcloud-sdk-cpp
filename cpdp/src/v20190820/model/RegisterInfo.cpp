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

#include <tencentcloud/cpdp/v20190820/model/RegisterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RegisterInfo::RegisterInfo() :
    m_legalPersonIdCodeHasBeenSet(false),
    m_legalPersonIdTypeHasBeenSet(false),
    m_legalPersonNameHasBeenSet(false),
    m_organizationCodeHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_organizationTypeHasBeenSet(false)
{
}

CoreInternalOutcome RegisterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LegalPersonIdCode") && !value["LegalPersonIdCode"].IsNull())
    {
        if (!value["LegalPersonIdCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInfo.LegalPersonIdCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalPersonIdCode = string(value["LegalPersonIdCode"].GetString());
        m_legalPersonIdCodeHasBeenSet = true;
    }

    if (value.HasMember("LegalPersonIdType") && !value["LegalPersonIdType"].IsNull())
    {
        if (!value["LegalPersonIdType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInfo.LegalPersonIdType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalPersonIdType = string(value["LegalPersonIdType"].GetString());
        m_legalPersonIdTypeHasBeenSet = true;
    }

    if (value.HasMember("LegalPersonName") && !value["LegalPersonName"].IsNull())
    {
        if (!value["LegalPersonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInfo.LegalPersonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalPersonName = string(value["LegalPersonName"].GetString());
        m_legalPersonNameHasBeenSet = true;
    }

    if (value.HasMember("OrganizationCode") && !value["OrganizationCode"].IsNull())
    {
        if (!value["OrganizationCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInfo.OrganizationCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationCode = string(value["OrganizationCode"].GetString());
        m_organizationCodeHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("OrganizationType") && !value["OrganizationType"].IsNull())
    {
        if (!value["OrganizationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInfo.OrganizationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationType = string(value["OrganizationType"].GetString());
        m_organizationTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegisterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_legalPersonIdCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalPersonIdCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalPersonIdCode.c_str(), allocator).Move(), allocator);
    }

    if (m_legalPersonIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalPersonIdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalPersonIdType.c_str(), allocator).Move(), allocator);
    }

    if (m_legalPersonNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalPersonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalPersonName.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationCode.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationType.c_str(), allocator).Move(), allocator);
    }

}


string RegisterInfo::GetLegalPersonIdCode() const
{
    return m_legalPersonIdCode;
}

void RegisterInfo::SetLegalPersonIdCode(const string& _legalPersonIdCode)
{
    m_legalPersonIdCode = _legalPersonIdCode;
    m_legalPersonIdCodeHasBeenSet = true;
}

bool RegisterInfo::LegalPersonIdCodeHasBeenSet() const
{
    return m_legalPersonIdCodeHasBeenSet;
}

string RegisterInfo::GetLegalPersonIdType() const
{
    return m_legalPersonIdType;
}

void RegisterInfo::SetLegalPersonIdType(const string& _legalPersonIdType)
{
    m_legalPersonIdType = _legalPersonIdType;
    m_legalPersonIdTypeHasBeenSet = true;
}

bool RegisterInfo::LegalPersonIdTypeHasBeenSet() const
{
    return m_legalPersonIdTypeHasBeenSet;
}

string RegisterInfo::GetLegalPersonName() const
{
    return m_legalPersonName;
}

void RegisterInfo::SetLegalPersonName(const string& _legalPersonName)
{
    m_legalPersonName = _legalPersonName;
    m_legalPersonNameHasBeenSet = true;
}

bool RegisterInfo::LegalPersonNameHasBeenSet() const
{
    return m_legalPersonNameHasBeenSet;
}

string RegisterInfo::GetOrganizationCode() const
{
    return m_organizationCode;
}

void RegisterInfo::SetOrganizationCode(const string& _organizationCode)
{
    m_organizationCode = _organizationCode;
    m_organizationCodeHasBeenSet = true;
}

bool RegisterInfo::OrganizationCodeHasBeenSet() const
{
    return m_organizationCodeHasBeenSet;
}

string RegisterInfo::GetOrganizationName() const
{
    return m_organizationName;
}

void RegisterInfo::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool RegisterInfo::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string RegisterInfo::GetOrganizationType() const
{
    return m_organizationType;
}

void RegisterInfo::SetOrganizationType(const string& _organizationType)
{
    m_organizationType = _organizationType;
    m_organizationTypeHasBeenSet = true;
}

bool RegisterInfo::OrganizationTypeHasBeenSet() const
{
    return m_organizationTypeHasBeenSet;
}

