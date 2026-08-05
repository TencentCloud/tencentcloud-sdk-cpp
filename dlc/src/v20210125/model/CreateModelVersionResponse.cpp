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

#include <tencentcloud/dlc/v20210125/model/CreateModelVersionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateModelVersionResponse::CreateModelVersionResponse() :
    m_versionIdHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_storageUriHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_linkedServicesHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_useCustomStorageHasBeenSet(false)
{
}

CoreInternalOutcome CreateModelVersionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VersionId") && !rsp["VersionId"].IsNull())
    {
        if (!rsp["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(rsp["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
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

    if (rsp.HasMember("StorageUri") && !rsp["StorageUri"].IsNull())
    {
        if (!rsp["StorageUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageUri = string(rsp["StorageUri"].GetString());
        m_storageUriHasBeenSet = true;
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

    if (rsp.HasMember("LinkedServices") && !rsp["LinkedServices"].IsNull())
    {
        if (!rsp["LinkedServices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LinkedServices` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LinkedServices"];
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

    if (rsp.HasMember("Version") && !rsp["Version"].IsNull())
    {
        if (!rsp["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(rsp["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (rsp.HasMember("UseCustomStorage") && !rsp["UseCustomStorage"].IsNull())
    {
        if (!rsp["UseCustomStorage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UseCustomStorage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useCustomStorage = rsp["UseCustomStorage"].GetBool();
        m_useCustomStorageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateModelVersionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_useCustomStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseCustomStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useCustomStorage, allocator);
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


string CreateModelVersionResponse::GetVersionId() const
{
    return m_versionId;
}

bool CreateModelVersionResponse::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string CreateModelVersionResponse::GetModelId() const
{
    return m_modelId;
}

bool CreateModelVersionResponse::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string CreateModelVersionResponse::GetStorageUri() const
{
    return m_storageUri;
}

bool CreateModelVersionResponse::StorageUriHasBeenSet() const
{
    return m_storageUriHasBeenSet;
}

string CreateModelVersionResponse::GetDescription() const
{
    return m_description;
}

bool CreateModelVersionResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateModelVersionResponse::GetCreateTime() const
{
    return m_createTime;
}

bool CreateModelVersionResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t CreateModelVersionResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool CreateModelVersionResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<LinkedServiceInfo> CreateModelVersionResponse::GetLinkedServices() const
{
    return m_linkedServices;
}

bool CreateModelVersionResponse::LinkedServicesHasBeenSet() const
{
    return m_linkedServicesHasBeenSet;
}

string CreateModelVersionResponse::GetVersion() const
{
    return m_version;
}

bool CreateModelVersionResponse::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

bool CreateModelVersionResponse::GetUseCustomStorage() const
{
    return m_useCustomStorage;
}

bool CreateModelVersionResponse::UseCustomStorageHasBeenSet() const
{
    return m_useCustomStorageHasBeenSet;
}


