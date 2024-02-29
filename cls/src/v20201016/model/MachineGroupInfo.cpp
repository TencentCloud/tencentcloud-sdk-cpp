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

#include <tencentcloud/cls/v20201016/model/MachineGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

MachineGroupInfo::MachineGroupInfo() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_machineGroupTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoUpdateHasBeenSet(false),
    m_updateStartTimeHasBeenSet(false),
    m_updateEndTimeHasBeenSet(false),
    m_serviceLoggingHasBeenSet(false),
    m_delayCleanupTimeHasBeenSet(false),
    m_metaTagsHasBeenSet(false),
    m_oSTypeHasBeenSet(false)
{
}

CoreInternalOutcome MachineGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineGroupInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineGroupInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("MachineGroupType") && !value["MachineGroupType"].IsNull())
    {
        if (!value["MachineGroupType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MachineGroupInfo.MachineGroupType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineGroupType.Deserialize(value["MachineGroupType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineGroupInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MachineGroupInfo.Tags` is not array type"));

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

    if (value.HasMember("AutoUpdate") && !value["AutoUpdate"].IsNull())
    {
        if (!value["AutoUpdate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineGroupInfo.AutoUpdate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoUpdate = string(value["AutoUpdate"].GetString());
        m_autoUpdateHasBeenSet = true;
    }

    if (value.HasMember("UpdateStartTime") && !value["UpdateStartTime"].IsNull())
    {
        if (!value["UpdateStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineGroupInfo.UpdateStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateStartTime = string(value["UpdateStartTime"].GetString());
        m_updateStartTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateEndTime") && !value["UpdateEndTime"].IsNull())
    {
        if (!value["UpdateEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineGroupInfo.UpdateEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateEndTime = string(value["UpdateEndTime"].GetString());
        m_updateEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ServiceLogging") && !value["ServiceLogging"].IsNull())
    {
        if (!value["ServiceLogging"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MachineGroupInfo.ServiceLogging` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_serviceLogging = value["ServiceLogging"].GetBool();
        m_serviceLoggingHasBeenSet = true;
    }

    if (value.HasMember("DelayCleanupTime") && !value["DelayCleanupTime"].IsNull())
    {
        if (!value["DelayCleanupTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineGroupInfo.DelayCleanupTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delayCleanupTime = value["DelayCleanupTime"].GetInt64();
        m_delayCleanupTimeHasBeenSet = true;
    }

    if (value.HasMember("MetaTags") && !value["MetaTags"].IsNull())
    {
        if (!value["MetaTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MachineGroupInfo.MetaTags` is not array type"));

        const rapidjson::Value &tmpValue = value["MetaTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetaTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metaTags.push_back(item);
        }
        m_metaTagsHasBeenSet = true;
    }

    if (value.HasMember("OSType") && !value["OSType"].IsNull())
    {
        if (!value["OSType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineGroupInfo.OSType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_oSType = value["OSType"].GetUint64();
        m_oSTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MachineGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineGroupType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_autoUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoUpdate.c_str(), allocator).Move(), allocator);
    }

    if (m_updateStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceLoggingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceLogging";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceLogging, allocator);
    }

    if (m_delayCleanupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayCleanupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayCleanupTime, allocator);
    }

    if (m_metaTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metaTags.begin(); itr != m_metaTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_oSTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OSType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oSType, allocator);
    }

}


string MachineGroupInfo::GetGroupId() const
{
    return m_groupId;
}

void MachineGroupInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool MachineGroupInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string MachineGroupInfo::GetGroupName() const
{
    return m_groupName;
}

void MachineGroupInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool MachineGroupInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

MachineGroupTypeInfo MachineGroupInfo::GetMachineGroupType() const
{
    return m_machineGroupType;
}

void MachineGroupInfo::SetMachineGroupType(const MachineGroupTypeInfo& _machineGroupType)
{
    m_machineGroupType = _machineGroupType;
    m_machineGroupTypeHasBeenSet = true;
}

bool MachineGroupInfo::MachineGroupTypeHasBeenSet() const
{
    return m_machineGroupTypeHasBeenSet;
}

string MachineGroupInfo::GetCreateTime() const
{
    return m_createTime;
}

void MachineGroupInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MachineGroupInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<Tag> MachineGroupInfo::GetTags() const
{
    return m_tags;
}

void MachineGroupInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool MachineGroupInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string MachineGroupInfo::GetAutoUpdate() const
{
    return m_autoUpdate;
}

void MachineGroupInfo::SetAutoUpdate(const string& _autoUpdate)
{
    m_autoUpdate = _autoUpdate;
    m_autoUpdateHasBeenSet = true;
}

bool MachineGroupInfo::AutoUpdateHasBeenSet() const
{
    return m_autoUpdateHasBeenSet;
}

string MachineGroupInfo::GetUpdateStartTime() const
{
    return m_updateStartTime;
}

void MachineGroupInfo::SetUpdateStartTime(const string& _updateStartTime)
{
    m_updateStartTime = _updateStartTime;
    m_updateStartTimeHasBeenSet = true;
}

bool MachineGroupInfo::UpdateStartTimeHasBeenSet() const
{
    return m_updateStartTimeHasBeenSet;
}

string MachineGroupInfo::GetUpdateEndTime() const
{
    return m_updateEndTime;
}

void MachineGroupInfo::SetUpdateEndTime(const string& _updateEndTime)
{
    m_updateEndTime = _updateEndTime;
    m_updateEndTimeHasBeenSet = true;
}

bool MachineGroupInfo::UpdateEndTimeHasBeenSet() const
{
    return m_updateEndTimeHasBeenSet;
}

bool MachineGroupInfo::GetServiceLogging() const
{
    return m_serviceLogging;
}

void MachineGroupInfo::SetServiceLogging(const bool& _serviceLogging)
{
    m_serviceLogging = _serviceLogging;
    m_serviceLoggingHasBeenSet = true;
}

bool MachineGroupInfo::ServiceLoggingHasBeenSet() const
{
    return m_serviceLoggingHasBeenSet;
}

int64_t MachineGroupInfo::GetDelayCleanupTime() const
{
    return m_delayCleanupTime;
}

void MachineGroupInfo::SetDelayCleanupTime(const int64_t& _delayCleanupTime)
{
    m_delayCleanupTime = _delayCleanupTime;
    m_delayCleanupTimeHasBeenSet = true;
}

bool MachineGroupInfo::DelayCleanupTimeHasBeenSet() const
{
    return m_delayCleanupTimeHasBeenSet;
}

vector<MetaTagInfo> MachineGroupInfo::GetMetaTags() const
{
    return m_metaTags;
}

void MachineGroupInfo::SetMetaTags(const vector<MetaTagInfo>& _metaTags)
{
    m_metaTags = _metaTags;
    m_metaTagsHasBeenSet = true;
}

bool MachineGroupInfo::MetaTagsHasBeenSet() const
{
    return m_metaTagsHasBeenSet;
}

uint64_t MachineGroupInfo::GetOSType() const
{
    return m_oSType;
}

void MachineGroupInfo::SetOSType(const uint64_t& _oSType)
{
    m_oSType = _oSType;
    m_oSTypeHasBeenSet = true;
}

bool MachineGroupInfo::OSTypeHasBeenSet() const
{
    return m_oSTypeHasBeenSet;
}

