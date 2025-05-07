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

#include <tencentcloud/cbs/v20170312/model/SnapshotGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

SnapshotGroup::SnapshotGroup() :
    m_snapshotGroupIdHasBeenSet(false),
    m_snapshotGroupTypeHasBeenSet(false),
    m_containRootSnapshotHasBeenSet(false),
    m_snapshotIdSetHasBeenSet(false),
    m_snapshotGroupStateHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_snapshotGroupNameHasBeenSet(false),
    m_imageCountHasBeenSet(false),
    m_isPermanentHasBeenSet(false),
    m_deadlineTimeHasBeenSet(false),
    m_autoSnapshotPolicyIdHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SnapshotGroupId") && !value["SnapshotGroupId"].IsNull())
    {
        if (!value["SnapshotGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotGroup.SnapshotGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotGroupId = string(value["SnapshotGroupId"].GetString());
        m_snapshotGroupIdHasBeenSet = true;
    }

    if (value.HasMember("SnapshotGroupType") && !value["SnapshotGroupType"].IsNull())
    {
        if (!value["SnapshotGroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotGroup.SnapshotGroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotGroupType = string(value["SnapshotGroupType"].GetString());
        m_snapshotGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("ContainRootSnapshot") && !value["ContainRootSnapshot"].IsNull())
    {
        if (!value["ContainRootSnapshot"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotGroup.ContainRootSnapshot` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_containRootSnapshot = value["ContainRootSnapshot"].GetBool();
        m_containRootSnapshotHasBeenSet = true;
    }

    if (value.HasMember("SnapshotIdSet") && !value["SnapshotIdSet"].IsNull())
    {
        if (!value["SnapshotIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SnapshotGroup.SnapshotIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SnapshotIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_snapshotIdSet.push_back((*itr).GetString());
        }
        m_snapshotIdSetHasBeenSet = true;
    }

    if (value.HasMember("SnapshotGroupState") && !value["SnapshotGroupState"].IsNull())
    {
        if (!value["SnapshotGroupState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotGroup.SnapshotGroupState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotGroupState = string(value["SnapshotGroupState"].GetString());
        m_snapshotGroupStateHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotGroup.Percent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetUint64();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotGroup.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Images") && !value["Images"].IsNull())
    {
        if (!value["Images"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SnapshotGroup.Images` is not array type"));

        const rapidjson::Value &tmpValue = value["Images"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Image item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_images.push_back(item);
        }
        m_imagesHasBeenSet = true;
    }

    if (value.HasMember("SnapshotGroupName") && !value["SnapshotGroupName"].IsNull())
    {
        if (!value["SnapshotGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotGroup.SnapshotGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotGroupName = string(value["SnapshotGroupName"].GetString());
        m_snapshotGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ImageCount") && !value["ImageCount"].IsNull())
    {
        if (!value["ImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotGroup.ImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageCount = value["ImageCount"].GetUint64();
        m_imageCountHasBeenSet = true;
    }

    if (value.HasMember("IsPermanent") && !value["IsPermanent"].IsNull())
    {
        if (!value["IsPermanent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotGroup.IsPermanent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPermanent = value["IsPermanent"].GetBool();
        m_isPermanentHasBeenSet = true;
    }

    if (value.HasMember("DeadlineTime") && !value["DeadlineTime"].IsNull())
    {
        if (!value["DeadlineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotGroup.DeadlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineTime = string(value["DeadlineTime"].GetString());
        m_deadlineTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoSnapshotPolicyId") && !value["AutoSnapshotPolicyId"].IsNull())
    {
        if (!value["AutoSnapshotPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotGroup.AutoSnapshotPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoSnapshotPolicyId = string(value["AutoSnapshotPolicyId"].GetString());
        m_autoSnapshotPolicyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snapshotGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotGroupType.c_str(), allocator).Move(), allocator);
    }

    if (m_containRootSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainRootSnapshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containRootSnapshot, allocator);
    }

    if (m_snapshotIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_snapshotIdSet.begin(); itr != m_snapshotIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_snapshotGroupStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotGroupState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotGroupState.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_imagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_snapshotGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageCount, allocator);
    }

    if (m_isPermanentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPermanent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPermanent, allocator);
    }

    if (m_deadlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoSnapshotPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSnapshotPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoSnapshotPolicyId.c_str(), allocator).Move(), allocator);
    }

}


string SnapshotGroup::GetSnapshotGroupId() const
{
    return m_snapshotGroupId;
}

void SnapshotGroup::SetSnapshotGroupId(const string& _snapshotGroupId)
{
    m_snapshotGroupId = _snapshotGroupId;
    m_snapshotGroupIdHasBeenSet = true;
}

bool SnapshotGroup::SnapshotGroupIdHasBeenSet() const
{
    return m_snapshotGroupIdHasBeenSet;
}

string SnapshotGroup::GetSnapshotGroupType() const
{
    return m_snapshotGroupType;
}

void SnapshotGroup::SetSnapshotGroupType(const string& _snapshotGroupType)
{
    m_snapshotGroupType = _snapshotGroupType;
    m_snapshotGroupTypeHasBeenSet = true;
}

bool SnapshotGroup::SnapshotGroupTypeHasBeenSet() const
{
    return m_snapshotGroupTypeHasBeenSet;
}

bool SnapshotGroup::GetContainRootSnapshot() const
{
    return m_containRootSnapshot;
}

void SnapshotGroup::SetContainRootSnapshot(const bool& _containRootSnapshot)
{
    m_containRootSnapshot = _containRootSnapshot;
    m_containRootSnapshotHasBeenSet = true;
}

bool SnapshotGroup::ContainRootSnapshotHasBeenSet() const
{
    return m_containRootSnapshotHasBeenSet;
}

vector<string> SnapshotGroup::GetSnapshotIdSet() const
{
    return m_snapshotIdSet;
}

void SnapshotGroup::SetSnapshotIdSet(const vector<string>& _snapshotIdSet)
{
    m_snapshotIdSet = _snapshotIdSet;
    m_snapshotIdSetHasBeenSet = true;
}

bool SnapshotGroup::SnapshotIdSetHasBeenSet() const
{
    return m_snapshotIdSetHasBeenSet;
}

string SnapshotGroup::GetSnapshotGroupState() const
{
    return m_snapshotGroupState;
}

void SnapshotGroup::SetSnapshotGroupState(const string& _snapshotGroupState)
{
    m_snapshotGroupState = _snapshotGroupState;
    m_snapshotGroupStateHasBeenSet = true;
}

bool SnapshotGroup::SnapshotGroupStateHasBeenSet() const
{
    return m_snapshotGroupStateHasBeenSet;
}

uint64_t SnapshotGroup::GetPercent() const
{
    return m_percent;
}

void SnapshotGroup::SetPercent(const uint64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool SnapshotGroup::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

string SnapshotGroup::GetCreateTime() const
{
    return m_createTime;
}

void SnapshotGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SnapshotGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SnapshotGroup::GetModifyTime() const
{
    return m_modifyTime;
}

void SnapshotGroup::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool SnapshotGroup::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

vector<Image> SnapshotGroup::GetImages() const
{
    return m_images;
}

void SnapshotGroup::SetImages(const vector<Image>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool SnapshotGroup::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

string SnapshotGroup::GetSnapshotGroupName() const
{
    return m_snapshotGroupName;
}

void SnapshotGroup::SetSnapshotGroupName(const string& _snapshotGroupName)
{
    m_snapshotGroupName = _snapshotGroupName;
    m_snapshotGroupNameHasBeenSet = true;
}

bool SnapshotGroup::SnapshotGroupNameHasBeenSet() const
{
    return m_snapshotGroupNameHasBeenSet;
}

uint64_t SnapshotGroup::GetImageCount() const
{
    return m_imageCount;
}

void SnapshotGroup::SetImageCount(const uint64_t& _imageCount)
{
    m_imageCount = _imageCount;
    m_imageCountHasBeenSet = true;
}

bool SnapshotGroup::ImageCountHasBeenSet() const
{
    return m_imageCountHasBeenSet;
}

bool SnapshotGroup::GetIsPermanent() const
{
    return m_isPermanent;
}

void SnapshotGroup::SetIsPermanent(const bool& _isPermanent)
{
    m_isPermanent = _isPermanent;
    m_isPermanentHasBeenSet = true;
}

bool SnapshotGroup::IsPermanentHasBeenSet() const
{
    return m_isPermanentHasBeenSet;
}

string SnapshotGroup::GetDeadlineTime() const
{
    return m_deadlineTime;
}

void SnapshotGroup::SetDeadlineTime(const string& _deadlineTime)
{
    m_deadlineTime = _deadlineTime;
    m_deadlineTimeHasBeenSet = true;
}

bool SnapshotGroup::DeadlineTimeHasBeenSet() const
{
    return m_deadlineTimeHasBeenSet;
}

string SnapshotGroup::GetAutoSnapshotPolicyId() const
{
    return m_autoSnapshotPolicyId;
}

void SnapshotGroup::SetAutoSnapshotPolicyId(const string& _autoSnapshotPolicyId)
{
    m_autoSnapshotPolicyId = _autoSnapshotPolicyId;
    m_autoSnapshotPolicyIdHasBeenSet = true;
}

bool SnapshotGroup::AutoSnapshotPolicyIdHasBeenSet() const
{
    return m_autoSnapshotPolicyIdHasBeenSet;
}

