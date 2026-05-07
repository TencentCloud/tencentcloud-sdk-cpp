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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MANAGEDAIMODEL_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MANAGEDAIMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/ManagedAIModelSpec.h>
#include <tencentcloud/tcb/v20180608/model/ManagedAIModelChargingInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 托管型AI 模型信息
                */
                class ManagedAIModel : public AbstractModel
                {
                public:
                    ManagedAIModel();
                    ~ManagedAIModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型名</p>
                     * @return Model <p>模型名</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型名</p>
                     * @param _model <p>模型名</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>是否开启MCP</p>
                     * @return EnableMCP <p>是否开启MCP</p>
                     * 
                     */
                    bool GetEnableMCP() const;

                    /**
                     * 设置<p>是否开启MCP</p>
                     * @param _enableMCP <p>是否开启MCP</p>
                     * 
                     */
                    void SetEnableMCP(const bool& _enableMCP);

                    /**
                     * 判断参数 EnableMCP 是否已赋值
                     * @return EnableMCP 是否已赋值
                     * 
                     */
                    bool EnableMCPHasBeenSet() const;

                    /**
                     * 获取<p>模型规格</p>
                     * @return ModelSpec <p>模型规格</p>
                     * 
                     */
                    ManagedAIModelSpec GetModelSpec() const;

                    /**
                     * 设置<p>模型规格</p>
                     * @param _modelSpec <p>模型规格</p>
                     * 
                     */
                    void SetModelSpec(const ManagedAIModelSpec& _modelSpec);

                    /**
                     * 判断参数 ModelSpec 是否已赋值
                     * @return ModelSpec 是否已赋值
                     * 
                     */
                    bool ModelSpecHasBeenSet() const;

                    /**
                     * 获取<p>模型计费信息</p>
                     * @return ModelChargingInfo <p>模型计费信息</p>
                     * 
                     */
                    std::vector<ManagedAIModelChargingInfo> GetModelChargingInfo() const;

                    /**
                     * 设置<p>模型计费信息</p>
                     * @param _modelChargingInfo <p>模型计费信息</p>
                     * 
                     */
                    void SetModelChargingInfo(const std::vector<ManagedAIModelChargingInfo>& _modelChargingInfo);

                    /**
                     * 判断参数 ModelChargingInfo 是否已赋值
                     * @return ModelChargingInfo 是否已赋值
                     * 
                     */
                    bool ModelChargingInfoHasBeenSet() const;

                private:

                    /**
                     * <p>模型名</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>是否开启MCP</p>
                     */
                    bool m_enableMCP;
                    bool m_enableMCPHasBeenSet;

                    /**
                     * <p>模型规格</p>
                     */
                    ManagedAIModelSpec m_modelSpec;
                    bool m_modelSpecHasBeenSet;

                    /**
                     * <p>模型计费信息</p>
                     */
                    std::vector<ManagedAIModelChargingInfo> m_modelChargingInfo;
                    bool m_modelChargingInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MANAGEDAIMODEL_H_
