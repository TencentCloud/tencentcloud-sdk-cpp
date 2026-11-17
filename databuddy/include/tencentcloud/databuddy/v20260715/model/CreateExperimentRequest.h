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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEEXPERIMENTREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEEXPERIMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/ExperimentTag.h>
#include <tencentcloud/databuddy/v20260715/model/AutoMlConf.h>
#include <tencentcloud/databuddy/v20260715/model/TrainingData.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * CreateExperiment请求参数结构体
                */
                class CreateExperimentRequest : public AbstractModel
                {
                public:
                    CreateExperimentRequest();
                    ~CreateExperimentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间ID（必填），可通过 ListWorkspaces 接口获取</p>
                     * @return WorkspaceId <p>工作空间ID（必填），可通过 ListWorkspaces 接口获取</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间ID（必填），可通过 ListWorkspaces 接口获取</p>
                     * @param _workspaceId <p>工作空间ID（必填），可通过 ListWorkspaces 接口获取</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>实验名称（必填），同一工作空间内唯一</p>
                     * @return Name <p>实验名称（必填），同一工作空间内唯一</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>实验名称（必填），同一工作空间内唯一</p>
                     * @param _name <p>实验名称（必填），同一工作空间内唯一</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>实验类型（必填），取值：MACHINE_LEARNING（机器学习）/ CLASSIFICATION（分类）/ REGRESSION（回归）/ FORECASTING（时间序列预测）/ AGENT（智能体）。传入其他值将返回 InvalidParameter.ExperimentTypeInvalid</p>
                     * @return Type <p>实验类型（必填），取值：MACHINE_LEARNING（机器学习）/ CLASSIFICATION（分类）/ REGRESSION（回归）/ FORECASTING（时间序列预测）/ AGENT（智能体）。传入其他值将返回 InvalidParameter.ExperimentTypeInvalid</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>实验类型（必填），取值：MACHINE_LEARNING（机器学习）/ CLASSIFICATION（分类）/ REGRESSION（回归）/ FORECASTING（时间序列预测）/ AGENT（智能体）。传入其他值将返回 InvalidParameter.ExperimentTypeInvalid</p>
                     * @param _type <p>实验类型（必填），取值：MACHINE_LEARNING（机器学习）/ CLASSIFICATION（分类）/ REGRESSION（回归）/ FORECASTING（时间序列预测）/ AGENT（智能体）。传入其他值将返回 InvalidParameter.ExperimentTypeInvalid</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>实验描述（可选），建议长度不超过 1024 字符</p>
                     * @return Description <p>实验描述（可选），建议长度不超过 1024 字符</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>实验描述（可选），建议长度不超过 1024 字符</p>
                     * @param _description <p>实验描述（可选），建议长度不超过 1024 字符</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Studio目录树文件夹节点ID，即实验所在的目录节点，可通过 ListFiles 接口获取</p>
                     * @return StudioId <p>Studio目录树文件夹节点ID，即实验所在的目录节点，可通过 ListFiles 接口获取</p>
                     * 
                     */
                    std::string GetStudioId() const;

                    /**
                     * 设置<p>Studio目录树文件夹节点ID，即实验所在的目录节点，可通过 ListFiles 接口获取</p>
                     * @param _studioId <p>Studio目录树文件夹节点ID，即实验所在的目录节点，可通过 ListFiles 接口获取</p>
                     * 
                     */
                    void SetStudioId(const std::string& _studioId);

                    /**
                     * 判断参数 StudioId 是否已赋值
                     * @return StudioId 是否已赋值
                     * 
                     */
                    bool StudioIdHasBeenSet() const;

                    /**
                     * 获取<p>实验标签列表（可选），key/value 均为字符串</p>
                     * @return Tags <p>实验标签列表（可选），key/value 均为字符串</p>
                     * 
                     */
                    std::vector<ExperimentTag> GetTags() const;

                    /**
                     * 设置<p>实验标签列表（可选），key/value 均为字符串</p>
                     * @param _tags <p>实验标签列表（可选），key/value 均为字符串</p>
                     * 
                     */
                    void SetTags(const std::vector<ExperimentTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>AutoML配置（可选，仅 Type 为 CLASSIFICATION/REGRESSION/FORECASTING 时需要），包含评估指标、搜索空间、最大运行时间/次数/并发等</p>
                     * @return AutoMlConf <p>AutoML配置（可选，仅 Type 为 CLASSIFICATION/REGRESSION/FORECASTING 时需要），包含评估指标、搜索空间、最大运行时间/次数/并发等</p>
                     * 
                     */
                    AutoMlConf GetAutoMlConf() const;

                    /**
                     * 设置<p>AutoML配置（可选，仅 Type 为 CLASSIFICATION/REGRESSION/FORECASTING 时需要），包含评估指标、搜索空间、最大运行时间/次数/并发等</p>
                     * @param _autoMlConf <p>AutoML配置（可选，仅 Type 为 CLASSIFICATION/REGRESSION/FORECASTING 时需要），包含评估指标、搜索空间、最大运行时间/次数/并发等</p>
                     * 
                     */
                    void SetAutoMlConf(const AutoMlConf& _autoMlConf);

                    /**
                     * 判断参数 AutoMlConf 是否已赋值
                     * @return AutoMlConf 是否已赋值
                     * 
                     */
                    bool AutoMlConfHasBeenSet() const;

                    /**
                     * 获取<p>训练数据配置（可选，仅 AutoML 类型实验需要），指定训练数据表（Catalog.Schema.Table 三段式）与目标标签列</p>
                     * @return TrainingData <p>训练数据配置（可选，仅 AutoML 类型实验需要），指定训练数据表（Catalog.Schema.Table 三段式）与目标标签列</p>
                     * 
                     */
                    TrainingData GetTrainingData() const;

                    /**
                     * 设置<p>训练数据配置（可选，仅 AutoML 类型实验需要），指定训练数据表（Catalog.Schema.Table 三段式）与目标标签列</p>
                     * @param _trainingData <p>训练数据配置（可选，仅 AutoML 类型实验需要），指定训练数据表（Catalog.Schema.Table 三段式）与目标标签列</p>
                     * 
                     */
                    void SetTrainingData(const TrainingData& _trainingData);

                    /**
                     * 判断参数 TrainingData 是否已赋值
                     * @return TrainingData 是否已赋值
                     * 
                     */
                    bool TrainingDataHasBeenSet() const;

                    /**
                     * 获取<p>计算资源组ID（可选），指定实验运行所使用的计算资源，可通过 ListComputeResourceOptions 接口获取</p>
                     * @return ResourceGroupId <p>计算资源组ID（可选），指定实验运行所使用的计算资源，可通过 ListComputeResourceOptions 接口获取</p>
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>计算资源组ID（可选），指定实验运行所使用的计算资源，可通过 ListComputeResourceOptions 接口获取</p>
                     * @param _resourceGroupId <p>计算资源组ID（可选），指定实验运行所使用的计算资源，可通过 ListComputeResourceOptions 接口获取</p>
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间ID（必填），可通过 ListWorkspaces 接口获取</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>实验名称（必填），同一工作空间内唯一</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>实验类型（必填），取值：MACHINE_LEARNING（机器学习）/ CLASSIFICATION（分类）/ REGRESSION（回归）/ FORECASTING（时间序列预测）/ AGENT（智能体）。传入其他值将返回 InvalidParameter.ExperimentTypeInvalid</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>实验描述（可选），建议长度不超过 1024 字符</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Studio目录树文件夹节点ID，即实验所在的目录节点，可通过 ListFiles 接口获取</p>
                     */
                    std::string m_studioId;
                    bool m_studioIdHasBeenSet;

                    /**
                     * <p>实验标签列表（可选），key/value 均为字符串</p>
                     */
                    std::vector<ExperimentTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>AutoML配置（可选，仅 Type 为 CLASSIFICATION/REGRESSION/FORECASTING 时需要），包含评估指标、搜索空间、最大运行时间/次数/并发等</p>
                     */
                    AutoMlConf m_autoMlConf;
                    bool m_autoMlConfHasBeenSet;

                    /**
                     * <p>训练数据配置（可选，仅 AutoML 类型实验需要），指定训练数据表（Catalog.Schema.Table 三段式）与目标标签列</p>
                     */
                    TrainingData m_trainingData;
                    bool m_trainingDataHasBeenSet;

                    /**
                     * <p>计算资源组ID（可选），指定实验运行所使用的计算资源，可通过 ListComputeResourceOptions 接口获取</p>
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEEXPERIMENTREQUEST_H_
