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
#include <tencentcloud/tione/v20211111/model/PublicDataSourceFS.h>


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
                     * 获取<p>模型版本id, DescribeTrainingModelVersion查询模型接口时的id<br>自动学习类型的模型填写自动学习的任务id</p>
                     * @return ModelVersionId <p>模型版本id, DescribeTrainingModelVersion查询模型接口时的id<br>自动学习类型的模型填写自动学习的任务id</p>
                     * 
                     */
                    std::string GetModelVersionId() const;

                    /**
                     * 设置<p>模型版本id, DescribeTrainingModelVersion查询模型接口时的id<br>自动学习类型的模型填写自动学习的任务id</p>
                     * @param _modelVersionId <p>模型版本id, DescribeTrainingModelVersion查询模型接口时的id<br>自动学习类型的模型填写自动学习的任务id</p>
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
                     * 获取<p>模型id</p>
                     * @return ModelId <p>模型id</p>
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置<p>模型id</p>
                     * @param _modelId <p>模型id</p>
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
                     * 获取<p>模型名</p>
                     * @return ModelName <p>模型名</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名</p>
                     * @param _modelName <p>模型名</p>
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
                     * 获取<p>模型版本</p>
                     * @return ModelVersion <p>模型版本</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>模型版本</p>
                     * @param _modelVersion <p>模型版本</p>
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
                     * 获取<p>模型来源</p>
                     * @return ModelSource <p>模型来源</p>
                     * 
                     */
                    std::string GetModelSource() const;

                    /**
                     * 设置<p>模型来源</p>
                     * @param _modelSource <p>模型来源</p>
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
                     * 获取<p>cos路径信息</p>
                     * @return CosPathInfo <p>cos路径信息</p>
                     * 
                     */
                    CosPathInfo GetCosPathInfo() const;

                    /**
                     * 设置<p>cos路径信息</p>
                     * @param _cosPathInfo <p>cos路径信息</p>
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
                     * 获取<p>GooseFSx的配置，ModelSource为GooseFSx时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GooseFSx <p>GooseFSx的配置，ModelSource为GooseFSx时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GooseFSx GetGooseFSx() const;

                    /**
                     * 设置<p>GooseFSx的配置，ModelSource为GooseFSx时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gooseFSx <p>GooseFSx的配置，ModelSource为GooseFSx时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>模型对应的算法框架，预留</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlgorithmFramework <p>模型对应的算法框架，预留</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlgorithmFramework() const;

                    /**
                     * 设置<p>模型对应的算法框架，预留</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _algorithmFramework <p>模型对应的算法框架，预留</p>
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
                     * 获取<p>默认为 NORMAL, 已加速模型: ACCELERATE, 自动学习模型 AUTO_ML</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelType <p>默认为 NORMAL, 已加速模型: ACCELERATE, 自动学习模型 AUTO_ML</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置<p>默认为 NORMAL, 已加速模型: ACCELERATE, 自动学习模型 AUTO_ML</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelType <p>默认为 NORMAL, 已加速模型: ACCELERATE, 自动学习模型 AUTO_ML</p>
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
                     * 获取<p>模型格式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelFormat <p>模型格式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelFormat() const;

                    /**
                     * 设置<p>模型格式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelFormat <p>模型格式</p>
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
                     * 获取<p>是否为私有化大模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPrivateModel <p>是否为私有化大模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsPrivateModel() const;

                    /**
                     * 设置<p>是否为私有化大模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPrivateModel <p>是否为私有化大模型</p>
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
                     * 获取<p>模型的类别 多模态MultiModal, 文本大模型 LLM</p>
                     * @return ModelCategory <p>模型的类别 多模态MultiModal, 文本大模型 LLM</p>
                     * 
                     */
                    std::string GetModelCategory() const;

                    /**
                     * 设置<p>模型的类别 多模态MultiModal, 文本大模型 LLM</p>
                     * @param _modelCategory <p>模型的类别 多模态MultiModal, 文本大模型 LLM</p>
                     * 
                     */
                    void SetModelCategory(const std::string& _modelCategory);

                    /**
                     * 判断参数 ModelCategory 是否已赋值
                     * @return ModelCategory 是否已赋值
                     * 
                     */
                    bool ModelCategoryHasBeenSet() const;

                    /**
                     * 获取<p>数据源的配置</p>
                     * @return PublicDataSource <p>数据源的配置</p>
                     * 
                     */
                    PublicDataSourceFS GetPublicDataSource() const;

                    /**
                     * 设置<p>数据源的配置</p>
                     * @param _publicDataSource <p>数据源的配置</p>
                     * 
                     */
                    void SetPublicDataSource(const PublicDataSourceFS& _publicDataSource);

                    /**
                     * 判断参数 PublicDataSource 是否已赋值
                     * @return PublicDataSource 是否已赋值
                     * 
                     */
                    bool PublicDataSourceHasBeenSet() const;

                private:

                    /**
                     * <p>模型版本id, DescribeTrainingModelVersion查询模型接口时的id<br>自动学习类型的模型填写自动学习的任务id</p>
                     */
                    std::string m_modelVersionId;
                    bool m_modelVersionIdHasBeenSet;

                    /**
                     * <p>模型id</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>模型名</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>模型版本</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>模型来源</p>
                     */
                    std::string m_modelSource;
                    bool m_modelSourceHasBeenSet;

                    /**
                     * <p>cos路径信息</p>
                     */
                    CosPathInfo m_cosPathInfo;
                    bool m_cosPathInfoHasBeenSet;

                    /**
                     * <p>GooseFSx的配置，ModelSource为GooseFSx时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GooseFSx m_gooseFSx;
                    bool m_gooseFSxHasBeenSet;

                    /**
                     * <p>模型对应的算法框架，预留</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_algorithmFramework;
                    bool m_algorithmFrameworkHasBeenSet;

                    /**
                     * <p>默认为 NORMAL, 已加速模型: ACCELERATE, 自动学习模型 AUTO_ML</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * <p>模型格式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelFormat;
                    bool m_modelFormatHasBeenSet;

                    /**
                     * <p>是否为私有化大模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isPrivateModel;
                    bool m_isPrivateModelHasBeenSet;

                    /**
                     * <p>模型的类别 多模态MultiModal, 文本大模型 LLM</p>
                     */
                    std::string m_modelCategory;
                    bool m_modelCategoryHasBeenSet;

                    /**
                     * <p>数据源的配置</p>
                     */
                    PublicDataSourceFS m_publicDataSource;
                    bool m_publicDataSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODELINFO_H_
