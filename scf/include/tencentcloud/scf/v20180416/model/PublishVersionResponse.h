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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_PUBLISHVERSIONRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_PUBLISHVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * PublishVersion返回参数结构体
                */
                class PublishVersionResponse : public AbstractModel
                {
                public:
                    PublishVersionResponse();
                    ~PublishVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取函数的版本
                     * @return FunctionVersion 函数的版本
                     * 
                     */
                    std::string GetFunctionVersion() const;

                    /**
                     * 判断参数 FunctionVersion 是否已赋值
                     * @return FunctionVersion 是否已赋值
                     * 
                     */
                    bool FunctionVersionHasBeenSet() const;

                    /**
                     * 获取代码大小
                     * @return CodeSize 代码大小
                     * 
                     */
                    int64_t GetCodeSize() const;

                    /**
                     * 判断参数 CodeSize 是否已赋值
                     * @return CodeSize 是否已赋值
                     * 
                     */
                    bool CodeSizeHasBeenSet() const;

                    /**
                     * 获取最大可用内存
                     * @return MemorySize 最大可用内存
                     * 
                     */
                    int64_t GetMemorySize() const;

                    /**
                     * 判断参数 MemorySize 是否已赋值
                     * @return MemorySize 是否已赋值
                     * 
                     */
                    bool MemorySizeHasBeenSet() const;

                    /**
                     * 获取函数的描述
                     * @return Description 函数的描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取函数的入口
                     * @return Handler 函数的入口
                     * 
                     */
                    std::string GetHandler() const;

                    /**
                     * 判断参数 Handler 是否已赋值
                     * @return Handler 是否已赋值
                     * 
                     */
                    bool HandlerHasBeenSet() const;

                    /**
                     * 获取函数的超时时间
                     * @return Timeout 函数的超时时间
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取函数的运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Runtime 函数的运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取函数的命名空间
                     * @return Namespace 函数的命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * 函数的版本
                     */
                    std::string m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                    /**
                     * 代码大小
                     */
                    int64_t m_codeSize;
                    bool m_codeSizeHasBeenSet;

                    /**
                     * 最大可用内存
                     */
                    int64_t m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * 函数的描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 函数的入口
                     */
                    std::string m_handler;
                    bool m_handlerHasBeenSet;

                    /**
                     * 函数的超时时间
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 函数的运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 函数的命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_PUBLISHVERSIONRESPONSE_H_
