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

#include <tencentcloud/tke/v20180525/model/BackupStorageLocation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

BackupStorageLocation::BackupStorageLocation() :
    m_nameHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_lastValidationTimeHasBeenSet(false)
{
}

CoreInternalOutcome BackupStorageLocation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStorageLocation.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StorageRegion") && !value["StorageRegion"].IsNull())
    {
        if (!value["StorageRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStorageLocation.StorageRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageRegion = string(value["StorageRegion"].GetString());
        m_storageRegionHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStorageLocation.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStorageLocation.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStorageLocation.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStorageLocation.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStorageLocation.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("LastValidationTime") && !value["LastValidationTime"].IsNull())
    {
        if (!value["LastValidationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStorageLocation.LastValidationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastValidationTime = string(value["LastValidationTime"].GetString());
        m_lastValidationTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupStorageLocation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_storageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_lastValidationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastValidationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastValidationTime.c_str(), allocator).Move(), allocator);
    }

}


string BackupStorageLocation::GetName() const
{
    return m_name;
}

void BackupStorageLocation::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BackupStorageLocation::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BackupStorageLocation::GetStorageRegion() const
{
    return m_storageRegion;
}

void BackupStorageLocation::SetStorageRegion(const string& _storageRegion)
{
    m_storageRegion = _storageRegion;
    m_storageRegionHasBeenSet = true;
}

bool BackupStorageLocation::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

string BackupStorageLocation::GetProvider() const
{
    return m_provider;
}

void BackupStorageLocation::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool BackupStorageLocation::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string BackupStorageLocation::GetBucket() const
{
    return m_bucket;
}

void BackupStorageLocation::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool BackupStorageLocation::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string BackupStorageLocation::GetPath() const
{
    return m_path;
}

void BackupStorageLocation::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool BackupStorageLocation::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string BackupStorageLocation::GetState() const
{
    return m_state;
}

void BackupStorageLocation::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool BackupStorageLocation::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string BackupStorageLocation::GetMessage() const
{
    return m_message;
}

void BackupStorageLocation::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool BackupStorageLocation::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string BackupStorageLocation::GetLastValidationTime() const
{
    return m_lastValidationTime;
}

void BackupStorageLocation::SetLastValidationTime(const string& _lastValidationTime)
{
    m_lastValidationTime = _lastValidationTime;
    m_lastValidationTimeHasBeenSet = true;
}

bool BackupStorageLocation::LastValidationTimeHasBeenSet() const
{
    return m_lastValidationTimeHasBeenSet;
}

