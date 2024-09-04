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

#include <tencentcloud/thpc/v20230321/model/SpaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

SpaceInfo::SpaceInfo() :
    m_spaceIdHasBeenSet(false),
    m_spaceFamilyHasBeenSet(false),
    m_spaceTypeHasBeenSet(false),
    m_spaceNameHasBeenSet(false),
    m_spaceStateHasBeenSet(false),
    m_spaceChargeTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_latestOperationHasBeenSet(false),
    m_latestOperationStateHasBeenSet(false)
{
}

CoreInternalOutcome SpaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }

    if (value.HasMember("SpaceFamily") && !value["SpaceFamily"].IsNull())
    {
        if (!value["SpaceFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.SpaceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceFamily = string(value["SpaceFamily"].GetString());
        m_spaceFamilyHasBeenSet = true;
    }

    if (value.HasMember("SpaceType") && !value["SpaceType"].IsNull())
    {
        if (!value["SpaceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.SpaceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceType = string(value["SpaceType"].GetString());
        m_spaceTypeHasBeenSet = true;
    }

    if (value.HasMember("SpaceName") && !value["SpaceName"].IsNull())
    {
        if (!value["SpaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.SpaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceName = string(value["SpaceName"].GetString());
        m_spaceNameHasBeenSet = true;
    }

    if (value.HasMember("SpaceState") && !value["SpaceState"].IsNull())
    {
        if (!value["SpaceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.SpaceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceState = string(value["SpaceState"].GetString());
        m_spaceStateHasBeenSet = true;
    }

    if (value.HasMember("SpaceChargeType") && !value["SpaceChargeType"].IsNull())
    {
        if (!value["SpaceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.SpaceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceChargeType = string(value["SpaceChargeType"].GetString());
        m_spaceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("LatestOperation") && !value["LatestOperation"].IsNull())
    {
        if (!value["LatestOperation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.LatestOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperation = string(value["LatestOperation"].GetString());
        m_latestOperationHasBeenSet = true;
    }

    if (value.HasMember("LatestOperationState") && !value["LatestOperationState"].IsNull())
    {
        if (!value["LatestOperationState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.LatestOperationState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperationState = string(value["LatestOperationState"].GetString());
        m_latestOperationStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceType.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceState.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_latestOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperationState.c_str(), allocator).Move(), allocator);
    }

}


string SpaceInfo::GetSpaceId() const
{
    return m_spaceId;
}

void SpaceInfo::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool SpaceInfo::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string SpaceInfo::GetSpaceFamily() const
{
    return m_spaceFamily;
}

void SpaceInfo::SetSpaceFamily(const string& _spaceFamily)
{
    m_spaceFamily = _spaceFamily;
    m_spaceFamilyHasBeenSet = true;
}

bool SpaceInfo::SpaceFamilyHasBeenSet() const
{
    return m_spaceFamilyHasBeenSet;
}

string SpaceInfo::GetSpaceType() const
{
    return m_spaceType;
}

void SpaceInfo::SetSpaceType(const string& _spaceType)
{
    m_spaceType = _spaceType;
    m_spaceTypeHasBeenSet = true;
}

bool SpaceInfo::SpaceTypeHasBeenSet() const
{
    return m_spaceTypeHasBeenSet;
}

string SpaceInfo::GetSpaceName() const
{
    return m_spaceName;
}

void SpaceInfo::SetSpaceName(const string& _spaceName)
{
    m_spaceName = _spaceName;
    m_spaceNameHasBeenSet = true;
}

bool SpaceInfo::SpaceNameHasBeenSet() const
{
    return m_spaceNameHasBeenSet;
}

string SpaceInfo::GetSpaceState() const
{
    return m_spaceState;
}

void SpaceInfo::SetSpaceState(const string& _spaceState)
{
    m_spaceState = _spaceState;
    m_spaceStateHasBeenSet = true;
}

bool SpaceInfo::SpaceStateHasBeenSet() const
{
    return m_spaceStateHasBeenSet;
}

string SpaceInfo::GetSpaceChargeType() const
{
    return m_spaceChargeType;
}

void SpaceInfo::SetSpaceChargeType(const string& _spaceChargeType)
{
    m_spaceChargeType = _spaceChargeType;
    m_spaceChargeTypeHasBeenSet = true;
}

bool SpaceInfo::SpaceChargeTypeHasBeenSet() const
{
    return m_spaceChargeTypeHasBeenSet;
}

string SpaceInfo::GetResourceId() const
{
    return m_resourceId;
}

void SpaceInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool SpaceInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string SpaceInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void SpaceInfo::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool SpaceInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

vector<Tag> SpaceInfo::GetTags() const
{
    return m_tags;
}

void SpaceInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SpaceInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string SpaceInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void SpaceInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool SpaceInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string SpaceInfo::GetExpiredTime() const
{
    return m_expiredTime;
}

void SpaceInfo::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool SpaceInfo::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

Placement SpaceInfo::GetPlacement() const
{
    return m_placement;
}

void SpaceInfo::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool SpaceInfo::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string SpaceInfo::GetLatestOperation() const
{
    return m_latestOperation;
}

void SpaceInfo::SetLatestOperation(const string& _latestOperation)
{
    m_latestOperation = _latestOperation;
    m_latestOperationHasBeenSet = true;
}

bool SpaceInfo::LatestOperationHasBeenSet() const
{
    return m_latestOperationHasBeenSet;
}

string SpaceInfo::GetLatestOperationState() const
{
    return m_latestOperationState;
}

void SpaceInfo::SetLatestOperationState(const string& _latestOperationState)
{
    m_latestOperationState = _latestOperationState;
    m_latestOperationStateHasBeenSet = true;
}

bool SpaceInfo::LatestOperationStateHasBeenSet() const
{
    return m_latestOperationStateHasBeenSet;
}

