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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_ANNOTATIONTASKINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_ANNOTATIONTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/LabelValue.h>
#include <tencentcloud/tione/v20211111/model/CamTag.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 描述标注任务详细信息
                */
                class AnnotationTaskInfo : public AbstractModel
                {
                public:
                    AnnotationTaskInfo();
                    ~AnnotationTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标注任务id</p>
                     * @return TaskId <p>标注任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>标注任务id</p>
                     * @param _taskId <p>标注任务id</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>标注任务名称</p>
                     * @return TaskName <p>标注任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>标注任务名称</p>
                     * @param _taskName <p>标注任务名称</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>数据集id</p>
                     * @return DatasetId <p>数据集id</p>
                     * 
                     */
                    std::string GetDatasetId() const;

                    /**
                     * 设置<p>数据集id</p>
                     * @param _datasetId <p>数据集id</p>
                     * 
                     */
                    void SetDatasetId(const std::string& _datasetId);

                    /**
                     * 判断参数 DatasetId 是否已赋值
                     * @return DatasetId 是否已赋值
                     * 
                     */
                    bool DatasetIdHasBeenSet() const;

                    /**
                     * 获取<p>数据集名称</p>
                     * @return DatasetName <p>数据集名称</p>
                     * 
                     */
                    std::string GetDatasetName() const;

                    /**
                     * 设置<p>数据集名称</p>
                     * @param _datasetName <p>数据集名称</p>
                     * 
                     */
                    void SetDatasetName(const std::string& _datasetName);

                    /**
                     * 判断参数 DatasetName 是否已赋值
                     * @return DatasetName 是否已赋值
                     * 
                     */
                    bool DatasetNameHasBeenSet() const;

                    /**
                     * 获取<p>标注场景名称</p>
                     * @return SceneName <p>标注场景名称</p>
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置<p>标注场景名称</p>
                     * @param _sceneName <p>标注场景名称</p>
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取<p>标注任务的label信息数组</p>
                     * @return LabelValueList <p>标注任务的label信息数组</p>
                     * 
                     */
                    std::vector<LabelValue> GetLabelValueList() const;

                    /**
                     * 设置<p>标注任务的label信息数组</p>
                     * @param _labelValueList <p>标注任务的label信息数组</p>
                     * 
                     */
                    void SetLabelValueList(const std::vector<LabelValue>& _labelValueList);

                    /**
                     * 判断参数 LabelValueList 是否已赋值
                     * @return LabelValueList 是否已赋值
                     * 
                     */
                    bool LabelValueListHasBeenSet() const;

                    /**
                     * 获取<p>tag详情数组</p>
                     * @return CamTagList <p>tag详情数组</p>
                     * 
                     */
                    std::vector<CamTag> GetCamTagList() const;

                    /**
                     * 设置<p>tag详情数组</p>
                     * @param _camTagList <p>tag详情数组</p>
                     * 
                     */
                    void SetCamTagList(const std::vector<CamTag>& _camTagList);

                    /**
                     * 判断参数 CamTagList 是否已赋值
                     * @return CamTagList 是否已赋值
                     * 
                     */
                    bool CamTagListHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p>
                     * @return Status <p>任务状态</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>任务状态</p>
                     * @param _status <p>任务状态</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>创建任务失败原因说明</p>
                     * @return AbnormalMsg <p>创建任务失败原因说明</p>
                     * 
                     */
                    std::string GetAbnormalMsg() const;

                    /**
                     * 设置<p>创建任务失败原因说明</p>
                     * @param _abnormalMsg <p>创建任务失败原因说明</p>
                     * 
                     */
                    void SetAbnormalMsg(const std::string& _abnormalMsg);

                    /**
                     * 判断参数 AbnormalMsg 是否已赋值
                     * @return AbnormalMsg 是否已赋值
                     * 
                     */
                    bool AbnormalMsgHasBeenSet() const;

                    /**
                     * 获取<p>标注任务是否正在提交</p>
                     * @return IsSubmitting <p>标注任务是否正在提交</p>
                     * 
                     */
                    bool GetIsSubmitting() const;

                    /**
                     * 设置<p>标注任务是否正在提交</p>
                     * @param _isSubmitting <p>标注任务是否正在提交</p>
                     * 
                     */
                    void SetIsSubmitting(const bool& _isSubmitting);

                    /**
                     * 判断参数 IsSubmitting 是否已赋值
                     * @return IsSubmitting 是否已赋值
                     * 
                     */
                    bool IsSubmittingHasBeenSet() const;

                    /**
                     * 获取<p>任务详情描述</p>
                     * @return TaskNote <p>任务详情描述</p>
                     * 
                     */
                    std::string GetTaskNote() const;

                    /**
                     * 设置<p>任务详情描述</p>
                     * @param _taskNote <p>任务详情描述</p>
                     * 
                     */
                    void SetTaskNote(const std::string& _taskNote);

                    /**
                     * 判断参数 TaskNote 是否已赋值
                     * @return TaskNote 是否已赋值
                     * 
                     */
                    bool TaskNoteHasBeenSet() const;

                    /**
                     * 获取<p>数据集版本</p>
                     * @return DataSetVersion <p>数据集版本</p>
                     * 
                     */
                    std::string GetDataSetVersion() const;

                    /**
                     * 设置<p>数据集版本</p>
                     * @param _dataSetVersion <p>数据集版本</p>
                     * 
                     */
                    void SetDataSetVersion(const std::string& _dataSetVersion);

                    /**
                     * 判断参数 DataSetVersion 是否已赋值
                     * @return DataSetVersion 是否已赋值
                     * 
                     */
                    bool DataSetVersionHasBeenSet() const;

                    /**
                     * 获取<p>已经标注的图片数量</p>
                     * @return NumAnnotated <p>已经标注的图片数量</p>
                     * 
                     */
                    uint64_t GetNumAnnotated() const;

                    /**
                     * 设置<p>已经标注的图片数量</p>
                     * @param _numAnnotated <p>已经标注的图片数量</p>
                     * 
                     */
                    void SetNumAnnotated(const uint64_t& _numAnnotated);

                    /**
                     * 判断参数 NumAnnotated 是否已赋值
                     * @return NumAnnotated 是否已赋值
                     * 
                     */
                    bool NumAnnotatedHasBeenSet() const;

                    /**
                     * 获取<p>标注的总图片数量</p>
                     * @return NumTotal <p>标注的总图片数量</p>
                     * 
                     */
                    uint64_t GetNumTotal() const;

                    /**
                     * 设置<p>标注的总图片数量</p>
                     * @param _numTotal <p>标注的总图片数量</p>
                     * 
                     */
                    void SetNumTotal(const uint64_t& _numTotal);

                    /**
                     * 判断参数 NumTotal 是否已赋值
                     * @return NumTotal 是否已赋值
                     * 
                     */
                    bool NumTotalHasBeenSet() const;

                    /**
                     * 获取<p>创建任务的时间戳</p>
                     * @return CreateTime <p>创建任务的时间戳</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建任务的时间戳</p>
                     * @param _createTime <p>创建任务的时间戳</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Ocr Tool Type</p>
                     * @return OcrToolType <p>Ocr Tool Type</p>
                     * 
                     */
                    uint64_t GetOcrToolType() const;

                    /**
                     * 设置<p>Ocr Tool Type</p>
                     * @param _ocrToolType <p>Ocr Tool Type</p>
                     * 
                     */
                    void SetOcrToolType(const uint64_t& _ocrToolType);

                    /**
                     * 判断参数 OcrToolType 是否已赋值
                     * @return OcrToolType 是否已赋值
                     * 
                     */
                    bool OcrToolTypeHasBeenSet() const;

                    /**
                     * 获取<p>Ocr Text Attribute Annotate Enable</p>
                     * @return OcrTextAttributeAnnotateEnable <p>Ocr Text Attribute Annotate Enable</p>
                     * 
                     */
                    bool GetOcrTextAttributeAnnotateEnable() const;

                    /**
                     * 设置<p>Ocr Text Attribute Annotate Enable</p>
                     * @param _ocrTextAttributeAnnotateEnable <p>Ocr Text Attribute Annotate Enable</p>
                     * 
                     */
                    void SetOcrTextAttributeAnnotateEnable(const bool& _ocrTextAttributeAnnotateEnable);

                    /**
                     * 判断参数 OcrTextAttributeAnnotateEnable 是否已赋值
                     * @return OcrTextAttributeAnnotateEnable 是否已赋值
                     * 
                     */
                    bool OcrTextAttributeAnnotateEnableHasBeenSet() const;

                    /**
                     * 获取<p>导出格式</p>
                     * @return ExportFormat <p>导出格式</p>
                     * 
                     */
                    std::string GetExportFormat() const;

                    /**
                     * 设置<p>导出格式</p>
                     * @param _exportFormat <p>导出格式</p>
                     * 
                     */
                    void SetExportFormat(const std::string& _exportFormat);

                    /**
                     * 判断参数 ExportFormat 是否已赋值
                     * @return ExportFormat 是否已赋值
                     * 
                     */
                    bool ExportFormatHasBeenSet() const;

                    /**
                     * 获取<p>提交错误说明</p>
                     * @return SubmittingErrorMsg <p>提交错误说明</p>
                     * 
                     */
                    std::string GetSubmittingErrorMsg() const;

                    /**
                     * 设置<p>提交错误说明</p>
                     * @param _submittingErrorMsg <p>提交错误说明</p>
                     * 
                     */
                    void SetSubmittingErrorMsg(const std::string& _submittingErrorMsg);

                    /**
                     * 判断参数 SubmittingErrorMsg 是否已赋值
                     * @return SubmittingErrorMsg 是否已赋值
                     * 
                     */
                    bool SubmittingErrorMsgHasBeenSet() const;

                    /**
                     * 获取<p>ocr任务类型：1-识别。2-智能结构化</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrAnnotationContentType <p>ocr任务类型：1-识别。2-智能结构化</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOcrAnnotationContentType() const;

                    /**
                     * 设置<p>ocr任务类型：1-识别。2-智能结构化</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ocrAnnotationContentType <p>ocr任务类型：1-识别。2-智能结构化</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOcrAnnotationContentType(const uint64_t& _ocrAnnotationContentType);

                    /**
                     * 判断参数 OcrAnnotationContentType 是否已赋值
                     * @return OcrAnnotationContentType 是否已赋值
                     * 
                     */
                    bool OcrAnnotationContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>OCR任务：是否启用辅助标注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableAuxiliaryAnnotation <p>OCR任务：是否启用辅助标注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableAuxiliaryAnnotation() const;

                    /**
                     * 设置<p>OCR任务：是否启用辅助标注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableAuxiliaryAnnotation <p>OCR任务：是否启用辅助标注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableAuxiliaryAnnotation(const bool& _enableAuxiliaryAnnotation);

                    /**
                     * 判断参数 EnableAuxiliaryAnnotation 是否已赋值
                     * @return EnableAuxiliaryAnnotation 是否已赋值
                     * 
                     */
                    bool EnableAuxiliaryAnnotationHasBeenSet() const;

                    /**
                     * 获取<p>数据集创建者UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasetCreator <p>数据集创建者UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasetCreator() const;

                    /**
                     * 设置<p>数据集创建者UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasetCreator <p>数据集创建者UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasetCreator(const std::string& _datasetCreator);

                    /**
                     * 判断参数 DatasetCreator 是否已赋值
                     * @return DatasetCreator 是否已赋值
                     * 
                     */
                    bool DatasetCreatorHasBeenSet() const;

                    /**
                     * 获取<p>任务创建者UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator <p>任务创建者UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>任务创建者UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator <p>任务创建者UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>数据集创建者名称</p>
                     * @return DatasetCreatorName <p>数据集创建者名称</p>
                     * 
                     */
                    std::string GetDatasetCreatorName() const;

                    /**
                     * 设置<p>数据集创建者名称</p>
                     * @param _datasetCreatorName <p>数据集创建者名称</p>
                     * 
                     */
                    void SetDatasetCreatorName(const std::string& _datasetCreatorName);

                    /**
                     * 判断参数 DatasetCreatorName 是否已赋值
                     * @return DatasetCreatorName 是否已赋值
                     * 
                     */
                    bool DatasetCreatorNameHasBeenSet() const;

                    /**
                     * 获取<p>任务创建者名称</p>
                     * @return CreatorName <p>任务创建者名称</p>
                     * 
                     */
                    std::string GetCreatorName() const;

                    /**
                     * 设置<p>任务创建者名称</p>
                     * @param _creatorName <p>任务创建者名称</p>
                     * 
                     */
                    void SetCreatorName(const std::string& _creatorName);

                    /**
                     * 判断参数 CreatorName 是否已赋值
                     * @return CreatorName 是否已赋值
                     * 
                     */
                    bool CreatorNameHasBeenSet() const;

                    /**
                     * 获取<p>标注任务状态枚举</p><p>枚举值：</p><ul><li>CREATING： 创建中</li><li>CREATE_SUCCESS： 创建成功，可标注</li><li>CREATE_FAILED： 创建失败</li><li>SUBMITTING： 提交中</li><li>SUBMIT_SUCCESS： 提交成功，需重启才可标注</li><li>SUBMIT_FAILED： 提交失败</li><li>ABNORMAL： 数据版本异常，需删除重建（大模型场景）</li></ul>
                     * @return TaskStatus <p>标注任务状态枚举</p><p>枚举值：</p><ul><li>CREATING： 创建中</li><li>CREATE_SUCCESS： 创建成功，可标注</li><li>CREATE_FAILED： 创建失败</li><li>SUBMITTING： 提交中</li><li>SUBMIT_SUCCESS： 提交成功，需重启才可标注</li><li>SUBMIT_FAILED： 提交失败</li><li>ABNORMAL： 数据版本异常，需删除重建（大模型场景）</li></ul>
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置<p>标注任务状态枚举</p><p>枚举值：</p><ul><li>CREATING： 创建中</li><li>CREATE_SUCCESS： 创建成功，可标注</li><li>CREATE_FAILED： 创建失败</li><li>SUBMITTING： 提交中</li><li>SUBMIT_SUCCESS： 提交成功，需重启才可标注</li><li>SUBMIT_FAILED： 提交失败</li><li>ABNORMAL： 数据版本异常，需删除重建（大模型场景）</li></ul>
                     * @param _taskStatus <p>标注任务状态枚举</p><p>枚举值：</p><ul><li>CREATING： 创建中</li><li>CREATE_SUCCESS： 创建成功，可标注</li><li>CREATE_FAILED： 创建失败</li><li>SUBMITTING： 提交中</li><li>SUBMIT_SUCCESS： 提交成功，需重启才可标注</li><li>SUBMIT_FAILED： 提交失败</li><li>ABNORMAL： 数据版本异常，需删除重建（大模型场景）</li></ul>
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * <p>标注任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>标注任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>数据集id</p>
                     */
                    std::string m_datasetId;
                    bool m_datasetIdHasBeenSet;

                    /**
                     * <p>数据集名称</p>
                     */
                    std::string m_datasetName;
                    bool m_datasetNameHasBeenSet;

                    /**
                     * <p>标注场景名称</p>
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * <p>标注任务的label信息数组</p>
                     */
                    std::vector<LabelValue> m_labelValueList;
                    bool m_labelValueListHasBeenSet;

                    /**
                     * <p>tag详情数组</p>
                     */
                    std::vector<CamTag> m_camTagList;
                    bool m_camTagListHasBeenSet;

                    /**
                     * <p>任务状态</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建任务失败原因说明</p>
                     */
                    std::string m_abnormalMsg;
                    bool m_abnormalMsgHasBeenSet;

                    /**
                     * <p>标注任务是否正在提交</p>
                     */
                    bool m_isSubmitting;
                    bool m_isSubmittingHasBeenSet;

                    /**
                     * <p>任务详情描述</p>
                     */
                    std::string m_taskNote;
                    bool m_taskNoteHasBeenSet;

                    /**
                     * <p>数据集版本</p>
                     */
                    std::string m_dataSetVersion;
                    bool m_dataSetVersionHasBeenSet;

                    /**
                     * <p>已经标注的图片数量</p>
                     */
                    uint64_t m_numAnnotated;
                    bool m_numAnnotatedHasBeenSet;

                    /**
                     * <p>标注的总图片数量</p>
                     */
                    uint64_t m_numTotal;
                    bool m_numTotalHasBeenSet;

                    /**
                     * <p>创建任务的时间戳</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Ocr Tool Type</p>
                     */
                    uint64_t m_ocrToolType;
                    bool m_ocrToolTypeHasBeenSet;

                    /**
                     * <p>Ocr Text Attribute Annotate Enable</p>
                     */
                    bool m_ocrTextAttributeAnnotateEnable;
                    bool m_ocrTextAttributeAnnotateEnableHasBeenSet;

                    /**
                     * <p>导出格式</p>
                     */
                    std::string m_exportFormat;
                    bool m_exportFormatHasBeenSet;

                    /**
                     * <p>提交错误说明</p>
                     */
                    std::string m_submittingErrorMsg;
                    bool m_submittingErrorMsgHasBeenSet;

                    /**
                     * <p>ocr任务类型：1-识别。2-智能结构化</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ocrAnnotationContentType;
                    bool m_ocrAnnotationContentTypeHasBeenSet;

                    /**
                     * <p>OCR任务：是否启用辅助标注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableAuxiliaryAnnotation;
                    bool m_enableAuxiliaryAnnotationHasBeenSet;

                    /**
                     * <p>数据集创建者UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasetCreator;
                    bool m_datasetCreatorHasBeenSet;

                    /**
                     * <p>任务创建者UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>数据集创建者名称</p>
                     */
                    std::string m_datasetCreatorName;
                    bool m_datasetCreatorNameHasBeenSet;

                    /**
                     * <p>任务创建者名称</p>
                     */
                    std::string m_creatorName;
                    bool m_creatorNameHasBeenSet;

                    /**
                     * <p>标注任务状态枚举</p><p>枚举值：</p><ul><li>CREATING： 创建中</li><li>CREATE_SUCCESS： 创建成功，可标注</li><li>CREATE_FAILED： 创建失败</li><li>SUBMITTING： 提交中</li><li>SUBMIT_SUCCESS： 提交成功，需重启才可标注</li><li>SUBMIT_FAILED： 提交失败</li><li>ABNORMAL： 数据版本异常，需删除重建（大模型场景）</li></ul>
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_ANNOTATIONTASKINFO_H_
