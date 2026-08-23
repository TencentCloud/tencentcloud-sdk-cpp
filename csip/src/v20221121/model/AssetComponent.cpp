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

#include <tencentcloud/csip/v20221121/model/AssetComponent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetComponent::AssetComponent() :
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_firstFoundTimeHasBeenSet(false),
    m_latestFoundTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_affectedImageCountHasBeenSet(false)
{
}

CoreInternalOutcome AssetComponent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetComponent.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetComponent.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetComponent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("FirstFoundTime") && !value["FirstFoundTime"].IsNull())
    {
        if (!value["FirstFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetComponent.FirstFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstFoundTime = string(value["FirstFoundTime"].GetString());
        m_firstFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestFoundTime") && !value["LatestFoundTime"].IsNull())
    {
        if (!value["LatestFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetComponent.LatestFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFoundTime = string(value["LatestFoundTime"].GetString());
        m_latestFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetComponent.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetComponent.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetComponent.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetComponent.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("AffectedImageCount") && !value["AffectedImageCount"].IsNull())
    {
        if (!value["AffectedImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetComponent.AffectedImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_affectedImageCount = value["AffectedImageCount"].GetUint64();
        m_affectedImageCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetComponent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_firstFoundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstFoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstFoundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestFoundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestFoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestFoundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerAppId, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_affectedImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedImageCount, allocator);
    }

}


string AssetComponent::GetName() const
{
    return m_name;
}

void AssetComponent::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetComponent::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AssetComponent::GetVersion() const
{
    return m_version;
}

void AssetComponent::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool AssetComponent::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string AssetComponent::GetType() const
{
    return m_type;
}

void AssetComponent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AssetComponent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AssetComponent::GetFirstFoundTime() const
{
    return m_firstFoundTime;
}

void AssetComponent::SetFirstFoundTime(const string& _firstFoundTime)
{
    m_firstFoundTime = _firstFoundTime;
    m_firstFoundTimeHasBeenSet = true;
}

bool AssetComponent::FirstFoundTimeHasBeenSet() const
{
    return m_firstFoundTimeHasBeenSet;
}

string AssetComponent::GetLatestFoundTime() const
{
    return m_latestFoundTime;
}

void AssetComponent::SetLatestFoundTime(const string& _latestFoundTime)
{
    m_latestFoundTime = _latestFoundTime;
    m_latestFoundTimeHasBeenSet = true;
}

bool AssetComponent::LatestFoundTimeHasBeenSet() const
{
    return m_latestFoundTimeHasBeenSet;
}

string AssetComponent::GetId() const
{
    return m_id;
}

void AssetComponent::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AssetComponent::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AssetComponent::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void AssetComponent::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool AssetComponent::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

uint64_t AssetComponent::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void AssetComponent::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool AssetComponent::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

string AssetComponent::GetOwnerUin() const
{
    return m_ownerUin;
}

void AssetComponent::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool AssetComponent::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

uint64_t AssetComponent::GetAffectedImageCount() const
{
    return m_affectedImageCount;
}

void AssetComponent::SetAffectedImageCount(const uint64_t& _affectedImageCount)
{
    m_affectedImageCount = _affectedImageCount;
    m_affectedImageCountHasBeenSet = true;
}

bool AssetComponent::AffectedImageCountHasBeenSet() const
{
    return m_affectedImageCountHasBeenSet;
}

