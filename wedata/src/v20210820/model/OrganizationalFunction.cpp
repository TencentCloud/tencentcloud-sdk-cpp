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

#include <tencentcloud/wedata/v20210820/model/OrganizationalFunction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

OrganizationalFunction::OrganizationalFunction() :
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_layerPathHasBeenSet(false),
    m_parentLayerPathHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_paramDescHasBeenSet(false),
    m_returnDescHasBeenSet(false),
    m_exampleHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_funcIdHasBeenSet(false),
    m_classNameHasBeenSet(false),
    m_resourceListHasBeenSet(false),
    m_operatorUserIdsHasBeenSet(false),
    m_ownerUserIdsHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_submitErrorMsgHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_commandFormatHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_submitTimestampHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_operatorUserIdsStrHasBeenSet(false),
    m_ownerUserIdsStrHasBeenSet(false),
    m_envTypeHasBeenSet(false),
    m_functionResourceFileTypeHasBeenSet(false)
{
}

CoreInternalOutcome OrganizationalFunction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("LayerPath") && !value["LayerPath"].IsNull())
    {
        if (!value["LayerPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.LayerPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layerPath = string(value["LayerPath"].GetString());
        m_layerPathHasBeenSet = true;
    }

    if (value.HasMember("ParentLayerPath") && !value["ParentLayerPath"].IsNull())
    {
        if (!value["ParentLayerPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.ParentLayerPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentLayerPath = string(value["ParentLayerPath"].GetString());
        m_parentLayerPathHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.Usage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usage = string(value["Usage"].GetString());
        m_usageHasBeenSet = true;
    }

    if (value.HasMember("ParamDesc") && !value["ParamDesc"].IsNull())
    {
        if (!value["ParamDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.ParamDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramDesc = string(value["ParamDesc"].GetString());
        m_paramDescHasBeenSet = true;
    }

    if (value.HasMember("ReturnDesc") && !value["ReturnDesc"].IsNull())
    {
        if (!value["ReturnDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.ReturnDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnDesc = string(value["ReturnDesc"].GetString());
        m_returnDescHasBeenSet = true;
    }

    if (value.HasMember("Example") && !value["Example"].IsNull())
    {
        if (!value["Example"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.Example` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_example = string(value["Example"].GetString());
        m_exampleHasBeenSet = true;
    }

    if (value.HasMember("ClusterIdentifier") && !value["ClusterIdentifier"].IsNull())
    {
        if (!value["ClusterIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.ClusterIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterIdentifier = string(value["ClusterIdentifier"].GetString());
        m_clusterIdentifierHasBeenSet = true;
    }

    if (value.HasMember("FuncId") && !value["FuncId"].IsNull())
    {
        if (!value["FuncId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.FuncId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_funcId = string(value["FuncId"].GetString());
        m_funcIdHasBeenSet = true;
    }

    if (value.HasMember("ClassName") && !value["ClassName"].IsNull())
    {
        if (!value["ClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.ClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_className = string(value["ClassName"].GetString());
        m_classNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceList") && !value["ResourceList"].IsNull())
    {
        if (!value["ResourceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.ResourceList` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FunctionVersion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceList.push_back(item);
        }
        m_resourceListHasBeenSet = true;
    }

    if (value.HasMember("OperatorUserIds") && !value["OperatorUserIds"].IsNull())
    {
        if (!value["OperatorUserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.OperatorUserIds` is not array type"));

        const rapidjson::Value &tmpValue = value["OperatorUserIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operatorUserIds.push_back((*itr).GetInt64());
        }
        m_operatorUserIdsHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserIds") && !value["OwnerUserIds"].IsNull())
    {
        if (!value["OwnerUserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.OwnerUserIds` is not array type"));

        const rapidjson::Value &tmpValue = value["OwnerUserIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ownerUserIds.push_back((*itr).GetInt64());
        }
        m_ownerUserIdsHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("SubmitErrorMsg") && !value["SubmitErrorMsg"].IsNull())
    {
        if (!value["SubmitErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.SubmitErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitErrorMsg = string(value["SubmitErrorMsg"].GetString());
        m_submitErrorMsgHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("CommandFormat") && !value["CommandFormat"].IsNull())
    {
        if (!value["CommandFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.CommandFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandFormat = string(value["CommandFormat"].GetString());
        m_commandFormatHasBeenSet = true;
    }

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }

    if (value.HasMember("SubmitTimestamp") && !value["SubmitTimestamp"].IsNull())
    {
        if (!value["SubmitTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.SubmitTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitTimestamp = string(value["SubmitTimestamp"].GetString());
        m_submitTimestampHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("OperatorUserIdsStr") && !value["OperatorUserIdsStr"].IsNull())
    {
        if (!value["OperatorUserIdsStr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.OperatorUserIdsStr` is not array type"));

        const rapidjson::Value &tmpValue = value["OperatorUserIdsStr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operatorUserIdsStr.push_back((*itr).GetString());
        }
        m_operatorUserIdsStrHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserIdsStr") && !value["OwnerUserIdsStr"].IsNull())
    {
        if (!value["OwnerUserIdsStr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.OwnerUserIdsStr` is not array type"));

        const rapidjson::Value &tmpValue = value["OwnerUserIdsStr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ownerUserIdsStr.push_back((*itr).GetString());
        }
        m_ownerUserIdsStrHasBeenSet = true;
    }

    if (value.HasMember("EnvType") && !value["EnvType"].IsNull())
    {
        if (!value["EnvType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.EnvType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envType = string(value["EnvType"].GetString());
        m_envTypeHasBeenSet = true;
    }

    if (value.HasMember("FunctionResourceFileType") && !value["FunctionResourceFileType"].IsNull())
    {
        if (!value["FunctionResourceFileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationalFunction.FunctionResourceFileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionResourceFileType = string(value["FunctionResourceFileType"].GetString());
        m_functionResourceFileTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrganizationalFunction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_layerPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layerPath.c_str(), allocator).Move(), allocator);
    }

    if (m_parentLayerPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentLayerPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentLayerPath.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usage.c_str(), allocator).Move(), allocator);
    }

    if (m_paramDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_returnDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_returnDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_exampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Example";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_example.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIdentifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterIdentifier.c_str(), allocator).Move(), allocator);
    }

    if (m_funcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuncId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_funcId.c_str(), allocator).Move(), allocator);
    }

    if (m_classNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_className.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceList.begin(); itr != m_resourceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_operatorUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorUserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operatorUserIds.begin(); itr != m_operatorUserIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_ownerUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerUserIds.begin(); itr != m_ownerUserIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_submitErrorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitErrorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_commandFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commandFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
    }

    if (m_submitTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorUserIdsStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorUserIdsStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operatorUserIdsStr.begin(); itr != m_operatorUserIdsStr.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownerUserIdsStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserIdsStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerUserIdsStr.begin(); itr != m_ownerUserIdsStr.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_envTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envType.c_str(), allocator).Move(), allocator);
    }

    if (m_functionResourceFileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionResourceFileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionResourceFileType.c_str(), allocator).Move(), allocator);
    }

}


string OrganizationalFunction::GetName() const
{
    return m_name;
}

void OrganizationalFunction::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OrganizationalFunction::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string OrganizationalFunction::GetDisplayName() const
{
    return m_displayName;
}

void OrganizationalFunction::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool OrganizationalFunction::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string OrganizationalFunction::GetLayerPath() const
{
    return m_layerPath;
}

void OrganizationalFunction::SetLayerPath(const string& _layerPath)
{
    m_layerPath = _layerPath;
    m_layerPathHasBeenSet = true;
}

bool OrganizationalFunction::LayerPathHasBeenSet() const
{
    return m_layerPathHasBeenSet;
}

string OrganizationalFunction::GetParentLayerPath() const
{
    return m_parentLayerPath;
}

void OrganizationalFunction::SetParentLayerPath(const string& _parentLayerPath)
{
    m_parentLayerPath = _parentLayerPath;
    m_parentLayerPathHasBeenSet = true;
}

bool OrganizationalFunction::ParentLayerPathHasBeenSet() const
{
    return m_parentLayerPathHasBeenSet;
}

string OrganizationalFunction::GetType() const
{
    return m_type;
}

void OrganizationalFunction::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool OrganizationalFunction::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string OrganizationalFunction::GetKind() const
{
    return m_kind;
}

void OrganizationalFunction::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool OrganizationalFunction::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string OrganizationalFunction::GetCategory() const
{
    return m_category;
}

void OrganizationalFunction::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool OrganizationalFunction::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string OrganizationalFunction::GetStatus() const
{
    return m_status;
}

void OrganizationalFunction::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OrganizationalFunction::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string OrganizationalFunction::GetDescription() const
{
    return m_description;
}

void OrganizationalFunction::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool OrganizationalFunction::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string OrganizationalFunction::GetUsage() const
{
    return m_usage;
}

void OrganizationalFunction::SetUsage(const string& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool OrganizationalFunction::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

string OrganizationalFunction::GetParamDesc() const
{
    return m_paramDesc;
}

void OrganizationalFunction::SetParamDesc(const string& _paramDesc)
{
    m_paramDesc = _paramDesc;
    m_paramDescHasBeenSet = true;
}

bool OrganizationalFunction::ParamDescHasBeenSet() const
{
    return m_paramDescHasBeenSet;
}

string OrganizationalFunction::GetReturnDesc() const
{
    return m_returnDesc;
}

void OrganizationalFunction::SetReturnDesc(const string& _returnDesc)
{
    m_returnDesc = _returnDesc;
    m_returnDescHasBeenSet = true;
}

bool OrganizationalFunction::ReturnDescHasBeenSet() const
{
    return m_returnDescHasBeenSet;
}

string OrganizationalFunction::GetExample() const
{
    return m_example;
}

void OrganizationalFunction::SetExample(const string& _example)
{
    m_example = _example;
    m_exampleHasBeenSet = true;
}

bool OrganizationalFunction::ExampleHasBeenSet() const
{
    return m_exampleHasBeenSet;
}

string OrganizationalFunction::GetClusterIdentifier() const
{
    return m_clusterIdentifier;
}

void OrganizationalFunction::SetClusterIdentifier(const string& _clusterIdentifier)
{
    m_clusterIdentifier = _clusterIdentifier;
    m_clusterIdentifierHasBeenSet = true;
}

bool OrganizationalFunction::ClusterIdentifierHasBeenSet() const
{
    return m_clusterIdentifierHasBeenSet;
}

string OrganizationalFunction::GetFuncId() const
{
    return m_funcId;
}

void OrganizationalFunction::SetFuncId(const string& _funcId)
{
    m_funcId = _funcId;
    m_funcIdHasBeenSet = true;
}

bool OrganizationalFunction::FuncIdHasBeenSet() const
{
    return m_funcIdHasBeenSet;
}

string OrganizationalFunction::GetClassName() const
{
    return m_className;
}

void OrganizationalFunction::SetClassName(const string& _className)
{
    m_className = _className;
    m_classNameHasBeenSet = true;
}

bool OrganizationalFunction::ClassNameHasBeenSet() const
{
    return m_classNameHasBeenSet;
}

vector<FunctionVersion> OrganizationalFunction::GetResourceList() const
{
    return m_resourceList;
}

void OrganizationalFunction::SetResourceList(const vector<FunctionVersion>& _resourceList)
{
    m_resourceList = _resourceList;
    m_resourceListHasBeenSet = true;
}

bool OrganizationalFunction::ResourceListHasBeenSet() const
{
    return m_resourceListHasBeenSet;
}

vector<int64_t> OrganizationalFunction::GetOperatorUserIds() const
{
    return m_operatorUserIds;
}

void OrganizationalFunction::SetOperatorUserIds(const vector<int64_t>& _operatorUserIds)
{
    m_operatorUserIds = _operatorUserIds;
    m_operatorUserIdsHasBeenSet = true;
}

bool OrganizationalFunction::OperatorUserIdsHasBeenSet() const
{
    return m_operatorUserIdsHasBeenSet;
}

vector<int64_t> OrganizationalFunction::GetOwnerUserIds() const
{
    return m_ownerUserIds;
}

void OrganizationalFunction::SetOwnerUserIds(const vector<int64_t>& _ownerUserIds)
{
    m_ownerUserIds = _ownerUserIds;
    m_ownerUserIdsHasBeenSet = true;
}

bool OrganizationalFunction::OwnerUserIdsHasBeenSet() const
{
    return m_ownerUserIdsHasBeenSet;
}

string OrganizationalFunction::GetDbName() const
{
    return m_dbName;
}

void OrganizationalFunction::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool OrganizationalFunction::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string OrganizationalFunction::GetSubmitErrorMsg() const
{
    return m_submitErrorMsg;
}

void OrganizationalFunction::SetSubmitErrorMsg(const string& _submitErrorMsg)
{
    m_submitErrorMsg = _submitErrorMsg;
    m_submitErrorMsgHasBeenSet = true;
}

bool OrganizationalFunction::SubmitErrorMsgHasBeenSet() const
{
    return m_submitErrorMsgHasBeenSet;
}

string OrganizationalFunction::GetSchemaName() const
{
    return m_schemaName;
}

void OrganizationalFunction::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool OrganizationalFunction::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string OrganizationalFunction::GetCommandFormat() const
{
    return m_commandFormat;
}

void OrganizationalFunction::SetCommandFormat(const string& _commandFormat)
{
    m_commandFormat = _commandFormat;
    m_commandFormatHasBeenSet = true;
}

bool OrganizationalFunction::CommandFormatHasBeenSet() const
{
    return m_commandFormatHasBeenSet;
}

string OrganizationalFunction::GetOwnerName() const
{
    return m_ownerName;
}

void OrganizationalFunction::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool OrganizationalFunction::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

string OrganizationalFunction::GetSubmitTimestamp() const
{
    return m_submitTimestamp;
}

void OrganizationalFunction::SetSubmitTimestamp(const string& _submitTimestamp)
{
    m_submitTimestamp = _submitTimestamp;
    m_submitTimestampHasBeenSet = true;
}

bool OrganizationalFunction::SubmitTimestampHasBeenSet() const
{
    return m_submitTimestampHasBeenSet;
}

string OrganizationalFunction::GetTag() const
{
    return m_tag;
}

void OrganizationalFunction::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool OrganizationalFunction::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

vector<string> OrganizationalFunction::GetOperatorUserIdsStr() const
{
    return m_operatorUserIdsStr;
}

void OrganizationalFunction::SetOperatorUserIdsStr(const vector<string>& _operatorUserIdsStr)
{
    m_operatorUserIdsStr = _operatorUserIdsStr;
    m_operatorUserIdsStrHasBeenSet = true;
}

bool OrganizationalFunction::OperatorUserIdsStrHasBeenSet() const
{
    return m_operatorUserIdsStrHasBeenSet;
}

vector<string> OrganizationalFunction::GetOwnerUserIdsStr() const
{
    return m_ownerUserIdsStr;
}

void OrganizationalFunction::SetOwnerUserIdsStr(const vector<string>& _ownerUserIdsStr)
{
    m_ownerUserIdsStr = _ownerUserIdsStr;
    m_ownerUserIdsStrHasBeenSet = true;
}

bool OrganizationalFunction::OwnerUserIdsStrHasBeenSet() const
{
    return m_ownerUserIdsStrHasBeenSet;
}

string OrganizationalFunction::GetEnvType() const
{
    return m_envType;
}

void OrganizationalFunction::SetEnvType(const string& _envType)
{
    m_envType = _envType;
    m_envTypeHasBeenSet = true;
}

bool OrganizationalFunction::EnvTypeHasBeenSet() const
{
    return m_envTypeHasBeenSet;
}

string OrganizationalFunction::GetFunctionResourceFileType() const
{
    return m_functionResourceFileType;
}

void OrganizationalFunction::SetFunctionResourceFileType(const string& _functionResourceFileType)
{
    m_functionResourceFileType = _functionResourceFileType;
    m_functionResourceFileTypeHasBeenSet = true;
}

bool OrganizationalFunction::FunctionResourceFileTypeHasBeenSet() const
{
    return m_functionResourceFileTypeHasBeenSet;
}

