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

#include <tencentcloud/csip/v20221121/model/DspmAssetDataScanDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmAssetDataScanDetail::DspmAssetDataScanDetail() :
    m_statusHasBeenSet(false),
    m_statusInfoHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_latestScanTimeHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_dbCountHasBeenSet(false),
    m_categoryIdsHasBeenSet(false),
    m_categoryNamesHasBeenSet(false),
    m_taskConfigHasBeenSet(false),
    m_categoryDetailsHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

CoreInternalOutcome DspmAssetDataScanDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetDataScanDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusInfo") && !value["StatusInfo"].IsNull())
    {
        if (!value["StatusInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetDataScanDetail.StatusInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusInfo = string(value["StatusInfo"].GetString());
        m_statusInfoHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetDataScanDetail.Progress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetDouble();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("LatestScanTime") && !value["LatestScanTime"].IsNull())
    {
        if (!value["LatestScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetDataScanDetail.LatestScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestScanTime = string(value["LatestScanTime"].GetString());
        m_latestScanTimeHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetDataScanDetail.ErrorInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorInfo = string(value["ErrorInfo"].GetString());
        m_errorInfoHasBeenSet = true;
    }

    if (value.HasMember("DbCount") && !value["DbCount"].IsNull())
    {
        if (!value["DbCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetDataScanDetail.DbCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dbCount = value["DbCount"].GetUint64();
        m_dbCountHasBeenSet = true;
    }

    if (value.HasMember("CategoryIds") && !value["CategoryIds"].IsNull())
    {
        if (!value["CategoryIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAssetDataScanDetail.CategoryIds` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryIds.push_back((*itr).GetUint64());
        }
        m_categoryIdsHasBeenSet = true;
    }

    if (value.HasMember("CategoryNames") && !value["CategoryNames"].IsNull())
    {
        if (!value["CategoryNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAssetDataScanDetail.CategoryNames` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryNames.push_back((*itr).GetString());
        }
        m_categoryNamesHasBeenSet = true;
    }

    if (value.HasMember("TaskConfig") && !value["TaskConfig"].IsNull())
    {
        if (!value["TaskConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetDataScanDetail.TaskConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskConfig.Deserialize(value["TaskConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskConfigHasBeenSet = true;
    }

    if (value.HasMember("CategoryDetails") && !value["CategoryDetails"].IsNull())
    {
        if (!value["CategoryDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAssetDataScanDetail.CategoryDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmIdentifyCategoryDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categoryDetails.push_back(item);
        }
        m_categoryDetailsHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetDataScanDetail.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmAssetDataScanDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_latestScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_dbCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbCount, allocator);
    }

    if (m_categoryIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryIds.begin(); itr != m_categoryIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_categoryNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryNames.begin(); itr != m_categoryNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_categoryDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryDetails.begin(); itr != m_categoryDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

}


uint64_t DspmAssetDataScanDetail::GetStatus() const
{
    return m_status;
}

void DspmAssetDataScanDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspmAssetDataScanDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DspmAssetDataScanDetail::GetStatusInfo() const
{
    return m_statusInfo;
}

void DspmAssetDataScanDetail::SetStatusInfo(const string& _statusInfo)
{
    m_statusInfo = _statusInfo;
    m_statusInfoHasBeenSet = true;
}

bool DspmAssetDataScanDetail::StatusInfoHasBeenSet() const
{
    return m_statusInfoHasBeenSet;
}

double DspmAssetDataScanDetail::GetProgress() const
{
    return m_progress;
}

void DspmAssetDataScanDetail::SetProgress(const double& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool DspmAssetDataScanDetail::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string DspmAssetDataScanDetail::GetLatestScanTime() const
{
    return m_latestScanTime;
}

void DspmAssetDataScanDetail::SetLatestScanTime(const string& _latestScanTime)
{
    m_latestScanTime = _latestScanTime;
    m_latestScanTimeHasBeenSet = true;
}

bool DspmAssetDataScanDetail::LatestScanTimeHasBeenSet() const
{
    return m_latestScanTimeHasBeenSet;
}

string DspmAssetDataScanDetail::GetErrorInfo() const
{
    return m_errorInfo;
}

void DspmAssetDataScanDetail::SetErrorInfo(const string& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool DspmAssetDataScanDetail::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

uint64_t DspmAssetDataScanDetail::GetDbCount() const
{
    return m_dbCount;
}

void DspmAssetDataScanDetail::SetDbCount(const uint64_t& _dbCount)
{
    m_dbCount = _dbCount;
    m_dbCountHasBeenSet = true;
}

bool DspmAssetDataScanDetail::DbCountHasBeenSet() const
{
    return m_dbCountHasBeenSet;
}

vector<uint64_t> DspmAssetDataScanDetail::GetCategoryIds() const
{
    return m_categoryIds;
}

void DspmAssetDataScanDetail::SetCategoryIds(const vector<uint64_t>& _categoryIds)
{
    m_categoryIds = _categoryIds;
    m_categoryIdsHasBeenSet = true;
}

bool DspmAssetDataScanDetail::CategoryIdsHasBeenSet() const
{
    return m_categoryIdsHasBeenSet;
}

vector<string> DspmAssetDataScanDetail::GetCategoryNames() const
{
    return m_categoryNames;
}

void DspmAssetDataScanDetail::SetCategoryNames(const vector<string>& _categoryNames)
{
    m_categoryNames = _categoryNames;
    m_categoryNamesHasBeenSet = true;
}

bool DspmAssetDataScanDetail::CategoryNamesHasBeenSet() const
{
    return m_categoryNamesHasBeenSet;
}

DspmSensitiveScanTaskConfig DspmAssetDataScanDetail::GetTaskConfig() const
{
    return m_taskConfig;
}

void DspmAssetDataScanDetail::SetTaskConfig(const DspmSensitiveScanTaskConfig& _taskConfig)
{
    m_taskConfig = _taskConfig;
    m_taskConfigHasBeenSet = true;
}

bool DspmAssetDataScanDetail::TaskConfigHasBeenSet() const
{
    return m_taskConfigHasBeenSet;
}

vector<DspmIdentifyCategoryDetail> DspmAssetDataScanDetail::GetCategoryDetails() const
{
    return m_categoryDetails;
}

void DspmAssetDataScanDetail::SetCategoryDetails(const vector<DspmIdentifyCategoryDetail>& _categoryDetails)
{
    m_categoryDetails = _categoryDetails;
    m_categoryDetailsHasBeenSet = true;
}

bool DspmAssetDataScanDetail::CategoryDetailsHasBeenSet() const
{
    return m_categoryDetailsHasBeenSet;
}

uint64_t DspmAssetDataScanDetail::GetTaskId() const
{
    return m_taskId;
}

void DspmAssetDataScanDetail::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DspmAssetDataScanDetail::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

