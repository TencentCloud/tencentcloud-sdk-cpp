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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_VERIFYDOMAINRECORDREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_VERIFYDOMAINRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * VerifyDomainRecord请求参数结构体
                */
                class VerifyDomainRecordRequest : public AbstractModel
                {
                public:
                    VerifyDomainRecordRequest();
                    ~VerifyDomainRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param Domain 域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取验证方式
dns: DNS 解析验证（默认值）
file: 文件验证
                     * @return VerifyType 验证方式
dns: DNS 解析验证（默认值）
file: 文件验证
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置验证方式
dns: DNS 解析验证（默认值）
file: 文件验证
                     * @param VerifyType 验证方式
dns: DNS 解析验证（默认值）
file: 文件验证
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     */
                    bool VerifyTypeHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 验证方式
dns: DNS 解析验证（默认值）
file: 文件验证
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_VERIFYDOMAINRECORDREQUEST_H_
