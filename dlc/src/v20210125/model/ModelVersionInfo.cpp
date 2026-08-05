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

#include <tencentcloud/dlc/v20210125/model/ModelVersionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ModelVersionInfo::ModelVersionInfo() :
    m_versionIdHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_storageUriHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_linkedServicesHasBeenSet(false),
    m_useCustomStorageHasBeenSet(false)
{
}

CoreInternalOutcome ModelVersionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("StorageUri") && !value["StorageUri"].IsNull())
    {
        if (!value["StorageUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.StorageUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageUri = string(value["StorageUri"].GetString());
        m_storageUriHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LinkedServices") && !value["LinkedServices"].IsNull())
    {
        if (!value["LinkedServices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.LinkedServices` is not array type"));

        const rapidjson::Value &tmpValue = value["LinkedServices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LinkedServiceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_linkedServices.push_back(item);
        }
        m_linkedServicesHasBeenSet = true;
    }

    if (value.HasMember("UseCustomStorage") && !value["UseCustomStorage"].IsNull())
    {
        if (!value["UseCustomStorage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.UseCustomStorage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useCustomStorage = value["UseCustomStorage"].GetBool();
        m_useCustomStorageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelVersionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_storageUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageUri.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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

    if (m_linkedServicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkedServices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_linkedServices.begin(); itr != m_linkedServices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_useCustomStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseCustomStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useCustomStorage, allocator);
    }

}


string ModelVersionInfo::GetVersionId() const
{
    return m_versionId;
}

void ModelVersionInfo::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool ModelVersionInfo::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string ModelVersionInfo::GetModelId() const
{
    return m_modelId;
}

void ModelVersionInfo::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ModelVersionInfo::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string ModelVersionInfo::GetVersion() const
{
    return m_version;
}

void ModelVersionInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ModelVersionInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ModelVersionInfo::GetStorageUri() const
{
    return m_storageUri;
}

void ModelVersionInfo::SetStorageUri(const string& _storageUri)
{
    m_storageUri = _storageUri;
    m_storageUriHasBeenSet = true;
}

bool ModelVersionInfo::StorageUriHasBeenSet() const
{
    return m_storageUriHasBeenSet;
}

string ModelVersionInfo::GetDescription() const
{
    return m_description;
}

void ModelVersionInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModelVersionInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ModelVersionInfo::GetCreateTime() const
{
    return m_createTime;
}

void ModelVersionInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ModelVersionInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ModelVersionInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ModelVersionInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ModelVersionInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<LinkedServiceInfo> ModelVersionInfo::GetLinkedServices() const
{
    return m_linkedServices;
}

void ModelVersionInfo::SetLinkedServices(const vector<LinkedServiceInfo>& _linkedServices)
{
    m_linkedServices = _linkedServices;
    m_linkedServicesHasBeenSet = true;
}

bool ModelVersionInfo::LinkedServicesHasBeenSet() const
{
    return m_linkedServicesHasBeenSet;
}

bool ModelVersionInfo::GetUseCustomStorage() const
{
    return m_useCustomStorage;
}

void ModelVersionInfo::SetUseCustomStorage(const bool& _useCustomStorage)
{
    m_useCustomStorage = _useCustomStorage;
    m_useCustomStorageHasBeenSet = true;
}

bool ModelVersionInfo::UseCustomStorageHasBeenSet() const
{
    return m_useCustomStorageHasBeenSet;
}

