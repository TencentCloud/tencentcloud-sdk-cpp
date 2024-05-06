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

#include <tencentcloud/wedata/v20210820/model/BaseTenant.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BaseTenant::BaseTenant() :
    m_tenantIdHasBeenSet(false),
    m_tenantNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerUserIdHasBeenSet(false),
    m_paramsHasBeenSet(false)
{
}

CoreInternalOutcome BaseTenant::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseTenant.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("TenantName") && !value["TenantName"].IsNull())
    {
        if (!value["TenantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseTenant.TenantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantName = string(value["TenantName"].GetString());
        m_tenantNameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseTenant.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseTenant.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserId") && !value["OwnerUserId"].IsNull())
    {
        if (!value["OwnerUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseTenant.OwnerUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUserId = string(value["OwnerUserId"].GetString());
        m_ownerUserIdHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseTenant.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaseTenant::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantName.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

}


string BaseTenant::GetTenantId() const
{
    return m_tenantId;
}

void BaseTenant::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool BaseTenant::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string BaseTenant::GetTenantName() const
{
    return m_tenantName;
}

void BaseTenant::SetTenantName(const string& _tenantName)
{
    m_tenantName = _tenantName;
    m_tenantNameHasBeenSet = true;
}

bool BaseTenant::TenantNameHasBeenSet() const
{
    return m_tenantNameHasBeenSet;
}

string BaseTenant::GetDisplayName() const
{
    return m_displayName;
}

void BaseTenant::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool BaseTenant::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string BaseTenant::GetDescription() const
{
    return m_description;
}

void BaseTenant::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool BaseTenant::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string BaseTenant::GetOwnerUserId() const
{
    return m_ownerUserId;
}

void BaseTenant::SetOwnerUserId(const string& _ownerUserId)
{
    m_ownerUserId = _ownerUserId;
    m_ownerUserIdHasBeenSet = true;
}

bool BaseTenant::OwnerUserIdHasBeenSet() const
{
    return m_ownerUserIdHasBeenSet;
}

string BaseTenant::GetParams() const
{
    return m_params;
}

void BaseTenant::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool BaseTenant::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

