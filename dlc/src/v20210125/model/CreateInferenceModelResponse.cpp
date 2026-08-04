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

#include <tencentcloud/dlc/v20210125/model/CreateInferenceModelResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateInferenceModelResponse::CreateInferenceModelResponse() :
    m_modelIdHasBeenSet(false),
    m_modelUidHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_parameterSizeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_latestVersionHasBeenSet(false),
    m_versionCountHasBeenSet(false),
    m_serviceCountHasBeenSet(false),
    m_hasStorageHasBeenSet(false),
    m_hasCustomStorageHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_builtInHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_subAccountUinHasBeenSet(false)
{
}

CoreInternalOutcome CreateInferenceModelResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ModelId") && !rsp["ModelId"].IsNull())
    {
        if (!rsp["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(rsp["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (rsp.HasMember("ModelUid") && !rsp["ModelUid"].IsNull())
    {
        if (!rsp["ModelUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelUid = string(rsp["ModelUid"].GetString());
        m_modelUidHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Provider") && !rsp["Provider"].IsNull())
    {
        if (!rsp["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(rsp["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("ModelType") && !rsp["ModelType"].IsNull())
    {
        if (!rsp["ModelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = string(rsp["ModelType"].GetString());
        m_modelTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ParameterSize") && !rsp["ParameterSize"].IsNull())
    {
        if (!rsp["ParameterSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterSize = string(rsp["ParameterSize"].GetString());
        m_parameterSizeHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("LatestVersion") && !rsp["LatestVersion"].IsNull())
    {
        if (!rsp["LatestVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersion = string(rsp["LatestVersion"].GetString());
        m_latestVersionHasBeenSet = true;
    }

    if (rsp.HasMember("VersionCount") && !rsp["VersionCount"].IsNull())
    {
        if (!rsp["VersionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionCount = rsp["VersionCount"].GetInt64();
        m_versionCountHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceCount") && !rsp["ServiceCount"].IsNull())
    {
        if (!rsp["ServiceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCount = rsp["ServiceCount"].GetInt64();
        m_serviceCountHasBeenSet = true;
    }

    if (rsp.HasMember("HasStorage") && !rsp["HasStorage"].IsNull())
    {
        if (!rsp["HasStorage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HasStorage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasStorage = rsp["HasStorage"].GetBool();
        m_hasStorageHasBeenSet = true;
    }

    if (rsp.HasMember("HasCustomStorage") && !rsp["HasCustomStorage"].IsNull())
    {
        if (!rsp["HasCustomStorage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HasCustomStorage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasCustomStorage = rsp["HasCustomStorage"].GetBool();
        m_hasCustomStorageHasBeenSet = true;
    }

    if (rsp.HasMember("StorageType") && !rsp["StorageType"].IsNull())
    {
        if (!rsp["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(rsp["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (rsp.HasMember("BuiltIn") && !rsp["BuiltIn"].IsNull())
    {
        if (!rsp["BuiltIn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BuiltIn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_builtIn = rsp["BuiltIn"].GetBool();
        m_builtInHasBeenSet = true;
    }

    if (rsp.HasMember("Tasks") && !rsp["Tasks"].IsNull())
    {
        if (!rsp["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tasks` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tasks.push_back((*itr).GetString());
        }
        m_tasksHasBeenSet = true;
    }

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = rsp["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = rsp["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SubAccountUin") && !rsp["SubAccountUin"].IsNull())
    {
        if (!rsp["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(rsp["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateInferenceModelResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string CreateInferenceModelResponse::GetModelId() const
{
    return m_modelId;
}

bool CreateInferenceModelResponse::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string CreateInferenceModelResponse::GetModelUid() const
{
    return m_modelUid;
}

bool CreateInferenceModelResponse::ModelUidHasBeenSet() const
{
    return m_modelUidHasBeenSet;
}

string CreateInferenceModelResponse::GetName() const
{
    return m_name;
}

bool CreateInferenceModelResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateInferenceModelResponse::GetProvider() const
{
    return m_provider;
}

bool CreateInferenceModelResponse::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string CreateInferenceModelResponse::GetDescription() const
{
    return m_description;
}

bool CreateInferenceModelResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateInferenceModelResponse::GetModelType() const
{
    return m_modelType;
}

bool CreateInferenceModelResponse::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

string CreateInferenceModelResponse::GetParameterSize() const
{
    return m_parameterSize;
}

bool CreateInferenceModelResponse::ParameterSizeHasBeenSet() const
{
    return m_parameterSizeHasBeenSet;
}

vector<string> CreateInferenceModelResponse::GetTags() const
{
    return m_tags;
}

bool CreateInferenceModelResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateInferenceModelResponse::GetLatestVersion() const
{
    return m_latestVersion;
}

bool CreateInferenceModelResponse::LatestVersionHasBeenSet() const
{
    return m_latestVersionHasBeenSet;
}

int64_t CreateInferenceModelResponse::GetVersionCount() const
{
    return m_versionCount;
}

bool CreateInferenceModelResponse::VersionCountHasBeenSet() const
{
    return m_versionCountHasBeenSet;
}

int64_t CreateInferenceModelResponse::GetServiceCount() const
{
    return m_serviceCount;
}

bool CreateInferenceModelResponse::ServiceCountHasBeenSet() const
{
    return m_serviceCountHasBeenSet;
}

bool CreateInferenceModelResponse::GetHasStorage() const
{
    return m_hasStorage;
}

bool CreateInferenceModelResponse::HasStorageHasBeenSet() const
{
    return m_hasStorageHasBeenSet;
}

bool CreateInferenceModelResponse::GetHasCustomStorage() const
{
    return m_hasCustomStorage;
}

bool CreateInferenceModelResponse::HasCustomStorageHasBeenSet() const
{
    return m_hasCustomStorageHasBeenSet;
}

string CreateInferenceModelResponse::GetStorageType() const
{
    return m_storageType;
}

bool CreateInferenceModelResponse::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

bool CreateInferenceModelResponse::GetBuiltIn() const
{
    return m_builtIn;
}

bool CreateInferenceModelResponse::BuiltInHasBeenSet() const
{
    return m_builtInHasBeenSet;
}

vector<string> CreateInferenceModelResponse::GetTasks() const
{
    return m_tasks;
}

bool CreateInferenceModelResponse::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

int64_t CreateInferenceModelResponse::GetAppId() const
{
    return m_appId;
}

bool CreateInferenceModelResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t CreateInferenceModelResponse::GetCreateTime() const
{
    return m_createTime;
}

bool CreateInferenceModelResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t CreateInferenceModelResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool CreateInferenceModelResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CreateInferenceModelResponse::GetSubAccountUin() const
{
    return m_subAccountUin;
}

bool CreateInferenceModelResponse::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}


