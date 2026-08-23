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

#include <tencentcloud/csip/v20221121/model/ImageRegistryExportJobInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageRegistryExportJobInfo::ImageRegistryExportJobInfo() :
    m_jobIDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_exportTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_exportCreateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ImageRegistryExportJobInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobID") && !value["JobID"].IsNull())
    {
        if (!value["JobID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryExportJobInfo.JobID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobID = string(value["JobID"].GetString());
        m_jobIDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryExportJobInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryExportJobInfo.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("ExportType") && !value["ExportType"].IsNull())
    {
        if (!value["ExportType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryExportJobInfo.ExportType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exportType = string(value["ExportType"].GetString());
        m_exportTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryExportJobInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ExportCreateTime") && !value["ExportCreateTime"].IsNull())
    {
        if (!value["ExportCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryExportJobInfo.ExportCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exportCreateTime = string(value["ExportCreateTime"].GetString());
        m_exportCreateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageRegistryExportJobInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobID.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerAppId, allocator);
    }

    if (m_exportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exportType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_exportCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exportCreateTime.c_str(), allocator).Move(), allocator);
    }

}


string ImageRegistryExportJobInfo::GetJobID() const
{
    return m_jobID;
}

void ImageRegistryExportJobInfo::SetJobID(const string& _jobID)
{
    m_jobID = _jobID;
    m_jobIDHasBeenSet = true;
}

bool ImageRegistryExportJobInfo::JobIDHasBeenSet() const
{
    return m_jobIDHasBeenSet;
}

string ImageRegistryExportJobInfo::GetStatus() const
{
    return m_status;
}

void ImageRegistryExportJobInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ImageRegistryExportJobInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ImageRegistryExportJobInfo::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void ImageRegistryExportJobInfo::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool ImageRegistryExportJobInfo::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

string ImageRegistryExportJobInfo::GetExportType() const
{
    return m_exportType;
}

void ImageRegistryExportJobInfo::SetExportType(const string& _exportType)
{
    m_exportType = _exportType;
    m_exportTypeHasBeenSet = true;
}

bool ImageRegistryExportJobInfo::ExportTypeHasBeenSet() const
{
    return m_exportTypeHasBeenSet;
}

string ImageRegistryExportJobInfo::GetName() const
{
    return m_name;
}

void ImageRegistryExportJobInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImageRegistryExportJobInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ImageRegistryExportJobInfo::GetExportCreateTime() const
{
    return m_exportCreateTime;
}

void ImageRegistryExportJobInfo::SetExportCreateTime(const string& _exportCreateTime)
{
    m_exportCreateTime = _exportCreateTime;
    m_exportCreateTimeHasBeenSet = true;
}

bool ImageRegistryExportJobInfo::ExportCreateTimeHasBeenSet() const
{
    return m_exportCreateTimeHasBeenSet;
}

