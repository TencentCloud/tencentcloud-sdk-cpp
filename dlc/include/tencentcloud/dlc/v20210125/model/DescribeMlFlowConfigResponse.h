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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEMLFLOWCONFIGRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEMLFLOWCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeMlFlowConfig返回参数结构体
                */
                class DescribeMlFlowConfigResponse : public AbstractModel
                {
                public:
                    DescribeMlFlowConfigResponse();
                    ~DescribeMlFlowConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>MLflow 的实验 ID，对应训练作业配置</p>
                     * @return ExperimentID <p>MLflow 的实验 ID，对应训练作业配置</p>
                     * 
                     */
                    std::string GetExperimentID() const;

                    /**
                     * 判断参数 ExperimentID 是否已赋值
                     * @return ExperimentID 是否已赋值
                     * 
                     */
                    bool ExperimentIDHasBeenSet() const;

                    /**
                     * 获取<p>MLflow 的 RunID，对应训练作业实例 ID</p>
                     * @return RunID <p>MLflow 的 RunID，对应训练作业实例 ID</p>
                     * 
                     */
                    std::string GetRunID() const;

                    /**
                     * 判断参数 RunID 是否已赋值
                     * @return RunID 是否已赋值
                     * 
                     */
                    bool RunIDHasBeenSet() const;

                    /**
                     * 获取<p>实例级 MLflow 模式：local / remote / none。云上一般为 Remote</p><p>枚举值：</p><ul><li>remote： 使用远程 MLflow </li><li>local： 使用本地启动的 MLflow</li><li>none： 不启用 MLflow</li></ul>
                     * @return MlFlowMode <p>实例级 MLflow 模式：local / remote / none。云上一般为 Remote</p><p>枚举值：</p><ul><li>remote： 使用远程 MLflow </li><li>local： 使用本地启动的 MLflow</li><li>none： 不启用 MLflow</li></ul>
                     * 
                     */
                    std::string GetMlFlowMode() const;

                    /**
                     * 判断参数 MlFlowMode 是否已赋值
                     * @return MlFlowMode 是否已赋值
                     * 
                     */
                    bool MlFlowModeHasBeenSet() const;

                    /**
                     * 获取<p>实例级 MLflow 访问 URL</p>
                     * @return MlFlowUrl <p>实例级 MLflow 访问 URL</p>
                     * 
                     */
                    std::string GetMlFlowUrl() const;

                    /**
                     * 判断参数 MlFlowUrl 是否已赋值
                     * @return MlFlowUrl 是否已赋值
                     * 
                     */
                    bool MlFlowUrlHasBeenSet() const;

                private:

                    /**
                     * <p>MLflow 的实验 ID，对应训练作业配置</p>
                     */
                    std::string m_experimentID;
                    bool m_experimentIDHasBeenSet;

                    /**
                     * <p>MLflow 的 RunID，对应训练作业实例 ID</p>
                     */
                    std::string m_runID;
                    bool m_runIDHasBeenSet;

                    /**
                     * <p>实例级 MLflow 模式：local / remote / none。云上一般为 Remote</p><p>枚举值：</p><ul><li>remote： 使用远程 MLflow </li><li>local： 使用本地启动的 MLflow</li><li>none： 不启用 MLflow</li></ul>
                     */
                    std::string m_mlFlowMode;
                    bool m_mlFlowModeHasBeenSet;

                    /**
                     * <p>实例级 MLflow 访问 URL</p>
                     */
                    std::string m_mlFlowUrl;
                    bool m_mlFlowUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEMLFLOWCONFIGRESPONSE_H_
