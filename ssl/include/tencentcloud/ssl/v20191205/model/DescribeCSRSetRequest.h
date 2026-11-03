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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRSETREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCSRSet请求参数结构体
                */
                class DescribeCSRSetRequest : public AbstractModel
                {
                public:
                    DescribeCSRSetRequest();
                    ~DescribeCSRSetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页数量，默认10。最大100
                     * @return Limit 每页数量，默认10。最大100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页数量，默认10。最大100
                     * @param _limit 每页数量，默认10。最大100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移量，从0开始。	
                     * @return Offset 分页偏移量，从0开始。	
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，从0开始。	
                     * @param _offset 分页偏移量，从0开始。	
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取使用域名过滤。
                     * @return Domain 使用域名过滤。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置使用域名过滤。
                     * @param _domain 使用域名过滤。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取使用加密算法过滤
                     * @return EncryptAlgo 使用加密算法过滤
                     * 
                     */
                    std::string GetEncryptAlgo() const;

                    /**
                     * 设置使用加密算法过滤
                     * @param _encryptAlgo 使用加密算法过滤
                     * 
                     */
                    void SetEncryptAlgo(const std::string& _encryptAlgo);

                    /**
                     * 判断参数 EncryptAlgo 是否已赋值
                     * @return EncryptAlgo 是否已赋值
                     * 
                     */
                    bool EncryptAlgoHasBeenSet() const;

                private:

                    /**
                     * 每页数量，默认10。最大100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，从0开始。	
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 使用域名过滤。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 使用加密算法过滤
                     */
                    std::string m_encryptAlgo;
                    bool m_encryptAlgoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRSETREQUEST_H_
