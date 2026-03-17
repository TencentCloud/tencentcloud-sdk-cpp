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

#include <tencentcloud/wedata/v20210820/model/DatabaseRealViewVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DatabaseRealViewVO::DatabaseRealViewVO() :
    m_catalogNameHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_dataSourceInstanceHasBeenSet(false),
    m_dataSourceTypeHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_bizParamsHasBeenSet(false),
    m_nextLevelHasBeenSet(false)
{
}

CoreInternalOutcome DatabaseRealViewVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CatalogName") && !value["CatalogName"].IsNull())
    {
        if (!value["CatalogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseRealViewVO.CatalogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogName = string(value["CatalogName"].GetString());
        m_catalogNameHasBeenSet = true;
    }

    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseRealViewVO.DataSourceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = value["DataSourceId"].GetInt64();
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("DataSourceName") && !value["DataSourceName"].IsNull())
    {
        if (!value["DataSourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseRealViewVO.DataSourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceName = string(value["DataSourceName"].GetString());
        m_dataSourceNameHasBeenSet = true;
    }

    if (value.HasMember("DataSourceInstance") && !value["DataSourceInstance"].IsNull())
    {
        if (!value["DataSourceInstance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseRealViewVO.DataSourceInstance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceInstance = string(value["DataSourceInstance"].GetString());
        m_dataSourceInstanceHasBeenSet = true;
    }

    if (value.HasMember("DataSourceType") && !value["DataSourceType"].IsNull())
    {
        if (!value["DataSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseRealViewVO.DataSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceType = string(value["DataSourceType"].GetString());
        m_dataSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseRealViewVO.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseRealViewVO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseRealViewVO.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccount") && !value["OwnerAccount"].IsNull())
    {
        if (!value["OwnerAccount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseRealViewVO.OwnerAccount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccount = value["OwnerAccount"].GetInt64();
        m_ownerAccountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseRealViewVO.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseRealViewVO.ModifiedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = value["ModifiedTime"].GetInt64();
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseRealViewVO.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("BizParams") && !value["BizParams"].IsNull())
    {
        if (!value["BizParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseRealViewVO.BizParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bizParams.Deserialize(value["BizParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bizParamsHasBeenSet = true;
    }

    if (value.HasMember("NextLevel") && !value["NextLevel"].IsNull())
    {
        if (!value["NextLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseRealViewVO.NextLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextLevel = string(value["NextLevel"].GetString());
        m_nextLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatabaseRealViewVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataSourceId, allocator);
    }

    if (m_dataSourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceInstance.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerAccount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifiedTime, allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_bizParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bizParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nextLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextLevel.c_str(), allocator).Move(), allocator);
    }

}


string DatabaseRealViewVO::GetCatalogName() const
{
    return m_catalogName;
}

void DatabaseRealViewVO::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool DatabaseRealViewVO::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

int64_t DatabaseRealViewVO::GetDataSourceId() const
{
    return m_dataSourceId;
}

void DatabaseRealViewVO::SetDataSourceId(const int64_t& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool DatabaseRealViewVO::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string DatabaseRealViewVO::GetDataSourceName() const
{
    return m_dataSourceName;
}

void DatabaseRealViewVO::SetDataSourceName(const string& _dataSourceName)
{
    m_dataSourceName = _dataSourceName;
    m_dataSourceNameHasBeenSet = true;
}

bool DatabaseRealViewVO::DataSourceNameHasBeenSet() const
{
    return m_dataSourceNameHasBeenSet;
}

string DatabaseRealViewVO::GetDataSourceInstance() const
{
    return m_dataSourceInstance;
}

void DatabaseRealViewVO::SetDataSourceInstance(const string& _dataSourceInstance)
{
    m_dataSourceInstance = _dataSourceInstance;
    m_dataSourceInstanceHasBeenSet = true;
}

bool DatabaseRealViewVO::DataSourceInstanceHasBeenSet() const
{
    return m_dataSourceInstanceHasBeenSet;
}

string DatabaseRealViewVO::GetDataSourceType() const
{
    return m_dataSourceType;
}

void DatabaseRealViewVO::SetDataSourceType(const string& _dataSourceType)
{
    m_dataSourceType = _dataSourceType;
    m_dataSourceTypeHasBeenSet = true;
}

bool DatabaseRealViewVO::DataSourceTypeHasBeenSet() const
{
    return m_dataSourceTypeHasBeenSet;
}

string DatabaseRealViewVO::GetDatabaseName() const
{
    return m_databaseName;
}

void DatabaseRealViewVO::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DatabaseRealViewVO::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string DatabaseRealViewVO::GetDescription() const
{
    return m_description;
}

void DatabaseRealViewVO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DatabaseRealViewVO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DatabaseRealViewVO::GetOwner() const
{
    return m_owner;
}

void DatabaseRealViewVO::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool DatabaseRealViewVO::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

int64_t DatabaseRealViewVO::GetOwnerAccount() const
{
    return m_ownerAccount;
}

void DatabaseRealViewVO::SetOwnerAccount(const int64_t& _ownerAccount)
{
    m_ownerAccount = _ownerAccount;
    m_ownerAccountHasBeenSet = true;
}

bool DatabaseRealViewVO::OwnerAccountHasBeenSet() const
{
    return m_ownerAccountHasBeenSet;
}

int64_t DatabaseRealViewVO::GetCreateTime() const
{
    return m_createTime;
}

void DatabaseRealViewVO::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DatabaseRealViewVO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DatabaseRealViewVO::GetModifiedTime() const
{
    return m_modifiedTime;
}

void DatabaseRealViewVO::SetModifiedTime(const int64_t& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool DatabaseRealViewVO::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string DatabaseRealViewVO::GetLocation() const
{
    return m_location;
}

void DatabaseRealViewVO::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool DatabaseRealViewVO::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

BizParams DatabaseRealViewVO::GetBizParams() const
{
    return m_bizParams;
}

void DatabaseRealViewVO::SetBizParams(const BizParams& _bizParams)
{
    m_bizParams = _bizParams;
    m_bizParamsHasBeenSet = true;
}

bool DatabaseRealViewVO::BizParamsHasBeenSet() const
{
    return m_bizParamsHasBeenSet;
}

string DatabaseRealViewVO::GetNextLevel() const
{
    return m_nextLevel;
}

void DatabaseRealViewVO::SetNextLevel(const string& _nextLevel)
{
    m_nextLevel = _nextLevel;
    m_nextLevelHasBeenSet = true;
}

bool DatabaseRealViewVO::NextLevelHasBeenSet() const
{
    return m_nextLevelHasBeenSet;
}

