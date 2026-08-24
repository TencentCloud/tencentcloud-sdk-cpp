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
#include <tencentcloud/iotexplorer/v20190423/model/SeeFaceRecognitionResult.h>
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
                     * 获取<p>任务 ID</p>
                     * @return TaskId <p>任务 ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务 ID</p>
                     * @param _taskId <p>任务 ID</p>
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
                     * 获取<p>任务状态。可能取值：</p><ul><li><code>1</code>：失败</li><li><code>2</code>：空结果</li><li><code>3</code>：有效结果</li><li><code>4</code>：处理中</li></ul>
                     * @return Status <p>任务状态。可能取值：</p><ul><li><code>1</code>：失败</li><li><code>2</code>：空结果</li><li><code>3</code>：有效结果</li><li><code>4</code>：处理中</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>任务状态。可能取值：</p><ul><li><code>1</code>：失败</li><li><code>2</code>：空结果</li><li><code>3</code>：有效结果</li><li><code>4</code>：处理中</li></ul>
                     * @param _status <p>任务状态。可能取值：</p><ul><li><code>1</code>：失败</li><li><code>2</code>：空结果</li><li><code>3</code>：有效结果</li><li><code>4</code>：处理中</li></ul>
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
                     * 获取<p>任务元数据</p>
                     * @return Metadata <p>任务元数据</p>
                     * 
                     */
                    SeeTaskMetadata GetMetadata() const;

                    /**
                     * 设置<p>任务元数据</p>
                     * @param _metadata <p>任务元数据</p>
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
                     * 获取<p>算法类目。可能取值：</p><ul><li><code>COMPREHENSION</code>：视觉理解</li><li><code>HIGHLIGHT</code>：视频浓缩</li></ul>
                     * @return ServiceCategory <p>算法类目。可能取值：</p><ul><li><code>COMPREHENSION</code>：视觉理解</li><li><code>HIGHLIGHT</code>：视频浓缩</li></ul>
                     * 
                     */
                    std::string GetServiceCategory() const;

                    /**
                     * 设置<p>算法类目。可能取值：</p><ul><li><code>COMPREHENSION</code>：视觉理解</li><li><code>HIGHLIGHT</code>：视频浓缩</li></ul>
                     * @param _serviceCategory <p>算法类目。可能取值：</p><ul><li><code>COMPREHENSION</code>：视觉理解</li><li><code>HIGHLIGHT</code>：视频浓缩</li></ul>
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
                     * 获取<p>算法类型。可能取值：</p><ul><li><code>VID_COMP</code>：视频理解</li><li><code>IMG_COMP</code>：图片理解</li><li><code>COMP_HIGHLIGHT</code>：视频浓缩</li></ul>
                     * @return ServiceType <p>算法类型。可能取值：</p><ul><li><code>VID_COMP</code>：视频理解</li><li><code>IMG_COMP</code>：图片理解</li><li><code>COMP_HIGHLIGHT</code>：视频浓缩</li></ul>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>算法类型。可能取值：</p><ul><li><code>VID_COMP</code>：视频理解</li><li><code>IMG_COMP</code>：图片理解</li><li><code>COMP_HIGHLIGHT</code>：视频浓缩</li></ul>
                     * @param _serviceType <p>算法类型。可能取值：</p><ul><li><code>VID_COMP</code>：视频理解</li><li><code>IMG_COMP</code>：图片理解</li><li><code>COMP_HIGHLIGHT</code>：视频浓缩</li></ul>
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
                     * 获取<p>套餐规格。可能取值：</p><ul><li><code>POSTPAID</code>：后付费（适用于视频理解、图片理解）</li><li><code>BASIC</code>：包年包月基础版（适用于视频理解）</li></ul>
                     * @return ServiceTier <p>套餐规格。可能取值：</p><ul><li><code>POSTPAID</code>：后付费（适用于视频理解、图片理解）</li><li><code>BASIC</code>：包年包月基础版（适用于视频理解）</li></ul>
                     * 
                     */
                    std::string GetServiceTier() const;

                    /**
                     * 设置<p>套餐规格。可能取值：</p><ul><li><code>POSTPAID</code>：后付费（适用于视频理解、图片理解）</li><li><code>BASIC</code>：包年包月基础版（适用于视频理解）</li></ul>
                     * @param _serviceTier <p>套餐规格。可能取值：</p><ul><li><code>POSTPAID</code>：后付费（适用于视频理解、图片理解）</li><li><code>BASIC</code>：包年包月基础版（适用于视频理解）</li></ul>
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
                     * 获取<p>视觉理解结果（适用于视频理解、图片理解）</p>
                     * @return ComprehensionResult <p>视觉理解结果（适用于视频理解、图片理解）</p>
                     * 
                     */
                    SeeComprehensionResult GetComprehensionResult() const;

                    /**
                     * 设置<p>视觉理解结果（适用于视频理解、图片理解）</p>
                     * @param _comprehensionResult <p>视觉理解结果（适用于视频理解、图片理解）</p>
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
                     * 获取<p>视频语义浓缩结果（适用于视频语义浓缩）</p>
                     * @return CompHighlightResult <p>视频语义浓缩结果（适用于视频语义浓缩）</p>
                     * 
                     */
                    SeeCompHighlightResult GetCompHighlightResult() const;

                    /**
                     * 设置<p>视频语义浓缩结果（适用于视频语义浓缩）</p>
                     * @param _compHighlightResult <p>视频语义浓缩结果（适用于视频语义浓缩）</p>
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
                     * 获取<p>标签持续检测结果</p>
                     * @return DetectContinuousResult <p>标签持续检测结果</p>
                     * 
                     */
                    SeeDetectContinuousResult GetDetectContinuousResult() const;

                    /**
                     * 设置<p>标签持续检测结果</p>
                     * @param _detectContinuousResult <p>标签持续检测结果</p>
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
                     * 获取<p>人脸检测结果</p>
                     * @return FaceRecognitionResult <p>人脸检测结果</p>
                     * 
                     */
                    SeeFaceRecognitionResult GetFaceRecognitionResult() const;

                    /**
                     * 设置<p>人脸检测结果</p>
                     * @param _faceRecognitionResult <p>人脸检测结果</p>
                     * 
                     */
                    void SetFaceRecognitionResult(const SeeFaceRecognitionResult& _faceRecognitionResult);

                    /**
                     * 判断参数 FaceRecognitionResult 是否已赋值
                     * @return FaceRecognitionResult 是否已赋值
                     * 
                     */
                    bool FaceRecognitionResultHasBeenSet() const;

                    /**
                     * 获取<p>完成该任务所消耗的基础能力额度</p>
                     * @return CostBasic <p>完成该任务所消耗的基础能力额度</p>
                     * 
                     */
                    int64_t GetCostBasic() const;

                    /**
                     * 设置<p>完成该任务所消耗的基础能力额度</p>
                     * @param _costBasic <p>完成该任务所消耗的基础能力额度</p>
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
                     * 获取<p>完成该任务所消耗的高级能力额度</p>
                     * @return CostAdvanced <p>完成该任务所消耗的高级能力额度</p>
                     * 
                     */
                    int64_t GetCostAdvanced() const;

                    /**
                     * 设置<p>完成该任务所消耗的高级能力额度</p>
                     * @param _costAdvanced <p>完成该任务所消耗的高级能力额度</p>
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
                     * 获取<p>输出文件名列表</p>
                     * @return Files <p>输出文件名列表</p>
                     * 
                     */
                    std::vector<std::string> GetFiles() const;

                    /**
                     * 设置<p>输出文件名列表</p>
                     * @param _files <p>输出文件名列表</p>
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
                     * 获取<p>输出文件详情列表</p>
                     * @return FilesInfo <p>输出文件详情列表</p>
                     * 
                     */
                    std::vector<CloudStorageAIServiceTaskFileInfo> GetFilesInfo() const;

                    /**
                     * 设置<p>输出文件详情列表</p>
                     * @param _filesInfo <p>输出文件详情列表</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>最后更新时间</p>
                     * @return UpdateTime <p>最后更新时间</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>最后更新时间</p>
                     * @param _updateTime <p>最后更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>直传 COS 的对象 URI</p>
                     * @return COSURI <p>直传 COS 的对象 URI</p>
                     * 
                     */
                    std::string GetCOSURI() const;

                    /**
                     * 设置<p>直传 COS 的对象 URI</p>
                     * @param _cOSURI <p>直传 COS 的对象 URI</p>
                     * 
                     */
                    void SetCOSURI(const std::string& _cOSURI);

                    /**
                     * 判断参数 COSURI 是否已赋值
                     * @return COSURI 是否已赋值
                     * 
                     */
                    bool COSURIHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务状态。可能取值：</p><ul><li><code>1</code>：失败</li><li><code>2</code>：空结果</li><li><code>3</code>：有效结果</li><li><code>4</code>：处理中</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务元数据</p>
                     */
                    SeeTaskMetadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>算法类目。可能取值：</p><ul><li><code>COMPREHENSION</code>：视觉理解</li><li><code>HIGHLIGHT</code>：视频浓缩</li></ul>
                     */
                    std::string m_serviceCategory;
                    bool m_serviceCategoryHasBeenSet;

                    /**
                     * <p>算法类型。可能取值：</p><ul><li><code>VID_COMP</code>：视频理解</li><li><code>IMG_COMP</code>：图片理解</li><li><code>COMP_HIGHLIGHT</code>：视频浓缩</li></ul>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>套餐规格。可能取值：</p><ul><li><code>POSTPAID</code>：后付费（适用于视频理解、图片理解）</li><li><code>BASIC</code>：包年包月基础版（适用于视频理解）</li></ul>
                     */
                    std::string m_serviceTier;
                    bool m_serviceTierHasBeenSet;

                    /**
                     * <p>视觉理解结果（适用于视频理解、图片理解）</p>
                     */
                    SeeComprehensionResult m_comprehensionResult;
                    bool m_comprehensionResultHasBeenSet;

                    /**
                     * <p>视频语义浓缩结果（适用于视频语义浓缩）</p>
                     */
                    SeeCompHighlightResult m_compHighlightResult;
                    bool m_compHighlightResultHasBeenSet;

                    /**
                     * <p>标签持续检测结果</p>
                     */
                    SeeDetectContinuousResult m_detectContinuousResult;
                    bool m_detectContinuousResultHasBeenSet;

                    /**
                     * <p>人脸检测结果</p>
                     */
                    SeeFaceRecognitionResult m_faceRecognitionResult;
                    bool m_faceRecognitionResultHasBeenSet;

                    /**
                     * <p>完成该任务所消耗的基础能力额度</p>
                     */
                    int64_t m_costBasic;
                    bool m_costBasicHasBeenSet;

                    /**
                     * <p>完成该任务所消耗的高级能力额度</p>
                     */
                    int64_t m_costAdvanced;
                    bool m_costAdvancedHasBeenSet;

                    /**
                     * <p>输出文件名列表</p>
                     */
                    std::vector<std::string> m_files;
                    bool m_filesHasBeenSet;

                    /**
                     * <p>输出文件详情列表</p>
                     */
                    std::vector<CloudStorageAIServiceTaskFileInfo> m_filesInfo;
                    bool m_filesInfoHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最后更新时间</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>直传 COS 的对象 URI</p>
                     */
                    std::string m_cOSURI;
                    bool m_cOSURIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEETASKINFO_H_
