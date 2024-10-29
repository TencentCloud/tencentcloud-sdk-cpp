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

#include <tencentcloud/wedata/v20210820/model/DescribeDataServicePublishedApiListResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeDataServicePublishedApiListResp::DescribeDataServicePublishedApiListResp() :
    m_idHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_apiFolderNameHasBeenSet(false),
    m_apiTagNamesHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_apiStatusHasBeenSet(false),
    m_configTypeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDataServicePublishedApiListResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiListResp.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiListResp.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("ApiFolderName") && !value["ApiFolderName"].IsNull())
    {
        if (!value["ApiFolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiListResp.ApiFolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiFolderName = string(value["ApiFolderName"].GetString());
        m_apiFolderNameHasBeenSet = true;
    }

    if (value.HasMember("ApiTagNames") && !value["ApiTagNames"].IsNull())
    {
        if (!value["ApiTagNames"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiListResp.ApiTagNames` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiTagNames = string(value["ApiTagNames"].GetString());
        m_apiTagNamesHasBeenSet = true;
    }

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiListResp.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiListResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiListResp.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiListResp.AuthType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authType = value["AuthType"].GetInt64();
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("ApiStatus") && !value["ApiStatus"].IsNull())
    {
        if (!value["ApiStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiListResp.ApiStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiStatus = value["ApiStatus"].GetInt64();
        m_apiStatusHasBeenSet = true;
    }

    if (value.HasMember("ConfigType") && !value["ConfigType"].IsNull())
    {
        if (!value["ConfigType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiListResp.ConfigType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_configType = value["ConfigType"].GetUint64();
        m_configTypeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiListResp.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDataServicePublishedApiListResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiFolderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiFolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiFolderName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiTagNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiTagNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiTagNames.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authType, allocator);
    }

    if (m_apiStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiStatus, allocator);
    }

    if (m_configTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configType, allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


string DescribeDataServicePublishedApiListResp::GetId() const
{
    return m_id;
}

void DescribeDataServicePublishedApiListResp::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeDataServicePublishedApiListResp::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeDataServicePublishedApiListResp::GetApiName() const
{
    return m_apiName;
}

void DescribeDataServicePublishedApiListResp::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool DescribeDataServicePublishedApiListResp::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string DescribeDataServicePublishedApiListResp::GetApiFolderName() const
{
    return m_apiFolderName;
}

void DescribeDataServicePublishedApiListResp::SetApiFolderName(const string& _apiFolderName)
{
    m_apiFolderName = _apiFolderName;
    m_apiFolderNameHasBeenSet = true;
}

bool DescribeDataServicePublishedApiListResp::ApiFolderNameHasBeenSet() const
{
    return m_apiFolderNameHasBeenSet;
}

string DescribeDataServicePublishedApiListResp::GetApiTagNames() const
{
    return m_apiTagNames;
}

void DescribeDataServicePublishedApiListResp::SetApiTagNames(const string& _apiTagNames)
{
    m_apiTagNames = _apiTagNames;
    m_apiTagNamesHasBeenSet = true;
}

bool DescribeDataServicePublishedApiListResp::ApiTagNamesHasBeenSet() const
{
    return m_apiTagNamesHasBeenSet;
}

string DescribeDataServicePublishedApiListResp::GetOwnerName() const
{
    return m_ownerName;
}

void DescribeDataServicePublishedApiListResp::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool DescribeDataServicePublishedApiListResp::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

string DescribeDataServicePublishedApiListResp::GetCreateTime() const
{
    return m_createTime;
}

void DescribeDataServicePublishedApiListResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeDataServicePublishedApiListResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeDataServicePublishedApiListResp::GetApiId() const
{
    return m_apiId;
}

void DescribeDataServicePublishedApiListResp::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool DescribeDataServicePublishedApiListResp::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

int64_t DescribeDataServicePublishedApiListResp::GetAuthType() const
{
    return m_authType;
}

void DescribeDataServicePublishedApiListResp::SetAuthType(const int64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool DescribeDataServicePublishedApiListResp::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

int64_t DescribeDataServicePublishedApiListResp::GetApiStatus() const
{
    return m_apiStatus;
}

void DescribeDataServicePublishedApiListResp::SetApiStatus(const int64_t& _apiStatus)
{
    m_apiStatus = _apiStatus;
    m_apiStatusHasBeenSet = true;
}

bool DescribeDataServicePublishedApiListResp::ApiStatusHasBeenSet() const
{
    return m_apiStatusHasBeenSet;
}

uint64_t DescribeDataServicePublishedApiListResp::GetConfigType() const
{
    return m_configType;
}

void DescribeDataServicePublishedApiListResp::SetConfigType(const uint64_t& _configType)
{
    m_configType = _configType;
    m_configTypeHasBeenSet = true;
}

bool DescribeDataServicePublishedApiListResp::ConfigTypeHasBeenSet() const
{
    return m_configTypeHasBeenSet;
}

string DescribeDataServicePublishedApiListResp::GetModifyTime() const
{
    return m_modifyTime;
}

void DescribeDataServicePublishedApiListResp::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool DescribeDataServicePublishedApiListResp::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

