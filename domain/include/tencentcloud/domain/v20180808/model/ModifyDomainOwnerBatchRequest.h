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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYDOMAINOWNERBATCHREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYDOMAINOWNERBATCHREQUEST_H_

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
                * ModifyDomainOwnerBatch请求参数结构体
                */
                class ModifyDomainOwnerBatchRequest : public AbstractModel
                {
                public:
                    ModifyDomainOwnerBatchRequest();
                    ~ModifyDomainOwnerBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要过户的域名。
                     * @return Domains 要过户的域名。
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置要过户的域名。
                     * @param Domains 要过户的域名。
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取转入账户的uin。
                     * @return NewOwnerUin 转入账户的uin。
                     */
                    std::string GetNewOwnerUin() const;

                    /**
                     * 设置转入账户的uin。
                     * @param NewOwnerUin 转入账户的uin。
                     */
                    void SetNewOwnerUin(const std::string& _newOwnerUin);

                    /**
                     * 判断参数 NewOwnerUin 是否已赋值
                     * @return NewOwnerUin 是否已赋值
                     */
                    bool NewOwnerUinHasBeenSet() const;

                private:

                    /**
                     * 要过户的域名。
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 转入账户的uin。
                     */
                    std::string m_newOwnerUin;
                    bool m_newOwnerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYDOMAINOWNERBATCHREQUEST_H_
