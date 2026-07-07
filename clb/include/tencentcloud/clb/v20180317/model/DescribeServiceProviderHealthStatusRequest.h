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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBESERVICEPROVIDERHEALTHSTATUSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBESERVICEPROVIDERHEALTHSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeServiceProviderHealthStatus请求参数结构体
                */
                class DescribeServiceProviderHealthStatusRequest : public AbstractModel
                {
                public:
                    DescribeServiceProviderHealthStatusRequest();
                    ~DescribeServiceProviderHealthStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>BYOK的ID</p>
                     * @return ServiceProviderId <p>BYOK的ID</p>
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置<p>BYOK的ID</p>
                     * @param _serviceProviderId <p>BYOK的ID</p>
                     * 
                     */
                    void SetServiceProviderId(const std::string& _serviceProviderId);

                    /**
                     * 判断参数 ServiceProviderId 是否已赋值
                     * @return ServiceProviderId 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdHasBeenSet() const;

                    /**
                     * 获取<p>本次查询的限制数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @return Limit <p>本次查询的限制数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>本次查询的限制数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @param _limit <p>本次查询的限制数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
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
                     * 获取<p>本次查询翻页的偏移量</p>
                     * @return Offset <p>本次查询翻页的偏移量</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>本次查询翻页的偏移量</p>
                     * @param _offset <p>本次查询翻页的偏移量</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>BYOK的ID</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * <p>本次查询的限制数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>本次查询翻页的偏移量</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBESERVICEPROVIDERHEALTHSTATUSREQUEST_H_
