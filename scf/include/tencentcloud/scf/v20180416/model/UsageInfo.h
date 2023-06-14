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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_USAGEINFO_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_USAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/NamespaceUsage.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 已使用的信息
                */
                class UsageInfo : public AbstractModel
                {
                public:
                    UsageInfo();
                    ~UsageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间个数
                     * @return NamespacesCount 命名空间个数
                     * 
                     */
                    int64_t GetNamespacesCount() const;

                    /**
                     * 设置命名空间个数
                     * @param _namespacesCount 命名空间个数
                     * 
                     */
                    void SetNamespacesCount(const int64_t& _namespacesCount);

                    /**
                     * 判断参数 NamespacesCount 是否已赋值
                     * @return NamespacesCount 是否已赋值
                     * 
                     */
                    bool NamespacesCountHasBeenSet() const;

                    /**
                     * 获取命名空间详情
                     * @return Namespace 命名空间详情
                     * 
                     */
                    std::vector<NamespaceUsage> GetNamespace() const;

                    /**
                     * 设置命名空间详情
                     * @param _namespace 命名空间详情
                     * 
                     */
                    void SetNamespace(const std::vector<NamespaceUsage>& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取当前地域用户并发内存配额上限
                     * @return TotalConcurrencyMem 当前地域用户并发内存配额上限
                     * 
                     */
                    int64_t GetTotalConcurrencyMem() const;

                    /**
                     * 设置当前地域用户并发内存配额上限
                     * @param _totalConcurrencyMem 当前地域用户并发内存配额上限
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
                     * 获取当前地域用户已配置并发内存额度
                     * @return TotalAllocatedConcurrencyMem 当前地域用户已配置并发内存额度
                     * 
                     */
                    int64_t GetTotalAllocatedConcurrencyMem() const;

                    /**
                     * 设置当前地域用户已配置并发内存额度
                     * @param _totalAllocatedConcurrencyMem 当前地域用户已配置并发内存额度
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
                     * 获取用户实际配置的账号并发配额
                     * @return UserConcurrencyMemLimit 用户实际配置的账号并发配额
                     * 
                     */
                    int64_t GetUserConcurrencyMemLimit() const;

                    /**
                     * 设置用户实际配置的账号并发配额
                     * @param _userConcurrencyMemLimit 用户实际配置的账号并发配额
                     * 
                     */
                    void SetUserConcurrencyMemLimit(const int64_t& _userConcurrencyMemLimit);

                    /**
                     * 判断参数 UserConcurrencyMemLimit 是否已赋值
                     * @return UserConcurrencyMemLimit 是否已赋值
                     * 
                     */
                    bool UserConcurrencyMemLimitHasBeenSet() const;

                private:

                    /**
                     * 命名空间个数
                     */
                    int64_t m_namespacesCount;
                    bool m_namespacesCountHasBeenSet;

                    /**
                     * 命名空间详情
                     */
                    std::vector<NamespaceUsage> m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 当前地域用户并发内存配额上限
                     */
                    int64_t m_totalConcurrencyMem;
                    bool m_totalConcurrencyMemHasBeenSet;

                    /**
                     * 当前地域用户已配置并发内存额度
                     */
                    int64_t m_totalAllocatedConcurrencyMem;
                    bool m_totalAllocatedConcurrencyMemHasBeenSet;

                    /**
                     * 用户实际配置的账号并发配额
                     */
                    int64_t m_userConcurrencyMemLimit;
                    bool m_userConcurrencyMemLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_USAGEINFO_H_
