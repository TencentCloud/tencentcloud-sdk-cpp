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

#include <tencentcloud/wedata/v20210820/model/DataSourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DataSourceInfo::DataSourceInfo() :
    m_databaseNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_bizParamsHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_displayHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_ownerProjectIdHasBeenSet(false),
    m_ownerProjectNameHasBeenSet(false),
    m_ownerProjectIdentHasBeenSet(false),
    m_authorityProjectNameHasBeenSet(false),
    m_authorityUserNameHasBeenSet(false),
    m_editHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_deliverHasBeenSet(false),
    m_dataSourceStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_paramsStringHasBeenSet(false),
    m_bizParamsStringHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_showTypeHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_developmentIdHasBeenSet(false),
    m_developmentParamsHasBeenSet(false),
    m_connectStatusHasBeenSet(false),
    m_displayTypeHasBeenSet(false),
    m_envHasBeenSet(false),
    m_datasourceUrnHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_dataSourceEnvInfosHasBeenSet(false)
{
}

CoreInternalOutcome DataSourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Instance") && !value["Instance"].IsNull())
    {
        if (!value["Instance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Instance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instance = string(value["Instance"].GetString());
        m_instanceHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("BizParams") && !value["BizParams"].IsNull())
    {
        if (!value["BizParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.BizParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizParams = string(value["BizParams"].GetString());
        m_bizParamsHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Display") && !value["Display"].IsNull())
    {
        if (!value["Display"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Display` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_display = string(value["Display"].GetString());
        m_displayHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccount") && !value["OwnerAccount"].IsNull())
    {
        if (!value["OwnerAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.OwnerAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccount = string(value["OwnerAccount"].GetString());
        m_ownerAccountHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerProjectId") && !value["OwnerProjectId"].IsNull())
    {
        if (!value["OwnerProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.OwnerProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerProjectId = string(value["OwnerProjectId"].GetString());
        m_ownerProjectIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerProjectName") && !value["OwnerProjectName"].IsNull())
    {
        if (!value["OwnerProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.OwnerProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerProjectName = string(value["OwnerProjectName"].GetString());
        m_ownerProjectNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerProjectIdent") && !value["OwnerProjectIdent"].IsNull())
    {
        if (!value["OwnerProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.OwnerProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerProjectIdent = string(value["OwnerProjectIdent"].GetString());
        m_ownerProjectIdentHasBeenSet = true;
    }

    if (value.HasMember("AuthorityProjectName") && !value["AuthorityProjectName"].IsNull())
    {
        if (!value["AuthorityProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.AuthorityProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorityProjectName = string(value["AuthorityProjectName"].GetString());
        m_authorityProjectNameHasBeenSet = true;
    }

    if (value.HasMember("AuthorityUserName") && !value["AuthorityUserName"].IsNull())
    {
        if (!value["AuthorityUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.AuthorityUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorityUserName = string(value["AuthorityUserName"].GetString());
        m_authorityUserNameHasBeenSet = true;
    }

    if (value.HasMember("Edit") && !value["Edit"].IsNull())
    {
        if (!value["Edit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Edit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_edit = value["Edit"].GetBool();
        m_editHasBeenSet = true;
    }

    if (value.HasMember("Author") && !value["Author"].IsNull())
    {
        if (!value["Author"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Author` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_author = value["Author"].GetBool();
        m_authorHasBeenSet = true;
    }

    if (value.HasMember("Deliver") && !value["Deliver"].IsNull())
    {
        if (!value["Deliver"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Deliver` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deliver = value["Deliver"].GetBool();
        m_deliverHasBeenSet = true;
    }

    if (value.HasMember("DataSourceStatus") && !value["DataSourceStatus"].IsNull())
    {
        if (!value["DataSourceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.DataSourceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceStatus = string(value["DataSourceStatus"].GetString());
        m_dataSourceStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ParamsString") && !value["ParamsString"].IsNull())
    {
        if (!value["ParamsString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.ParamsString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramsString = string(value["ParamsString"].GetString());
        m_paramsStringHasBeenSet = true;
    }

    if (value.HasMember("BizParamsString") && !value["BizParamsString"].IsNull())
    {
        if (!value["BizParamsString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.BizParamsString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizParamsString = string(value["BizParamsString"].GetString());
        m_bizParamsStringHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.ModifiedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = value["ModifiedTime"].GetInt64();
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("ShowType") && !value["ShowType"].IsNull())
    {
        if (!value["ShowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.ShowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_showType = string(value["ShowType"].GetString());
        m_showTypeHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.ProductId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_productId = value["ProductId"].GetUint64();
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DevelopmentId") && !value["DevelopmentId"].IsNull())
    {
        if (!value["DevelopmentId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.DevelopmentId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_developmentId = value["DevelopmentId"].GetUint64();
        m_developmentIdHasBeenSet = true;
    }

    if (value.HasMember("DevelopmentParams") && !value["DevelopmentParams"].IsNull())
    {
        if (!value["DevelopmentParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.DevelopmentParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_developmentParams = string(value["DevelopmentParams"].GetString());
        m_developmentParamsHasBeenSet = true;
    }

    if (value.HasMember("ConnectStatus") && !value["ConnectStatus"].IsNull())
    {
        if (!value["ConnectStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.ConnectStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_connectStatus.Deserialize(value["ConnectStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_connectStatusHasBeenSet = true;
    }

    if (value.HasMember("DisplayType") && !value["DisplayType"].IsNull())
    {
        if (!value["DisplayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.DisplayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayType = string(value["DisplayType"].GetString());
        m_displayTypeHasBeenSet = true;
    }

    if (value.HasMember("Env") && !value["Env"].IsNull())
    {
        if (!value["Env"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Env` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_env = string(value["Env"].GetString());
        m_envHasBeenSet = true;
    }

    if (value.HasMember("DatasourceUrn") && !value["DatasourceUrn"].IsNull())
    {
        if (!value["DatasourceUrn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.DatasourceUrn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceUrn = string(value["DatasourceUrn"].GetString());
        m_datasourceUrnHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("DataSourceEnvInfos") && !value["DataSourceEnvInfos"].IsNull())
    {
        if (!value["DataSourceEnvInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.DataSourceEnvInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["DataSourceEnvInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataSourceEnvInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataSourceEnvInfos.push_back(item);
        }
        m_dataSourceEnvInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instance.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_bizParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizParams.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_displayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Display";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_display.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_ownerAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerProjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerProjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerProjectIdentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerProjectIdent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerProjectIdent.c_str(), allocator).Move(), allocator);
    }

    if (m_authorityProjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorityProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorityProjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorityUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorityUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorityUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_editHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_edit, allocator);
    }

    if (m_authorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Author";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_author, allocator);
    }

    if (m_deliverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deliver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliver, allocator);
    }

    if (m_dataSourceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_paramsStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamsString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramsString.c_str(), allocator).Move(), allocator);
    }

    if (m_bizParamsStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizParamsString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizParamsString.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifiedTime, allocator);
    }

    if (m_showTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_showType.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productId, allocator);
    }

    if (m_developmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevelopmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_developmentId, allocator);
    }

    if (m_developmentParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevelopmentParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_developmentParams.c_str(), allocator).Move(), allocator);
    }

    if (m_connectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_connectStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_displayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayType.c_str(), allocator).Move(), allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_env.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceUrnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceUrn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceUrn.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceEnvInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceEnvInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataSourceEnvInfos.begin(); itr != m_dataSourceEnvInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DataSourceInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void DataSourceInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DataSourceInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string DataSourceInfo::GetDescription() const
{
    return m_description;
}

void DataSourceInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DataSourceInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t DataSourceInfo::GetID() const
{
    return m_iD;
}

void DataSourceInfo::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DataSourceInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DataSourceInfo::GetInstance() const
{
    return m_instance;
}

void DataSourceInfo::SetInstance(const string& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool DataSourceInfo::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

string DataSourceInfo::GetName() const
{
    return m_name;
}

void DataSourceInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DataSourceInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DataSourceInfo::GetRegion() const
{
    return m_region;
}

void DataSourceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DataSourceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DataSourceInfo::GetType() const
{
    return m_type;
}

void DataSourceInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DataSourceInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DataSourceInfo::GetClusterId() const
{
    return m_clusterId;
}

void DataSourceInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DataSourceInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t DataSourceInfo::GetAppId() const
{
    return m_appId;
}

void DataSourceInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DataSourceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DataSourceInfo::GetBizParams() const
{
    return m_bizParams;
}

void DataSourceInfo::SetBizParams(const string& _bizParams)
{
    m_bizParams = _bizParams;
    m_bizParamsHasBeenSet = true;
}

bool DataSourceInfo::BizParamsHasBeenSet() const
{
    return m_bizParamsHasBeenSet;
}

string DataSourceInfo::GetCategory() const
{
    return m_category;
}

void DataSourceInfo::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool DataSourceInfo::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string DataSourceInfo::GetDisplay() const
{
    return m_display;
}

void DataSourceInfo::SetDisplay(const string& _display)
{
    m_display = _display;
    m_displayHasBeenSet = true;
}

bool DataSourceInfo::DisplayHasBeenSet() const
{
    return m_displayHasBeenSet;
}

string DataSourceInfo::GetOwnerAccount() const
{
    return m_ownerAccount;
}

void DataSourceInfo::SetOwnerAccount(const string& _ownerAccount)
{
    m_ownerAccount = _ownerAccount;
    m_ownerAccountHasBeenSet = true;
}

bool DataSourceInfo::OwnerAccountHasBeenSet() const
{
    return m_ownerAccountHasBeenSet;
}

string DataSourceInfo::GetParams() const
{
    return m_params;
}

void DataSourceInfo::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool DataSourceInfo::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

uint64_t DataSourceInfo::GetStatus() const
{
    return m_status;
}

void DataSourceInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DataSourceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DataSourceInfo::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void DataSourceInfo::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool DataSourceInfo::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

string DataSourceInfo::GetClusterName() const
{
    return m_clusterName;
}

void DataSourceInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool DataSourceInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DataSourceInfo::GetOwnerProjectId() const
{
    return m_ownerProjectId;
}

void DataSourceInfo::SetOwnerProjectId(const string& _ownerProjectId)
{
    m_ownerProjectId = _ownerProjectId;
    m_ownerProjectIdHasBeenSet = true;
}

bool DataSourceInfo::OwnerProjectIdHasBeenSet() const
{
    return m_ownerProjectIdHasBeenSet;
}

string DataSourceInfo::GetOwnerProjectName() const
{
    return m_ownerProjectName;
}

void DataSourceInfo::SetOwnerProjectName(const string& _ownerProjectName)
{
    m_ownerProjectName = _ownerProjectName;
    m_ownerProjectNameHasBeenSet = true;
}

bool DataSourceInfo::OwnerProjectNameHasBeenSet() const
{
    return m_ownerProjectNameHasBeenSet;
}

string DataSourceInfo::GetOwnerProjectIdent() const
{
    return m_ownerProjectIdent;
}

void DataSourceInfo::SetOwnerProjectIdent(const string& _ownerProjectIdent)
{
    m_ownerProjectIdent = _ownerProjectIdent;
    m_ownerProjectIdentHasBeenSet = true;
}

bool DataSourceInfo::OwnerProjectIdentHasBeenSet() const
{
    return m_ownerProjectIdentHasBeenSet;
}

string DataSourceInfo::GetAuthorityProjectName() const
{
    return m_authorityProjectName;
}

void DataSourceInfo::SetAuthorityProjectName(const string& _authorityProjectName)
{
    m_authorityProjectName = _authorityProjectName;
    m_authorityProjectNameHasBeenSet = true;
}

bool DataSourceInfo::AuthorityProjectNameHasBeenSet() const
{
    return m_authorityProjectNameHasBeenSet;
}

string DataSourceInfo::GetAuthorityUserName() const
{
    return m_authorityUserName;
}

void DataSourceInfo::SetAuthorityUserName(const string& _authorityUserName)
{
    m_authorityUserName = _authorityUserName;
    m_authorityUserNameHasBeenSet = true;
}

bool DataSourceInfo::AuthorityUserNameHasBeenSet() const
{
    return m_authorityUserNameHasBeenSet;
}

bool DataSourceInfo::GetEdit() const
{
    return m_edit;
}

void DataSourceInfo::SetEdit(const bool& _edit)
{
    m_edit = _edit;
    m_editHasBeenSet = true;
}

bool DataSourceInfo::EditHasBeenSet() const
{
    return m_editHasBeenSet;
}

bool DataSourceInfo::GetAuthor() const
{
    return m_author;
}

void DataSourceInfo::SetAuthor(const bool& _author)
{
    m_author = _author;
    m_authorHasBeenSet = true;
}

bool DataSourceInfo::AuthorHasBeenSet() const
{
    return m_authorHasBeenSet;
}

bool DataSourceInfo::GetDeliver() const
{
    return m_deliver;
}

void DataSourceInfo::SetDeliver(const bool& _deliver)
{
    m_deliver = _deliver;
    m_deliverHasBeenSet = true;
}

bool DataSourceInfo::DeliverHasBeenSet() const
{
    return m_deliverHasBeenSet;
}

string DataSourceInfo::GetDataSourceStatus() const
{
    return m_dataSourceStatus;
}

void DataSourceInfo::SetDataSourceStatus(const string& _dataSourceStatus)
{
    m_dataSourceStatus = _dataSourceStatus;
    m_dataSourceStatusHasBeenSet = true;
}

bool DataSourceInfo::DataSourceStatusHasBeenSet() const
{
    return m_dataSourceStatusHasBeenSet;
}

int64_t DataSourceInfo::GetCreateTime() const
{
    return m_createTime;
}

void DataSourceInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DataSourceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DataSourceInfo::GetParamsString() const
{
    return m_paramsString;
}

void DataSourceInfo::SetParamsString(const string& _paramsString)
{
    m_paramsString = _paramsString;
    m_paramsStringHasBeenSet = true;
}

bool DataSourceInfo::ParamsStringHasBeenSet() const
{
    return m_paramsStringHasBeenSet;
}

string DataSourceInfo::GetBizParamsString() const
{
    return m_bizParamsString;
}

void DataSourceInfo::SetBizParamsString(const string& _bizParamsString)
{
    m_bizParamsString = _bizParamsString;
    m_bizParamsStringHasBeenSet = true;
}

bool DataSourceInfo::BizParamsStringHasBeenSet() const
{
    return m_bizParamsStringHasBeenSet;
}

int64_t DataSourceInfo::GetModifiedTime() const
{
    return m_modifiedTime;
}

void DataSourceInfo::SetModifiedTime(const int64_t& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool DataSourceInfo::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string DataSourceInfo::GetShowType() const
{
    return m_showType;
}

void DataSourceInfo::SetShowType(const string& _showType)
{
    m_showType = _showType;
    m_showTypeHasBeenSet = true;
}

bool DataSourceInfo::ShowTypeHasBeenSet() const
{
    return m_showTypeHasBeenSet;
}

uint64_t DataSourceInfo::GetProductId() const
{
    return m_productId;
}

void DataSourceInfo::SetProductId(const uint64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DataSourceInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

uint64_t DataSourceInfo::GetDevelopmentId() const
{
    return m_developmentId;
}

void DataSourceInfo::SetDevelopmentId(const uint64_t& _developmentId)
{
    m_developmentId = _developmentId;
    m_developmentIdHasBeenSet = true;
}

bool DataSourceInfo::DevelopmentIdHasBeenSet() const
{
    return m_developmentIdHasBeenSet;
}

string DataSourceInfo::GetDevelopmentParams() const
{
    return m_developmentParams;
}

void DataSourceInfo::SetDevelopmentParams(const string& _developmentParams)
{
    m_developmentParams = _developmentParams;
    m_developmentParamsHasBeenSet = true;
}

bool DataSourceInfo::DevelopmentParamsHasBeenSet() const
{
    return m_developmentParamsHasBeenSet;
}

DataSourceConnectStatus DataSourceInfo::GetConnectStatus() const
{
    return m_connectStatus;
}

void DataSourceInfo::SetConnectStatus(const DataSourceConnectStatus& _connectStatus)
{
    m_connectStatus = _connectStatus;
    m_connectStatusHasBeenSet = true;
}

bool DataSourceInfo::ConnectStatusHasBeenSet() const
{
    return m_connectStatusHasBeenSet;
}

string DataSourceInfo::GetDisplayType() const
{
    return m_displayType;
}

void DataSourceInfo::SetDisplayType(const string& _displayType)
{
    m_displayType = _displayType;
    m_displayTypeHasBeenSet = true;
}

bool DataSourceInfo::DisplayTypeHasBeenSet() const
{
    return m_displayTypeHasBeenSet;
}

string DataSourceInfo::GetEnv() const
{
    return m_env;
}

void DataSourceInfo::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool DataSourceInfo::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string DataSourceInfo::GetDatasourceUrn() const
{
    return m_datasourceUrn;
}

void DataSourceInfo::SetDatasourceUrn(const string& _datasourceUrn)
{
    m_datasourceUrn = _datasourceUrn;
    m_datasourceUrnHasBeenSet = true;
}

bool DataSourceInfo::DatasourceUrnHasBeenSet() const
{
    return m_datasourceUrnHasBeenSet;
}

string DataSourceInfo::GetModel() const
{
    return m_model;
}

void DataSourceInfo::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool DataSourceInfo::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<DataSourceEnvInfo> DataSourceInfo::GetDataSourceEnvInfos() const
{
    return m_dataSourceEnvInfos;
}

void DataSourceInfo::SetDataSourceEnvInfos(const vector<DataSourceEnvInfo>& _dataSourceEnvInfos)
{
    m_dataSourceEnvInfos = _dataSourceEnvInfos;
    m_dataSourceEnvInfosHasBeenSet = true;
}

bool DataSourceInfo::DataSourceEnvInfosHasBeenSet() const
{
    return m_dataSourceEnvInfosHasBeenSet;
}

