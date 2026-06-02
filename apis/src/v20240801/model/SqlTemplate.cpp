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

#include <tencentcloud/apis/v20240801/model/SqlTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

SqlTemplate::SqlTemplate() :
    m_dbConfigModeHasBeenSet(false),
    m_dataSourceIDHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_wizardConfigHasBeenSet(false)
{
}

CoreInternalOutcome SqlTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbConfigMode") && !value["DbConfigMode"].IsNull())
    {
        if (!value["DbConfigMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlTemplate.DbConfigMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbConfigMode = string(value["DbConfigMode"].GetString());
        m_dbConfigModeHasBeenSet = true;
    }

    if (value.HasMember("DataSourceID") && !value["DataSourceID"].IsNull())
    {
        if (!value["DataSourceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlTemplate.DataSourceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceID = string(value["DataSourceID"].GetString());
        m_dataSourceIDHasBeenSet = true;
    }

    if (value.HasMember("Sql") && !value["Sql"].IsNull())
    {
        if (!value["Sql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlTemplate.Sql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sql = string(value["Sql"].GetString());
        m_sqlHasBeenSet = true;
    }

    if (value.HasMember("WizardConfig") && !value["WizardConfig"].IsNull())
    {
        if (!value["WizardConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SqlTemplate.WizardConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wizardConfig.Deserialize(value["WizardConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wizardConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SqlTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbConfigModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbConfigMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbConfigMode.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_wizardConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WizardConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wizardConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SqlTemplate::GetDbConfigMode() const
{
    return m_dbConfigMode;
}

void SqlTemplate::SetDbConfigMode(const string& _dbConfigMode)
{
    m_dbConfigMode = _dbConfigMode;
    m_dbConfigModeHasBeenSet = true;
}

bool SqlTemplate::DbConfigModeHasBeenSet() const
{
    return m_dbConfigModeHasBeenSet;
}

string SqlTemplate::GetDataSourceID() const
{
    return m_dataSourceID;
}

void SqlTemplate::SetDataSourceID(const string& _dataSourceID)
{
    m_dataSourceID = _dataSourceID;
    m_dataSourceIDHasBeenSet = true;
}

bool SqlTemplate::DataSourceIDHasBeenSet() const
{
    return m_dataSourceIDHasBeenSet;
}

string SqlTemplate::GetSql() const
{
    return m_sql;
}

void SqlTemplate::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool SqlTemplate::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

WizardConfig SqlTemplate::GetWizardConfig() const
{
    return m_wizardConfig;
}

void SqlTemplate::SetWizardConfig(const WizardConfig& _wizardConfig)
{
    m_wizardConfig = _wizardConfig;
    m_wizardConfigHasBeenSet = true;
}

bool SqlTemplate::WizardConfigHasBeenSet() const
{
    return m_wizardConfigHasBeenSet;
}

