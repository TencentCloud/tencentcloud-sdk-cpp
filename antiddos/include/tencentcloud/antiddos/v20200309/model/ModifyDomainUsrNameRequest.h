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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDOMAINUSRNAMEREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDOMAINUSRNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * ModifyDomainUsrName请求参数结构体
                */
                class ModifyDomainUsrNameRequest : public AbstractModel
                {
                public:
                    ModifyDomainUsrNameRequest();
                    ~ModifyDomainUsrNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户CNAME
                     * @return DomainName 用户CNAME
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置用户CNAME
                     * @param _domainName 用户CNAME
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取域名名称
                     * @return DomainUserName 域名名称
                     * 
                     */
                    std::string GetDomainUserName() const;

                    /**
                     * 设置域名名称
                     * @param _domainUserName 域名名称
                     * 
                     */
                    void SetDomainUserName(const std::string& _domainUserName);

                    /**
                     * 判断参数 DomainUserName 是否已赋值
                     * @return DomainUserName 是否已赋值
                     * 
                     */
                    bool DomainUserNameHasBeenSet() const;

                private:

                    /**
                     * 用户CNAME
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 域名名称
                     */
                    std::string m_domainUserName;
                    bool m_domainUserNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDOMAINUSRNAMEREQUEST_H_
