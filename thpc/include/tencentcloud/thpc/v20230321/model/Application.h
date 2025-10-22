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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_APPLICATION_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_APPLICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/CommandItem.h>
#include <tencentcloud/thpc/v20230321/model/StorageMount.h>
#include <tencentcloud/thpc/v20230321/model/EnvVar.h>
#include <tencentcloud/thpc/v20230321/model/Docker.h>
#include <tencentcloud/thpc/v20230321/model/OutputRedirect.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 任务的应用环境配置信息。
                */
                class Application : public AbstractModel
                {
                public:
                    Application();
                    ~Application() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取待执行脚本命令。
                     * @return Commands 待执行脚本命令。
                     * 
                     */
                    std::vector<CommandItem> GetCommands() const;

                    /**
                     * 设置待执行脚本命令。
                     * @param _commands 待执行脚本命令。
                     * 
                     */
                    void SetCommands(const std::vector<CommandItem>& _commands);

                    /**
                     * 判断参数 Commands 是否已赋值
                     * @return Commands 是否已赋值
                     * 
                     */
                    bool CommandsHasBeenSet() const;

                    /**
                     * 获取存储目录挂载配置。
                     * @return StorageMounts 存储目录挂载配置。
                     * 
                     */
                    std::vector<StorageMount> GetStorageMounts() const;

                    /**
                     * 设置存储目录挂载配置。
                     * @param _storageMounts 存储目录挂载配置。
                     * 
                     */
                    void SetStorageMounts(const std::vector<StorageMount>& _storageMounts);

                    /**
                     * 判断参数 StorageMounts 是否已赋值
                     * @return StorageMounts 是否已赋值
                     * 
                     */
                    bool StorageMountsHasBeenSet() const;

                    /**
                     * 获取用户自定义环境变量。
                     * @return EnvVars 用户自定义环境变量。
                     * 
                     */
                    std::vector<EnvVar> GetEnvVars() const;

                    /**
                     * 设置用户自定义环境变量。
                     * @param _envVars 用户自定义环境变量。
                     * 
                     */
                    void SetEnvVars(const std::vector<EnvVar>& _envVars);

                    /**
                     * 判断参数 EnvVars 是否已赋值
                     * @return EnvVars 是否已赋值
                     * 
                     */
                    bool EnvVarsHasBeenSet() const;

                    /**
                     * 获取容器配置信息。
                     * @return Docker 容器配置信息。
                     * 
                     */
                    Docker GetDocker() const;

                    /**
                     * 设置容器配置信息。
                     * @param _docker 容器配置信息。
                     * 
                     */
                    void SetDocker(const Docker& _docker);

                    /**
                     * 判断参数 Docker 是否已赋值
                     * @return Docker 是否已赋值
                     * 
                     */
                    bool DockerHasBeenSet() const;

                    /**
                     * 获取无
                     * @return OutputRedirect 无
                     * 
                     */
                    OutputRedirect GetOutputRedirect() const;

                    /**
                     * 设置无
                     * @param _outputRedirect 无
                     * 
                     */
                    void SetOutputRedirect(const OutputRedirect& _outputRedirect);

                    /**
                     * 判断参数 OutputRedirect 是否已赋值
                     * @return OutputRedirect 是否已赋值
                     * 
                     */
                    bool OutputRedirectHasBeenSet() const;

                    /**
                     * 获取表示所选训练框架，支持可选参数
 
- PyTorch：表示提交PyTorch训练作业
- Custom：表示用户自定义作业

默认参数为：Custom
                     * @return JobType 表示所选训练框架，支持可选参数
 
- PyTorch：表示提交PyTorch训练作业
- Custom：表示用户自定义作业

默认参数为：Custom
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置表示所选训练框架，支持可选参数
 
- PyTorch：表示提交PyTorch训练作业
- Custom：表示用户自定义作业

默认参数为：Custom
                     * @param _jobType 表示所选训练框架，支持可选参数
 
- PyTorch：表示提交PyTorch训练作业
- Custom：表示用户自定义作业

默认参数为：Custom
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                private:

                    /**
                     * 待执行脚本命令。
                     */
                    std::vector<CommandItem> m_commands;
                    bool m_commandsHasBeenSet;

                    /**
                     * 存储目录挂载配置。
                     */
                    std::vector<StorageMount> m_storageMounts;
                    bool m_storageMountsHasBeenSet;

                    /**
                     * 用户自定义环境变量。
                     */
                    std::vector<EnvVar> m_envVars;
                    bool m_envVarsHasBeenSet;

                    /**
                     * 容器配置信息。
                     */
                    Docker m_docker;
                    bool m_dockerHasBeenSet;

                    /**
                     * 无
                     */
                    OutputRedirect m_outputRedirect;
                    bool m_outputRedirectHasBeenSet;

                    /**
                     * 表示所选训练框架，支持可选参数
 
- PyTorch：表示提交PyTorch训练作业
- Custom：表示用户自定义作业

默认参数为：Custom
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_APPLICATION_H_
