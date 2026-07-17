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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCECONTAINERCONFIGFORMODIFY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCECONTAINERCONFIGFORMODIFY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceTCRRepositoryConfig.h>
#include <tencentcloud/teo/v20220901/model/InferenceEnvironmentVariable.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 推理服务容器配置的修改参数。
                */
                class InferenceContainerConfigForModify : public AbstractModel
                {
                public:
                    InferenceContainerConfigForModify();
                    ~InferenceContainerConfigForModify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像类型。取值有：<li>TCR：腾讯云容器镜像服务的镜像。</li>
                     * @return ImageType 镜像类型。取值有：<li>TCR：腾讯云容器镜像服务的镜像。</li>
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置镜像类型。取值有：<li>TCR：腾讯云容器镜像服务的镜像。</li>
                     * @param _imageType 镜像类型。取值有：<li>TCR：腾讯云容器镜像服务的镜像。</li>
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取TCR 镜像仓库信息。当 ImageType 为 TCR 时必填。
                     * @return TcrRepositoryConfig TCR 镜像仓库信息。当 ImageType 为 TCR 时必填。
                     * 
                     */
                    InferenceTCRRepositoryConfig GetTcrRepositoryConfig() const;

                    /**
                     * 设置TCR 镜像仓库信息。当 ImageType 为 TCR 时必填。
                     * @param _tcrRepositoryConfig TCR 镜像仓库信息。当 ImageType 为 TCR 时必填。
                     * 
                     */
                    void SetTcrRepositoryConfig(const InferenceTCRRepositoryConfig& _tcrRepositoryConfig);

                    /**
                     * 判断参数 TcrRepositoryConfig 是否已赋值
                     * @return TcrRepositoryConfig 是否已赋值
                     * 
                     */
                    bool TcrRepositoryConfigHasBeenSet() const;

                    /**
                     * 获取容器启动时执行的命令，未填写时默认使用镜像的 Entrypoint/CMD。最长支持 1024 字符。
                     * @return StartupCommand 容器启动时执行的命令，未填写时默认使用镜像的 Entrypoint/CMD。最长支持 1024 字符。
                     * 
                     */
                    std::string GetStartupCommand() const;

                    /**
                     * 设置容器启动时执行的命令，未填写时默认使用镜像的 Entrypoint/CMD。最长支持 1024 字符。
                     * @param _startupCommand 容器启动时执行的命令，未填写时默认使用镜像的 Entrypoint/CMD。最长支持 1024 字符。
                     * 
                     */
                    void SetStartupCommand(const std::string& _startupCommand);

                    /**
                     * 判断参数 StartupCommand 是否已赋值
                     * @return StartupCommand 是否已赋值
                     * 
                     */
                    bool StartupCommandHasBeenSet() const;

                    /**
                     * 获取容器运行时的环境变量。最多支持 10 个变量。
                     * @return EnvironmentVariables 容器运行时的环境变量。最多支持 10 个变量。
                     * 
                     */
                    std::vector<InferenceEnvironmentVariable> GetEnvironmentVariables() const;

                    /**
                     * 设置容器运行时的环境变量。最多支持 10 个变量。
                     * @param _environmentVariables 容器运行时的环境变量。最多支持 10 个变量。
                     * 
                     */
                    void SetEnvironmentVariables(const std::vector<InferenceEnvironmentVariable>& _environmentVariables);

                    /**
                     * 判断参数 EnvironmentVariables 是否已赋值
                     * @return EnvironmentVariables 是否已赋值
                     * 
                     */
                    bool EnvironmentVariablesHasBeenSet() const;

                private:

                    /**
                     * 镜像类型。取值有：<li>TCR：腾讯云容器镜像服务的镜像。</li>
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * TCR 镜像仓库信息。当 ImageType 为 TCR 时必填。
                     */
                    InferenceTCRRepositoryConfig m_tcrRepositoryConfig;
                    bool m_tcrRepositoryConfigHasBeenSet;

                    /**
                     * 容器启动时执行的命令，未填写时默认使用镜像的 Entrypoint/CMD。最长支持 1024 字符。
                     */
                    std::string m_startupCommand;
                    bool m_startupCommandHasBeenSet;

                    /**
                     * 容器运行时的环境变量。最多支持 10 个变量。
                     */
                    std::vector<InferenceEnvironmentVariable> m_environmentVariables;
                    bool m_environmentVariablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCECONTAINERCONFIGFORMODIFY_H_
