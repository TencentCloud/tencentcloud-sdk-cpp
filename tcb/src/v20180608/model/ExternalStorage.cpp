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

#include <tencentcloud/tcb/v20180608/model/ExternalStorage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ExternalStorage::ExternalStorage() :
    m_bucketNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_basePathHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome ExternalStorage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalStorage.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalStorage.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("BasePath") && !value["BasePath"].IsNull())
    {
        if (!value["BasePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalStorage.BasePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_basePath = string(value["BasePath"].GetString());
        m_basePathHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalStorage.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalStorage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_basePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_basePath.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

}


string ExternalStorage::GetBucketName() const
{
    return m_bucketName;
}

void ExternalStorage::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool ExternalStorage::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string ExternalStorage::GetRegion() const
{
    return m_region;
}

void ExternalStorage::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ExternalStorage::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ExternalStorage::GetBasePath() const
{
    return m_basePath;
}

void ExternalStorage::SetBasePath(const string& _basePath)
{
    m_basePath = _basePath;
    m_basePathHasBeenSet = true;
}

bool ExternalStorage::BasePathHasBeenSet() const
{
    return m_basePathHasBeenSet;
}

bool ExternalStorage::GetEnabled() const
{
    return m_enabled;
}

void ExternalStorage::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ExternalStorage::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

