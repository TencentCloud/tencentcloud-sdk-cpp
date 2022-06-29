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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DATASETGROUP_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DATASETGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/DatasetInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 数据集组
                */
                class DatasetGroup : public AbstractModel
                {
                public:
                    DatasetGroup();
                    ~DatasetGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasetId 数据集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatasetId() const;

                    /**
                     * 设置数据集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasetId 数据集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasetId(const std::string& _datasetId);

                    /**
                     * 判断参数 DatasetId 是否已赋值
                     * @return DatasetId 是否已赋值
                     */
                    bool DatasetIdHasBeenSet() const;

                    /**
                     * 获取数据集名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasetName 数据集名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatasetName() const;

                    /**
                     * 设置数据集名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasetName 数据集名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasetName(const std::string& _datasetName);

                    /**
                     * 判断参数 DatasetName 是否已赋值
                     * @return DatasetName 是否已赋值
                     */
                    bool DatasetNameHasBeenSet() const;

                    /**
                     * 获取创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Creator 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取数据集版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasetVersion 数据集版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatasetVersion() const;

                    /**
                     * 设置数据集版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasetVersion 数据集版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasetVersion(const std::string& _datasetVersion);

                    /**
                     * 判断参数 DatasetVersion 是否已赋值
                     * @return DatasetVersion 是否已赋值
                     */
                    bool DatasetVersionHasBeenSet() const;

                    /**
                     * 获取数据集类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasetType 数据集类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatasetType() const;

                    /**
                     * 设置数据集类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasetType 数据集类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasetType(const std::string& _datasetType);

                    /**
                     * 判断参数 DatasetType 是否已赋值
                     * @return DatasetType 是否已赋值
                     */
                    bool DatasetTypeHasBeenSet() const;

                    /**
                     * 获取数据集标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasetTags 数据集标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetDatasetTags() const;

                    /**
                     * 设置数据集标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasetTags 数据集标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasetTags(const std::vector<Tag>& _datasetTags);

                    /**
                     * 判断参数 DatasetTags 是否已赋值
                     * @return DatasetTags 是否已赋值
                     */
                    bool DatasetTagsHasBeenSet() const;

                    /**
                     * 获取数据集标注任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasetAnnotationTaskName 数据集标注任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatasetAnnotationTaskName() const;

                    /**
                     * 设置数据集标注任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasetAnnotationTaskName 数据集标注任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasetAnnotationTaskName(const std::string& _datasetAnnotationTaskName);

                    /**
                     * 判断参数 DatasetAnnotationTaskName 是否已赋值
                     * @return DatasetAnnotationTaskName 是否已赋值
                     */
                    bool DatasetAnnotationTaskNameHasBeenSet() const;

                    /**
                     * 获取数据集标注任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasetAnnotationTaskId 数据集标注任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatasetAnnotationTaskId() const;

                    /**
                     * 设置数据集标注任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasetAnnotationTaskId 数据集标注任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasetAnnotationTaskId(const std::string& _datasetAnnotationTaskId);

                    /**
                     * 判断参数 DatasetAnnotationTaskId 是否已赋值
                     * @return DatasetAnnotationTaskId 是否已赋值
                     */
                    bool DatasetAnnotationTaskIdHasBeenSet() const;

                    /**
                     * 获取处理进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Process 处理进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetProcess() const;

                    /**
                     * 设置处理进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Process 处理进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProcess(const uint64_t& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取数据集状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasetStatus 数据集状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatasetStatus() const;

                    /**
                     * 设置数据集状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasetStatus 数据集状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasetStatus(const std::string& _datasetStatus);

                    /**
                     * 判断参数 DatasetStatus 是否已赋值
                     * @return DatasetStatus 是否已赋值
                     */
                    bool DatasetStatusHasBeenSet() const;

                    /**
                     * 获取错误详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMsg 错误详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置错误详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrorMsg 错误详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取外部关联TASKType
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalTaskType 外部关联TASKType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExternalTaskType() const;

                    /**
                     * 设置外部关联TASKType
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExternalTaskType 外部关联TASKType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExternalTaskType(const std::string& _externalTaskType);

                    /**
                     * 判断参数 ExternalTaskType 是否已赋值
                     * @return ExternalTaskType 是否已赋值
                     */
                    bool ExternalTaskTypeHasBeenSet() const;

                    /**
                     * 获取数据集大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasetSize 数据集大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatasetSize() const;

                    /**
                     * 设置数据集大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasetSize 数据集大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasetSize(const std::string& _datasetSize);

                    /**
                     * 判断参数 DatasetSize 是否已赋值
                     * @return DatasetSize 是否已赋值
                     */
                    bool DatasetSizeHasBeenSet() const;

                    /**
                     * 获取数据集数据量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileNum 数据集数据量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetFileNum() const;

                    /**
                     * 设置数据集数据量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FileNum 数据集数据量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFileNum(const uint64_t& _fileNum);

                    /**
                     * 判断参数 FileNum 是否已赋值
                     * @return FileNum 是否已赋值
                     */
                    bool FileNumHasBeenSet() const;

                    /**
                     * 获取数据集源COS路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageDataPath 数据集源COS路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo GetStorageDataPath() const;

                    /**
                     * 设置数据集源COS路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StorageDataPath 数据集源COS路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStorageDataPath(const CosPathInfo& _storageDataPath);

                    /**
                     * 判断参数 StorageDataPath 是否已赋值
                     * @return StorageDataPath 是否已赋值
                     */
                    bool StorageDataPathHasBeenSet() const;

                    /**
                     * 获取数据集标签存储路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageLabelPath 数据集标签存储路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo GetStorageLabelPath() const;

                    /**
                     * 设置数据集标签存储路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StorageLabelPath 数据集标签存储路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStorageLabelPath(const CosPathInfo& _storageLabelPath);

                    /**
                     * 判断参数 StorageLabelPath 是否已赋值
                     * @return StorageLabelPath 是否已赋值
                     */
                    bool StorageLabelPathHasBeenSet() const;

                    /**
                     * 获取数据集版本聚合详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasetVersions 数据集版本聚合详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DatasetInfo> GetDatasetVersions() const;

                    /**
                     * 设置数据集版本聚合详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasetVersions 数据集版本聚合详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasetVersions(const std::vector<DatasetInfo>& _datasetVersions);

                    /**
                     * 判断参数 DatasetVersions 是否已赋值
                     * @return DatasetVersions 是否已赋值
                     */
                    bool DatasetVersionsHasBeenSet() const;

                    /**
                     * 获取数据集标注状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnnotationStatus 数据集标注状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAnnotationStatus() const;

                    /**
                     * 设置数据集标注状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AnnotationStatus 数据集标注状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAnnotationStatus(const std::string& _annotationStatus);

                    /**
                     * 判断参数 AnnotationStatus 是否已赋值
                     * @return AnnotationStatus 是否已赋值
                     */
                    bool AnnotationStatusHasBeenSet() const;

                    /**
                     * 获取数据集类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnnotationType 数据集类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAnnotationType() const;

                    /**
                     * 设置数据集类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AnnotationType 数据集类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAnnotationType(const std::string& _annotationType);

                    /**
                     * 判断参数 AnnotationType 是否已赋值
                     * @return AnnotationType 是否已赋值
                     */
                    bool AnnotationTypeHasBeenSet() const;

                    /**
                     * 获取数据集标注格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnnotationFormat 数据集标注格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAnnotationFormat() const;

                    /**
                     * 设置数据集标注格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AnnotationFormat 数据集标注格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAnnotationFormat(const std::string& _annotationFormat);

                    /**
                     * 判断参数 AnnotationFormat 是否已赋值
                     * @return AnnotationFormat 是否已赋值
                     */
                    bool AnnotationFormatHasBeenSet() const;

                    /**
                     * 获取数据集范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasetScope 数据集范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatasetScope() const;

                    /**
                     * 设置数据集范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasetScope 数据集范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasetScope(const std::string& _datasetScope);

                    /**
                     * 判断参数 DatasetScope 是否已赋值
                     * @return DatasetScope 是否已赋值
                     */
                    bool DatasetScopeHasBeenSet() const;

                private:

                    /**
                     * 数据集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasetId;
                    bool m_datasetIdHasBeenSet;

                    /**
                     * 数据集名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasetName;
                    bool m_datasetNameHasBeenSet;

                    /**
                     * 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 数据集版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasetVersion;
                    bool m_datasetVersionHasBeenSet;

                    /**
                     * 数据集类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasetType;
                    bool m_datasetTypeHasBeenSet;

                    /**
                     * 数据集标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_datasetTags;
                    bool m_datasetTagsHasBeenSet;

                    /**
                     * 数据集标注任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasetAnnotationTaskName;
                    bool m_datasetAnnotationTaskNameHasBeenSet;

                    /**
                     * 数据集标注任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasetAnnotationTaskId;
                    bool m_datasetAnnotationTaskIdHasBeenSet;

                    /**
                     * 处理进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_process;
                    bool m_processHasBeenSet;

                    /**
                     * 数据集状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasetStatus;
                    bool m_datasetStatusHasBeenSet;

                    /**
                     * 错误详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 外部关联TASKType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalTaskType;
                    bool m_externalTaskTypeHasBeenSet;

                    /**
                     * 数据集大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasetSize;
                    bool m_datasetSizeHasBeenSet;

                    /**
                     * 数据集数据量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_fileNum;
                    bool m_fileNumHasBeenSet;

                    /**
                     * 数据集源COS路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo m_storageDataPath;
                    bool m_storageDataPathHasBeenSet;

                    /**
                     * 数据集标签存储路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo m_storageLabelPath;
                    bool m_storageLabelPathHasBeenSet;

                    /**
                     * 数据集版本聚合详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DatasetInfo> m_datasetVersions;
                    bool m_datasetVersionsHasBeenSet;

                    /**
                     * 数据集标注状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_annotationStatus;
                    bool m_annotationStatusHasBeenSet;

                    /**
                     * 数据集类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_annotationType;
                    bool m_annotationTypeHasBeenSet;

                    /**
                     * 数据集标注格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_annotationFormat;
                    bool m_annotationFormatHasBeenSet;

                    /**
                     * 数据集范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasetScope;
                    bool m_datasetScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DATASETGROUP_H_
