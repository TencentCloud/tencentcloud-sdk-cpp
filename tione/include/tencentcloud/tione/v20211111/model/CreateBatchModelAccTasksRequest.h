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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEBATCHMODELACCTASKSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEBATCHMODELACCTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/BatchModelAccTask.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/HyperParameter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CreateBatchModelAccTasks请求参数结构体
                */
                class CreateBatchModelAccTasksRequest : public AbstractModel
                {
                public:
                    CreateBatchModelAccTasksRequest();
                    ~CreateBatchModelAccTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型加速任务名称
                     * @return ModelAccTaskName 模型加速任务名称
                     */
                    std::string GetModelAccTaskName() const;

                    /**
                     * 设置模型加速任务名称
                     * @param ModelAccTaskName 模型加速任务名称
                     */
                    void SetModelAccTaskName(const std::string& _modelAccTaskName);

                    /**
                     * 判断参数 ModelAccTaskName 是否已赋值
                     * @return ModelAccTaskName 是否已赋值
                     */
                    bool ModelAccTaskNameHasBeenSet() const;

                    /**
                     * 获取批量模型加速任务
                     * @return BatchModelAccTasks 批量模型加速任务
                     */
                    std::vector<BatchModelAccTask> GetBatchModelAccTasks() const;

                    /**
                     * 设置批量模型加速任务
                     * @param BatchModelAccTasks 批量模型加速任务
                     */
                    void SetBatchModelAccTasks(const std::vector<BatchModelAccTask>& _batchModelAccTasks);

                    /**
                     * 判断参数 BatchModelAccTasks 是否已赋值
                     * @return BatchModelAccTasks 是否已赋值
                     */
                    bool BatchModelAccTasksHasBeenSet() const;

                    /**
                     * 获取模型加速保存路径
                     * @return ModelOutputPath 模型加速保存路径
                     */
                    CosPathInfo GetModelOutputPath() const;

                    /**
                     * 设置模型加速保存路径
                     * @param ModelOutputPath 模型加速保存路径
                     */
                    void SetModelOutputPath(const CosPathInfo& _modelOutputPath);

                    /**
                     * 判断参数 ModelOutputPath 是否已赋值
                     * @return ModelOutputPath 是否已赋值
                     */
                    bool ModelOutputPathHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param Tags 标签
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取优化级别(NO_LOSS/FP16/INT8)，默认FP16
                     * @return OptimizationLevel 优化级别(NO_LOSS/FP16/INT8)，默认FP16
                     */
                    std::string GetOptimizationLevel() const;

                    /**
                     * 设置优化级别(NO_LOSS/FP16/INT8)，默认FP16
                     * @param OptimizationLevel 优化级别(NO_LOSS/FP16/INT8)，默认FP16
                     */
                    void SetOptimizationLevel(const std::string& _optimizationLevel);

                    /**
                     * 判断参数 OptimizationLevel 是否已赋值
                     * @return OptimizationLevel 是否已赋值
                     */
                    bool OptimizationLevelHasBeenSet() const;

                    /**
                     * 获取GPU卡类型(T4/V100/A10)，默认T4
                     * @return GPUType GPU卡类型(T4/V100/A10)，默认T4
                     */
                    std::string GetGPUType() const;

                    /**
                     * 设置GPU卡类型(T4/V100/A10)，默认T4
                     * @param GPUType GPU卡类型(T4/V100/A10)，默认T4
                     */
                    void SetGPUType(const std::string& _gPUType);

                    /**
                     * 判断参数 GPUType 是否已赋值
                     * @return GPUType 是否已赋值
                     */
                    bool GPUTypeHasBeenSet() const;

                    /**
                     * 获取专业参数设置
                     * @return HyperParameter 专业参数设置
                     */
                    HyperParameter GetHyperParameter() const;

                    /**
                     * 设置专业参数设置
                     * @param HyperParameter 专业参数设置
                     */
                    void SetHyperParameter(const HyperParameter& _hyperParameter);

                    /**
                     * 判断参数 HyperParameter 是否已赋值
                     * @return HyperParameter 是否已赋值
                     */
                    bool HyperParameterHasBeenSet() const;

                private:

                    /**
                     * 模型加速任务名称
                     */
                    std::string m_modelAccTaskName;
                    bool m_modelAccTaskNameHasBeenSet;

                    /**
                     * 批量模型加速任务
                     */
                    std::vector<BatchModelAccTask> m_batchModelAccTasks;
                    bool m_batchModelAccTasksHasBeenSet;

                    /**
                     * 模型加速保存路径
                     */
                    CosPathInfo m_modelOutputPath;
                    bool m_modelOutputPathHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 优化级别(NO_LOSS/FP16/INT8)，默认FP16
                     */
                    std::string m_optimizationLevel;
                    bool m_optimizationLevelHasBeenSet;

                    /**
                     * GPU卡类型(T4/V100/A10)，默认T4
                     */
                    std::string m_gPUType;
                    bool m_gPUTypeHasBeenSet;

                    /**
                     * 专业参数设置
                     */
                    HyperParameter m_hyperParameter;
                    bool m_hyperParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEBATCHMODELACCTASKSREQUEST_H_
