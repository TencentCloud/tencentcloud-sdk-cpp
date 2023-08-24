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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYDOMAINSCLSSTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYDOMAINSCLSSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/DomainURI.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyDomainsCLSStatus请求参数结构体
                */
                class ModifyDomainsCLSStatusRequest : public AbstractModel
                {
                public:
                    ModifyDomainsCLSStatusRequest();
                    ~ModifyDomainsCLSStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改的域名列表
                     * @return Domains 需要修改的域名列表
                     * 
                     */
                    std::vector<DomainURI> GetDomains() const;

                    /**
                     * 设置需要修改的域名列表
                     * @param _domains 需要修改的域名列表
                     * 
                     */
                    void SetDomains(const std::vector<DomainURI>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取修改域名的访问日志开关为Status
                     * @return Status 修改域名的访问日志开关为Status
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置修改域名的访问日志开关为Status
                     * @param _status 修改域名的访问日志开关为Status
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 需要修改的域名列表
                     */
                    std::vector<DomainURI> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 修改域名的访问日志开关为Status
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYDOMAINSCLSSTATUSREQUEST_H_
