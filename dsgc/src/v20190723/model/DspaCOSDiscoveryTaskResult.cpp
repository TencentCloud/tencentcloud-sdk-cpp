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

#include <tencentcloud/dsgc/v20190723/model/DspaCOSDiscoveryTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaCOSDiscoveryTaskResult::DspaCOSDiscoveryTaskResult() :
    m_bucketResultIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_resultIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_totalFilesHasBeenSet(false),
    m_sensitiveDataNumsHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_overSizeHasBeenSet(false)
{
}

CoreInternalOutcome DspaCOSDiscoveryTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BucketResultId") && !value["BucketResultId"].IsNull())
    {
        if (!value["BucketResultId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskResult.BucketResultId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bucketResultId = value["BucketResultId"].GetInt64();
        m_bucketResultIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskResult.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskResult.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("ResultId") && !value["ResultId"].IsNull())
    {
        if (!value["ResultId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskResult.ResultId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultId = value["ResultId"].GetInt64();
        m_resultIdHasBeenSet = true;
    }

    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskResult.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskResult.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("TotalFiles") && !value["TotalFiles"].IsNull())
    {
        if (!value["TotalFiles"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskResult.TotalFiles` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalFiles = value["TotalFiles"].GetInt64();
        m_totalFilesHasBeenSet = true;
    }

    if (value.HasMember("SensitiveDataNums") && !value["SensitiveDataNums"].IsNull())
    {
        if (!value["SensitiveDataNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskResult.SensitiveDataNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveDataNums = value["SensitiveDataNums"].GetInt64();
        m_sensitiveDataNumsHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskResult.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("DataSourceName") && !value["DataSourceName"].IsNull())
    {
        if (!value["DataSourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskResult.DataSourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceName = string(value["DataSourceName"].GetString());
        m_dataSourceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskResult.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskResult.ErrorInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorInfo = string(value["ErrorInfo"].GetString());
        m_errorInfoHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskResult.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (value.HasMember("OverSize") && !value["OverSize"].IsNull())
    {
        if (!value["OverSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDiscoveryTaskResult.OverSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_overSize = string(value["OverSize"].GetString());
        m_overSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaCOSDiscoveryTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketResultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bucketResultId, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_resultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultId, allocator);
    }

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFiles, allocator);
    }

    if (m_sensitiveDataNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveDataNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveDataNums, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_overSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_overSize.c_str(), allocator).Move(), allocator);
    }

}


int64_t DspaCOSDiscoveryTaskResult::GetBucketResultId() const
{
    return m_bucketResultId;
}

void DspaCOSDiscoveryTaskResult::SetBucketResultId(const int64_t& _bucketResultId)
{
    m_bucketResultId = _bucketResultId;
    m_bucketResultIdHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskResult::BucketResultIdHasBeenSet() const
{
    return m_bucketResultIdHasBeenSet;
}

int64_t DspaCOSDiscoveryTaskResult::GetTaskId() const
{
    return m_taskId;
}

void DspaCOSDiscoveryTaskResult::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DspaCOSDiscoveryTaskResult::GetTaskName() const
{
    return m_taskName;
}

void DspaCOSDiscoveryTaskResult::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskResult::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

int64_t DspaCOSDiscoveryTaskResult::GetResultId() const
{
    return m_resultId;
}

void DspaCOSDiscoveryTaskResult::SetResultId(const int64_t& _resultId)
{
    m_resultId = _resultId;
    m_resultIdHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskResult::ResultIdHasBeenSet() const
{
    return m_resultIdHasBeenSet;
}

string DspaCOSDiscoveryTaskResult::GetDataSourceId() const
{
    return m_dataSourceId;
}

void DspaCOSDiscoveryTaskResult::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskResult::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string DspaCOSDiscoveryTaskResult::GetBucketName() const
{
    return m_bucketName;
}

void DspaCOSDiscoveryTaskResult::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskResult::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

int64_t DspaCOSDiscoveryTaskResult::GetTotalFiles() const
{
    return m_totalFiles;
}

void DspaCOSDiscoveryTaskResult::SetTotalFiles(const int64_t& _totalFiles)
{
    m_totalFiles = _totalFiles;
    m_totalFilesHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskResult::TotalFilesHasBeenSet() const
{
    return m_totalFilesHasBeenSet;
}

int64_t DspaCOSDiscoveryTaskResult::GetSensitiveDataNums() const
{
    return m_sensitiveDataNums;
}

void DspaCOSDiscoveryTaskResult::SetSensitiveDataNums(const int64_t& _sensitiveDataNums)
{
    m_sensitiveDataNums = _sensitiveDataNums;
    m_sensitiveDataNumsHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskResult::SensitiveDataNumsHasBeenSet() const
{
    return m_sensitiveDataNumsHasBeenSet;
}

string DspaCOSDiscoveryTaskResult::GetEndTime() const
{
    return m_endTime;
}

void DspaCOSDiscoveryTaskResult::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskResult::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DspaCOSDiscoveryTaskResult::GetDataSourceName() const
{
    return m_dataSourceName;
}

void DspaCOSDiscoveryTaskResult::SetDataSourceName(const string& _dataSourceName)
{
    m_dataSourceName = _dataSourceName;
    m_dataSourceNameHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskResult::DataSourceNameHasBeenSet() const
{
    return m_dataSourceNameHasBeenSet;
}

int64_t DspaCOSDiscoveryTaskResult::GetStatus() const
{
    return m_status;
}

void DspaCOSDiscoveryTaskResult::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DspaCOSDiscoveryTaskResult::GetErrorInfo() const
{
    return m_errorInfo;
}

void DspaCOSDiscoveryTaskResult::SetErrorInfo(const string& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskResult::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

string DspaCOSDiscoveryTaskResult::GetResourceRegion() const
{
    return m_resourceRegion;
}

void DspaCOSDiscoveryTaskResult::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskResult::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string DspaCOSDiscoveryTaskResult::GetOverSize() const
{
    return m_overSize;
}

void DspaCOSDiscoveryTaskResult::SetOverSize(const string& _overSize)
{
    m_overSize = _overSize;
    m_overSizeHasBeenSet = true;
}

bool DspaCOSDiscoveryTaskResult::OverSizeHasBeenSet() const
{
    return m_overSizeHasBeenSet;
}

