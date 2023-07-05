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

#include <tencentcloud/wedata/v20210820/model/TableBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TableBaseInfo::TableBaseInfo() :
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false),
    m_tableCommentHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_tableFormatHasBeenSet(false),
    m_userAliasHasBeenSet(false),
    m_userSubUinHasBeenSet(false),
    m_governPolicyHasBeenSet(false),
    m_dbGovernPolicyIsDisableHasBeenSet(false)
{
}

CoreInternalOutcome TableBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBaseInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBaseInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("DatasourceConnectionName") && !value["DatasourceConnectionName"].IsNull())
    {
        if (!value["DatasourceConnectionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBaseInfo.DatasourceConnectionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceConnectionName = string(value["DatasourceConnectionName"].GetString());
        m_datasourceConnectionNameHasBeenSet = true;
    }

    if (value.HasMember("TableComment") && !value["TableComment"].IsNull())
    {
        if (!value["TableComment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBaseInfo.TableComment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableComment = string(value["TableComment"].GetString());
        m_tableCommentHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBaseInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TableFormat") && !value["TableFormat"].IsNull())
    {
        if (!value["TableFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBaseInfo.TableFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableFormat = string(value["TableFormat"].GetString());
        m_tableFormatHasBeenSet = true;
    }

    if (value.HasMember("UserAlias") && !value["UserAlias"].IsNull())
    {
        if (!value["UserAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBaseInfo.UserAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAlias = string(value["UserAlias"].GetString());
        m_userAliasHasBeenSet = true;
    }

    if (value.HasMember("UserSubUin") && !value["UserSubUin"].IsNull())
    {
        if (!value["UserSubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBaseInfo.UserSubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userSubUin = string(value["UserSubUin"].GetString());
        m_userSubUinHasBeenSet = true;
    }

    if (value.HasMember("GovernPolicy") && !value["GovernPolicy"].IsNull())
    {
        if (!value["GovernPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableBaseInfo.GovernPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_governPolicy.Deserialize(value["GovernPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_governPolicyHasBeenSet = true;
    }

    if (value.HasMember("DbGovernPolicyIsDisable") && !value["DbGovernPolicyIsDisable"].IsNull())
    {
        if (!value["DbGovernPolicyIsDisable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBaseInfo.DbGovernPolicyIsDisable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbGovernPolicyIsDisable = string(value["DbGovernPolicyIsDisable"].GetString());
        m_dbGovernPolicyIsDisableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableCommentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableComment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableComment.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_tableFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_userAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_userSubUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userSubUin.c_str(), allocator).Move(), allocator);
    }

    if (m_governPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GovernPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_governPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dbGovernPolicyIsDisableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbGovernPolicyIsDisable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbGovernPolicyIsDisable.c_str(), allocator).Move(), allocator);
    }

}


string TableBaseInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void TableBaseInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool TableBaseInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string TableBaseInfo::GetTableName() const
{
    return m_tableName;
}

void TableBaseInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableBaseInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableBaseInfo::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void TableBaseInfo::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool TableBaseInfo::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}

string TableBaseInfo::GetTableComment() const
{
    return m_tableComment;
}

void TableBaseInfo::SetTableComment(const string& _tableComment)
{
    m_tableComment = _tableComment;
    m_tableCommentHasBeenSet = true;
}

bool TableBaseInfo::TableCommentHasBeenSet() const
{
    return m_tableCommentHasBeenSet;
}

string TableBaseInfo::GetType() const
{
    return m_type;
}

void TableBaseInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TableBaseInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TableBaseInfo::GetTableFormat() const
{
    return m_tableFormat;
}

void TableBaseInfo::SetTableFormat(const string& _tableFormat)
{
    m_tableFormat = _tableFormat;
    m_tableFormatHasBeenSet = true;
}

bool TableBaseInfo::TableFormatHasBeenSet() const
{
    return m_tableFormatHasBeenSet;
}

string TableBaseInfo::GetUserAlias() const
{
    return m_userAlias;
}

void TableBaseInfo::SetUserAlias(const string& _userAlias)
{
    m_userAlias = _userAlias;
    m_userAliasHasBeenSet = true;
}

bool TableBaseInfo::UserAliasHasBeenSet() const
{
    return m_userAliasHasBeenSet;
}

string TableBaseInfo::GetUserSubUin() const
{
    return m_userSubUin;
}

void TableBaseInfo::SetUserSubUin(const string& _userSubUin)
{
    m_userSubUin = _userSubUin;
    m_userSubUinHasBeenSet = true;
}

bool TableBaseInfo::UserSubUinHasBeenSet() const
{
    return m_userSubUinHasBeenSet;
}

DlcDataGovernPolicy TableBaseInfo::GetGovernPolicy() const
{
    return m_governPolicy;
}

void TableBaseInfo::SetGovernPolicy(const DlcDataGovernPolicy& _governPolicy)
{
    m_governPolicy = _governPolicy;
    m_governPolicyHasBeenSet = true;
}

bool TableBaseInfo::GovernPolicyHasBeenSet() const
{
    return m_governPolicyHasBeenSet;
}

string TableBaseInfo::GetDbGovernPolicyIsDisable() const
{
    return m_dbGovernPolicyIsDisable;
}

void TableBaseInfo::SetDbGovernPolicyIsDisable(const string& _dbGovernPolicyIsDisable)
{
    m_dbGovernPolicyIsDisable = _dbGovernPolicyIsDisable;
    m_dbGovernPolicyIsDisableHasBeenSet = true;
}

bool TableBaseInfo::DbGovernPolicyIsDisableHasBeenSet() const
{
    return m_dbGovernPolicyIsDisableHasBeenSet;
}

