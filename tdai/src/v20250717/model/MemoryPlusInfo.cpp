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

#include <tencentcloud/tdai/v20250717/model/MemoryPlusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

MemoryPlusInfo::MemoryPlusInfo() :
    m_spaceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_memoryUsageHasBeenSet(false),
    m_creditUsageHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_isolatedAtHasBeenSet(false),
    m_expiredAtHasBeenSet(false),
    m_destroyAtHasBeenSet(false)
{
}

CoreInternalOutcome MemoryPlusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryPlusInfo.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryPlusInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryPlusInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryPlusInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryPlusInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("MemoryUsage") && !value["MemoryUsage"].IsNull())
    {
        if (!value["MemoryUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryPlusInfo.MemoryUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryUsage = value["MemoryUsage"].GetInt64();
        m_memoryUsageHasBeenSet = true;
    }

    if (value.HasMember("CreditUsage") && !value["CreditUsage"].IsNull())
    {
        if (!value["CreditUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryPlusInfo.CreditUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_creditUsage = value["CreditUsage"].GetDouble();
        m_creditUsageHasBeenSet = true;
    }

    if (value.HasMember("ResourceTags") && !value["ResourceTags"].IsNull())
    {
        if (!value["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MemoryPlusInfo.ResourceTags` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceTag item;
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

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryPlusInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("IsolatedAt") && !value["IsolatedAt"].IsNull())
    {
        if (!value["IsolatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryPlusInfo.IsolatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedAt = string(value["IsolatedAt"].GetString());
        m_isolatedAtHasBeenSet = true;
    }

    if (value.HasMember("ExpiredAt") && !value["ExpiredAt"].IsNull())
    {
        if (!value["ExpiredAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryPlusInfo.ExpiredAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredAt = string(value["ExpiredAt"].GetString());
        m_expiredAtHasBeenSet = true;
    }

    if (value.HasMember("DestroyAt") && !value["DestroyAt"].IsNull())
    {
        if (!value["DestroyAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryPlusInfo.DestroyAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destroyAt = string(value["DestroyAt"].GetString());
        m_destroyAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MemoryPlusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryUsage, allocator);
    }

    if (m_creditUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creditUsage, allocator);
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

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_isolatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredAt.c_str(), allocator).Move(), allocator);
    }

    if (m_destroyAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destroyAt.c_str(), allocator).Move(), allocator);
    }

}


string MemoryPlusInfo::GetSpaceId() const
{
    return m_spaceId;
}

void MemoryPlusInfo::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool MemoryPlusInfo::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string MemoryPlusInfo::GetName() const
{
    return m_name;
}

void MemoryPlusInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MemoryPlusInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MemoryPlusInfo::GetDescription() const
{
    return m_description;
}

void MemoryPlusInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool MemoryPlusInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t MemoryPlusInfo::GetStatus() const
{
    return m_status;
}

void MemoryPlusInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MemoryPlusInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MemoryPlusInfo::GetRegion() const
{
    return m_region;
}

void MemoryPlusInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool MemoryPlusInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t MemoryPlusInfo::GetMemoryUsage() const
{
    return m_memoryUsage;
}

void MemoryPlusInfo::SetMemoryUsage(const int64_t& _memoryUsage)
{
    m_memoryUsage = _memoryUsage;
    m_memoryUsageHasBeenSet = true;
}

bool MemoryPlusInfo::MemoryUsageHasBeenSet() const
{
    return m_memoryUsageHasBeenSet;
}

double MemoryPlusInfo::GetCreditUsage() const
{
    return m_creditUsage;
}

void MemoryPlusInfo::SetCreditUsage(const double& _creditUsage)
{
    m_creditUsage = _creditUsage;
    m_creditUsageHasBeenSet = true;
}

bool MemoryPlusInfo::CreditUsageHasBeenSet() const
{
    return m_creditUsageHasBeenSet;
}

vector<ResourceTag> MemoryPlusInfo::GetResourceTags() const
{
    return m_resourceTags;
}

void MemoryPlusInfo::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool MemoryPlusInfo::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string MemoryPlusInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void MemoryPlusInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool MemoryPlusInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string MemoryPlusInfo::GetIsolatedAt() const
{
    return m_isolatedAt;
}

void MemoryPlusInfo::SetIsolatedAt(const string& _isolatedAt)
{
    m_isolatedAt = _isolatedAt;
    m_isolatedAtHasBeenSet = true;
}

bool MemoryPlusInfo::IsolatedAtHasBeenSet() const
{
    return m_isolatedAtHasBeenSet;
}

string MemoryPlusInfo::GetExpiredAt() const
{
    return m_expiredAt;
}

void MemoryPlusInfo::SetExpiredAt(const string& _expiredAt)
{
    m_expiredAt = _expiredAt;
    m_expiredAtHasBeenSet = true;
}

bool MemoryPlusInfo::ExpiredAtHasBeenSet() const
{
    return m_expiredAtHasBeenSet;
}

string MemoryPlusInfo::GetDestroyAt() const
{
    return m_destroyAt;
}

void MemoryPlusInfo::SetDestroyAt(const string& _destroyAt)
{
    m_destroyAt = _destroyAt;
    m_destroyAtHasBeenSet = true;
}

bool MemoryPlusInfo::DestroyAtHasBeenSet() const
{
    return m_destroyAtHasBeenSet;
}

