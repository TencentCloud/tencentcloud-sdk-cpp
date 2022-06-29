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

#include <tencentcloud/tione/v20211111/model/DatasetGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DatasetGroup::DatasetGroup() :
    m_datasetIdHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_datasetVersionHasBeenSet(false),
    m_datasetTypeHasBeenSet(false),
    m_datasetTagsHasBeenSet(false),
    m_datasetAnnotationTaskNameHasBeenSet(false),
    m_datasetAnnotationTaskIdHasBeenSet(false),
    m_processHasBeenSet(false),
    m_datasetStatusHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_externalTaskTypeHasBeenSet(false),
    m_datasetSizeHasBeenSet(false),
    m_fileNumHasBeenSet(false),
    m_storageDataPathHasBeenSet(false),
    m_storageLabelPathHasBeenSet(false),
    m_datasetVersionsHasBeenSet(false),
    m_annotationStatusHasBeenSet(false),
    m_annotationTypeHasBeenSet(false),
    m_annotationFormatHasBeenSet(false),
    m_datasetScopeHasBeenSet(false)
{
}

CoreInternalOutcome DatasetGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatasetId") && !value["DatasetId"].IsNull())
    {
        if (!value["DatasetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.DatasetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetId = string(value["DatasetId"].GetString());
        m_datasetIdHasBeenSet = true;
    }

    if (value.HasMember("DatasetName") && !value["DatasetName"].IsNull())
    {
        if (!value["DatasetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.DatasetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetName = string(value["DatasetName"].GetString());
        m_datasetNameHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("DatasetVersion") && !value["DatasetVersion"].IsNull())
    {
        if (!value["DatasetVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.DatasetVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetVersion = string(value["DatasetVersion"].GetString());
        m_datasetVersionHasBeenSet = true;
    }

    if (value.HasMember("DatasetType") && !value["DatasetType"].IsNull())
    {
        if (!value["DatasetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.DatasetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetType = string(value["DatasetType"].GetString());
        m_datasetTypeHasBeenSet = true;
    }

    if (value.HasMember("DatasetTags") && !value["DatasetTags"].IsNull())
    {
        if (!value["DatasetTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.DatasetTags` is not array type"));

        const rapidjson::Value &tmpValue = value["DatasetTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_datasetTags.push_back(item);
        }
        m_datasetTagsHasBeenSet = true;
    }

    if (value.HasMember("DatasetAnnotationTaskName") && !value["DatasetAnnotationTaskName"].IsNull())
    {
        if (!value["DatasetAnnotationTaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.DatasetAnnotationTaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetAnnotationTaskName = string(value["DatasetAnnotationTaskName"].GetString());
        m_datasetAnnotationTaskNameHasBeenSet = true;
    }

    if (value.HasMember("DatasetAnnotationTaskId") && !value["DatasetAnnotationTaskId"].IsNull())
    {
        if (!value["DatasetAnnotationTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.DatasetAnnotationTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetAnnotationTaskId = string(value["DatasetAnnotationTaskId"].GetString());
        m_datasetAnnotationTaskIdHasBeenSet = true;
    }

    if (value.HasMember("Process") && !value["Process"].IsNull())
    {
        if (!value["Process"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.Process` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_process = value["Process"].GetUint64();
        m_processHasBeenSet = true;
    }

    if (value.HasMember("DatasetStatus") && !value["DatasetStatus"].IsNull())
    {
        if (!value["DatasetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.DatasetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetStatus = string(value["DatasetStatus"].GetString());
        m_datasetStatusHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExternalTaskType") && !value["ExternalTaskType"].IsNull())
    {
        if (!value["ExternalTaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.ExternalTaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalTaskType = string(value["ExternalTaskType"].GetString());
        m_externalTaskTypeHasBeenSet = true;
    }

    if (value.HasMember("DatasetSize") && !value["DatasetSize"].IsNull())
    {
        if (!value["DatasetSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.DatasetSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetSize = string(value["DatasetSize"].GetString());
        m_datasetSizeHasBeenSet = true;
    }

    if (value.HasMember("FileNum") && !value["FileNum"].IsNull())
    {
        if (!value["FileNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.FileNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileNum = value["FileNum"].GetUint64();
        m_fileNumHasBeenSet = true;
    }

    if (value.HasMember("StorageDataPath") && !value["StorageDataPath"].IsNull())
    {
        if (!value["StorageDataPath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.StorageDataPath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storageDataPath.Deserialize(value["StorageDataPath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageDataPathHasBeenSet = true;
    }

    if (value.HasMember("StorageLabelPath") && !value["StorageLabelPath"].IsNull())
    {
        if (!value["StorageLabelPath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.StorageLabelPath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storageLabelPath.Deserialize(value["StorageLabelPath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageLabelPathHasBeenSet = true;
    }

    if (value.HasMember("DatasetVersions") && !value["DatasetVersions"].IsNull())
    {
        if (!value["DatasetVersions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.DatasetVersions` is not array type"));

        const rapidjson::Value &tmpValue = value["DatasetVersions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatasetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_datasetVersions.push_back(item);
        }
        m_datasetVersionsHasBeenSet = true;
    }

    if (value.HasMember("AnnotationStatus") && !value["AnnotationStatus"].IsNull())
    {
        if (!value["AnnotationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.AnnotationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_annotationStatus = string(value["AnnotationStatus"].GetString());
        m_annotationStatusHasBeenSet = true;
    }

    if (value.HasMember("AnnotationType") && !value["AnnotationType"].IsNull())
    {
        if (!value["AnnotationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.AnnotationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_annotationType = string(value["AnnotationType"].GetString());
        m_annotationTypeHasBeenSet = true;
    }

    if (value.HasMember("AnnotationFormat") && !value["AnnotationFormat"].IsNull())
    {
        if (!value["AnnotationFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.AnnotationFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_annotationFormat = string(value["AnnotationFormat"].GetString());
        m_annotationFormatHasBeenSet = true;
    }

    if (value.HasMember("DatasetScope") && !value["DatasetScope"].IsNull())
    {
        if (!value["DatasetScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetGroup.DatasetScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetScope = string(value["DatasetScope"].GetString());
        m_datasetScopeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatasetGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_datasetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetName.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetType.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_datasetTags.begin(); itr != m_datasetTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_datasetAnnotationTaskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetAnnotationTaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetAnnotationTaskName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetAnnotationTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetAnnotationTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetAnnotationTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_processHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Process";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_process, allocator);
    }

    if (m_datasetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
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

    if (m_externalTaskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalTaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalTaskType.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetSize.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileNum, allocator);
    }

    if (m_storageDataPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageDataPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storageDataPath.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_storageLabelPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLabelPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storageLabelPath.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_datasetVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_datasetVersions.begin(); itr != m_datasetVersions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_annotationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_annotationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_annotationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_annotationType.c_str(), allocator).Move(), allocator);
    }

    if (m_annotationFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_annotationFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetScope.c_str(), allocator).Move(), allocator);
    }

}


string DatasetGroup::GetDatasetId() const
{
    return m_datasetId;
}

void DatasetGroup::SetDatasetId(const string& _datasetId)
{
    m_datasetId = _datasetId;
    m_datasetIdHasBeenSet = true;
}

bool DatasetGroup::DatasetIdHasBeenSet() const
{
    return m_datasetIdHasBeenSet;
}

string DatasetGroup::GetDatasetName() const
{
    return m_datasetName;
}

void DatasetGroup::SetDatasetName(const string& _datasetName)
{
    m_datasetName = _datasetName;
    m_datasetNameHasBeenSet = true;
}

bool DatasetGroup::DatasetNameHasBeenSet() const
{
    return m_datasetNameHasBeenSet;
}

string DatasetGroup::GetCreator() const
{
    return m_creator;
}

void DatasetGroup::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool DatasetGroup::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string DatasetGroup::GetDatasetVersion() const
{
    return m_datasetVersion;
}

void DatasetGroup::SetDatasetVersion(const string& _datasetVersion)
{
    m_datasetVersion = _datasetVersion;
    m_datasetVersionHasBeenSet = true;
}

bool DatasetGroup::DatasetVersionHasBeenSet() const
{
    return m_datasetVersionHasBeenSet;
}

string DatasetGroup::GetDatasetType() const
{
    return m_datasetType;
}

void DatasetGroup::SetDatasetType(const string& _datasetType)
{
    m_datasetType = _datasetType;
    m_datasetTypeHasBeenSet = true;
}

bool DatasetGroup::DatasetTypeHasBeenSet() const
{
    return m_datasetTypeHasBeenSet;
}

vector<Tag> DatasetGroup::GetDatasetTags() const
{
    return m_datasetTags;
}

void DatasetGroup::SetDatasetTags(const vector<Tag>& _datasetTags)
{
    m_datasetTags = _datasetTags;
    m_datasetTagsHasBeenSet = true;
}

bool DatasetGroup::DatasetTagsHasBeenSet() const
{
    return m_datasetTagsHasBeenSet;
}

string DatasetGroup::GetDatasetAnnotationTaskName() const
{
    return m_datasetAnnotationTaskName;
}

void DatasetGroup::SetDatasetAnnotationTaskName(const string& _datasetAnnotationTaskName)
{
    m_datasetAnnotationTaskName = _datasetAnnotationTaskName;
    m_datasetAnnotationTaskNameHasBeenSet = true;
}

bool DatasetGroup::DatasetAnnotationTaskNameHasBeenSet() const
{
    return m_datasetAnnotationTaskNameHasBeenSet;
}

string DatasetGroup::GetDatasetAnnotationTaskId() const
{
    return m_datasetAnnotationTaskId;
}

void DatasetGroup::SetDatasetAnnotationTaskId(const string& _datasetAnnotationTaskId)
{
    m_datasetAnnotationTaskId = _datasetAnnotationTaskId;
    m_datasetAnnotationTaskIdHasBeenSet = true;
}

bool DatasetGroup::DatasetAnnotationTaskIdHasBeenSet() const
{
    return m_datasetAnnotationTaskIdHasBeenSet;
}

uint64_t DatasetGroup::GetProcess() const
{
    return m_process;
}

void DatasetGroup::SetProcess(const uint64_t& _process)
{
    m_process = _process;
    m_processHasBeenSet = true;
}

bool DatasetGroup::ProcessHasBeenSet() const
{
    return m_processHasBeenSet;
}

string DatasetGroup::GetDatasetStatus() const
{
    return m_datasetStatus;
}

void DatasetGroup::SetDatasetStatus(const string& _datasetStatus)
{
    m_datasetStatus = _datasetStatus;
    m_datasetStatusHasBeenSet = true;
}

bool DatasetGroup::DatasetStatusHasBeenSet() const
{
    return m_datasetStatusHasBeenSet;
}

string DatasetGroup::GetErrorMsg() const
{
    return m_errorMsg;
}

void DatasetGroup::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool DatasetGroup::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

string DatasetGroup::GetCreateTime() const
{
    return m_createTime;
}

void DatasetGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DatasetGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DatasetGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void DatasetGroup::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DatasetGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DatasetGroup::GetExternalTaskType() const
{
    return m_externalTaskType;
}

void DatasetGroup::SetExternalTaskType(const string& _externalTaskType)
{
    m_externalTaskType = _externalTaskType;
    m_externalTaskTypeHasBeenSet = true;
}

bool DatasetGroup::ExternalTaskTypeHasBeenSet() const
{
    return m_externalTaskTypeHasBeenSet;
}

string DatasetGroup::GetDatasetSize() const
{
    return m_datasetSize;
}

void DatasetGroup::SetDatasetSize(const string& _datasetSize)
{
    m_datasetSize = _datasetSize;
    m_datasetSizeHasBeenSet = true;
}

bool DatasetGroup::DatasetSizeHasBeenSet() const
{
    return m_datasetSizeHasBeenSet;
}

uint64_t DatasetGroup::GetFileNum() const
{
    return m_fileNum;
}

void DatasetGroup::SetFileNum(const uint64_t& _fileNum)
{
    m_fileNum = _fileNum;
    m_fileNumHasBeenSet = true;
}

bool DatasetGroup::FileNumHasBeenSet() const
{
    return m_fileNumHasBeenSet;
}

CosPathInfo DatasetGroup::GetStorageDataPath() const
{
    return m_storageDataPath;
}

void DatasetGroup::SetStorageDataPath(const CosPathInfo& _storageDataPath)
{
    m_storageDataPath = _storageDataPath;
    m_storageDataPathHasBeenSet = true;
}

bool DatasetGroup::StorageDataPathHasBeenSet() const
{
    return m_storageDataPathHasBeenSet;
}

CosPathInfo DatasetGroup::GetStorageLabelPath() const
{
    return m_storageLabelPath;
}

void DatasetGroup::SetStorageLabelPath(const CosPathInfo& _storageLabelPath)
{
    m_storageLabelPath = _storageLabelPath;
    m_storageLabelPathHasBeenSet = true;
}

bool DatasetGroup::StorageLabelPathHasBeenSet() const
{
    return m_storageLabelPathHasBeenSet;
}

vector<DatasetInfo> DatasetGroup::GetDatasetVersions() const
{
    return m_datasetVersions;
}

void DatasetGroup::SetDatasetVersions(const vector<DatasetInfo>& _datasetVersions)
{
    m_datasetVersions = _datasetVersions;
    m_datasetVersionsHasBeenSet = true;
}

bool DatasetGroup::DatasetVersionsHasBeenSet() const
{
    return m_datasetVersionsHasBeenSet;
}

string DatasetGroup::GetAnnotationStatus() const
{
    return m_annotationStatus;
}

void DatasetGroup::SetAnnotationStatus(const string& _annotationStatus)
{
    m_annotationStatus = _annotationStatus;
    m_annotationStatusHasBeenSet = true;
}

bool DatasetGroup::AnnotationStatusHasBeenSet() const
{
    return m_annotationStatusHasBeenSet;
}

string DatasetGroup::GetAnnotationType() const
{
    return m_annotationType;
}

void DatasetGroup::SetAnnotationType(const string& _annotationType)
{
    m_annotationType = _annotationType;
    m_annotationTypeHasBeenSet = true;
}

bool DatasetGroup::AnnotationTypeHasBeenSet() const
{
    return m_annotationTypeHasBeenSet;
}

string DatasetGroup::GetAnnotationFormat() const
{
    return m_annotationFormat;
}

void DatasetGroup::SetAnnotationFormat(const string& _annotationFormat)
{
    m_annotationFormat = _annotationFormat;
    m_annotationFormatHasBeenSet = true;
}

bool DatasetGroup::AnnotationFormatHasBeenSet() const
{
    return m_annotationFormatHasBeenSet;
}

string DatasetGroup::GetDatasetScope() const
{
    return m_datasetScope;
}

void DatasetGroup::SetDatasetScope(const string& _datasetScope)
{
    m_datasetScope = _datasetScope;
    m_datasetScopeHasBeenSet = true;
}

bool DatasetGroup::DatasetScopeHasBeenSet() const
{
    return m_datasetScopeHasBeenSet;
}

