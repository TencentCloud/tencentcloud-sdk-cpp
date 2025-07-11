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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_SETDOMAINAUTORENEWREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_SETDOMAINAUTORENEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * SetDomainAutoRenew请求参数结构体
                */
                class SetDomainAutoRenewRequest : public AbstractModel
                {
                public:
                    SetDomainAutoRenewRequest();
                    ~SetDomainAutoRenewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名实例ID
可通过[DescribeDomainNameList](https://cloud.tencent.com/document/api/242/48941)接口获取
                     * @return DomainId 域名实例ID
可通过[DescribeDomainNameList](https://cloud.tencent.com/document/api/242/48941)接口获取
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置域名实例ID
可通过[DescribeDomainNameList](https://cloud.tencent.com/document/api/242/48941)接口获取
                     * @param _domainId 域名实例ID
可通过[DescribeDomainNameList](https://cloud.tencent.com/document/api/242/48941)接口获取
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取AutoRenew 有三个可选值：
 0：不设置自动续费
1：设置自动续费
2：设置到期后不续费
                     * @return AutoRenew AutoRenew 有三个可选值：
 0：不设置自动续费
1：设置自动续费
2：设置到期后不续费
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置AutoRenew 有三个可选值：
 0：不设置自动续费
1：设置自动续费
2：设置到期后不续费
                     * @param _autoRenew AutoRenew 有三个可选值：
 0：不设置自动续费
1：设置自动续费
2：设置到期后不续费
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                private:

                    /**
                     * 域名实例ID
可通过[DescribeDomainNameList](https://cloud.tencent.com/document/api/242/48941)接口获取
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * AutoRenew 有三个可选值：
 0：不设置自动续费
1：设置自动续费
2：设置到期后不续费
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_SETDOMAINAUTORENEWREQUEST_H_
