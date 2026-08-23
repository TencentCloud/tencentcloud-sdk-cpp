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

#include <tencentcloud/csip/v20221121/model/ImageRegistryTimedScanTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageRegistryTimedScanTaskInfo::ImageRegistryTimedScanTaskInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_scanTypeHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ImageRegistryTimedScanTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTimedScanTaskInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTimedScanTaskInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTimedScanTaskInfo.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("ScanType") && !value["ScanType"].IsNull())
    {
        if (!value["ScanType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTimedScanTaskInfo.ScanType` is not array type"));

        const rapidjson::Value &tmpValue = value["ScanType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scanType.push_back((*itr).GetString());
        }
        m_scanTypeHasBeenSet = true;
    }

    if (value.HasMember("Schedule") && !value["Schedule"].IsNull())
    {
        if (!value["Schedule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTimedScanTaskInfo.Schedule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_schedule.Deserialize(value["Schedule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scheduleHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTimedScanTaskInfo.Target` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_target.Deserialize(value["Target"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetHasBeenSet = true;
    }

    if (value.HasMember("Filter") && !value["Filter"].IsNull())
    {
        if (!value["Filter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTimedScanTaskInfo.Filter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_filter.Deserialize(value["Filter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_filterHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTimedScanTaskInfo.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTimedScanTaskInfo.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTimedScanTaskInfo.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTimedScanTaskInfo.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTimedScanTaskInfo.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTimedScanTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryTimedScanTaskInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageRegistryTimedScanTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanType.begin(); itr != m_scanType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schedule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_schedule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_target.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ImageRegistryTimedScanTaskInfo::GetId() const
{
    return m_id;
}

void ImageRegistryTimedScanTaskInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ImageRegistryTimedScanTaskInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ImageRegistryTimedScanTaskInfo::GetName() const
{
    return m_name;
}

void ImageRegistryTimedScanTaskInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImageRegistryTimedScanTaskInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool ImageRegistryTimedScanTaskInfo::GetEnable() const
{
    return m_enable;
}

void ImageRegistryTimedScanTaskInfo::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ImageRegistryTimedScanTaskInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

vector<string> ImageRegistryTimedScanTaskInfo::GetScanType() const
{
    return m_scanType;
}

void ImageRegistryTimedScanTaskInfo::SetScanType(const vector<string>& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool ImageRegistryTimedScanTaskInfo::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

ImageScanScheduleConfig ImageRegistryTimedScanTaskInfo::GetSchedule() const
{
    return m_schedule;
}

void ImageRegistryTimedScanTaskInfo::SetSchedule(const ImageScanScheduleConfig& _schedule)
{
    m_schedule = _schedule;
    m_scheduleHasBeenSet = true;
}

bool ImageRegistryTimedScanTaskInfo::ScheduleHasBeenSet() const
{
    return m_scheduleHasBeenSet;
}

ImageScanAssetTarget ImageRegistryTimedScanTaskInfo::GetTarget() const
{
    return m_target;
}

void ImageRegistryTimedScanTaskInfo::SetTarget(const ImageScanAssetTarget& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool ImageRegistryTimedScanTaskInfo::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

ImageScanRegistryFilter ImageRegistryTimedScanTaskInfo::GetFilter() const
{
    return m_filter;
}

void ImageRegistryTimedScanTaskInfo::SetFilter(const ImageScanRegistryFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool ImageRegistryTimedScanTaskInfo::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

uint64_t ImageRegistryTimedScanTaskInfo::GetTimeout() const
{
    return m_timeout;
}

void ImageRegistryTimedScanTaskInfo::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ImageRegistryTimedScanTaskInfo::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string ImageRegistryTimedScanTaskInfo::GetLastScanTime() const
{
    return m_lastScanTime;
}

void ImageRegistryTimedScanTaskInfo::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool ImageRegistryTimedScanTaskInfo::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

string ImageRegistryTimedScanTaskInfo::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void ImageRegistryTimedScanTaskInfo::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool ImageRegistryTimedScanTaskInfo::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

uint64_t ImageRegistryTimedScanTaskInfo::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void ImageRegistryTimedScanTaskInfo::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool ImageRegistryTimedScanTaskInfo::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

string ImageRegistryTimedScanTaskInfo::GetOwnerUin() const
{
    return m_ownerUin;
}

void ImageRegistryTimedScanTaskInfo::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ImageRegistryTimedScanTaskInfo::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ImageRegistryTimedScanTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void ImageRegistryTimedScanTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ImageRegistryTimedScanTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ImageRegistryTimedScanTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ImageRegistryTimedScanTaskInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ImageRegistryTimedScanTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

