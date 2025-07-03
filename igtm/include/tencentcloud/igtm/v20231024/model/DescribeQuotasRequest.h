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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEQUOTASREQUEST_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEQUOTASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * DescribeQuotas请求参数结构体
                */
                class DescribeQuotasRequest : public AbstractModel
                {
                public:
                    DescribeQuotasRequest();
                    ~DescribeQuotasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取接入域名
                     * @return AccessDomain 接入域名
                     * 
                     */
                    std::string GetAccessDomain() const;

                    /**
                     * 设置接入域名
                     * @param _accessDomain 接入域名
                     * 
                     */
                    void SetAccessDomain(const std::string& _accessDomain);

                    /**
                     * 判断参数 AccessDomain 是否已赋值
                     * @return AccessDomain 是否已赋值
                     * 
                     */
                    bool AccessDomainHasBeenSet() const;

                private:

                    /**
                     * 接入域名
                     */
                    std::string m_accessDomain;
                    bool m_accessDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEQUOTASREQUEST_H_
