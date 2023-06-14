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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNSERVERDOMAINNAMERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNSERVERDOMAINNAMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseRunServerDomainName返回参数结构体
                */
                class DescribeCloudBaseRunServerDomainNameResponse : public AbstractModel
                {
                public:
                    DescribeCloudBaseRunServerDomainNameResponse();
                    ~DescribeCloudBaseRunServerDomainNameResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取公网服务域名
                     * @return PublicDomain 公网服务域名
                     * 
                     */
                    std::string GetPublicDomain() const;

                    /**
                     * 判断参数 PublicDomain 是否已赋值
                     * @return PublicDomain 是否已赋值
                     * 
                     */
                    bool PublicDomainHasBeenSet() const;

                    /**
                     * 获取内部服务域名
                     * @return InternalDomain 内部服务域名
                     * 
                     */
                    std::string GetInternalDomain() const;

                    /**
                     * 判断参数 InternalDomain 是否已赋值
                     * @return InternalDomain 是否已赋值
                     * 
                     */
                    bool InternalDomainHasBeenSet() const;

                    /**
                     * 获取弃用
                     * @return DomainName 弃用
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                private:

                    /**
                     * 公网服务域名
                     */
                    std::string m_publicDomain;
                    bool m_publicDomainHasBeenSet;

                    /**
                     * 内部服务域名
                     */
                    std::string m_internalDomain;
                    bool m_internalDomainHasBeenSet;

                    /**
                     * 弃用
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNSERVERDOMAINNAMERESPONSE_H_
