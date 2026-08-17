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

#include <tencentcloud/dlc/v20210125/model/InferenceModelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

InferenceModelInfo::InferenceModelInfo() :
    m_modelIdHasBeenSet(false),
    m_modelUidHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_supportedEnginesHasBeenSet(false),
    m_parameterSizeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_latestVersionHasBeenSet(false),
    m_versionCountHasBeenSet(false),
    m_serviceCountHasBeenSet(false),
    m_hasStorageHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_hasCustomStorageHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_builtInHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_resourceTagsHasBeenSet(false)
{
}

CoreInternalOutcome InferenceModelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelUid") && !value["ModelUid"].IsNull())
    {
        if (!value["ModelUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.ModelUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelUid = string(value["ModelUid"].GetString());
        m_modelUidHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ModelType") && !value["ModelType"].IsNull())
    {
        if (!value["ModelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.ModelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = string(value["ModelType"].GetString());
        m_modelTypeHasBeenSet = true;
    }

    if (value.HasMember("SupportedEngines") && !value["SupportedEngines"].IsNull())
    {
        if (!value["SupportedEngines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.SupportedEngines` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportedEngines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportedEngines.push_back((*itr).GetString());
        }
        m_supportedEnginesHasBeenSet = true;
    }

    if (value.HasMember("ParameterSize") && !value["ParameterSize"].IsNull())
    {
        if (!value["ParameterSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.ParameterSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterSize = string(value["ParameterSize"].GetString());
        m_parameterSizeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("LatestVersion") && !value["LatestVersion"].IsNull())
    {
        if (!value["LatestVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.LatestVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersion = string(value["LatestVersion"].GetString());
        m_latestVersionHasBeenSet = true;
    }

    if (value.HasMember("VersionCount") && !value["VersionCount"].IsNull())
    {
        if (!value["VersionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.VersionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionCount = value["VersionCount"].GetInt64();
        m_versionCountHasBeenSet = true;
    }

    if (value.HasMember("ServiceCount") && !value["ServiceCount"].IsNull())
    {
        if (!value["ServiceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.ServiceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCount = value["ServiceCount"].GetInt64();
        m_serviceCountHasBeenSet = true;
    }

    if (value.HasMember("HasStorage") && !value["HasStorage"].IsNull())
    {
        if (!value["HasStorage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.HasStorage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasStorage = value["HasStorage"].GetBool();
        m_hasStorageHasBeenSet = true;
    }

    if (value.HasMember("StorageRegion") && !value["StorageRegion"].IsNull())
    {
        if (!value["StorageRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.StorageRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageRegion = string(value["StorageRegion"].GetString());
        m_storageRegionHasBeenSet = true;
    }

    if (value.HasMember("HasCustomStorage") && !value["HasCustomStorage"].IsNull())
    {
        if (!value["HasCustomStorage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.HasCustomStorage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasCustomStorage = value["HasCustomStorage"].GetBool();
        m_hasCustomStorageHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("BuiltIn") && !value["BuiltIn"].IsNull())
    {
        if (!value["BuiltIn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.BuiltIn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_builtIn = value["BuiltIn"].GetBool();
        m_builtInHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tasks.push_back((*itr).GetString());
        }
        m_tasksHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("ResourceTags") && !value["ResourceTags"].IsNull())
    {
        if (!value["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferenceModelInfo.ResourceTags` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceTags.push_back(item);
        }
        m_resourceTagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceModelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelUid.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelType.c_str(), allocator).Move(), allocator);
    }

    if (m_supportedEnginesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportedEngines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportedEngines.begin(); itr != m_supportedEngines.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_parameterSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameterSize.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_latestVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_versionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionCount, allocator);
    }

    if (m_serviceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceCount, allocator);
    }

    if (m_hasStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasStorage, allocator);
    }

    if (m_storageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_hasCustomStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasCustomStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasCustomStorage, allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_builtInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuiltIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_builtIn, allocator);
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InferenceModelInfo::GetModelId() const
{
    return m_modelId;
}

void InferenceModelInfo::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool InferenceModelInfo::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string InferenceModelInfo::GetModelUid() const
{
    return m_modelUid;
}

void InferenceModelInfo::SetModelUid(const string& _modelUid)
{
    m_modelUid = _modelUid;
    m_modelUidHasBeenSet = true;
}

bool InferenceModelInfo::ModelUidHasBeenSet() const
{
    return m_modelUidHasBeenSet;
}

string InferenceModelInfo::GetName() const
{
    return m_name;
}

void InferenceModelInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InferenceModelInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string InferenceModelInfo::GetProvider() const
{
    return m_provider;
}

void InferenceModelInfo::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool InferenceModelInfo::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string InferenceModelInfo::GetDescription() const
{
    return m_description;
}

void InferenceModelInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool InferenceModelInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string InferenceModelInfo::GetModelType() const
{
    return m_modelType;
}

void InferenceModelInfo::SetModelType(const string& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool InferenceModelInfo::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

vector<string> InferenceModelInfo::GetSupportedEngines() const
{
    return m_supportedEngines;
}

void InferenceModelInfo::SetSupportedEngines(const vector<string>& _supportedEngines)
{
    m_supportedEngines = _supportedEngines;
    m_supportedEnginesHasBeenSet = true;
}

bool InferenceModelInfo::SupportedEnginesHasBeenSet() const
{
    return m_supportedEnginesHasBeenSet;
}

string InferenceModelInfo::GetParameterSize() const
{
    return m_parameterSize;
}

void InferenceModelInfo::SetParameterSize(const string& _parameterSize)
{
    m_parameterSize = _parameterSize;
    m_parameterSizeHasBeenSet = true;
}

bool InferenceModelInfo::ParameterSizeHasBeenSet() const
{
    return m_parameterSizeHasBeenSet;
}

vector<string> InferenceModelInfo::GetTags() const
{
    return m_tags;
}

void InferenceModelInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool InferenceModelInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string InferenceModelInfo::GetLatestVersion() const
{
    return m_latestVersion;
}

void InferenceModelInfo::SetLatestVersion(const string& _latestVersion)
{
    m_latestVersion = _latestVersion;
    m_latestVersionHasBeenSet = true;
}

bool InferenceModelInfo::LatestVersionHasBeenSet() const
{
    return m_latestVersionHasBeenSet;
}

int64_t InferenceModelInfo::GetVersionCount() const
{
    return m_versionCount;
}

void InferenceModelInfo::SetVersionCount(const int64_t& _versionCount)
{
    m_versionCount = _versionCount;
    m_versionCountHasBeenSet = true;
}

bool InferenceModelInfo::VersionCountHasBeenSet() const
{
    return m_versionCountHasBeenSet;
}

int64_t InferenceModelInfo::GetServiceCount() const
{
    return m_serviceCount;
}

void InferenceModelInfo::SetServiceCount(const int64_t& _serviceCount)
{
    m_serviceCount = _serviceCount;
    m_serviceCountHasBeenSet = true;
}

bool InferenceModelInfo::ServiceCountHasBeenSet() const
{
    return m_serviceCountHasBeenSet;
}

bool InferenceModelInfo::GetHasStorage() const
{
    return m_hasStorage;
}

void InferenceModelInfo::SetHasStorage(const bool& _hasStorage)
{
    m_hasStorage = _hasStorage;
    m_hasStorageHasBeenSet = true;
}

bool InferenceModelInfo::HasStorageHasBeenSet() const
{
    return m_hasStorageHasBeenSet;
}

string InferenceModelInfo::GetStorageRegion() const
{
    return m_storageRegion;
}

void InferenceModelInfo::SetStorageRegion(const string& _storageRegion)
{
    m_storageRegion = _storageRegion;
    m_storageRegionHasBeenSet = true;
}

bool InferenceModelInfo::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

bool InferenceModelInfo::GetHasCustomStorage() const
{
    return m_hasCustomStorage;
}

void InferenceModelInfo::SetHasCustomStorage(const bool& _hasCustomStorage)
{
    m_hasCustomStorage = _hasCustomStorage;
    m_hasCustomStorageHasBeenSet = true;
}

bool InferenceModelInfo::HasCustomStorageHasBeenSet() const
{
    return m_hasCustomStorageHasBeenSet;
}

string InferenceModelInfo::GetStorageType() const
{
    return m_storageType;
}

void InferenceModelInfo::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool InferenceModelInfo::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

bool InferenceModelInfo::GetBuiltIn() const
{
    return m_builtIn;
}

void InferenceModelInfo::SetBuiltIn(const bool& _builtIn)
{
    m_builtIn = _builtIn;
    m_builtInHasBeenSet = true;
}

bool InferenceModelInfo::BuiltInHasBeenSet() const
{
    return m_builtInHasBeenSet;
}

vector<string> InferenceModelInfo::GetTasks() const
{
    return m_tasks;
}

void InferenceModelInfo::SetTasks(const vector<string>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool InferenceModelInfo::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

int64_t InferenceModelInfo::GetAppId() const
{
    return m_appId;
}

void InferenceModelInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool InferenceModelInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string InferenceModelInfo::GetUin() const
{
    return m_uin;
}

void InferenceModelInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool InferenceModelInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t InferenceModelInfo::GetCreateTime() const
{
    return m_createTime;
}

void InferenceModelInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InferenceModelInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t InferenceModelInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void InferenceModelInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool InferenceModelInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string InferenceModelInfo::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void InferenceModelInfo::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool InferenceModelInfo::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

vector<Tag> InferenceModelInfo::GetResourceTags() const
{
    return m_resourceTags;
}

void InferenceModelInfo::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool InferenceModelInfo::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

