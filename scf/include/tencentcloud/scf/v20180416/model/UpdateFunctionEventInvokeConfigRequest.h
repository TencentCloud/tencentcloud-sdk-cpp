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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONEVENTINVOKECONFIGREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONEVENTINVOKECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/AsyncTriggerConfig.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateFunctionEventInvokeConfig请求参数结构体
                */
                class UpdateFunctionEventInvokeConfigRequest : public AbstractModel
                {
                public:
                    UpdateFunctionEventInvokeConfigRequest();
                    ~UpdateFunctionEventInvokeConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取异步重试配置信息
                     * @return AsyncTriggerConfig 异步重试配置信息
                     * 
                     */
                    AsyncTriggerConfig GetAsyncTriggerConfig() const;

                    /**
                     * 设置异步重试配置信息
                     * @param _asyncTriggerConfig 异步重试配置信息
                     * 
                     */
                    void SetAsyncTriggerConfig(const AsyncTriggerConfig& _asyncTriggerConfig);

                    /**
                     * 判断参数 AsyncTriggerConfig 是否已赋值
                     * @return AsyncTriggerConfig 是否已赋值
                     * 
                     */
                    bool AsyncTriggerConfigHasBeenSet() const;

                    /**
                     * 获取函数名称
                     * @return FunctionName 函数名称
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数名称
                     * @param _functionName 函数名称
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取函数所属命名空间，默认为default
                     * @return Namespace 函数所属命名空间，默认为default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数所属命名空间，默认为default
                     * @param _namespace 函数所属命名空间，默认为default
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * 异步重试配置信息
                     */
                    AsyncTriggerConfig m_asyncTriggerConfig;
                    bool m_asyncTriggerConfigHasBeenSet;

                    /**
                     * 函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数所属命名空间，默认为default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONEVENTINVOKECONFIGREQUEST_H_
