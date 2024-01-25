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

#include <tencentcloud/wedata/v20210820/model/ImportTableDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ImportTableDTO::ImportTableDTO() :
    m_idHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_importStatusHasBeenSet(false),
    m_sourceDataPathHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_ownerUserIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_datasourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome ImportTableDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImportTableDTO.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportTableDTO.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("ImportStatus") && !value["ImportStatus"].IsNull())
    {
        if (!value["ImportStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImportTableDTO.ImportStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_importStatus = value["ImportStatus"].GetUint64();
        m_importStatusHasBeenSet = true;
    }

    if (value.HasMember("SourceDataPath") && !value["SourceDataPath"].IsNull())
    {
        if (!value["SourceDataPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportTableDTO.SourceDataPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceDataPath = string(value["SourceDataPath"].GetString());
        m_sourceDataPathHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportTableDTO.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportTableDTO.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportTableDTO.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportTableDTO.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImportTableDTO.TenantId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = value["TenantId"].GetUint64();
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserId") && !value["OwnerUserId"].IsNull())
    {
        if (!value["OwnerUserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImportTableDTO.OwnerUserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUserId = value["OwnerUserId"].GetUint64();
        m_ownerUserIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImportTableDTO.UserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userId = value["UserId"].GetUint64();
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportTableDTO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportTableDTO.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DatasourceType") && !value["DatasourceType"].IsNull())
    {
        if (!value["DatasourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportTableDTO.DatasourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceType = string(value["DatasourceType"].GetString());
        m_datasourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImportTableDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_importStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_importStatus, allocator);
    }

    if (m_sourceDataPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDataPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceDataPath.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tenantId, allocator);
    }

    if (m_ownerUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerUserId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userId, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ImportTableDTO::GetId() const
{
    return m_id;
}

void ImportTableDTO::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ImportTableDTO::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ImportTableDTO::GetMessage() const
{
    return m_message;
}

void ImportTableDTO::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ImportTableDTO::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

uint64_t ImportTableDTO::GetImportStatus() const
{
    return m_importStatus;
}

void ImportTableDTO::SetImportStatus(const uint64_t& _importStatus)
{
    m_importStatus = _importStatus;
    m_importStatusHasBeenSet = true;
}

bool ImportTableDTO::ImportStatusHasBeenSet() const
{
    return m_importStatusHasBeenSet;
}

string ImportTableDTO::GetSourceDataPath() const
{
    return m_sourceDataPath;
}

void ImportTableDTO::SetSourceDataPath(const string& _sourceDataPath)
{
    m_sourceDataPath = _sourceDataPath;
    m_sourceDataPathHasBeenSet = true;
}

bool ImportTableDTO::SourceDataPathHasBeenSet() const
{
    return m_sourceDataPathHasBeenSet;
}

string ImportTableDTO::GetDatasourceId() const
{
    return m_datasourceId;
}

void ImportTableDTO::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool ImportTableDTO::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string ImportTableDTO::GetDatabaseName() const
{
    return m_databaseName;
}

void ImportTableDTO::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool ImportTableDTO::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string ImportTableDTO::GetTableName() const
{
    return m_tableName;
}

void ImportTableDTO::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool ImportTableDTO::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string ImportTableDTO::GetProjectId() const
{
    return m_projectId;
}

void ImportTableDTO::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ImportTableDTO::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t ImportTableDTO::GetTenantId() const
{
    return m_tenantId;
}

void ImportTableDTO::SetTenantId(const uint64_t& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool ImportTableDTO::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

uint64_t ImportTableDTO::GetOwnerUserId() const
{
    return m_ownerUserId;
}

void ImportTableDTO::SetOwnerUserId(const uint64_t& _ownerUserId)
{
    m_ownerUserId = _ownerUserId;
    m_ownerUserIdHasBeenSet = true;
}

bool ImportTableDTO::OwnerUserIdHasBeenSet() const
{
    return m_ownerUserIdHasBeenSet;
}

uint64_t ImportTableDTO::GetUserId() const
{
    return m_userId;
}

void ImportTableDTO::SetUserId(const uint64_t& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ImportTableDTO::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string ImportTableDTO::GetCreateTime() const
{
    return m_createTime;
}

void ImportTableDTO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ImportTableDTO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ImportTableDTO::GetUpdateTime() const
{
    return m_updateTime;
}

void ImportTableDTO::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ImportTableDTO::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ImportTableDTO::GetDatasourceType() const
{
    return m_datasourceType;
}

void ImportTableDTO::SetDatasourceType(const string& _datasourceType)
{
    m_datasourceType = _datasourceType;
    m_datasourceTypeHasBeenSet = true;
}

bool ImportTableDTO::DatasourceTypeHasBeenSet() const
{
    return m_datasourceTypeHasBeenSet;
}

