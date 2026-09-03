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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MLFLOWCONFIG_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MLFLOWCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * MLFlow 实验追踪配置
                */
                class MlFlowConfig : public AbstractModel
                {
                public:
                    MlFlowConfig();
                    ~MlFlowConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>MlFlow 追踪模式：local=MlFlow Sidecar / remote=已有 MlFlow Server / none=不启用</p>
                     * @return MlFlowMode <p>MlFlow 追踪模式：local=MlFlow Sidecar / remote=已有 MlFlow Server / none=不启用</p>
                     * 
                     */
                    std::string GetMlFlowMode() const;

                    /**
                     * 设置<p>MlFlow 追踪模式：local=MlFlow Sidecar / remote=已有 MlFlow Server / none=不启用</p>
                     * @param _mlFlowMode <p>MlFlow 追踪模式：local=MlFlow Sidecar / remote=已有 MlFlow Server / none=不启用</p>
                     * 
                     */
                    void SetMlFlowMode(const std::string& _mlFlowMode);

                    /**
                     * 判断参数 MlFlowMode 是否已赋值
                     * @return MlFlowMode 是否已赋值
                     * 
                     */
                    bool MlFlowModeHasBeenSet() const;

                    /**
                     * 获取<p>已有MlFlow Server 的 ID（仅 mlFlowMode=remote 时填写，前端下拉选择后传入）</p>
                     * @return MlFlowServerId <p>已有MlFlow Server 的 ID（仅 mlFlowMode=remote 时填写，前端下拉选择后传入）</p>
                     * 
                     */
                    std::string GetMlFlowServerId() const;

                    /**
                     * 设置<p>已有MlFlow Server 的 ID（仅 mlFlowMode=remote 时填写，前端下拉选择后传入）</p>
                     * @param _mlFlowServerId <p>已有MlFlow Server 的 ID（仅 mlFlowMode=remote 时填写，前端下拉选择后传入）</p>
                     * 
                     */
                    void SetMlFlowServerId(const std::string& _mlFlowServerId);

                    /**
                     * 判断参数 MlFlowServerId 是否已赋值
                     * @return MlFlowServerId 是否已赋值
                     * 
                     */
                    bool MlFlowServerIdHasBeenSet() const;

                    /**
                     * 获取<p>MlFlow Sidecar 持久化存储的 COS 路径（仅 mlFlowMode=local 时填写）</p>
                     * @return MlFlowCosPath <p>MlFlow Sidecar 持久化存储的 COS 路径（仅 mlFlowMode=local 时填写）</p>
                     * 
                     */
                    std::string GetMlFlowCosPath() const;

                    /**
                     * 设置<p>MlFlow Sidecar 持久化存储的 COS 路径（仅 mlFlowMode=local 时填写）</p>
                     * @param _mlFlowCosPath <p>MlFlow Sidecar 持久化存储的 COS 路径（仅 mlFlowMode=local 时填写）</p>
                     * 
                     */
                    void SetMlFlowCosPath(const std::string& _mlFlowCosPath);

                    /**
                     * 判断参数 MlFlowCosPath 是否已赋值
                     * @return MlFlowCosPath 是否已赋值
                     * 
                     */
                    bool MlFlowCosPathHasBeenSet() const;

                private:

                    /**
                     * <p>MlFlow 追踪模式：local=MlFlow Sidecar / remote=已有 MlFlow Server / none=不启用</p>
                     */
                    std::string m_mlFlowMode;
                    bool m_mlFlowModeHasBeenSet;

                    /**
                     * <p>已有MlFlow Server 的 ID（仅 mlFlowMode=remote 时填写，前端下拉选择后传入）</p>
                     */
                    std::string m_mlFlowServerId;
                    bool m_mlFlowServerIdHasBeenSet;

                    /**
                     * <p>MlFlow Sidecar 持久化存储的 COS 路径（仅 mlFlowMode=local 时填写）</p>
                     */
                    std::string m_mlFlowCosPath;
                    bool m_mlFlowCosPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MLFLOWCONFIG_H_
