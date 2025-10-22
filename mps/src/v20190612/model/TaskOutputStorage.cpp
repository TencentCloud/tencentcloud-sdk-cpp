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

#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

TaskOutputStorage::TaskOutputStorage() :
    m_typeHasBeenSet(false),
    m_cosOutputStorageHasBeenSet(false),
    m_s3OutputStorageHasBeenSet(false),
    m_vODOutputStorageHasBeenSet(false)
{
}

CoreInternalOutcome TaskOutputStorage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOutputStorage.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CosOutputStorage") && !value["CosOutputStorage"].IsNull())
    {
        if (!value["CosOutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOutputStorage.CosOutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosOutputStorage.Deserialize(value["CosOutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosOutputStorageHasBeenSet = true;
    }

    if (value.HasMember("S3OutputStorage") && !value["S3OutputStorage"].IsNull())
    {
        if (!value["S3OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOutputStorage.S3OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_s3OutputStorage.Deserialize(value["S3OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_s3OutputStorageHasBeenSet = true;
    }

    if (value.HasMember("VODOutputStorage") && !value["VODOutputStorage"].IsNull())
    {
        if (!value["VODOutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOutputStorage.VODOutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vODOutputStorage.Deserialize(value["VODOutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vODOutputStorageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskOutputStorage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_cosOutputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosOutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosOutputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_s3OutputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "S3OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_s3OutputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vODOutputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VODOutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vODOutputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TaskOutputStorage::GetType() const
{
    return m_type;
}

void TaskOutputStorage::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TaskOutputStorage::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

CosOutputStorage TaskOutputStorage::GetCosOutputStorage() const
{
    return m_cosOutputStorage;
}

void TaskOutputStorage::SetCosOutputStorage(const CosOutputStorage& _cosOutputStorage)
{
    m_cosOutputStorage = _cosOutputStorage;
    m_cosOutputStorageHasBeenSet = true;
}

bool TaskOutputStorage::CosOutputStorageHasBeenSet() const
{
    return m_cosOutputStorageHasBeenSet;
}

S3OutputStorage TaskOutputStorage::GetS3OutputStorage() const
{
    return m_s3OutputStorage;
}

void TaskOutputStorage::SetS3OutputStorage(const S3OutputStorage& _s3OutputStorage)
{
    m_s3OutputStorage = _s3OutputStorage;
    m_s3OutputStorageHasBeenSet = true;
}

bool TaskOutputStorage::S3OutputStorageHasBeenSet() const
{
    return m_s3OutputStorageHasBeenSet;
}

VODOutputStorage TaskOutputStorage::GetVODOutputStorage() const
{
    return m_vODOutputStorage;
}

void TaskOutputStorage::SetVODOutputStorage(const VODOutputStorage& _vODOutputStorage)
{
    m_vODOutputStorage = _vODOutputStorage;
    m_vODOutputStorageHasBeenSet = true;
}

bool TaskOutputStorage::VODOutputStorageHasBeenSet() const
{
    return m_vODOutputStorageHasBeenSet;
}

