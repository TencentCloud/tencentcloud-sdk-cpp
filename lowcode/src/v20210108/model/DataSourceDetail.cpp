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

#include <tencentcloud/lowcode/v20210108/model/DataSourceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

DataSourceDetail::DataSourceDetail() :
    m_idHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_cmsProjectHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_dataSourceVersionHasBeenSet(false),
    m_appUsageListHasBeenSet(false),
    m_publishedAtHasBeenSet(false),
    m_childDataSourceIdsHasBeenSet(false),
    m_funHasBeenSet(false),
    m_scfStatusHasBeenSet(false),
    m_methodsHasBeenSet(false),
    m_childDataSourceNamesHasBeenSet(false),
    m_isNewDataSourceHasBeenSet(false),
    m_viewIdHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_templateCodeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_publishVersionHasBeenSet(false),
    m_publishViewIdHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_authStatusHasBeenSet(false),
    m_authInfoHasBeenSet(false),
    m_publishStatusHasBeenSet(false),
    m_updateVersionHasBeenSet(false),
    m_relationFieldListHasBeenSet(false),
    m_dbInstanceTypeHasBeenSet(false),
    m_previewTableNameHasBeenSet(false),
    m_publishedTableNameHasBeenSet(false),
    m_dbSourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome DataSourceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Schema") && !value["Schema"].IsNull())
    {
        if (!value["Schema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.Schema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schema = string(value["Schema"].GetString());
        m_schemaHasBeenSet = true;
    }

    if (value.HasMember("CmsProject") && !value["CmsProject"].IsNull())
    {
        if (!value["CmsProject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.CmsProject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmsProject = string(value["CmsProject"].GetString());
        m_cmsProjectHasBeenSet = true;
    }

    if (value.HasMember("PkgId") && !value["PkgId"].IsNull())
    {
        if (!value["PkgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.PkgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgId = string(value["PkgId"].GetString());
        m_pkgIdHasBeenSet = true;
    }

    if (value.HasMember("SchemaVersion") && !value["SchemaVersion"].IsNull())
    {
        if (!value["SchemaVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.SchemaVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaVersion = string(value["SchemaVersion"].GetString());
        m_schemaVersionHasBeenSet = true;
    }

    if (value.HasMember("CreatorId") && !value["CreatorId"].IsNull())
    {
        if (!value["CreatorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.CreatorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorId = string(value["CreatorId"].GetString());
        m_creatorIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("DataSourceVersion") && !value["DataSourceVersion"].IsNull())
    {
        if (!value["DataSourceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.DataSourceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceVersion = string(value["DataSourceVersion"].GetString());
        m_dataSourceVersionHasBeenSet = true;
    }

    if (value.HasMember("AppUsageList") && !value["AppUsageList"].IsNull())
    {
        if (!value["AppUsageList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.AppUsageList` is not array type"));

        const rapidjson::Value &tmpValue = value["AppUsageList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataSourceLinkApp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_appUsageList.push_back(item);
        }
        m_appUsageListHasBeenSet = true;
    }

    if (value.HasMember("PublishedAt") && !value["PublishedAt"].IsNull())
    {
        if (!value["PublishedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.PublishedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishedAt = string(value["PublishedAt"].GetString());
        m_publishedAtHasBeenSet = true;
    }

    if (value.HasMember("ChildDataSourceIds") && !value["ChildDataSourceIds"].IsNull())
    {
        if (!value["ChildDataSourceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.ChildDataSourceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ChildDataSourceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_childDataSourceIds.push_back((*itr).GetString());
        }
        m_childDataSourceIdsHasBeenSet = true;
    }

    if (value.HasMember("Fun") && !value["Fun"].IsNull())
    {
        if (!value["Fun"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.Fun` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fun = string(value["Fun"].GetString());
        m_funHasBeenSet = true;
    }

    if (value.HasMember("ScfStatus") && !value["ScfStatus"].IsNull())
    {
        if (!value["ScfStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.ScfStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scfStatus = value["ScfStatus"].GetUint64();
        m_scfStatusHasBeenSet = true;
    }

    if (value.HasMember("Methods") && !value["Methods"].IsNull())
    {
        if (!value["Methods"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.Methods` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_methods = string(value["Methods"].GetString());
        m_methodsHasBeenSet = true;
    }

    if (value.HasMember("ChildDataSourceNames") && !value["ChildDataSourceNames"].IsNull())
    {
        if (!value["ChildDataSourceNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.ChildDataSourceNames` is not array type"));

        const rapidjson::Value &tmpValue = value["ChildDataSourceNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_childDataSourceNames.push_back((*itr).GetString());
        }
        m_childDataSourceNamesHasBeenSet = true;
    }

    if (value.HasMember("IsNewDataSource") && !value["IsNewDataSource"].IsNull())
    {
        if (!value["IsNewDataSource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.IsNewDataSource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNewDataSource = value["IsNewDataSource"].GetInt64();
        m_isNewDataSourceHasBeenSet = true;
    }

    if (value.HasMember("ViewId") && !value["ViewId"].IsNull())
    {
        if (!value["ViewId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.ViewId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewId = string(value["ViewId"].GetString());
        m_viewIdHasBeenSet = true;
    }

    if (value.HasMember("Configuration") && !value["Configuration"].IsNull())
    {
        if (!value["Configuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.Configuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configuration = string(value["Configuration"].GetString());
        m_configurationHasBeenSet = true;
    }

    if (value.HasMember("TemplateCode") && !value["TemplateCode"].IsNull())
    {
        if (!value["TemplateCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.TemplateCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateCode = string(value["TemplateCode"].GetString());
        m_templateCodeHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("PublishVersion") && !value["PublishVersion"].IsNull())
    {
        if (!value["PublishVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.PublishVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishVersion = string(value["PublishVersion"].GetString());
        m_publishVersionHasBeenSet = true;
    }

    if (value.HasMember("PublishViewId") && !value["PublishViewId"].IsNull())
    {
        if (!value["PublishViewId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.PublishViewId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishViewId = string(value["PublishViewId"].GetString());
        m_publishViewIdHasBeenSet = true;
    }

    if (value.HasMember("SubType") && !value["SubType"].IsNull())
    {
        if (!value["SubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.SubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subType = string(value["SubType"].GetString());
        m_subTypeHasBeenSet = true;
    }

    if (value.HasMember("AuthStatus") && !value["AuthStatus"].IsNull())
    {
        if (!value["AuthStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.AuthStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authStatus = value["AuthStatus"].GetInt64();
        m_authStatusHasBeenSet = true;
    }

    if (value.HasMember("AuthInfo") && !value["AuthInfo"].IsNull())
    {
        if (!value["AuthInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.AuthInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authInfo.Deserialize(value["AuthInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authInfoHasBeenSet = true;
    }

    if (value.HasMember("PublishStatus") && !value["PublishStatus"].IsNull())
    {
        if (!value["PublishStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.PublishStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publishStatus = value["PublishStatus"].GetInt64();
        m_publishStatusHasBeenSet = true;
    }

    if (value.HasMember("UpdateVersion") && !value["UpdateVersion"].IsNull())
    {
        if (!value["UpdateVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.UpdateVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateVersion = value["UpdateVersion"].GetInt64();
        m_updateVersionHasBeenSet = true;
    }

    if (value.HasMember("RelationFieldList") && !value["RelationFieldList"].IsNull())
    {
        if (!value["RelationFieldList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.RelationFieldList` is not array type"));

        const rapidjson::Value &tmpValue = value["RelationFieldList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RelationField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relationFieldList.push_back(item);
        }
        m_relationFieldListHasBeenSet = true;
    }

    if (value.HasMember("DbInstanceType") && !value["DbInstanceType"].IsNull())
    {
        if (!value["DbInstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.DbInstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbInstanceType = string(value["DbInstanceType"].GetString());
        m_dbInstanceTypeHasBeenSet = true;
    }

    if (value.HasMember("PreviewTableName") && !value["PreviewTableName"].IsNull())
    {
        if (!value["PreviewTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.PreviewTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewTableName = string(value["PreviewTableName"].GetString());
        m_previewTableNameHasBeenSet = true;
    }

    if (value.HasMember("PublishedTableName") && !value["PublishedTableName"].IsNull())
    {
        if (!value["PublishedTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.PublishedTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishedTableName = string(value["PublishedTableName"].GetString());
        m_publishedTableNameHasBeenSet = true;
    }

    if (value.HasMember("DbSourceType") && !value["DbSourceType"].IsNull())
    {
        if (!value["DbSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceDetail.DbSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbSourceType = string(value["DbSourceType"].GetString());
        m_dbSourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSourceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schema.c_str(), allocator).Move(), allocator);
    }

    if (m_cmsProjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmsProject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmsProject.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_appUsageListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppUsageList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_appUsageList.begin(); itr != m_appUsageList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_publishedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_childDataSourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildDataSourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_childDataSourceIds.begin(); itr != m_childDataSourceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_funHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fun.c_str(), allocator).Move(), allocator);
    }

    if (m_scfStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScfStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scfStatus, allocator);
    }

    if (m_methodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Methods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_methods.c_str(), allocator).Move(), allocator);
    }

    if (m_childDataSourceNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildDataSourceNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_childDataSourceNames.begin(); itr != m_childDataSourceNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isNewDataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewDataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNewDataSource, allocator);
    }

    if (m_viewIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewId.c_str(), allocator).Move(), allocator);
    }

    if (m_configurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Configuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configuration.c_str(), allocator).Move(), allocator);
    }

    if (m_templateCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateCode.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_publishVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_publishViewIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishViewId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishViewId.c_str(), allocator).Move(), allocator);
    }

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
    }

    if (m_authStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authStatus, allocator);
    }

    if (m_authInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_publishStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publishStatus, allocator);
    }

    if (m_updateVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateVersion, allocator);
    }

    if (m_relationFieldListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelationFieldList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relationFieldList.begin(); itr != m_relationFieldList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dbInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbInstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbInstanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_previewTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_publishedTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishedTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishedTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbSourceType.c_str(), allocator).Move(), allocator);
    }

}


string DataSourceDetail::GetId() const
{
    return m_id;
}

void DataSourceDetail::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DataSourceDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DataSourceDetail::GetTitle() const
{
    return m_title;
}

void DataSourceDetail::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool DataSourceDetail::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string DataSourceDetail::GetName() const
{
    return m_name;
}

void DataSourceDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DataSourceDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DataSourceDetail::GetType() const
{
    return m_type;
}

void DataSourceDetail::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DataSourceDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DataSourceDetail::GetDescription() const
{
    return m_description;
}

void DataSourceDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DataSourceDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DataSourceDetail::GetSchema() const
{
    return m_schema;
}

void DataSourceDetail::SetSchema(const string& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool DataSourceDetail::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

string DataSourceDetail::GetCmsProject() const
{
    return m_cmsProject;
}

void DataSourceDetail::SetCmsProject(const string& _cmsProject)
{
    m_cmsProject = _cmsProject;
    m_cmsProjectHasBeenSet = true;
}

bool DataSourceDetail::CmsProjectHasBeenSet() const
{
    return m_cmsProjectHasBeenSet;
}

string DataSourceDetail::GetPkgId() const
{
    return m_pkgId;
}

void DataSourceDetail::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool DataSourceDetail::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string DataSourceDetail::GetSchemaVersion() const
{
    return m_schemaVersion;
}

void DataSourceDetail::SetSchemaVersion(const string& _schemaVersion)
{
    m_schemaVersion = _schemaVersion;
    m_schemaVersionHasBeenSet = true;
}

bool DataSourceDetail::SchemaVersionHasBeenSet() const
{
    return m_schemaVersionHasBeenSet;
}

string DataSourceDetail::GetCreatorId() const
{
    return m_creatorId;
}

void DataSourceDetail::SetCreatorId(const string& _creatorId)
{
    m_creatorId = _creatorId;
    m_creatorIdHasBeenSet = true;
}

bool DataSourceDetail::CreatorIdHasBeenSet() const
{
    return m_creatorIdHasBeenSet;
}

string DataSourceDetail::GetCreatedAt() const
{
    return m_createdAt;
}

void DataSourceDetail::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool DataSourceDetail::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string DataSourceDetail::GetUpdatedAt() const
{
    return m_updatedAt;
}

void DataSourceDetail::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool DataSourceDetail::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string DataSourceDetail::GetEnvId() const
{
    return m_envId;
}

void DataSourceDetail::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DataSourceDetail::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DataSourceDetail::GetDataSourceVersion() const
{
    return m_dataSourceVersion;
}

void DataSourceDetail::SetDataSourceVersion(const string& _dataSourceVersion)
{
    m_dataSourceVersion = _dataSourceVersion;
    m_dataSourceVersionHasBeenSet = true;
}

bool DataSourceDetail::DataSourceVersionHasBeenSet() const
{
    return m_dataSourceVersionHasBeenSet;
}

vector<DataSourceLinkApp> DataSourceDetail::GetAppUsageList() const
{
    return m_appUsageList;
}

void DataSourceDetail::SetAppUsageList(const vector<DataSourceLinkApp>& _appUsageList)
{
    m_appUsageList = _appUsageList;
    m_appUsageListHasBeenSet = true;
}

bool DataSourceDetail::AppUsageListHasBeenSet() const
{
    return m_appUsageListHasBeenSet;
}

string DataSourceDetail::GetPublishedAt() const
{
    return m_publishedAt;
}

void DataSourceDetail::SetPublishedAt(const string& _publishedAt)
{
    m_publishedAt = _publishedAt;
    m_publishedAtHasBeenSet = true;
}

bool DataSourceDetail::PublishedAtHasBeenSet() const
{
    return m_publishedAtHasBeenSet;
}

vector<string> DataSourceDetail::GetChildDataSourceIds() const
{
    return m_childDataSourceIds;
}

void DataSourceDetail::SetChildDataSourceIds(const vector<string>& _childDataSourceIds)
{
    m_childDataSourceIds = _childDataSourceIds;
    m_childDataSourceIdsHasBeenSet = true;
}

bool DataSourceDetail::ChildDataSourceIdsHasBeenSet() const
{
    return m_childDataSourceIdsHasBeenSet;
}

string DataSourceDetail::GetFun() const
{
    return m_fun;
}

void DataSourceDetail::SetFun(const string& _fun)
{
    m_fun = _fun;
    m_funHasBeenSet = true;
}

bool DataSourceDetail::FunHasBeenSet() const
{
    return m_funHasBeenSet;
}

uint64_t DataSourceDetail::GetScfStatus() const
{
    return m_scfStatus;
}

void DataSourceDetail::SetScfStatus(const uint64_t& _scfStatus)
{
    m_scfStatus = _scfStatus;
    m_scfStatusHasBeenSet = true;
}

bool DataSourceDetail::ScfStatusHasBeenSet() const
{
    return m_scfStatusHasBeenSet;
}

string DataSourceDetail::GetMethods() const
{
    return m_methods;
}

void DataSourceDetail::SetMethods(const string& _methods)
{
    m_methods = _methods;
    m_methodsHasBeenSet = true;
}

bool DataSourceDetail::MethodsHasBeenSet() const
{
    return m_methodsHasBeenSet;
}

vector<string> DataSourceDetail::GetChildDataSourceNames() const
{
    return m_childDataSourceNames;
}

void DataSourceDetail::SetChildDataSourceNames(const vector<string>& _childDataSourceNames)
{
    m_childDataSourceNames = _childDataSourceNames;
    m_childDataSourceNamesHasBeenSet = true;
}

bool DataSourceDetail::ChildDataSourceNamesHasBeenSet() const
{
    return m_childDataSourceNamesHasBeenSet;
}

int64_t DataSourceDetail::GetIsNewDataSource() const
{
    return m_isNewDataSource;
}

void DataSourceDetail::SetIsNewDataSource(const int64_t& _isNewDataSource)
{
    m_isNewDataSource = _isNewDataSource;
    m_isNewDataSourceHasBeenSet = true;
}

bool DataSourceDetail::IsNewDataSourceHasBeenSet() const
{
    return m_isNewDataSourceHasBeenSet;
}

string DataSourceDetail::GetViewId() const
{
    return m_viewId;
}

void DataSourceDetail::SetViewId(const string& _viewId)
{
    m_viewId = _viewId;
    m_viewIdHasBeenSet = true;
}

bool DataSourceDetail::ViewIdHasBeenSet() const
{
    return m_viewIdHasBeenSet;
}

string DataSourceDetail::GetConfiguration() const
{
    return m_configuration;
}

void DataSourceDetail::SetConfiguration(const string& _configuration)
{
    m_configuration = _configuration;
    m_configurationHasBeenSet = true;
}

bool DataSourceDetail::ConfigurationHasBeenSet() const
{
    return m_configurationHasBeenSet;
}

string DataSourceDetail::GetTemplateCode() const
{
    return m_templateCode;
}

void DataSourceDetail::SetTemplateCode(const string& _templateCode)
{
    m_templateCode = _templateCode;
    m_templateCodeHasBeenSet = true;
}

bool DataSourceDetail::TemplateCodeHasBeenSet() const
{
    return m_templateCodeHasBeenSet;
}

int64_t DataSourceDetail::GetSource() const
{
    return m_source;
}

void DataSourceDetail::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DataSourceDetail::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string DataSourceDetail::GetPublishVersion() const
{
    return m_publishVersion;
}

void DataSourceDetail::SetPublishVersion(const string& _publishVersion)
{
    m_publishVersion = _publishVersion;
    m_publishVersionHasBeenSet = true;
}

bool DataSourceDetail::PublishVersionHasBeenSet() const
{
    return m_publishVersionHasBeenSet;
}

string DataSourceDetail::GetPublishViewId() const
{
    return m_publishViewId;
}

void DataSourceDetail::SetPublishViewId(const string& _publishViewId)
{
    m_publishViewId = _publishViewId;
    m_publishViewIdHasBeenSet = true;
}

bool DataSourceDetail::PublishViewIdHasBeenSet() const
{
    return m_publishViewIdHasBeenSet;
}

string DataSourceDetail::GetSubType() const
{
    return m_subType;
}

void DataSourceDetail::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool DataSourceDetail::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

int64_t DataSourceDetail::GetAuthStatus() const
{
    return m_authStatus;
}

void DataSourceDetail::SetAuthStatus(const int64_t& _authStatus)
{
    m_authStatus = _authStatus;
    m_authStatusHasBeenSet = true;
}

bool DataSourceDetail::AuthStatusHasBeenSet() const
{
    return m_authStatusHasBeenSet;
}

TicketAuthInfo DataSourceDetail::GetAuthInfo() const
{
    return m_authInfo;
}

void DataSourceDetail::SetAuthInfo(const TicketAuthInfo& _authInfo)
{
    m_authInfo = _authInfo;
    m_authInfoHasBeenSet = true;
}

bool DataSourceDetail::AuthInfoHasBeenSet() const
{
    return m_authInfoHasBeenSet;
}

int64_t DataSourceDetail::GetPublishStatus() const
{
    return m_publishStatus;
}

void DataSourceDetail::SetPublishStatus(const int64_t& _publishStatus)
{
    m_publishStatus = _publishStatus;
    m_publishStatusHasBeenSet = true;
}

bool DataSourceDetail::PublishStatusHasBeenSet() const
{
    return m_publishStatusHasBeenSet;
}

int64_t DataSourceDetail::GetUpdateVersion() const
{
    return m_updateVersion;
}

void DataSourceDetail::SetUpdateVersion(const int64_t& _updateVersion)
{
    m_updateVersion = _updateVersion;
    m_updateVersionHasBeenSet = true;
}

bool DataSourceDetail::UpdateVersionHasBeenSet() const
{
    return m_updateVersionHasBeenSet;
}

vector<RelationField> DataSourceDetail::GetRelationFieldList() const
{
    return m_relationFieldList;
}

void DataSourceDetail::SetRelationFieldList(const vector<RelationField>& _relationFieldList)
{
    m_relationFieldList = _relationFieldList;
    m_relationFieldListHasBeenSet = true;
}

bool DataSourceDetail::RelationFieldListHasBeenSet() const
{
    return m_relationFieldListHasBeenSet;
}

string DataSourceDetail::GetDbInstanceType() const
{
    return m_dbInstanceType;
}

void DataSourceDetail::SetDbInstanceType(const string& _dbInstanceType)
{
    m_dbInstanceType = _dbInstanceType;
    m_dbInstanceTypeHasBeenSet = true;
}

bool DataSourceDetail::DbInstanceTypeHasBeenSet() const
{
    return m_dbInstanceTypeHasBeenSet;
}

string DataSourceDetail::GetPreviewTableName() const
{
    return m_previewTableName;
}

void DataSourceDetail::SetPreviewTableName(const string& _previewTableName)
{
    m_previewTableName = _previewTableName;
    m_previewTableNameHasBeenSet = true;
}

bool DataSourceDetail::PreviewTableNameHasBeenSet() const
{
    return m_previewTableNameHasBeenSet;
}

string DataSourceDetail::GetPublishedTableName() const
{
    return m_publishedTableName;
}

void DataSourceDetail::SetPublishedTableName(const string& _publishedTableName)
{
    m_publishedTableName = _publishedTableName;
    m_publishedTableNameHasBeenSet = true;
}

bool DataSourceDetail::PublishedTableNameHasBeenSet() const
{
    return m_publishedTableNameHasBeenSet;
}

string DataSourceDetail::GetDbSourceType() const
{
    return m_dbSourceType;
}

void DataSourceDetail::SetDbSourceType(const string& _dbSourceType)
{
    m_dbSourceType = _dbSourceType;
    m_dbSourceTypeHasBeenSet = true;
}

bool DataSourceDetail::DbSourceTypeHasBeenSet() const
{
    return m_dbSourceTypeHasBeenSet;
}

