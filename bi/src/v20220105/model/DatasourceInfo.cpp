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

#include <tencentcloud/bi/v20220105/model/DatasourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

DatasourceInfo::DatasourceInfo() :
    m_idHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_dbHostHasBeenSet(false),
    m_dbPortHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_charsetHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_createdUserHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_connectTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_descHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sourcePlatHasBeenSet(false),
    m_extraParamHasBeenSet(false),
    m_addInfoHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_managerHasBeenSet(false),
    m_operatorWhitelistHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_stateActionHasBeenSet(false),
    m_updatedUserHasBeenSet(false),
    m_permissionListHasBeenSet(false),
    m_authListHasBeenSet(false),
    m_dataOriginHasBeenSet(false),
    m_dataOriginProjectIdHasBeenSet(false),
    m_dataOriginDatasourceIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_dbTypeNameHasBeenSet(false),
    m_useVPCHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_ownerNameHasBeenSet(false)
{
}

CoreInternalOutcome DatasourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("DbType") && !value["DbType"].IsNull())
    {
        if (!value["DbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.DbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbType = string(value["DbType"].GetString());
        m_dbTypeHasBeenSet = true;
    }

    if (value.HasMember("DbHost") && !value["DbHost"].IsNull())
    {
        if (!value["DbHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.DbHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbHost = string(value["DbHost"].GetString());
        m_dbHostHasBeenSet = true;
    }

    if (value.HasMember("DbPort") && !value["DbPort"].IsNull())
    {
        if (!value["DbPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.DbPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dbPort = value["DbPort"].GetUint64();
        m_dbPortHasBeenSet = true;
    }

    if (value.HasMember("DbUser") && !value["DbUser"].IsNull())
    {
        if (!value["DbUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.DbUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbUser = string(value["DbUser"].GetString());
        m_dbUserHasBeenSet = true;
    }

    if (value.HasMember("Charset") && !value["Charset"].IsNull())
    {
        if (!value["Charset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.Charset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_charset = string(value["Charset"].GetString());
        m_charsetHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("CreatedUser") && !value["CreatedUser"].IsNull())
    {
        if (!value["CreatedUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.CreatedUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdUser = string(value["CreatedUser"].GetString());
        m_createdUserHasBeenSet = true;
    }

    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("ConnectType") && !value["ConnectType"].IsNull())
    {
        if (!value["ConnectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.ConnectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectType = string(value["ConnectType"].GetString());
        m_connectTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SourcePlat") && !value["SourcePlat"].IsNull())
    {
        if (!value["SourcePlat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.SourcePlat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourcePlat = string(value["SourcePlat"].GetString());
        m_sourcePlatHasBeenSet = true;
    }

    if (value.HasMember("ExtraParam") && !value["ExtraParam"].IsNull())
    {
        if (!value["ExtraParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.ExtraParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraParam = string(value["ExtraParam"].GetString());
        m_extraParamHasBeenSet = true;
    }

    if (value.HasMember("AddInfo") && !value["AddInfo"].IsNull())
    {
        if (!value["AddInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.AddInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addInfo = string(value["AddInfo"].GetString());
        m_addInfoHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("Manager") && !value["Manager"].IsNull())
    {
        if (!value["Manager"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.Manager` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manager = string(value["Manager"].GetString());
        m_managerHasBeenSet = true;
    }

    if (value.HasMember("OperatorWhitelist") && !value["OperatorWhitelist"].IsNull())
    {
        if (!value["OperatorWhitelist"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.OperatorWhitelist` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorWhitelist = string(value["OperatorWhitelist"].GetString());
        m_operatorWhitelistHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("StateAction") && !value["StateAction"].IsNull())
    {
        if (!value["StateAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.StateAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_stateAction.Deserialize(value["StateAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stateActionHasBeenSet = true;
    }

    if (value.HasMember("UpdatedUser") && !value["UpdatedUser"].IsNull())
    {
        if (!value["UpdatedUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.UpdatedUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedUser = string(value["UpdatedUser"].GetString());
        m_updatedUserHasBeenSet = true;
    }

    if (value.HasMember("PermissionList") && !value["PermissionList"].IsNull())
    {
        if (!value["PermissionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.PermissionList` is not array type"));

        const rapidjson::Value &tmpValue = value["PermissionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PermissionGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_permissionList.push_back(item);
        }
        m_permissionListHasBeenSet = true;
    }

    if (value.HasMember("AuthList") && !value["AuthList"].IsNull())
    {
        if (!value["AuthList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.AuthList` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_authList.push_back((*itr).GetString());
        }
        m_authListHasBeenSet = true;
    }

    if (value.HasMember("DataOrigin") && !value["DataOrigin"].IsNull())
    {
        if (!value["DataOrigin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.DataOrigin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataOrigin = string(value["DataOrigin"].GetString());
        m_dataOriginHasBeenSet = true;
    }

    if (value.HasMember("DataOriginProjectId") && !value["DataOriginProjectId"].IsNull())
    {
        if (!value["DataOriginProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.DataOriginProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataOriginProjectId = string(value["DataOriginProjectId"].GetString());
        m_dataOriginProjectIdHasBeenSet = true;
    }

    if (value.HasMember("DataOriginDatasourceId") && !value["DataOriginDatasourceId"].IsNull())
    {
        if (!value["DataOriginDatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.DataOriginDatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataOriginDatasourceId = string(value["DataOriginDatasourceId"].GetString());
        m_dataOriginDatasourceIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("DbTypeName") && !value["DbTypeName"].IsNull())
    {
        if (!value["DbTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.DbTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbTypeName = string(value["DbTypeName"].GetString());
        m_dbTypeNameHasBeenSet = true;
    }

    if (value.HasMember("UseVPC") && !value["UseVPC"].IsNull())
    {
        if (!value["UseVPC"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.UseVPC` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useVPC = value["UseVPC"].GetBool();
        m_useVPCHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceInfo.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatasourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_dbHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbHost.c_str(), allocator).Move(), allocator);
    }

    if (m_dbPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbPort, allocator);
    }

    if (m_dbUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbUser.c_str(), allocator).Move(), allocator);
    }

    if (m_charsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Charset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_charset.c_str(), allocator).Move(), allocator);
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

    if (m_createdUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdUser.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_connectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_sourcePlatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourcePlat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourcePlat.c_str(), allocator).Move(), allocator);
    }

    if (m_extraParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraParam.c_str(), allocator).Move(), allocator);
    }

    if (m_addInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_managerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manager.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorWhitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorWhitelist.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stateAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_updatedUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedUser.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_permissionList.begin(); itr != m_permissionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_authListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authList.begin(); itr != m_authList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataOrigin.c_str(), allocator).Move(), allocator);
    }

    if (m_dataOriginProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataOriginProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataOriginProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataOriginDatasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataOriginDatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataOriginDatasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_useVPCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseVPC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useVPC, allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DatasourceInfo::GetId() const
{
    return m_id;
}

void DatasourceInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DatasourceInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DatasourceInfo::GetDbName() const
{
    return m_dbName;
}

void DatasourceInfo::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DatasourceInfo::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DatasourceInfo::GetServiceType() const
{
    return m_serviceType;
}

void DatasourceInfo::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool DatasourceInfo::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string DatasourceInfo::GetSourceName() const
{
    return m_sourceName;
}

void DatasourceInfo::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool DatasourceInfo::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string DatasourceInfo::GetDbType() const
{
    return m_dbType;
}

void DatasourceInfo::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool DatasourceInfo::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string DatasourceInfo::GetDbHost() const
{
    return m_dbHost;
}

void DatasourceInfo::SetDbHost(const string& _dbHost)
{
    m_dbHost = _dbHost;
    m_dbHostHasBeenSet = true;
}

bool DatasourceInfo::DbHostHasBeenSet() const
{
    return m_dbHostHasBeenSet;
}

uint64_t DatasourceInfo::GetDbPort() const
{
    return m_dbPort;
}

void DatasourceInfo::SetDbPort(const uint64_t& _dbPort)
{
    m_dbPort = _dbPort;
    m_dbPortHasBeenSet = true;
}

bool DatasourceInfo::DbPortHasBeenSet() const
{
    return m_dbPortHasBeenSet;
}

string DatasourceInfo::GetDbUser() const
{
    return m_dbUser;
}

void DatasourceInfo::SetDbUser(const string& _dbUser)
{
    m_dbUser = _dbUser;
    m_dbUserHasBeenSet = true;
}

bool DatasourceInfo::DbUserHasBeenSet() const
{
    return m_dbUserHasBeenSet;
}

string DatasourceInfo::GetCharset() const
{
    return m_charset;
}

void DatasourceInfo::SetCharset(const string& _charset)
{
    m_charset = _charset;
    m_charsetHasBeenSet = true;
}

bool DatasourceInfo::CharsetHasBeenSet() const
{
    return m_charsetHasBeenSet;
}

string DatasourceInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void DatasourceInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool DatasourceInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string DatasourceInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void DatasourceInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool DatasourceInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string DatasourceInfo::GetCreatedUser() const
{
    return m_createdUser;
}

void DatasourceInfo::SetCreatedUser(const string& _createdUser)
{
    m_createdUser = _createdUser;
    m_createdUserHasBeenSet = true;
}

bool DatasourceInfo::CreatedUserHasBeenSet() const
{
    return m_createdUserHasBeenSet;
}

string DatasourceInfo::GetCatalog() const
{
    return m_catalog;
}

void DatasourceInfo::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool DatasourceInfo::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string DatasourceInfo::GetConnectType() const
{
    return m_connectType;
}

void DatasourceInfo::SetConnectType(const string& _connectType)
{
    m_connectType = _connectType;
    m_connectTypeHasBeenSet = true;
}

bool DatasourceInfo::ConnectTypeHasBeenSet() const
{
    return m_connectTypeHasBeenSet;
}

string DatasourceInfo::GetProjectId() const
{
    return m_projectId;
}

void DatasourceInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DatasourceInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DatasourceInfo::GetDesc() const
{
    return m_desc;
}

void DatasourceInfo::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool DatasourceInfo::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string DatasourceInfo::GetStatus() const
{
    return m_status;
}

void DatasourceInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DatasourceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DatasourceInfo::GetSourcePlat() const
{
    return m_sourcePlat;
}

void DatasourceInfo::SetSourcePlat(const string& _sourcePlat)
{
    m_sourcePlat = _sourcePlat;
    m_sourcePlatHasBeenSet = true;
}

bool DatasourceInfo::SourcePlatHasBeenSet() const
{
    return m_sourcePlatHasBeenSet;
}

string DatasourceInfo::GetExtraParam() const
{
    return m_extraParam;
}

void DatasourceInfo::SetExtraParam(const string& _extraParam)
{
    m_extraParam = _extraParam;
    m_extraParamHasBeenSet = true;
}

bool DatasourceInfo::ExtraParamHasBeenSet() const
{
    return m_extraParamHasBeenSet;
}

string DatasourceInfo::GetAddInfo() const
{
    return m_addInfo;
}

void DatasourceInfo::SetAddInfo(const string& _addInfo)
{
    m_addInfo = _addInfo;
    m_addInfoHasBeenSet = true;
}

bool DatasourceInfo::AddInfoHasBeenSet() const
{
    return m_addInfoHasBeenSet;
}

string DatasourceInfo::GetProjectName() const
{
    return m_projectName;
}

void DatasourceInfo::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool DatasourceInfo::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string DatasourceInfo::GetEngineType() const
{
    return m_engineType;
}

void DatasourceInfo::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool DatasourceInfo::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

string DatasourceInfo::GetManager() const
{
    return m_manager;
}

void DatasourceInfo::SetManager(const string& _manager)
{
    m_manager = _manager;
    m_managerHasBeenSet = true;
}

bool DatasourceInfo::ManagerHasBeenSet() const
{
    return m_managerHasBeenSet;
}

string DatasourceInfo::GetOperatorWhitelist() const
{
    return m_operatorWhitelist;
}

void DatasourceInfo::SetOperatorWhitelist(const string& _operatorWhitelist)
{
    m_operatorWhitelist = _operatorWhitelist;
    m_operatorWhitelistHasBeenSet = true;
}

bool DatasourceInfo::OperatorWhitelistHasBeenSet() const
{
    return m_operatorWhitelistHasBeenSet;
}

string DatasourceInfo::GetVpcId() const
{
    return m_vpcId;
}

void DatasourceInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DatasourceInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DatasourceInfo::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void DatasourceInfo::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool DatasourceInfo::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string DatasourceInfo::GetRegionId() const
{
    return m_regionId;
}

void DatasourceInfo::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool DatasourceInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

BaseStateAction DatasourceInfo::GetStateAction() const
{
    return m_stateAction;
}

void DatasourceInfo::SetStateAction(const BaseStateAction& _stateAction)
{
    m_stateAction = _stateAction;
    m_stateActionHasBeenSet = true;
}

bool DatasourceInfo::StateActionHasBeenSet() const
{
    return m_stateActionHasBeenSet;
}

string DatasourceInfo::GetUpdatedUser() const
{
    return m_updatedUser;
}

void DatasourceInfo::SetUpdatedUser(const string& _updatedUser)
{
    m_updatedUser = _updatedUser;
    m_updatedUserHasBeenSet = true;
}

bool DatasourceInfo::UpdatedUserHasBeenSet() const
{
    return m_updatedUserHasBeenSet;
}

vector<PermissionGroup> DatasourceInfo::GetPermissionList() const
{
    return m_permissionList;
}

void DatasourceInfo::SetPermissionList(const vector<PermissionGroup>& _permissionList)
{
    m_permissionList = _permissionList;
    m_permissionListHasBeenSet = true;
}

bool DatasourceInfo::PermissionListHasBeenSet() const
{
    return m_permissionListHasBeenSet;
}

vector<string> DatasourceInfo::GetAuthList() const
{
    return m_authList;
}

void DatasourceInfo::SetAuthList(const vector<string>& _authList)
{
    m_authList = _authList;
    m_authListHasBeenSet = true;
}

bool DatasourceInfo::AuthListHasBeenSet() const
{
    return m_authListHasBeenSet;
}

string DatasourceInfo::GetDataOrigin() const
{
    return m_dataOrigin;
}

void DatasourceInfo::SetDataOrigin(const string& _dataOrigin)
{
    m_dataOrigin = _dataOrigin;
    m_dataOriginHasBeenSet = true;
}

bool DatasourceInfo::DataOriginHasBeenSet() const
{
    return m_dataOriginHasBeenSet;
}

string DatasourceInfo::GetDataOriginProjectId() const
{
    return m_dataOriginProjectId;
}

void DatasourceInfo::SetDataOriginProjectId(const string& _dataOriginProjectId)
{
    m_dataOriginProjectId = _dataOriginProjectId;
    m_dataOriginProjectIdHasBeenSet = true;
}

bool DatasourceInfo::DataOriginProjectIdHasBeenSet() const
{
    return m_dataOriginProjectIdHasBeenSet;
}

string DatasourceInfo::GetDataOriginDatasourceId() const
{
    return m_dataOriginDatasourceId;
}

void DatasourceInfo::SetDataOriginDatasourceId(const string& _dataOriginDatasourceId)
{
    m_dataOriginDatasourceId = _dataOriginDatasourceId;
    m_dataOriginDatasourceIdHasBeenSet = true;
}

bool DatasourceInfo::DataOriginDatasourceIdHasBeenSet() const
{
    return m_dataOriginDatasourceIdHasBeenSet;
}

string DatasourceInfo::GetClusterId() const
{
    return m_clusterId;
}

void DatasourceInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DatasourceInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DatasourceInfo::GetDbTypeName() const
{
    return m_dbTypeName;
}

void DatasourceInfo::SetDbTypeName(const string& _dbTypeName)
{
    m_dbTypeName = _dbTypeName;
    m_dbTypeNameHasBeenSet = true;
}

bool DatasourceInfo::DbTypeNameHasBeenSet() const
{
    return m_dbTypeNameHasBeenSet;
}

bool DatasourceInfo::GetUseVPC() const
{
    return m_useVPC;
}

void DatasourceInfo::SetUseVPC(const bool& _useVPC)
{
    m_useVPC = _useVPC;
    m_useVPCHasBeenSet = true;
}

bool DatasourceInfo::UseVPCHasBeenSet() const
{
    return m_useVPCHasBeenSet;
}

string DatasourceInfo::GetOwner() const
{
    return m_owner;
}

void DatasourceInfo::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool DatasourceInfo::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string DatasourceInfo::GetOwnerName() const
{
    return m_ownerName;
}

void DatasourceInfo::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool DatasourceInfo::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

