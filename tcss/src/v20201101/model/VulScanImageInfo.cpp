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

#include <tencentcloud/tcss/v20201101/model/VulScanImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VulScanImageInfo::VulScanImageInfo() :
    m_imageIDHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_scanDurationHasBeenSet(false),
    m_highLevelVulCountHasBeenSet(false),
    m_mediumLevelVulCountHasBeenSet(false),
    m_lowLevelVulCountHasBeenSet(false),
    m_criticalLevelVulCountHasBeenSet(false),
    m_taskIDHasBeenSet(false),
    m_scanStartTimeHasBeenSet(false),
    m_scanEndTimeHasBeenSet(false),
    m_errorStatusHasBeenSet(false)
{
}

CoreInternalOutcome VulScanImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageID") && !value["ImageID"].IsNull())
    {
        if (!value["ImageID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanImageInfo.ImageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageID = string(value["ImageID"].GetString());
        m_imageIDHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanImageInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanImageInfo.Size` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetDouble();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanImageInfo.ScanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = string(value["ScanStatus"].GetString());
        m_scanStatusHasBeenSet = true;
    }

    if (value.HasMember("ScanDuration") && !value["ScanDuration"].IsNull())
    {
        if (!value["ScanDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanImageInfo.ScanDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_scanDuration = value["ScanDuration"].GetDouble();
        m_scanDurationHasBeenSet = true;
    }

    if (value.HasMember("HighLevelVulCount") && !value["HighLevelVulCount"].IsNull())
    {
        if (!value["HighLevelVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanImageInfo.HighLevelVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_highLevelVulCount = value["HighLevelVulCount"].GetInt64();
        m_highLevelVulCountHasBeenSet = true;
    }

    if (value.HasMember("MediumLevelVulCount") && !value["MediumLevelVulCount"].IsNull())
    {
        if (!value["MediumLevelVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanImageInfo.MediumLevelVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mediumLevelVulCount = value["MediumLevelVulCount"].GetInt64();
        m_mediumLevelVulCountHasBeenSet = true;
    }

    if (value.HasMember("LowLevelVulCount") && !value["LowLevelVulCount"].IsNull())
    {
        if (!value["LowLevelVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanImageInfo.LowLevelVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lowLevelVulCount = value["LowLevelVulCount"].GetInt64();
        m_lowLevelVulCountHasBeenSet = true;
    }

    if (value.HasMember("CriticalLevelVulCount") && !value["CriticalLevelVulCount"].IsNull())
    {
        if (!value["CriticalLevelVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanImageInfo.CriticalLevelVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalLevelVulCount = value["CriticalLevelVulCount"].GetInt64();
        m_criticalLevelVulCountHasBeenSet = true;
    }

    if (value.HasMember("TaskID") && !value["TaskID"].IsNull())
    {
        if (!value["TaskID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanImageInfo.TaskID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskID = value["TaskID"].GetInt64();
        m_taskIDHasBeenSet = true;
    }

    if (value.HasMember("ScanStartTime") && !value["ScanStartTime"].IsNull())
    {
        if (!value["ScanStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanImageInfo.ScanStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanStartTime = string(value["ScanStartTime"].GetString());
        m_scanStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ScanEndTime") && !value["ScanEndTime"].IsNull())
    {
        if (!value["ScanEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanImageInfo.ScanEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanEndTime = string(value["ScanEndTime"].GetString());
        m_scanEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ErrorStatus") && !value["ErrorStatus"].IsNull())
    {
        if (!value["ErrorStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanImageInfo.ErrorStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorStatus = string(value["ErrorStatus"].GetString());
        m_errorStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulScanImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageID.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_scanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_scanDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanDuration, allocator);
    }

    if (m_highLevelVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLevelVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highLevelVulCount, allocator);
    }

    if (m_mediumLevelVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediumLevelVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediumLevelVulCount, allocator);
    }

    if (m_lowLevelVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLevelVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowLevelVulCount, allocator);
    }

    if (m_criticalLevelVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalLevelVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalLevelVulCount, allocator);
    }

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskID, allocator);
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

    if (m_errorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorStatus.c_str(), allocator).Move(), allocator);
    }

}


string VulScanImageInfo::GetImageID() const
{
    return m_imageID;
}

void VulScanImageInfo::SetImageID(const string& _imageID)
{
    m_imageID = _imageID;
    m_imageIDHasBeenSet = true;
}

bool VulScanImageInfo::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

string VulScanImageInfo::GetImageName() const
{
    return m_imageName;
}

void VulScanImageInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool VulScanImageInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

double VulScanImageInfo::GetSize() const
{
    return m_size;
}

void VulScanImageInfo::SetSize(const double& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool VulScanImageInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string VulScanImageInfo::GetScanStatus() const
{
    return m_scanStatus;
}

void VulScanImageInfo::SetScanStatus(const string& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool VulScanImageInfo::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

double VulScanImageInfo::GetScanDuration() const
{
    return m_scanDuration;
}

void VulScanImageInfo::SetScanDuration(const double& _scanDuration)
{
    m_scanDuration = _scanDuration;
    m_scanDurationHasBeenSet = true;
}

bool VulScanImageInfo::ScanDurationHasBeenSet() const
{
    return m_scanDurationHasBeenSet;
}

int64_t VulScanImageInfo::GetHighLevelVulCount() const
{
    return m_highLevelVulCount;
}

void VulScanImageInfo::SetHighLevelVulCount(const int64_t& _highLevelVulCount)
{
    m_highLevelVulCount = _highLevelVulCount;
    m_highLevelVulCountHasBeenSet = true;
}

bool VulScanImageInfo::HighLevelVulCountHasBeenSet() const
{
    return m_highLevelVulCountHasBeenSet;
}

int64_t VulScanImageInfo::GetMediumLevelVulCount() const
{
    return m_mediumLevelVulCount;
}

void VulScanImageInfo::SetMediumLevelVulCount(const int64_t& _mediumLevelVulCount)
{
    m_mediumLevelVulCount = _mediumLevelVulCount;
    m_mediumLevelVulCountHasBeenSet = true;
}

bool VulScanImageInfo::MediumLevelVulCountHasBeenSet() const
{
    return m_mediumLevelVulCountHasBeenSet;
}

int64_t VulScanImageInfo::GetLowLevelVulCount() const
{
    return m_lowLevelVulCount;
}

void VulScanImageInfo::SetLowLevelVulCount(const int64_t& _lowLevelVulCount)
{
    m_lowLevelVulCount = _lowLevelVulCount;
    m_lowLevelVulCountHasBeenSet = true;
}

bool VulScanImageInfo::LowLevelVulCountHasBeenSet() const
{
    return m_lowLevelVulCountHasBeenSet;
}

int64_t VulScanImageInfo::GetCriticalLevelVulCount() const
{
    return m_criticalLevelVulCount;
}

void VulScanImageInfo::SetCriticalLevelVulCount(const int64_t& _criticalLevelVulCount)
{
    m_criticalLevelVulCount = _criticalLevelVulCount;
    m_criticalLevelVulCountHasBeenSet = true;
}

bool VulScanImageInfo::CriticalLevelVulCountHasBeenSet() const
{
    return m_criticalLevelVulCountHasBeenSet;
}

int64_t VulScanImageInfo::GetTaskID() const
{
    return m_taskID;
}

void VulScanImageInfo::SetTaskID(const int64_t& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool VulScanImageInfo::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

string VulScanImageInfo::GetScanStartTime() const
{
    return m_scanStartTime;
}

void VulScanImageInfo::SetScanStartTime(const string& _scanStartTime)
{
    m_scanStartTime = _scanStartTime;
    m_scanStartTimeHasBeenSet = true;
}

bool VulScanImageInfo::ScanStartTimeHasBeenSet() const
{
    return m_scanStartTimeHasBeenSet;
}

string VulScanImageInfo::GetScanEndTime() const
{
    return m_scanEndTime;
}

void VulScanImageInfo::SetScanEndTime(const string& _scanEndTime)
{
    m_scanEndTime = _scanEndTime;
    m_scanEndTimeHasBeenSet = true;
}

bool VulScanImageInfo::ScanEndTimeHasBeenSet() const
{
    return m_scanEndTimeHasBeenSet;
}

string VulScanImageInfo::GetErrorStatus() const
{
    return m_errorStatus;
}

void VulScanImageInfo::SetErrorStatus(const string& _errorStatus)
{
    m_errorStatus = _errorStatus;
    m_errorStatusHasBeenSet = true;
}

bool VulScanImageInfo::ErrorStatusHasBeenSet() const
{
    return m_errorStatusHasBeenSet;
}

