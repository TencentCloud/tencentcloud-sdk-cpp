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

#include <tencentcloud/essbasic/v20210526/model/ProxyOrganizationOperator.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ProxyOrganizationOperator::ProxyOrganizationOperator() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_defaultRoleHasBeenSet(false)
{
}

CoreInternalOutcome ProxyOrganizationOperator::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyOrganizationOperator.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyOrganizationOperator.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IdCardType") && !value["IdCardType"].IsNull())
    {
        if (!value["IdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyOrganizationOperator.IdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardType = string(value["IdCardType"].GetString());
        m_idCardTypeHasBeenSet = true;
    }

    if (value.HasMember("IdCardNumber") && !value["IdCardNumber"].IsNull())
    {
        if (!value["IdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyOrganizationOperator.IdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardNumber = string(value["IdCardNumber"].GetString());
        m_idCardNumberHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyOrganizationOperator.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("DefaultRole") && !value["DefaultRole"].IsNull())
    {
        if (!value["DefaultRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyOrganizationOperator.DefaultRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultRole = string(value["DefaultRole"].GetString());
        m_defaultRoleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyOrganizationOperator::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultRole.c_str(), allocator).Move(), allocator);
    }

}


string ProxyOrganizationOperator::GetId() const
{
    return m_id;
}

void ProxyOrganizationOperator::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ProxyOrganizationOperator::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ProxyOrganizationOperator::GetName() const
{
    return m_name;
}

void ProxyOrganizationOperator::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ProxyOrganizationOperator::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ProxyOrganizationOperator::GetIdCardType() const
{
    return m_idCardType;
}

void ProxyOrganizationOperator::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool ProxyOrganizationOperator::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

string ProxyOrganizationOperator::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void ProxyOrganizationOperator::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool ProxyOrganizationOperator::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string ProxyOrganizationOperator::GetMobile() const
{
    return m_mobile;
}

void ProxyOrganizationOperator::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool ProxyOrganizationOperator::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string ProxyOrganizationOperator::GetDefaultRole() const
{
    return m_defaultRole;
}

void ProxyOrganizationOperator::SetDefaultRole(const string& _defaultRole)
{
    m_defaultRole = _defaultRole;
    m_defaultRoleHasBeenSet = true;
}

bool ProxyOrganizationOperator::DefaultRoleHasBeenSet() const
{
    return m_defaultRoleHasBeenSet;
}

