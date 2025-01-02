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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACEUSAGE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACEUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 名称空间已使用信息
                */
                class NamespaceUsage : public AbstractModel
                {
                public:
                    NamespaceUsage();
                    ~NamespaceUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取函数数组
                     * @return Functions 函数数组
                     * 
                     */
                    std::vector<std::string> GetFunctions() const;

                    /**
                     * 设置函数数组
                     * @param _functions 函数数组
                     * 
                     */
                    void SetFunctions(const std::vector<std::string>& _functions);

                    /**
                     * 判断参数 Functions 是否已赋值
                     * @return Functions 是否已赋值
                     * 
                     */
                    bool FunctionsHasBeenSet() const;

                    /**
                     * 获取命名空间名称
                     * @return Namespace 命名空间名称
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespace 命名空间名称
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取命名空间函数个数
                     * @return FunctionsCount 命名空间函数个数
                     * 
                     */
                    int64_t GetFunctionsCount() const;

                    /**
                     * 设置命名空间函数个数
                     * @param _functionsCount 命名空间函数个数
                     * 
                     */
                    void SetFunctionsCount(const int64_t& _functionsCount);

                    /**
                     * 判断参数 FunctionsCount 是否已赋值
                     * @return FunctionsCount 是否已赋值
                     * 
                     */
                    bool FunctionsCountHasBeenSet() const;

                    /**
                     * 获取命名空间配额总量
                     * @return TotalConcurrencyMem 命名空间配额总量
                     * 
                     */
                    int64_t GetTotalConcurrencyMem() const;

                    /**
                     * 设置命名空间配额总量
                     * @param _totalConcurrencyMem 命名空间配额总量
                     * 
                     */
                    void SetTotalConcurrencyMem(const int64_t& _totalConcurrencyMem);

                    /**
                     * 判断参数 TotalConcurrencyMem 是否已赋值
                     * @return TotalConcurrencyMem 是否已赋值
                     * 
                     */
                    bool TotalConcurrencyMemHasBeenSet() const;

                    /**
                     * 获取命名空间并发使用量
                     * @return TotalAllocatedConcurrencyMem 命名空间并发使用量
                     * 
                     */
                    int64_t GetTotalAllocatedConcurrencyMem() const;

                    /**
                     * 设置命名空间并发使用量
                     * @param _totalAllocatedConcurrencyMem 命名空间并发使用量
                     * 
                     */
                    void SetTotalAllocatedConcurrencyMem(const int64_t& _totalAllocatedConcurrencyMem);

                    /**
                     * 判断参数 TotalAllocatedConcurrencyMem 是否已赋值
                     * @return TotalAllocatedConcurrencyMem 是否已赋值
                     * 
                     */
                    bool TotalAllocatedConcurrencyMemHasBeenSet() const;

                    /**
                     * 获取命名空间预置使用量
                     * @return TotalAllocatedProvisionedMem 命名空间预置使用量
                     * 
                     */
                    int64_t GetTotalAllocatedProvisionedMem() const;

                    /**
                     * 设置命名空间预置使用量
                     * @param _totalAllocatedProvisionedMem 命名空间预置使用量
                     * 
                     */
                    void SetTotalAllocatedProvisionedMem(const int64_t& _totalAllocatedProvisionedMem);

                    /**
                     * 判断参数 TotalAllocatedProvisionedMem 是否已赋值
                     * @return TotalAllocatedProvisionedMem 是否已赋值
                     * 
                     */
                    bool TotalAllocatedProvisionedMemHasBeenSet() const;

                private:

                    /**
                     * 函数数组
                     */
                    std::vector<std::string> m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 命名空间函数个数
                     */
                    int64_t m_functionsCount;
                    bool m_functionsCountHasBeenSet;

                    /**
                     * 命名空间配额总量
                     */
                    int64_t m_totalConcurrencyMem;
                    bool m_totalConcurrencyMemHasBeenSet;

                    /**
                     * 命名空间并发使用量
                     */
                    int64_t m_totalAllocatedConcurrencyMem;
                    bool m_totalAllocatedConcurrencyMemHasBeenSet;

                    /**
                     * 命名空间预置使用量
                     */
                    int64_t m_totalAllocatedProvisionedMem;
                    bool m_totalAllocatedProvisionedMemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACEUSAGE_H_
