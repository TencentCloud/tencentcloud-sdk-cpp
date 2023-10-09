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

#include <tencentcloud/dlc/v20210125/model/DataEngineImageVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DataEngineImageVersion::DataEngineImageVersion() :
    m_imageVersionIdHasBeenSet(false),
    m_imageVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isPublicHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_isSharedEngineHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DataEngineImageVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageVersionId") && !value["ImageVersionId"].IsNull())
    {
        if (!value["ImageVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageVersion.ImageVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageVersionId = string(value["ImageVersionId"].GetString());
        m_imageVersionIdHasBeenSet = true;
    }

    if (value.HasMember("ImageVersion") && !value["ImageVersion"].IsNull())
    {
        if (!value["ImageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageVersion.ImageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageVersion = string(value["ImageVersion"].GetString());
        m_imageVersionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageVersion.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("IsPublic") && !value["IsPublic"].IsNull())
    {
        if (!value["IsPublic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageVersion.IsPublic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isPublic = value["IsPublic"].GetUint64();
        m_isPublicHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageVersion.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("IsSharedEngine") && !value["IsSharedEngine"].IsNull())
    {
        if (!value["IsSharedEngine"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageVersion.IsSharedEngine` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isSharedEngine = value["IsSharedEngine"].GetUint64();
        m_isSharedEngineHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageVersion.State` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetUint64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageVersion.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageVersion.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataEngineImageVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_isPublicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPublic, allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_isSharedEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSharedEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSharedEngine, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string DataEngineImageVersion::GetImageVersionId() const
{
    return m_imageVersionId;
}

void DataEngineImageVersion::SetImageVersionId(const string& _imageVersionId)
{
    m_imageVersionId = _imageVersionId;
    m_imageVersionIdHasBeenSet = true;
}

bool DataEngineImageVersion::ImageVersionIdHasBeenSet() const
{
    return m_imageVersionIdHasBeenSet;
}

string DataEngineImageVersion::GetImageVersion() const
{
    return m_imageVersion;
}

void DataEngineImageVersion::SetImageVersion(const string& _imageVersion)
{
    m_imageVersion = _imageVersion;
    m_imageVersionHasBeenSet = true;
}

bool DataEngineImageVersion::ImageVersionHasBeenSet() const
{
    return m_imageVersionHasBeenSet;
}

string DataEngineImageVersion::GetDescription() const
{
    return m_description;
}

void DataEngineImageVersion::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DataEngineImageVersion::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t DataEngineImageVersion::GetIsPublic() const
{
    return m_isPublic;
}

void DataEngineImageVersion::SetIsPublic(const uint64_t& _isPublic)
{
    m_isPublic = _isPublic;
    m_isPublicHasBeenSet = true;
}

bool DataEngineImageVersion::IsPublicHasBeenSet() const
{
    return m_isPublicHasBeenSet;
}

string DataEngineImageVersion::GetEngineType() const
{
    return m_engineType;
}

void DataEngineImageVersion::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool DataEngineImageVersion::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

uint64_t DataEngineImageVersion::GetIsSharedEngine() const
{
    return m_isSharedEngine;
}

void DataEngineImageVersion::SetIsSharedEngine(const uint64_t& _isSharedEngine)
{
    m_isSharedEngine = _isSharedEngine;
    m_isSharedEngineHasBeenSet = true;
}

bool DataEngineImageVersion::IsSharedEngineHasBeenSet() const
{
    return m_isSharedEngineHasBeenSet;
}

uint64_t DataEngineImageVersion::GetState() const
{
    return m_state;
}

void DataEngineImageVersion::SetState(const uint64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DataEngineImageVersion::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DataEngineImageVersion::GetInsertTime() const
{
    return m_insertTime;
}

void DataEngineImageVersion::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool DataEngineImageVersion::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string DataEngineImageVersion::GetUpdateTime() const
{
    return m_updateTime;
}

void DataEngineImageVersion::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DataEngineImageVersion::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

