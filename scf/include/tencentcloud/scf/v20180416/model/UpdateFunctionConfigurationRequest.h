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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Environment.h>
#include <tencentcloud/scf/v20180416/model/VpcConfig.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateFunctionConfiguration请求参数结构体
                */
                class UpdateFunctionConfigurationRequest : public AbstractModel
                {
                public:
                    UpdateFunctionConfigurationRequest();
                    ~UpdateFunctionConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要修改的函数名称
                     * @return FunctionName 要修改的函数名称
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置要修改的函数名称
                     * @param FunctionName 要修改的函数名称
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取函数描述。最大支持 1000 个英文字母、数字、空格、逗号和英文句号，支持中文
                     * @return Description 函数描述。最大支持 1000 个英文字母、数字、空格、逗号和英文句号，支持中文
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置函数描述。最大支持 1000 个英文字母、数字、空格、逗号和英文句号，支持中文
                     * @param Description 函数描述。最大支持 1000 个英文字母、数字、空格、逗号和英文句号，支持中文
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取函数运行时内存大小，默认为 128 M，可选范 128 M-1536 M
                     * @return MemorySize 函数运行时内存大小，默认为 128 M，可选范 128 M-1536 M
                     */
                    int64_t GetMemorySize() const;

                    /**
                     * 设置函数运行时内存大小，默认为 128 M，可选范 128 M-1536 M
                     * @param MemorySize 函数运行时内存大小，默认为 128 M，可选范 128 M-1536 M
                     */
                    void SetMemorySize(const int64_t& _memorySize);

                    /**
                     * 判断参数 MemorySize 是否已赋值
                     * @return MemorySize 是否已赋值
                     */
                    bool MemorySizeHasBeenSet() const;

                    /**
                     * 获取函数最长执行时间，单位为秒，可选值范 1-300 秒，默认为 3 秒
                     * @return Timeout 函数最长执行时间，单位为秒，可选值范 1-300 秒，默认为 3 秒
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置函数最长执行时间，单位为秒，可选值范 1-300 秒，默认为 3 秒
                     * @param Timeout 函数最长执行时间，单位为秒，可选值范 1-300 秒，默认为 3 秒
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取函数运行环境，目前仅支持 Python2.7，Python3.6，Nodejs6.10，PHP5， PHP7，Golang1 和 Java8
                     * @return Runtime 函数运行环境，目前仅支持 Python2.7，Python3.6，Nodejs6.10，PHP5， PHP7，Golang1 和 Java8
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置函数运行环境，目前仅支持 Python2.7，Python3.6，Nodejs6.10，PHP5， PHP7，Golang1 和 Java8
                     * @param Runtime 函数运行环境，目前仅支持 Python2.7，Python3.6，Nodejs6.10，PHP5， PHP7，Golang1 和 Java8
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取函数的环境变量
                     * @return Environment 函数的环境变量
                     */
                    Environment GetEnvironment() const;

                    /**
                     * 设置函数的环境变量
                     * @param Environment 函数的环境变量
                     */
                    void SetEnvironment(const Environment& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取函数的私有网络配置
                     * @return VpcConfig 函数的私有网络配置
                     */
                    VpcConfig GetVpcConfig() const;

                    /**
                     * 设置函数的私有网络配置
                     * @param VpcConfig 函数的私有网络配置
                     */
                    void SetVpcConfig(const VpcConfig& _vpcConfig);

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     */
                    bool VpcConfigHasBeenSet() const;

                private:

                    /**
                     * 要修改的函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数描述。最大支持 1000 个英文字母、数字、空格、逗号和英文句号，支持中文
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 函数运行时内存大小，默认为 128 M，可选范 128 M-1536 M
                     */
                    int64_t m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * 函数最长执行时间，单位为秒，可选值范 1-300 秒，默认为 3 秒
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 函数运行环境，目前仅支持 Python2.7，Python3.6，Nodejs6.10，PHP5， PHP7，Golang1 和 Java8
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 函数的环境变量
                     */
                    Environment m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 函数的私有网络配置
                     */
                    VpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCONFIGURATIONREQUEST_H_
