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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBESUBDOMAINVALIDATESTATUSREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBESUBDOMAINVALIDATESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeSubdomainValidateStatus请求参数结构体
                */
                class DescribeSubdomainValidateStatusRequest : public AbstractModel
                {
                public:
                    DescribeSubdomainValidateStatusRequest();
                    ~DescribeSubdomainValidateStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查看 TXT 记录校验状态的子域名 Zone 域。
                     * @return DomainZone 要查看 TXT 记录校验状态的子域名 Zone 域。
                     * 
                     */
                    std::string GetDomainZone() const;

                    /**
                     * 设置要查看 TXT 记录校验状态的子域名 Zone 域。
                     * @param _domainZone 要查看 TXT 记录校验状态的子域名 Zone 域。
                     * 
                     */
                    void SetDomainZone(const std::string& _domainZone);

                    /**
                     * 判断参数 DomainZone 是否已赋值
                     * @return DomainZone 是否已赋值
                     * 
                     */
                    bool DomainZoneHasBeenSet() const;

                private:

                    /**
                     * 要查看 TXT 记录校验状态的子域名 Zone 域。
                     */
                    std::string m_domainZone;
                    bool m_domainZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBESUBDOMAINVALIDATESTATUSREQUEST_H_
