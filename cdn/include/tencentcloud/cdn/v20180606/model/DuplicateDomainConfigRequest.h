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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DUPLICATEDOMAINCONFIGREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DUPLICATEDOMAINCONFIGREQUEST_H_

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
                * DuplicateDomainConfig请求参数结构体
                */
                class DuplicateDomainConfigRequest : public AbstractModel
                {
                public:
                    DuplicateDomainConfigRequest();
                    ~DuplicateDomainConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取新增域名
                     * @return Domain 新增域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置新增域名
                     * @param _domain 新增域名
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
                     * 获取被拷贝配置的域名
                     * @return ReferenceDomain 被拷贝配置的域名
                     * 
                     */
                    std::string GetReferenceDomain() const;

                    /**
                     * 设置被拷贝配置的域名
                     * @param _referenceDomain 被拷贝配置的域名
                     * 
                     */
                    void SetReferenceDomain(const std::string& _referenceDomain);

                    /**
                     * 判断参数 ReferenceDomain 是否已赋值
                     * @return ReferenceDomain 是否已赋值
                     * 
                     */
                    bool ReferenceDomainHasBeenSet() const;

                private:

                    /**
                     * 新增域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 被拷贝配置的域名
                     */
                    std::string m_referenceDomain;
                    bool m_referenceDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DUPLICATEDOMAINCONFIGREQUEST_H_
