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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MODELACCELERATEVERSION_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MODELACCELERATEVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ModelSource.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 优化模型版本列表
                */
                class ModelAccelerateVersion : public AbstractModel
                {
                public:
                    ModelAccelerateVersion();
                    ~ModelAccelerateVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelId 模型id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelId 模型id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取优化模型版本id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelVersionId 优化模型版本id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelVersionId() const;

                    /**
                     * 设置优化模型版本id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelVersionId 优化模型版本id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取优化任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelJobId 优化任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelJobId() const;

                    /**
                     * 设置优化任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelJobId 优化任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelJobId(const std::string& _modelJobId);

                    /**
                     * 判断参数 ModelJobId 是否已赋值
                     * @return ModelJobId 是否已赋值
                     * 
                     */
                    bool ModelJobIdHasBeenSet() const;

                    /**
                     * 获取优化任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelJobName 优化任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelJobName() const;

                    /**
                     * 设置优化任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelJobName 优化任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelJobName(const std::string& _modelJobName);

                    /**
                     * 判断参数 ModelJobName 是否已赋值
                     * @return ModelJobName 是否已赋值
                     * 
                     */
                    bool ModelJobNameHasBeenSet() const;

                    /**
                     * 获取优化后模型版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelVersion 优化后模型版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置优化后模型版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelVersion 优化后模型版本
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取加速比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpeedUp 加速比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpeedUp() const;

                    /**
                     * 设置加速比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _speedUp 加速比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpeedUp(const std::string& _speedUp);

                    /**
                     * 判断参数 SpeedUp 是否已赋值
                     * @return SpeedUp 是否已赋值
                     * 
                     */
                    bool SpeedUpHasBeenSet() const;

                    /**
                     * 获取模型来源/任务名称/任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelSource 模型来源/任务名称/任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelSource GetModelSource() const;

                    /**
                     * 设置模型来源/任务名称/任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelSource 模型来源/任务名称/任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelSource(const ModelSource& _modelSource);

                    /**
                     * 判断参数 ModelSource 是否已赋值
                     * @return ModelSource 是否已赋值
                     * 
                     */
                    bool ModelSourceHasBeenSet() const;

                    /**
                     * 获取模型cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosPathInfo 模型cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CosPathInfo GetCosPathInfo() const;

                    /**
                     * 设置模型cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosPathInfo 模型cos路径
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取模型规范
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelFormat 模型规范
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelFormat() const;

                    /**
                     * 设置模型规范
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelFormat 模型规范
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
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Progress 进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _progress 进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMsg 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMsg 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GPUType GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGPUType() const;

                    /**
                     * 设置GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gPUType GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGPUType(const std::string& _gPUType);

                    /**
                     * 判断参数 GPUType 是否已赋值
                     * @return GPUType 是否已赋值
                     * 
                     */
                    bool GPUTypeHasBeenSet() const;

                    /**
                     * 获取模型cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelCosPath 模型cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CosPathInfo GetModelCosPath() const;

                    /**
                     * 设置模型cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelCosPath 模型cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelCosPath(const CosPathInfo& _modelCosPath);

                    /**
                     * 判断参数 ModelCosPath 是否已赋值
                     * @return ModelCosPath 是否已赋值
                     * 
                     */
                    bool ModelCosPathHasBeenSet() const;

                private:

                    /**
                     * 模型id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 优化模型版本id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelVersionId;
                    bool m_modelVersionIdHasBeenSet;

                    /**
                     * 优化任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelJobId;
                    bool m_modelJobIdHasBeenSet;

                    /**
                     * 优化任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelJobName;
                    bool m_modelJobNameHasBeenSet;

                    /**
                     * 优化后模型版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 加速比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_speedUp;
                    bool m_speedUpHasBeenSet;

                    /**
                     * 模型来源/任务名称/任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelSource m_modelSource;
                    bool m_modelSourceHasBeenSet;

                    /**
                     * 模型cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo m_cosPathInfo;
                    bool m_cosPathInfoHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模型规范
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelFormat;
                    bool m_modelFormatHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gPUType;
                    bool m_gPUTypeHasBeenSet;

                    /**
                     * 模型cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo m_modelCosPath;
                    bool m_modelCosPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODELACCELERATEVERSION_H_
