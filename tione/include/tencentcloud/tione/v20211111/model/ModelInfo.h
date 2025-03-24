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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MODELINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MODELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/GooseFSx.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 模型描述信息
                */
                class ModelInfo : public AbstractModel
                {
                public:
                    ModelInfo();
                    ~ModelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型版本id, DescribeTrainingModelVersion查询模型接口时的id
自动学习类型的模型填写自动学习的任务id
                     * @return ModelVersionId 模型版本id, DescribeTrainingModelVersion查询模型接口时的id
自动学习类型的模型填写自动学习的任务id
                     * 
                     */
                    std::string GetModelVersionId() const;

                    /**
                     * 设置模型版本id, DescribeTrainingModelVersion查询模型接口时的id
自动学习类型的模型填写自动学习的任务id
                     * @param _modelVersionId 模型版本id, DescribeTrainingModelVersion查询模型接口时的id
自动学习类型的模型填写自动学习的任务id
                     * 
                     */
                    void SetModelVersionId(const std::string& _modelVersionId);

                    /**
                     * 判断参数 ModelVersionId 是否已赋值
                     * @return ModelVersionId 是否已赋值
                     * 
                     */
                    bool ModelVersionIdHasBeenSet() const;

                    /**
                     * 获取模型id
                     * @return ModelId 模型id
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型id
                     * @param _modelId 模型id
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取模型名
                     * @return ModelName 模型名
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名
                     * @param _modelName 模型名
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取模型版本
                     * @return ModelVersion 模型版本
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置模型版本
                     * @param _modelVersion 模型版本
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取模型来源
                     * @return ModelSource 模型来源
                     * 
                     */
                    std::string GetModelSource() const;

                    /**
                     * 设置模型来源
                     * @param _modelSource 模型来源
                     * 
                     */
                    void SetModelSource(const std::string& _modelSource);

                    /**
                     * 判断参数 ModelSource 是否已赋值
                     * @return ModelSource 是否已赋值
                     * 
                     */
                    bool ModelSourceHasBeenSet() const;

                    /**
                     * 获取cos路径信息
                     * @return CosPathInfo cos路径信息
                     * 
                     */
                    CosPathInfo GetCosPathInfo() const;

                    /**
                     * 设置cos路径信息
                     * @param _cosPathInfo cos路径信息
                     * 
                     */
                    void SetCosPathInfo(const CosPathInfo& _cosPathInfo);

                    /**
                     * 判断参数 CosPathInfo 是否已赋值
                     * @return CosPathInfo 是否已赋值
                     * 
                     */
                    bool CosPathInfoHasBeenSet() const;

                    /**
                     * 获取GooseFSx的配置，ModelSource为GooseFSx时有效
                     * @return GooseFSx GooseFSx的配置，ModelSource为GooseFSx时有效
                     * 
                     */
                    GooseFSx GetGooseFSx() const;

                    /**
                     * 设置GooseFSx的配置，ModelSource为GooseFSx时有效
                     * @param _gooseFSx GooseFSx的配置，ModelSource为GooseFSx时有效
                     * 
                     */
                    void SetGooseFSx(const GooseFSx& _gooseFSx);

                    /**
                     * 判断参数 GooseFSx 是否已赋值
                     * @return GooseFSx 是否已赋值
                     * 
                     */
                    bool GooseFSxHasBeenSet() const;

                    /**
                     * 获取模型对应的算法框架，预留
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlgorithmFramework 模型对应的算法框架，预留
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlgorithmFramework() const;

                    /**
                     * 设置模型对应的算法框架，预留
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _algorithmFramework 模型对应的算法框架，预留
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlgorithmFramework(const std::string& _algorithmFramework);

                    /**
                     * 判断参数 AlgorithmFramework 是否已赋值
                     * @return AlgorithmFramework 是否已赋值
                     * 
                     */
                    bool AlgorithmFrameworkHasBeenSet() const;

                    /**
                     * 获取默认为 NORMAL, 已加速模型: ACCELERATE, 自动学习模型 AUTO_ML
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelType 默认为 NORMAL, 已加速模型: ACCELERATE, 自动学习模型 AUTO_ML
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置默认为 NORMAL, 已加速模型: ACCELERATE, 自动学习模型 AUTO_ML
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelType 默认为 NORMAL, 已加速模型: ACCELERATE, 自动学习模型 AUTO_ML
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelType(const std::string& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelFormat 模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelFormat() const;

                    /**
                     * 设置模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelFormat 模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelFormat(const std::string& _modelFormat);

                    /**
                     * 判断参数 ModelFormat 是否已赋值
                     * @return ModelFormat 是否已赋值
                     * 
                     */
                    bool ModelFormatHasBeenSet() const;

                    /**
                     * 获取是否为私有化大模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPrivateModel 是否为私有化大模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsPrivateModel() const;

                    /**
                     * 设置是否为私有化大模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPrivateModel 是否为私有化大模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsPrivateModel(const bool& _isPrivateModel);

                    /**
                     * 判断参数 IsPrivateModel 是否已赋值
                     * @return IsPrivateModel 是否已赋值
                     * 
                     */
                    bool IsPrivateModelHasBeenSet() const;

                    /**
                     * 获取模型的类别 多模态MultiModal, 文本大模型 LLM
                     * @return ModelCategory 模型的类别 多模态MultiModal, 文本大模型 LLM
                     * 
                     */
                    std::string GetModelCategory() const;

                    /**
                     * 设置模型的类别 多模态MultiModal, 文本大模型 LLM
                     * @param _modelCategory 模型的类别 多模态MultiModal, 文本大模型 LLM
                     * 
                     */
                    void SetModelCategory(const std::string& _modelCategory);

                    /**
                     * 判断参数 ModelCategory 是否已赋值
                     * @return ModelCategory 是否已赋值
                     * 
                     */
                    bool ModelCategoryHasBeenSet() const;

                private:

                    /**
                     * 模型版本id, DescribeTrainingModelVersion查询模型接口时的id
自动学习类型的模型填写自动学习的任务id
                     */
                    std::string m_modelVersionId;
                    bool m_modelVersionIdHasBeenSet;

                    /**
                     * 模型id
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 模型名
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 模型版本
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 模型来源
                     */
                    std::string m_modelSource;
                    bool m_modelSourceHasBeenSet;

                    /**
                     * cos路径信息
                     */
                    CosPathInfo m_cosPathInfo;
                    bool m_cosPathInfoHasBeenSet;

                    /**
                     * GooseFSx的配置，ModelSource为GooseFSx时有效
                     */
                    GooseFSx m_gooseFSx;
                    bool m_gooseFSxHasBeenSet;

                    /**
                     * 模型对应的算法框架，预留
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_algorithmFramework;
                    bool m_algorithmFrameworkHasBeenSet;

                    /**
                     * 默认为 NORMAL, 已加速模型: ACCELERATE, 自动学习模型 AUTO_ML
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * 模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelFormat;
                    bool m_modelFormatHasBeenSet;

                    /**
                     * 是否为私有化大模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isPrivateModel;
                    bool m_isPrivateModelHasBeenSet;

                    /**
                     * 模型的类别 多模态MultiModal, 文本大模型 LLM
                     */
                    std::string m_modelCategory;
                    bool m_modelCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODELINFO_H_
