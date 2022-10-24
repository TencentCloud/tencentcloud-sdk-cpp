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

#include <tencentcloud/tcb/v20180608/model/CreateWxCloudBaseRunServerDBClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateWxCloudBaseRunServerDBClusterRequest::CreateWxCloudBaseRunServerDBClusterRequest() :
    m_accountPasswordHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_wxAppIdHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_lowerCaseTableNameHasBeenSet(false)
{
}

string CreateWxCloudBaseRunServerDBClusterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accountPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_wxAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wxAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_lowerCaseTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowerCaseTableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lowerCaseTableName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateWxCloudBaseRunServerDBClusterRequest::GetAccountPassword() const
{
    return m_accountPassword;
}

void CreateWxCloudBaseRunServerDBClusterRequest::SetAccountPassword(const string& _accountPassword)
{
    m_accountPassword = _accountPassword;
    m_accountPasswordHasBeenSet = true;
}

bool CreateWxCloudBaseRunServerDBClusterRequest::AccountPasswordHasBeenSet() const
{
    return m_accountPasswordHasBeenSet;
}

string CreateWxCloudBaseRunServerDBClusterRequest::GetEnvId() const
{
    return m_envId;
}

void CreateWxCloudBaseRunServerDBClusterRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateWxCloudBaseRunServerDBClusterRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string CreateWxCloudBaseRunServerDBClusterRequest::GetWxAppId() const
{
    return m_wxAppId;
}

void CreateWxCloudBaseRunServerDBClusterRequest::SetWxAppId(const string& _wxAppId)
{
    m_wxAppId = _wxAppId;
    m_wxAppIdHasBeenSet = true;
}

bool CreateWxCloudBaseRunServerDBClusterRequest::WxAppIdHasBeenSet() const
{
    return m_wxAppIdHasBeenSet;
}

string CreateWxCloudBaseRunServerDBClusterRequest::GetDbVersion() const
{
    return m_dbVersion;
}

void CreateWxCloudBaseRunServerDBClusterRequest::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool CreateWxCloudBaseRunServerDBClusterRequest::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

string CreateWxCloudBaseRunServerDBClusterRequest::GetLowerCaseTableName() const
{
    return m_lowerCaseTableName;
}

void CreateWxCloudBaseRunServerDBClusterRequest::SetLowerCaseTableName(const string& _lowerCaseTableName)
{
    m_lowerCaseTableName = _lowerCaseTableName;
    m_lowerCaseTableNameHasBeenSet = true;
}

bool CreateWxCloudBaseRunServerDBClusterRequest::LowerCaseTableNameHasBeenSet() const
{
    return m_lowerCaseTableNameHasBeenSet;
}


