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

#include <tencentcloud/tione/v20211111/model/AnnotationTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

AnnotationTaskInfo::AnnotationTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_datasetIdHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_sceneNameHasBeenSet(false),
    m_labelValueListHasBeenSet(false),
    m_camTagListHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_abnormalMsgHasBeenSet(false),
    m_isSubmittingHasBeenSet(false),
    m_taskNoteHasBeenSet(false),
    m_dataSetVersionHasBeenSet(false),
    m_numAnnotatedHasBeenSet(false),
    m_numTotalHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_ocrToolTypeHasBeenSet(false),
    m_ocrTextAttributeAnnotateEnableHasBeenSet(false),
    m_exportFormatHasBeenSet(false),
    m_submittingErrorMsgHasBeenSet(false),
    m_ocrAnnotationContentTypeHasBeenSet(false),
    m_enableAuxiliaryAnnotationHasBeenSet(false),
    m_datasetCreatorHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_datasetCreatorNameHasBeenSet(false),
    m_creatorNameHasBeenSet(false),
    m_taskStatusHasBeenSet(false)
{
}

CoreInternalOutcome AnnotationTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("DatasetId") && !value["DatasetId"].IsNull())
    {
        if (!value["DatasetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.DatasetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetId = string(value["DatasetId"].GetString());
        m_datasetIdHasBeenSet = true;
    }

    if (value.HasMember("DatasetName") && !value["DatasetName"].IsNull())
    {
        if (!value["DatasetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.DatasetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetName = string(value["DatasetName"].GetString());
        m_datasetNameHasBeenSet = true;
    }

    if (value.HasMember("SceneName") && !value["SceneName"].IsNull())
    {
        if (!value["SceneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.SceneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneName = string(value["SceneName"].GetString());
        m_sceneNameHasBeenSet = true;
    }

    if (value.HasMember("LabelValueList") && !value["LabelValueList"].IsNull())
    {
        if (!value["LabelValueList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.LabelValueList` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelValueList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelValueList.push_back(item);
        }
        m_labelValueListHasBeenSet = true;
    }

    if (value.HasMember("CamTagList") && !value["CamTagList"].IsNull())
    {
        if (!value["CamTagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.CamTagList` is not array type"));

        const rapidjson::Value &tmpValue = value["CamTagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CamTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_camTagList.push_back(item);
        }
        m_camTagListHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AbnormalMsg") && !value["AbnormalMsg"].IsNull())
    {
        if (!value["AbnormalMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.AbnormalMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalMsg = string(value["AbnormalMsg"].GetString());
        m_abnormalMsgHasBeenSet = true;
    }

    if (value.HasMember("IsSubmitting") && !value["IsSubmitting"].IsNull())
    {
        if (!value["IsSubmitting"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.IsSubmitting` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSubmitting = value["IsSubmitting"].GetBool();
        m_isSubmittingHasBeenSet = true;
    }

    if (value.HasMember("TaskNote") && !value["TaskNote"].IsNull())
    {
        if (!value["TaskNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.TaskNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskNote = string(value["TaskNote"].GetString());
        m_taskNoteHasBeenSet = true;
    }

    if (value.HasMember("DataSetVersion") && !value["DataSetVersion"].IsNull())
    {
        if (!value["DataSetVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.DataSetVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSetVersion = string(value["DataSetVersion"].GetString());
        m_dataSetVersionHasBeenSet = true;
    }

    if (value.HasMember("NumAnnotated") && !value["NumAnnotated"].IsNull())
    {
        if (!value["NumAnnotated"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.NumAnnotated` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_numAnnotated = value["NumAnnotated"].GetUint64();
        m_numAnnotatedHasBeenSet = true;
    }

    if (value.HasMember("NumTotal") && !value["NumTotal"].IsNull())
    {
        if (!value["NumTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.NumTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_numTotal = value["NumTotal"].GetUint64();
        m_numTotalHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("OcrToolType") && !value["OcrToolType"].IsNull())
    {
        if (!value["OcrToolType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.OcrToolType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ocrToolType = value["OcrToolType"].GetUint64();
        m_ocrToolTypeHasBeenSet = true;
    }

    if (value.HasMember("OcrTextAttributeAnnotateEnable") && !value["OcrTextAttributeAnnotateEnable"].IsNull())
    {
        if (!value["OcrTextAttributeAnnotateEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.OcrTextAttributeAnnotateEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ocrTextAttributeAnnotateEnable = value["OcrTextAttributeAnnotateEnable"].GetBool();
        m_ocrTextAttributeAnnotateEnableHasBeenSet = true;
    }

    if (value.HasMember("ExportFormat") && !value["ExportFormat"].IsNull())
    {
        if (!value["ExportFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.ExportFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exportFormat = string(value["ExportFormat"].GetString());
        m_exportFormatHasBeenSet = true;
    }

    if (value.HasMember("SubmittingErrorMsg") && !value["SubmittingErrorMsg"].IsNull())
    {
        if (!value["SubmittingErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.SubmittingErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submittingErrorMsg = string(value["SubmittingErrorMsg"].GetString());
        m_submittingErrorMsgHasBeenSet = true;
    }

    if (value.HasMember("OcrAnnotationContentType") && !value["OcrAnnotationContentType"].IsNull())
    {
        if (!value["OcrAnnotationContentType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.OcrAnnotationContentType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ocrAnnotationContentType = value["OcrAnnotationContentType"].GetUint64();
        m_ocrAnnotationContentTypeHasBeenSet = true;
    }

    if (value.HasMember("EnableAuxiliaryAnnotation") && !value["EnableAuxiliaryAnnotation"].IsNull())
    {
        if (!value["EnableAuxiliaryAnnotation"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.EnableAuxiliaryAnnotation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAuxiliaryAnnotation = value["EnableAuxiliaryAnnotation"].GetBool();
        m_enableAuxiliaryAnnotationHasBeenSet = true;
    }

    if (value.HasMember("DatasetCreator") && !value["DatasetCreator"].IsNull())
    {
        if (!value["DatasetCreator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.DatasetCreator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetCreator = string(value["DatasetCreator"].GetString());
        m_datasetCreatorHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("DatasetCreatorName") && !value["DatasetCreatorName"].IsNull())
    {
        if (!value["DatasetCreatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.DatasetCreatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetCreatorName = string(value["DatasetCreatorName"].GetString());
        m_datasetCreatorNameHasBeenSet = true;
    }

    if (value.HasMember("CreatorName") && !value["CreatorName"].IsNull())
    {
        if (!value["CreatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.CreatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorName = string(value["CreatorName"].GetString());
        m_creatorNameHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationTaskInfo.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnnotationTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

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

    if (m_sceneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelValueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValueList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelValueList.begin(); itr != m_labelValueList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_camTagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamTagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_camTagList.begin(); itr != m_camTagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_abnormalMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_abnormalMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_isSubmittingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSubmitting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSubmitting, allocator);
    }

    if (m_taskNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskNote.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSetVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSetVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSetVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_numAnnotatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumAnnotated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numAnnotated, allocator);
    }

    if (m_numTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numTotal, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_ocrToolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrToolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ocrToolType, allocator);
    }

    if (m_ocrTextAttributeAnnotateEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrTextAttributeAnnotateEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ocrTextAttributeAnnotateEnable, allocator);
    }

    if (m_exportFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exportFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_submittingErrorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmittingErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submittingErrorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrAnnotationContentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrAnnotationContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ocrAnnotationContentType, allocator);
    }

    if (m_enableAuxiliaryAnnotationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAuxiliaryAnnotation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAuxiliaryAnnotation, allocator);
    }

    if (m_datasetCreatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetCreator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetCreator.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetCreatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetCreatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetCreatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

}


string AnnotationTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void AnnotationTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AnnotationTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string AnnotationTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void AnnotationTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool AnnotationTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string AnnotationTaskInfo::GetDatasetId() const
{
    return m_datasetId;
}

void AnnotationTaskInfo::SetDatasetId(const string& _datasetId)
{
    m_datasetId = _datasetId;
    m_datasetIdHasBeenSet = true;
}

bool AnnotationTaskInfo::DatasetIdHasBeenSet() const
{
    return m_datasetIdHasBeenSet;
}

string AnnotationTaskInfo::GetDatasetName() const
{
    return m_datasetName;
}

void AnnotationTaskInfo::SetDatasetName(const string& _datasetName)
{
    m_datasetName = _datasetName;
    m_datasetNameHasBeenSet = true;
}

bool AnnotationTaskInfo::DatasetNameHasBeenSet() const
{
    return m_datasetNameHasBeenSet;
}

string AnnotationTaskInfo::GetSceneName() const
{
    return m_sceneName;
}

void AnnotationTaskInfo::SetSceneName(const string& _sceneName)
{
    m_sceneName = _sceneName;
    m_sceneNameHasBeenSet = true;
}

bool AnnotationTaskInfo::SceneNameHasBeenSet() const
{
    return m_sceneNameHasBeenSet;
}

vector<LabelValue> AnnotationTaskInfo::GetLabelValueList() const
{
    return m_labelValueList;
}

void AnnotationTaskInfo::SetLabelValueList(const vector<LabelValue>& _labelValueList)
{
    m_labelValueList = _labelValueList;
    m_labelValueListHasBeenSet = true;
}

bool AnnotationTaskInfo::LabelValueListHasBeenSet() const
{
    return m_labelValueListHasBeenSet;
}

vector<CamTag> AnnotationTaskInfo::GetCamTagList() const
{
    return m_camTagList;
}

void AnnotationTaskInfo::SetCamTagList(const vector<CamTag>& _camTagList)
{
    m_camTagList = _camTagList;
    m_camTagListHasBeenSet = true;
}

bool AnnotationTaskInfo::CamTagListHasBeenSet() const
{
    return m_camTagListHasBeenSet;
}

uint64_t AnnotationTaskInfo::GetStatus() const
{
    return m_status;
}

void AnnotationTaskInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AnnotationTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AnnotationTaskInfo::GetAbnormalMsg() const
{
    return m_abnormalMsg;
}

void AnnotationTaskInfo::SetAbnormalMsg(const string& _abnormalMsg)
{
    m_abnormalMsg = _abnormalMsg;
    m_abnormalMsgHasBeenSet = true;
}

bool AnnotationTaskInfo::AbnormalMsgHasBeenSet() const
{
    return m_abnormalMsgHasBeenSet;
}

bool AnnotationTaskInfo::GetIsSubmitting() const
{
    return m_isSubmitting;
}

void AnnotationTaskInfo::SetIsSubmitting(const bool& _isSubmitting)
{
    m_isSubmitting = _isSubmitting;
    m_isSubmittingHasBeenSet = true;
}

bool AnnotationTaskInfo::IsSubmittingHasBeenSet() const
{
    return m_isSubmittingHasBeenSet;
}

string AnnotationTaskInfo::GetTaskNote() const
{
    return m_taskNote;
}

void AnnotationTaskInfo::SetTaskNote(const string& _taskNote)
{
    m_taskNote = _taskNote;
    m_taskNoteHasBeenSet = true;
}

bool AnnotationTaskInfo::TaskNoteHasBeenSet() const
{
    return m_taskNoteHasBeenSet;
}

string AnnotationTaskInfo::GetDataSetVersion() const
{
    return m_dataSetVersion;
}

void AnnotationTaskInfo::SetDataSetVersion(const string& _dataSetVersion)
{
    m_dataSetVersion = _dataSetVersion;
    m_dataSetVersionHasBeenSet = true;
}

bool AnnotationTaskInfo::DataSetVersionHasBeenSet() const
{
    return m_dataSetVersionHasBeenSet;
}

uint64_t AnnotationTaskInfo::GetNumAnnotated() const
{
    return m_numAnnotated;
}

void AnnotationTaskInfo::SetNumAnnotated(const uint64_t& _numAnnotated)
{
    m_numAnnotated = _numAnnotated;
    m_numAnnotatedHasBeenSet = true;
}

bool AnnotationTaskInfo::NumAnnotatedHasBeenSet() const
{
    return m_numAnnotatedHasBeenSet;
}

uint64_t AnnotationTaskInfo::GetNumTotal() const
{
    return m_numTotal;
}

void AnnotationTaskInfo::SetNumTotal(const uint64_t& _numTotal)
{
    m_numTotal = _numTotal;
    m_numTotalHasBeenSet = true;
}

bool AnnotationTaskInfo::NumTotalHasBeenSet() const
{
    return m_numTotalHasBeenSet;
}

uint64_t AnnotationTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void AnnotationTaskInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AnnotationTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t AnnotationTaskInfo::GetOcrToolType() const
{
    return m_ocrToolType;
}

void AnnotationTaskInfo::SetOcrToolType(const uint64_t& _ocrToolType)
{
    m_ocrToolType = _ocrToolType;
    m_ocrToolTypeHasBeenSet = true;
}

bool AnnotationTaskInfo::OcrToolTypeHasBeenSet() const
{
    return m_ocrToolTypeHasBeenSet;
}

bool AnnotationTaskInfo::GetOcrTextAttributeAnnotateEnable() const
{
    return m_ocrTextAttributeAnnotateEnable;
}

void AnnotationTaskInfo::SetOcrTextAttributeAnnotateEnable(const bool& _ocrTextAttributeAnnotateEnable)
{
    m_ocrTextAttributeAnnotateEnable = _ocrTextAttributeAnnotateEnable;
    m_ocrTextAttributeAnnotateEnableHasBeenSet = true;
}

bool AnnotationTaskInfo::OcrTextAttributeAnnotateEnableHasBeenSet() const
{
    return m_ocrTextAttributeAnnotateEnableHasBeenSet;
}

string AnnotationTaskInfo::GetExportFormat() const
{
    return m_exportFormat;
}

void AnnotationTaskInfo::SetExportFormat(const string& _exportFormat)
{
    m_exportFormat = _exportFormat;
    m_exportFormatHasBeenSet = true;
}

bool AnnotationTaskInfo::ExportFormatHasBeenSet() const
{
    return m_exportFormatHasBeenSet;
}

string AnnotationTaskInfo::GetSubmittingErrorMsg() const
{
    return m_submittingErrorMsg;
}

void AnnotationTaskInfo::SetSubmittingErrorMsg(const string& _submittingErrorMsg)
{
    m_submittingErrorMsg = _submittingErrorMsg;
    m_submittingErrorMsgHasBeenSet = true;
}

bool AnnotationTaskInfo::SubmittingErrorMsgHasBeenSet() const
{
    return m_submittingErrorMsgHasBeenSet;
}

uint64_t AnnotationTaskInfo::GetOcrAnnotationContentType() const
{
    return m_ocrAnnotationContentType;
}

void AnnotationTaskInfo::SetOcrAnnotationContentType(const uint64_t& _ocrAnnotationContentType)
{
    m_ocrAnnotationContentType = _ocrAnnotationContentType;
    m_ocrAnnotationContentTypeHasBeenSet = true;
}

bool AnnotationTaskInfo::OcrAnnotationContentTypeHasBeenSet() const
{
    return m_ocrAnnotationContentTypeHasBeenSet;
}

bool AnnotationTaskInfo::GetEnableAuxiliaryAnnotation() const
{
    return m_enableAuxiliaryAnnotation;
}

void AnnotationTaskInfo::SetEnableAuxiliaryAnnotation(const bool& _enableAuxiliaryAnnotation)
{
    m_enableAuxiliaryAnnotation = _enableAuxiliaryAnnotation;
    m_enableAuxiliaryAnnotationHasBeenSet = true;
}

bool AnnotationTaskInfo::EnableAuxiliaryAnnotationHasBeenSet() const
{
    return m_enableAuxiliaryAnnotationHasBeenSet;
}

string AnnotationTaskInfo::GetDatasetCreator() const
{
    return m_datasetCreator;
}

void AnnotationTaskInfo::SetDatasetCreator(const string& _datasetCreator)
{
    m_datasetCreator = _datasetCreator;
    m_datasetCreatorHasBeenSet = true;
}

bool AnnotationTaskInfo::DatasetCreatorHasBeenSet() const
{
    return m_datasetCreatorHasBeenSet;
}

string AnnotationTaskInfo::GetCreator() const
{
    return m_creator;
}

void AnnotationTaskInfo::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool AnnotationTaskInfo::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string AnnotationTaskInfo::GetDatasetCreatorName() const
{
    return m_datasetCreatorName;
}

void AnnotationTaskInfo::SetDatasetCreatorName(const string& _datasetCreatorName)
{
    m_datasetCreatorName = _datasetCreatorName;
    m_datasetCreatorNameHasBeenSet = true;
}

bool AnnotationTaskInfo::DatasetCreatorNameHasBeenSet() const
{
    return m_datasetCreatorNameHasBeenSet;
}

string AnnotationTaskInfo::GetCreatorName() const
{
    return m_creatorName;
}

void AnnotationTaskInfo::SetCreatorName(const string& _creatorName)
{
    m_creatorName = _creatorName;
    m_creatorNameHasBeenSet = true;
}

bool AnnotationTaskInfo::CreatorNameHasBeenSet() const
{
    return m_creatorNameHasBeenSet;
}

string AnnotationTaskInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void AnnotationTaskInfo::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool AnnotationTaskInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

