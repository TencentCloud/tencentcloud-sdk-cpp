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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYDOMAINPOSTACTIONREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYDOMAINPOSTACTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyDomainPostAction请求参数结构体
                */
                class ModifyDomainPostActionRequest : public AbstractModel
                {
                public:
                    ModifyDomainPostActionRequest();
                    ~ModifyDomainPostActionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取0-关闭投递，1-开启投递
                     * @return PostCLSAction 0-关闭投递，1-开启投递
                     * 
                     */
                    int64_t GetPostCLSAction() const;

                    /**
                     * 设置0-关闭投递，1-开启投递
                     * @param _postCLSAction 0-关闭投递，1-开启投递
                     * 
                     */
                    void SetPostCLSAction(const int64_t& _postCLSAction);

                    /**
                     * 判断参数 PostCLSAction 是否已赋值
                     * @return PostCLSAction 是否已赋值
                     * 
                     */
                    bool PostCLSActionHasBeenSet() const;

                    /**
                     * 获取0-关闭投递，1-开启投递
                     * @return PostCKafkaAction 0-关闭投递，1-开启投递
                     * 
                     */
                    int64_t GetPostCKafkaAction() const;

                    /**
                     * 设置0-关闭投递，1-开启投递
                     * @param _postCKafkaAction 0-关闭投递，1-开启投递
                     * 
                     */
                    void SetPostCKafkaAction(const int64_t& _postCKafkaAction);

                    /**
                     * 判断参数 PostCKafkaAction 是否已赋值
                     * @return PostCKafkaAction 是否已赋值
                     * 
                     */
                    bool PostCKafkaActionHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 0-关闭投递，1-开启投递
                     */
                    int64_t m_postCLSAction;
                    bool m_postCLSActionHasBeenSet;

                    /**
                     * 0-关闭投递，1-开启投递
                     */
                    int64_t m_postCKafkaAction;
                    bool m_postCKafkaActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYDOMAINPOSTACTIONREQUEST_H_
