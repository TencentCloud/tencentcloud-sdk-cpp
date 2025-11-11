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

#include <tencentcloud/cls/v20201016/model/DataTransformSqlDataSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DataTransformSqlDataSource::DataTransformSqlDataSource() :
    m_dataSourceHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_userHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

CoreInternalOutcome DataTransformSqlDataSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataSource") && !value["DataSource"].IsNull())
    {
        if (!value["DataSource"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformSqlDataSource.DataSource` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataSource = value["DataSource"].GetUint64();
        m_dataSourceHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformSqlDataSource.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformSqlDataSource.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformSqlDataSource.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformSqlDataSource.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformSqlDataSource.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataTransformSqlDataSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataSource, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DataTransformSqlDataSource::GetDataSource() const
{
    return m_dataSource;
}

void DataTransformSqlDataSource::SetDataSource(const uint64_t& _dataSource)
{
    m_dataSource = _dataSource;
    m_dataSourceHasBeenSet = true;
}

bool DataTransformSqlDataSource::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

string DataTransformSqlDataSource::GetRegion() const
{
    return m_region;
}

void DataTransformSqlDataSource::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DataTransformSqlDataSource::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DataTransformSqlDataSource::GetInstanceId() const
{
    return m_instanceId;
}

void DataTransformSqlDataSource::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DataTransformSqlDataSource::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DataTransformSqlDataSource::GetUser() const
{
    return m_user;
}

void DataTransformSqlDataSource::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool DataTransformSqlDataSource::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string DataTransformSqlDataSource::GetAliasName() const
{
    return m_aliasName;
}

void DataTransformSqlDataSource::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool DataTransformSqlDataSource::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

string DataTransformSqlDataSource::GetPassword() const
{
    return m_password;
}

void DataTransformSqlDataSource::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool DataTransformSqlDataSource::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

