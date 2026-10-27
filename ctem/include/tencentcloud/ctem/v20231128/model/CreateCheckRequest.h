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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_CREATECHECKREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_CREATECHECKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * CreateCheck请求参数结构体
                */
                class CreateCheckRequest : public AbstractModel
                {
                public:
                    CreateCheckRequest();
                    ~CreateCheckRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>漏洞情报ID</p>
                     * @return VulId <p>漏洞情报ID</p>
                     * 
                     */
                    std::string GetVulId() const;

                    /**
                     * 设置<p>漏洞情报ID</p>
                     * @param _vulId <p>漏洞情报ID</p>
                     * 
                     */
                    void SetVulId(const std::string& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取<p>企业ID</p>
                     * @return CustomerId <p>企业ID</p>
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置<p>企业ID</p>
                     * @param _customerId <p>企业ID</p>
                     * 
                     */
                    void SetCustomerId(const int64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                private:

                    /**
                     * <p>漏洞情报ID</p>
                     */
                    std::string m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>企业ID</p>
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_CREATECHECKREQUEST_H_
