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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEETASKINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEETASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeTaskMetadata.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeComprehensionResult.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeCompHighlightResult.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeDetectContinuousResult.h>
#include <tencentcloud/iotexplorer/v20190423/model/CloudStorageAIServiceTaskFileInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 任务详情
                */
                class SeeTaskInfo : public AbstractModel
                {
                public:
                    SeeTaskInfo();
                    ~SeeTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务 ID
                     * @return TaskId 任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 ID
                     * @param _taskId 任务 ID
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
                     * 获取任务状态。可能取值：

- `1`：失败
- `2`：空结果
- `3`：有效结果
- `4`：处理中
                     * @return Status 任务状态。可能取值：

- `1`：失败
- `2`：空结果
- `3`：有效结果
- `4`：处理中
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置任务状态。可能取值：

- `1`：失败
- `2`：空结果
- `3`：有效结果
- `4`：处理中
                     * @param _status 任务状态。可能取值：

- `1`：失败
- `2`：空结果
- `3`：有效结果
- `4`：处理中
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
                     * 获取任务元数据
                     * @return Metadata 任务元数据
                     * 
                     */
                    SeeTaskMetadata GetMetadata() const;

                    /**
                     * 设置任务元数据
                     * @param _metadata 任务元数据
                     * 
                     */
                    void SetMetadata(const SeeTaskMetadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取算法类目。可能取值：

- `COMPREHENSION`：视觉理解
- `HIGHLIGHT`：视频浓缩
                     * @return ServiceCategory 算法类目。可能取值：

- `COMPREHENSION`：视觉理解
- `HIGHLIGHT`：视频浓缩
                     * 
                     */
                    std::string GetServiceCategory() const;

                    /**
                     * 设置算法类目。可能取值：

- `COMPREHENSION`：视觉理解
- `HIGHLIGHT`：视频浓缩
                     * @param _serviceCategory 算法类目。可能取值：

- `COMPREHENSION`：视觉理解
- `HIGHLIGHT`：视频浓缩
                     * 
                     */
                    void SetServiceCategory(const std::string& _serviceCategory);

                    /**
                     * 判断参数 ServiceCategory 是否已赋值
                     * @return ServiceCategory 是否已赋值
                     * 
                     */
                    bool ServiceCategoryHasBeenSet() const;

                    /**
                     * 获取算法类型。可能取值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
- `COMP_HIGHLIGHT`：视频浓缩
                     * @return ServiceType 算法类型。可能取值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
- `COMP_HIGHLIGHT`：视频浓缩
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置算法类型。可能取值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
- `COMP_HIGHLIGHT`：视频浓缩
                     * @param _serviceType 算法类型。可能取值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
- `COMP_HIGHLIGHT`：视频浓缩
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取套餐规格。可能取值：

- `POSTPAID`：后付费（适用于视频理解、图片理解）
- `BASIC`：包年包月基础版（适用于视频理解）
                     * @return ServiceTier 套餐规格。可能取值：

- `POSTPAID`：后付费（适用于视频理解、图片理解）
- `BASIC`：包年包月基础版（适用于视频理解）
                     * 
                     */
                    std::string GetServiceTier() const;

                    /**
                     * 设置套餐规格。可能取值：

- `POSTPAID`：后付费（适用于视频理解、图片理解）
- `BASIC`：包年包月基础版（适用于视频理解）
                     * @param _serviceTier 套餐规格。可能取值：

- `POSTPAID`：后付费（适用于视频理解、图片理解）
- `BASIC`：包年包月基础版（适用于视频理解）
                     * 
                     */
                    void SetServiceTier(const std::string& _serviceTier);

                    /**
                     * 判断参数 ServiceTier 是否已赋值
                     * @return ServiceTier 是否已赋值
                     * 
                     */
                    bool ServiceTierHasBeenSet() const;

                    /**
                     * 获取视觉理解结果（适用于视频理解、图片理解）
                     * @return ComprehensionResult 视觉理解结果（适用于视频理解、图片理解）
                     * 
                     */
                    SeeComprehensionResult GetComprehensionResult() const;

                    /**
                     * 设置视觉理解结果（适用于视频理解、图片理解）
                     * @param _comprehensionResult 视觉理解结果（适用于视频理解、图片理解）
                     * 
                     */
                    void SetComprehensionResult(const SeeComprehensionResult& _comprehensionResult);

                    /**
                     * 判断参数 ComprehensionResult 是否已赋值
                     * @return ComprehensionResult 是否已赋值
                     * 
                     */
                    bool ComprehensionResultHasBeenSet() const;

                    /**
                     * 获取视频语义浓缩结果（适用于视频语义浓缩）
                     * @return CompHighlightResult 视频语义浓缩结果（适用于视频语义浓缩）
                     * 
                     */
                    SeeCompHighlightResult GetCompHighlightResult() const;

                    /**
                     * 设置视频语义浓缩结果（适用于视频语义浓缩）
                     * @param _compHighlightResult 视频语义浓缩结果（适用于视频语义浓缩）
                     * 
                     */
                    void SetCompHighlightResult(const SeeCompHighlightResult& _compHighlightResult);

                    /**
                     * 判断参数 CompHighlightResult 是否已赋值
                     * @return CompHighlightResult 是否已赋值
                     * 
                     */
                    bool CompHighlightResultHasBeenSet() const;

                    /**
                     * 获取标签持续检测结果
                     * @return DetectContinuousResult 标签持续检测结果
                     * 
                     */
                    SeeDetectContinuousResult GetDetectContinuousResult() const;

                    /**
                     * 设置标签持续检测结果
                     * @param _detectContinuousResult 标签持续检测结果
                     * 
                     */
                    void SetDetectContinuousResult(const SeeDetectContinuousResult& _detectContinuousResult);

                    /**
                     * 判断参数 DetectContinuousResult 是否已赋值
                     * @return DetectContinuousResult 是否已赋值
                     * 
                     */
                    bool DetectContinuousResultHasBeenSet() const;

                    /**
                     * 获取完成该任务所消耗的基础能力额度
                     * @return CostBasic 完成该任务所消耗的基础能力额度
                     * 
                     */
                    int64_t GetCostBasic() const;

                    /**
                     * 设置完成该任务所消耗的基础能力额度
                     * @param _costBasic 完成该任务所消耗的基础能力额度
                     * 
                     */
                    void SetCostBasic(const int64_t& _costBasic);

                    /**
                     * 判断参数 CostBasic 是否已赋值
                     * @return CostBasic 是否已赋值
                     * 
                     */
                    bool CostBasicHasBeenSet() const;

                    /**
                     * 获取完成该任务所消耗的高级能力额度
                     * @return CostAdvanced 完成该任务所消耗的高级能力额度
                     * 
                     */
                    int64_t GetCostAdvanced() const;

                    /**
                     * 设置完成该任务所消耗的高级能力额度
                     * @param _costAdvanced 完成该任务所消耗的高级能力额度
                     * 
                     */
                    void SetCostAdvanced(const int64_t& _costAdvanced);

                    /**
                     * 判断参数 CostAdvanced 是否已赋值
                     * @return CostAdvanced 是否已赋值
                     * 
                     */
                    bool CostAdvancedHasBeenSet() const;

                    /**
                     * 获取输出文件名列表
                     * @return Files 输出文件名列表
                     * 
                     */
                    std::vector<std::string> GetFiles() const;

                    /**
                     * 设置输出文件名列表
                     * @param _files 输出文件名列表
                     * 
                     */
                    void SetFiles(const std::vector<std::string>& _files);

                    /**
                     * 判断参数 Files 是否已赋值
                     * @return Files 是否已赋值
                     * 
                     */
                    bool FilesHasBeenSet() const;

                    /**
                     * 获取输出文件详情列表
                     * @return FilesInfo 输出文件详情列表
                     * 
                     */
                    std::vector<CloudStorageAIServiceTaskFileInfo> GetFilesInfo() const;

                    /**
                     * 设置输出文件详情列表
                     * @param _filesInfo 输出文件详情列表
                     * 
                     */
                    void SetFilesInfo(const std::vector<CloudStorageAIServiceTaskFileInfo>& _filesInfo);

                    /**
                     * 判断参数 FilesInfo 是否已赋值
                     * @return FilesInfo 是否已赋值
                     * 
                     */
                    bool FilesInfoHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后更新时间
                     * @return UpdateTime 最后更新时间
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置最后更新时间
                     * @param _updateTime 最后更新时间
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态。可能取值：

- `1`：失败
- `2`：空结果
- `3`：有效结果
- `4`：处理中
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务元数据
                     */
                    SeeTaskMetadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 算法类目。可能取值：

- `COMPREHENSION`：视觉理解
- `HIGHLIGHT`：视频浓缩
                     */
                    std::string m_serviceCategory;
                    bool m_serviceCategoryHasBeenSet;

                    /**
                     * 算法类型。可能取值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
- `COMP_HIGHLIGHT`：视频浓缩
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 套餐规格。可能取值：

- `POSTPAID`：后付费（适用于视频理解、图片理解）
- `BASIC`：包年包月基础版（适用于视频理解）
                     */
                    std::string m_serviceTier;
                    bool m_serviceTierHasBeenSet;

                    /**
                     * 视觉理解结果（适用于视频理解、图片理解）
                     */
                    SeeComprehensionResult m_comprehensionResult;
                    bool m_comprehensionResultHasBeenSet;

                    /**
                     * 视频语义浓缩结果（适用于视频语义浓缩）
                     */
                    SeeCompHighlightResult m_compHighlightResult;
                    bool m_compHighlightResultHasBeenSet;

                    /**
                     * 标签持续检测结果
                     */
                    SeeDetectContinuousResult m_detectContinuousResult;
                    bool m_detectContinuousResultHasBeenSet;

                    /**
                     * 完成该任务所消耗的基础能力额度
                     */
                    int64_t m_costBasic;
                    bool m_costBasicHasBeenSet;

                    /**
                     * 完成该任务所消耗的高级能力额度
                     */
                    int64_t m_costAdvanced;
                    bool m_costAdvancedHasBeenSet;

                    /**
                     * 输出文件名列表
                     */
                    std::vector<std::string> m_files;
                    bool m_filesHasBeenSet;

                    /**
                     * 输出文件详情列表
                     */
                    std::vector<CloudStorageAIServiceTaskFileInfo> m_filesInfo;
                    bool m_filesInfoHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后更新时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEETASKINFO_H_
