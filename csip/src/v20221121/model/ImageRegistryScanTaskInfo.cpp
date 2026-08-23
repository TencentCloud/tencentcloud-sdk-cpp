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

#include <tencentcloud/csip/v20221121/model/ImageRegistryScanTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageRegistryScanTaskInfo::ImageRegistryScanTaskInfo() :
    m_idHasBeenSet(false),
    m_timedScanConfigIdHasBeenSet(false),
    m_autoMatchModeHasBeenSet(false),
    m_scopeModeHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_scanTypeHasBeenSet(false),
    m_imageIdsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_scanImageCountHasBeenSet(false),
    m_successImageCountHasBeenSet(false),
    m_failureImageCountHasBeenSet(false),
    m_ignoredImageCountHasBeenSet(false),
    m_cancelledImageCountHasBeenSet(false),
    m_scanStartTimeHasBeenSet(false),
    m_scanEndTimeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_cancelReasonHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

CoreInternalOutcome ImageRegistryScanTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TimedScanConfigId") && !value["TimedScanConfigId"].IsNull())
    {
        if (!value["TimedScanConfigId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.TimedScanConfigId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timedScanConfigId = value["TimedScanConfigId"].GetUint64();
        m_timedScanConfigIdHasBeenSet = true;
    }

    if (value.HasMember("AutoMatchMode") && !value["AutoMatchMode"].IsNull())
    {
        if (!value["AutoMatchMode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.AutoMatchMode` is not array type"));

        const rapidjson::Value &tmpValue = value["AutoMatchMode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_autoMatchMode.push_back((*itr).GetString());
        }
        m_autoMatchModeHasBeenSet = true;
    }

    if (value.HasMember("ScopeMode") && !value["ScopeMode"].IsNull())
    {
        if (!value["ScopeMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.ScopeMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scopeMode = string(value["ScopeMode"].GetString());
        m_scopeModeHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.TriggerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = string(value["TriggerType"].GetString());
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("ScanType") && !value["ScanType"].IsNull())
    {
        if (!value["ScanType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.ScanType` is not array type"));

        const rapidjson::Value &tmpValue = value["ScanType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scanType.push_back((*itr).GetString());
        }
        m_scanTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageIds") && !value["ImageIds"].IsNull())
    {
        if (!value["ImageIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.ImageIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageIds.push_back((*itr).GetUint64());
        }
        m_imageIdsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("ScanImageCount") && !value["ScanImageCount"].IsNull())
    {
        if (!value["ScanImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.ScanImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanImageCount = value["ScanImageCount"].GetUint64();
        m_scanImageCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessImageCount") && !value["SuccessImageCount"].IsNull())
    {
        if (!value["SuccessImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.SuccessImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successImageCount = value["SuccessImageCount"].GetUint64();
        m_successImageCountHasBeenSet = true;
    }

    if (value.HasMember("FailureImageCount") && !value["FailureImageCount"].IsNull())
    {
        if (!value["FailureImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.FailureImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failureImageCount = value["FailureImageCount"].GetUint64();
        m_failureImageCountHasBeenSet = true;
    }

    if (value.HasMember("IgnoredImageCount") && !value["IgnoredImageCount"].IsNull())
    {
        if (!value["IgnoredImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.IgnoredImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ignoredImageCount = value["IgnoredImageCount"].GetUint64();
        m_ignoredImageCountHasBeenSet = true;
    }

    if (value.HasMember("CancelledImageCount") && !value["CancelledImageCount"].IsNull())
    {
        if (!value["CancelledImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.CancelledImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cancelledImageCount = value["CancelledImageCount"].GetUint64();
        m_cancelledImageCountHasBeenSet = true;
    }

    if (value.HasMember("ScanStartTime") && !value["ScanStartTime"].IsNull())
    {
        if (!value["ScanStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.ScanStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanStartTime = string(value["ScanStartTime"].GetString());
        m_scanStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ScanEndTime") && !value["ScanEndTime"].IsNull())
    {
        if (!value["ScanEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.ScanEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanEndTime = string(value["ScanEndTime"].GetString());
        m_scanEndTimeHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("CancelReason") && !value["CancelReason"].IsNull())
    {
        if (!value["CancelReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.CancelReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cancelReason = string(value["CancelReason"].GetString());
        m_cancelReasonHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Schedule") && !value["Schedule"].IsNull())
    {
        if (!value["Schedule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.Schedule` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.Target` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ImageRegistryScanTaskInfo.Filter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_filter.Deserialize(value["Filter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_filterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageRegistryScanTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_timedScanConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimedScanConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timedScanConfigId, allocator);
    }

    if (m_autoMatchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoMatchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_autoMatchMode.begin(); itr != m_autoMatchMode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scopeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scopeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
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

    if (m_imageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIds.begin(); itr != m_imageIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_scanImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanImageCount, allocator);
    }

    if (m_successImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successImageCount, allocator);
    }

    if (m_failureImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failureImageCount, allocator);
    }

    if (m_ignoredImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoredImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoredImageCount, allocator);
    }

    if (m_cancelledImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelledImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cancelledImageCount, allocator);
    }

    if (m_scanStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scanEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_cancelReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cancelReason.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

}


uint64_t ImageRegistryScanTaskInfo::GetId() const
{
    return m_id;
}

void ImageRegistryScanTaskInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t ImageRegistryScanTaskInfo::GetTimedScanConfigId() const
{
    return m_timedScanConfigId;
}

void ImageRegistryScanTaskInfo::SetTimedScanConfigId(const uint64_t& _timedScanConfigId)
{
    m_timedScanConfigId = _timedScanConfigId;
    m_timedScanConfigIdHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::TimedScanConfigIdHasBeenSet() const
{
    return m_timedScanConfigIdHasBeenSet;
}

vector<string> ImageRegistryScanTaskInfo::GetAutoMatchMode() const
{
    return m_autoMatchMode;
}

void ImageRegistryScanTaskInfo::SetAutoMatchMode(const vector<string>& _autoMatchMode)
{
    m_autoMatchMode = _autoMatchMode;
    m_autoMatchModeHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::AutoMatchModeHasBeenSet() const
{
    return m_autoMatchModeHasBeenSet;
}

string ImageRegistryScanTaskInfo::GetScopeMode() const
{
    return m_scopeMode;
}

void ImageRegistryScanTaskInfo::SetScopeMode(const string& _scopeMode)
{
    m_scopeMode = _scopeMode;
    m_scopeModeHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::ScopeModeHasBeenSet() const
{
    return m_scopeModeHasBeenSet;
}

string ImageRegistryScanTaskInfo::GetTriggerType() const
{
    return m_triggerType;
}

void ImageRegistryScanTaskInfo::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

vector<string> ImageRegistryScanTaskInfo::GetScanType() const
{
    return m_scanType;
}

void ImageRegistryScanTaskInfo::SetScanType(const vector<string>& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

vector<uint64_t> ImageRegistryScanTaskInfo::GetImageIds() const
{
    return m_imageIds;
}

void ImageRegistryScanTaskInfo::SetImageIds(const vector<uint64_t>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

string ImageRegistryScanTaskInfo::GetStatus() const
{
    return m_status;
}

void ImageRegistryScanTaskInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ImageRegistryScanTaskInfo::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void ImageRegistryScanTaskInfo::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

uint64_t ImageRegistryScanTaskInfo::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void ImageRegistryScanTaskInfo::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

string ImageRegistryScanTaskInfo::GetOwnerUin() const
{
    return m_ownerUin;
}

void ImageRegistryScanTaskInfo::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

uint64_t ImageRegistryScanTaskInfo::GetScanImageCount() const
{
    return m_scanImageCount;
}

void ImageRegistryScanTaskInfo::SetScanImageCount(const uint64_t& _scanImageCount)
{
    m_scanImageCount = _scanImageCount;
    m_scanImageCountHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::ScanImageCountHasBeenSet() const
{
    return m_scanImageCountHasBeenSet;
}

uint64_t ImageRegistryScanTaskInfo::GetSuccessImageCount() const
{
    return m_successImageCount;
}

void ImageRegistryScanTaskInfo::SetSuccessImageCount(const uint64_t& _successImageCount)
{
    m_successImageCount = _successImageCount;
    m_successImageCountHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::SuccessImageCountHasBeenSet() const
{
    return m_successImageCountHasBeenSet;
}

uint64_t ImageRegistryScanTaskInfo::GetFailureImageCount() const
{
    return m_failureImageCount;
}

void ImageRegistryScanTaskInfo::SetFailureImageCount(const uint64_t& _failureImageCount)
{
    m_failureImageCount = _failureImageCount;
    m_failureImageCountHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::FailureImageCountHasBeenSet() const
{
    return m_failureImageCountHasBeenSet;
}

uint64_t ImageRegistryScanTaskInfo::GetIgnoredImageCount() const
{
    return m_ignoredImageCount;
}

void ImageRegistryScanTaskInfo::SetIgnoredImageCount(const uint64_t& _ignoredImageCount)
{
    m_ignoredImageCount = _ignoredImageCount;
    m_ignoredImageCountHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::IgnoredImageCountHasBeenSet() const
{
    return m_ignoredImageCountHasBeenSet;
}

uint64_t ImageRegistryScanTaskInfo::GetCancelledImageCount() const
{
    return m_cancelledImageCount;
}

void ImageRegistryScanTaskInfo::SetCancelledImageCount(const uint64_t& _cancelledImageCount)
{
    m_cancelledImageCount = _cancelledImageCount;
    m_cancelledImageCountHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::CancelledImageCountHasBeenSet() const
{
    return m_cancelledImageCountHasBeenSet;
}

string ImageRegistryScanTaskInfo::GetScanStartTime() const
{
    return m_scanStartTime;
}

void ImageRegistryScanTaskInfo::SetScanStartTime(const string& _scanStartTime)
{
    m_scanStartTime = _scanStartTime;
    m_scanStartTimeHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::ScanStartTimeHasBeenSet() const
{
    return m_scanStartTimeHasBeenSet;
}

string ImageRegistryScanTaskInfo::GetScanEndTime() const
{
    return m_scanEndTime;
}

void ImageRegistryScanTaskInfo::SetScanEndTime(const string& _scanEndTime)
{
    m_scanEndTime = _scanEndTime;
    m_scanEndTimeHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::ScanEndTimeHasBeenSet() const
{
    return m_scanEndTimeHasBeenSet;
}

uint64_t ImageRegistryScanTaskInfo::GetTimeout() const
{
    return m_timeout;
}

void ImageRegistryScanTaskInfo::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string ImageRegistryScanTaskInfo::GetCancelReason() const
{
    return m_cancelReason;
}

void ImageRegistryScanTaskInfo::SetCancelReason(const string& _cancelReason)
{
    m_cancelReason = _cancelReason;
    m_cancelReasonHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::CancelReasonHasBeenSet() const
{
    return m_cancelReasonHasBeenSet;
}

string ImageRegistryScanTaskInfo::GetName() const
{
    return m_name;
}

void ImageRegistryScanTaskInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

ImageScanScheduleConfig ImageRegistryScanTaskInfo::GetSchedule() const
{
    return m_schedule;
}

void ImageRegistryScanTaskInfo::SetSchedule(const ImageScanScheduleConfig& _schedule)
{
    m_schedule = _schedule;
    m_scheduleHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::ScheduleHasBeenSet() const
{
    return m_scheduleHasBeenSet;
}

ImageScanAssetTarget ImageRegistryScanTaskInfo::GetTarget() const
{
    return m_target;
}

void ImageRegistryScanTaskInfo::SetTarget(const ImageScanAssetTarget& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

ImageScanRegistryFilter ImageRegistryScanTaskInfo::GetFilter() const
{
    return m_filter;
}

void ImageRegistryScanTaskInfo::SetFilter(const ImageScanRegistryFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool ImageRegistryScanTaskInfo::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

