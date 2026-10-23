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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_AGENTRUNTIMECONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_AGENTRUNTIMECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/AgentRuntimeCode.h>
#include <tencentcloud/tcb/v20180608/model/AgentRuntimeSessionConfig.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * Agent 云函数配置
                */
                class AgentRuntimeConfig : public AbstractModel
                {
                public:
                    AgentRuntimeConfig();
                    ~AgentRuntimeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取函数代码. 注意：不能同时指定Cos和ZipFile
                     * @return Code 函数代码. 注意：不能同时指定Cos和ZipFile
                     * 
                     */
                    AgentRuntimeCode GetCode() const;

                    /**
                     * 设置函数代码. 注意：不能同时指定Cos和ZipFile
                     * @param _code 函数代码. 注意：不能同时指定Cos和ZipFile
                     * 
                     */
                    void SetCode(const AgentRuntimeCode& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取函数运行环境，默认Python2.7
目前支持的运行环境：
- Python2.7
- Python3.6
- Python3.7
- Python3.9
- Python3.10
- Nodejs6.10
- Nodejs8.9
- Nodejs10.15
- Nodejs12.16
- Nodejs14.18
- Nodejs16.13
- Nodejs18.15
- Php5.6
- Php7(7.2版本)
- Php7.4
- Php8.0
- Go1
- Java8
- CustomRuntime
                     * @return Runtime 函数运行环境，默认Python2.7
目前支持的运行环境：
- Python2.7
- Python3.6
- Python3.7
- Python3.9
- Python3.10
- Nodejs6.10
- Nodejs8.9
- Nodejs10.15
- Nodejs12.16
- Nodejs14.18
- Nodejs16.13
- Nodejs18.15
- Php5.6
- Php7(7.2版本)
- Php7.4
- Php8.0
- Go1
- Java8
- CustomRuntime
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置函数运行环境，默认Python2.7
目前支持的运行环境：
- Python2.7
- Python3.6
- Python3.7
- Python3.9
- Python3.10
- Nodejs6.10
- Nodejs8.9
- Nodejs10.15
- Nodejs12.16
- Nodejs14.18
- Nodejs16.13
- Nodejs18.15
- Php5.6
- Php7(7.2版本)
- Php7.4
- Php8.0
- Go1
- Java8
- CustomRuntime
                     * @param _runtime 函数运行环境，默认Python2.7
目前支持的运行环境：
- Python2.7
- Python3.6
- Python3.7
- Python3.9
- Python3.10
- Nodejs6.10
- Nodejs8.9
- Nodejs10.15
- Nodejs12.16
- Nodejs14.18
- Nodejs16.13
- Nodejs18.15
- Php5.6
- Php7(7.2版本)
- Php7.4
- Php8.0
- Go1
- Java8
- CustomRuntime
                     * 
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取函数运行时内存大小，默认为 128M，可选范围 64、128MB-3072MB，并且以 128MB 为阶梯
                     * @return MemorySize 函数运行时内存大小，默认为 128M，可选范围 64、128MB-3072MB，并且以 128MB 为阶梯
                     * 
                     */
                    int64_t GetMemorySize() const;

                    /**
                     * 设置函数运行时内存大小，默认为 128M，可选范围 64、128MB-3072MB，并且以 128MB 为阶梯
                     * @param _memorySize 函数运行时内存大小，默认为 128M，可选范围 64、128MB-3072MB，并且以 128MB 为阶梯
                     * 
                     */
                    void SetMemorySize(const int64_t& _memorySize);

                    /**
                     * 判断参数 MemorySize 是否已赋值
                     * @return MemorySize 是否已赋值
                     * 
                     */
                    bool MemorySizeHasBeenSet() const;

                    /**
                     * 获取函数是否自动安装依赖
                     * @return InstallDependency 函数是否自动安装依赖
                     * 
                     */
                    bool GetInstallDependency() const;

                    /**
                     * 设置函数是否自动安装依赖
                     * @param _installDependency 函数是否自动安装依赖
                     * 
                     */
                    void SetInstallDependency(const bool& _installDependency);

                    /**
                     * 判断参数 InstallDependency 是否已赋值
                     * @return InstallDependency 是否已赋值
                     * 
                     */
                    bool InstallDependencyHasBeenSet() const;

                    /**
                     * 获取函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒
                     * @return Timeout 函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒
                     * @param _timeout 函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取函数的环境变量，满足json格式
                     * @return Environment 函数的环境变量，满足json格式
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置函数的环境变量，满足json格式
                     * @param _environment 函数的环境变量，满足json格式
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取Agent Session 配置
                     * @return SessionConfig Agent Session 配置
                     * 
                     */
                    AgentRuntimeSessionConfig GetSessionConfig() const;

                    /**
                     * 设置Agent Session 配置
                     * @param _sessionConfig Agent Session 配置
                     * 
                     */
                    void SetSessionConfig(const AgentRuntimeSessionConfig& _sessionConfig);

                    /**
                     * 判断参数 SessionConfig 是否已赋值
                     * @return SessionConfig 是否已赋值
                     * 
                     */
                    bool SessionConfigHasBeenSet() const;

                private:

                    /**
                     * 函数代码. 注意：不能同时指定Cos和ZipFile
                     */
                    AgentRuntimeCode m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 函数运行环境，默认Python2.7
目前支持的运行环境：
- Python2.7
- Python3.6
- Python3.7
- Python3.9
- Python3.10
- Nodejs6.10
- Nodejs8.9
- Nodejs10.15
- Nodejs12.16
- Nodejs14.18
- Nodejs16.13
- Nodejs18.15
- Php5.6
- Php7(7.2版本)
- Php7.4
- Php8.0
- Go1
- Java8
- CustomRuntime
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 函数运行时内存大小，默认为 128M，可选范围 64、128MB-3072MB，并且以 128MB 为阶梯
                     */
                    int64_t m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * 函数是否自动安装依赖
                     */
                    bool m_installDependency;
                    bool m_installDependencyHasBeenSet;

                    /**
                     * 函数最长执行时间，单位为秒，可选值范围 1-900 秒，默认为 3 秒
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 函数的环境变量，满足json格式
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * Agent Session 配置
                     */
                    AgentRuntimeSessionConfig m_sessionConfig;
                    bool m_sessionConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_AGENTRUNTIMECONFIG_H_
