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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_PUTTOTALCONCURRENCYCONFIGREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_PUTTOTALCONCURRENCYCONFIGREQUEST_H_

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
                * PutTotalConcurrencyConfig请求参数结构体
                */
                class PutTotalConcurrencyConfigRequest : public AbstractModel
                {
                public:
                    PutTotalConcurrencyConfigRequest();
                    ~PutTotalConcurrencyConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取账号并发内存配额，注：账号并发内存配额下限：用户已用并发内存总额 + 12800
                     * @return TotalConcurrencyMem 账号并发内存配额，注：账号并发内存配额下限：用户已用并发内存总额 + 12800
                     * 
                     */
                    uint64_t GetTotalConcurrencyMem() const;

                    /**
                     * 设置账号并发内存配额，注：账号并发内存配额下限：用户已用并发内存总额 + 12800
                     * @param _totalConcurrencyMem 账号并发内存配额，注：账号并发内存配额下限：用户已用并发内存总额 + 12800
                     * 
                     */
                    void SetTotalConcurrencyMem(const uint64_t& _totalConcurrencyMem);

                    /**
                     * 判断参数 TotalConcurrencyMem 是否已赋值
                     * @return TotalConcurrencyMem 是否已赋值
                     * 
                     */
                    bool TotalConcurrencyMemHasBeenSet() const;

                    /**
                     * 获取命名空间，默认为default
                     * @return Namespace 命名空间，默认为default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，默认为default
                     * @param _namespace 命名空间，默认为default
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
                     * 账号并发内存配额，注：账号并发内存配额下限：用户已用并发内存总额 + 12800
                     */
                    uint64_t m_totalConcurrencyMem;
                    bool m_totalConcurrencyMemHasBeenSet;

                    /**
                     * 命名空间，默认为default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_PUTTOTALCONCURRENCYCONFIGREQUEST_H_
