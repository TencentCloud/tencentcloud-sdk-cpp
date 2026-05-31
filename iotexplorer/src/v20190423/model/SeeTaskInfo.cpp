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

#include <tencentcloud/iotexplorer/v20190423/model/SeeTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeTaskInfo::SeeTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_serviceCategoryHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_serviceTierHasBeenSet(false),
    m_comprehensionResultHasBeenSet(false),
    m_compHighlightResultHasBeenSet(false),
    m_detectContinuousResultHasBeenSet(false),
    m_costBasicHasBeenSet(false),
    m_costAdvancedHasBeenSet(false),
    m_filesHasBeenSet(false),
    m_filesInfoHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome SeeTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskInfo.Metadata` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metadata.Deserialize(value["Metadata"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("ServiceCategory") && !value["ServiceCategory"].IsNull())
    {
        if (!value["ServiceCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskInfo.ServiceCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCategory = string(value["ServiceCategory"].GetString());
        m_serviceCategoryHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskInfo.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ServiceTier") && !value["ServiceTier"].IsNull())
    {
        if (!value["ServiceTier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskInfo.ServiceTier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTier = string(value["ServiceTier"].GetString());
        m_serviceTierHasBeenSet = true;
    }

    if (value.HasMember("ComprehensionResult") && !value["ComprehensionResult"].IsNull())
    {
        if (!value["ComprehensionResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskInfo.ComprehensionResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_comprehensionResult.Deserialize(value["ComprehensionResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_comprehensionResultHasBeenSet = true;
    }

    if (value.HasMember("CompHighlightResult") && !value["CompHighlightResult"].IsNull())
    {
        if (!value["CompHighlightResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskInfo.CompHighlightResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compHighlightResult.Deserialize(value["CompHighlightResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compHighlightResultHasBeenSet = true;
    }

    if (value.HasMember("DetectContinuousResult") && !value["DetectContinuousResult"].IsNull())
    {
        if (!value["DetectContinuousResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskInfo.DetectContinuousResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_detectContinuousResult.Deserialize(value["DetectContinuousResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_detectContinuousResultHasBeenSet = true;
    }

    if (value.HasMember("CostBasic") && !value["CostBasic"].IsNull())
    {
        if (!value["CostBasic"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskInfo.CostBasic` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costBasic = value["CostBasic"].GetInt64();
        m_costBasicHasBeenSet = true;
    }

    if (value.HasMember("CostAdvanced") && !value["CostAdvanced"].IsNull())
    {
        if (!value["CostAdvanced"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskInfo.CostAdvanced` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costAdvanced = value["CostAdvanced"].GetInt64();
        m_costAdvancedHasBeenSet = true;
    }

    if (value.HasMember("Files") && !value["Files"].IsNull())
    {
        if (!value["Files"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeeTaskInfo.Files` is not array type"));

        const rapidjson::Value &tmpValue = value["Files"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_files.push_back((*itr).GetString());
        }
        m_filesHasBeenSet = true;
    }

    if (value.HasMember("FilesInfo") && !value["FilesInfo"].IsNull())
    {
        if (!value["FilesInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeeTaskInfo.FilesInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["FilesInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudStorageAIServiceTaskFileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filesInfo.push_back(item);
        }
        m_filesInfoHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metadata.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_serviceCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceTier.c_str(), allocator).Move(), allocator);
    }

    if (m_comprehensionResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComprehensionResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_comprehensionResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compHighlightResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompHighlightResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compHighlightResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_detectContinuousResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectContinuousResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_detectContinuousResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_costBasicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostBasic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costBasic, allocator);
    }

    if (m_costAdvancedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostAdvanced";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costAdvanced, allocator);
    }

    if (m_filesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Files";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_files.begin(); itr != m_files.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filesInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilesInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filesInfo.begin(); itr != m_filesInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string SeeTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void SeeTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool SeeTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t SeeTaskInfo::GetStatus() const
{
    return m_status;
}

void SeeTaskInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SeeTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

SeeTaskMetadata SeeTaskInfo::GetMetadata() const
{
    return m_metadata;
}

void SeeTaskInfo::SetMetadata(const SeeTaskMetadata& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool SeeTaskInfo::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

string SeeTaskInfo::GetServiceCategory() const
{
    return m_serviceCategory;
}

void SeeTaskInfo::SetServiceCategory(const string& _serviceCategory)
{
    m_serviceCategory = _serviceCategory;
    m_serviceCategoryHasBeenSet = true;
}

bool SeeTaskInfo::ServiceCategoryHasBeenSet() const
{
    return m_serviceCategoryHasBeenSet;
}

string SeeTaskInfo::GetServiceType() const
{
    return m_serviceType;
}

void SeeTaskInfo::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool SeeTaskInfo::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string SeeTaskInfo::GetServiceTier() const
{
    return m_serviceTier;
}

void SeeTaskInfo::SetServiceTier(const string& _serviceTier)
{
    m_serviceTier = _serviceTier;
    m_serviceTierHasBeenSet = true;
}

bool SeeTaskInfo::ServiceTierHasBeenSet() const
{
    return m_serviceTierHasBeenSet;
}

SeeComprehensionResult SeeTaskInfo::GetComprehensionResult() const
{
    return m_comprehensionResult;
}

void SeeTaskInfo::SetComprehensionResult(const SeeComprehensionResult& _comprehensionResult)
{
    m_comprehensionResult = _comprehensionResult;
    m_comprehensionResultHasBeenSet = true;
}

bool SeeTaskInfo::ComprehensionResultHasBeenSet() const
{
    return m_comprehensionResultHasBeenSet;
}

SeeCompHighlightResult SeeTaskInfo::GetCompHighlightResult() const
{
    return m_compHighlightResult;
}

void SeeTaskInfo::SetCompHighlightResult(const SeeCompHighlightResult& _compHighlightResult)
{
    m_compHighlightResult = _compHighlightResult;
    m_compHighlightResultHasBeenSet = true;
}

bool SeeTaskInfo::CompHighlightResultHasBeenSet() const
{
    return m_compHighlightResultHasBeenSet;
}

SeeDetectContinuousResult SeeTaskInfo::GetDetectContinuousResult() const
{
    return m_detectContinuousResult;
}

void SeeTaskInfo::SetDetectContinuousResult(const SeeDetectContinuousResult& _detectContinuousResult)
{
    m_detectContinuousResult = _detectContinuousResult;
    m_detectContinuousResultHasBeenSet = true;
}

bool SeeTaskInfo::DetectContinuousResultHasBeenSet() const
{
    return m_detectContinuousResultHasBeenSet;
}

int64_t SeeTaskInfo::GetCostBasic() const
{
    return m_costBasic;
}

void SeeTaskInfo::SetCostBasic(const int64_t& _costBasic)
{
    m_costBasic = _costBasic;
    m_costBasicHasBeenSet = true;
}

bool SeeTaskInfo::CostBasicHasBeenSet() const
{
    return m_costBasicHasBeenSet;
}

int64_t SeeTaskInfo::GetCostAdvanced() const
{
    return m_costAdvanced;
}

void SeeTaskInfo::SetCostAdvanced(const int64_t& _costAdvanced)
{
    m_costAdvanced = _costAdvanced;
    m_costAdvancedHasBeenSet = true;
}

bool SeeTaskInfo::CostAdvancedHasBeenSet() const
{
    return m_costAdvancedHasBeenSet;
}

vector<string> SeeTaskInfo::GetFiles() const
{
    return m_files;
}

void SeeTaskInfo::SetFiles(const vector<string>& _files)
{
    m_files = _files;
    m_filesHasBeenSet = true;
}

bool SeeTaskInfo::FilesHasBeenSet() const
{
    return m_filesHasBeenSet;
}

vector<CloudStorageAIServiceTaskFileInfo> SeeTaskInfo::GetFilesInfo() const
{
    return m_filesInfo;
}

void SeeTaskInfo::SetFilesInfo(const vector<CloudStorageAIServiceTaskFileInfo>& _filesInfo)
{
    m_filesInfo = _filesInfo;
    m_filesInfoHasBeenSet = true;
}

bool SeeTaskInfo::FilesInfoHasBeenSet() const
{
    return m_filesInfoHasBeenSet;
}

int64_t SeeTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void SeeTaskInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SeeTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t SeeTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void SeeTaskInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SeeTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

