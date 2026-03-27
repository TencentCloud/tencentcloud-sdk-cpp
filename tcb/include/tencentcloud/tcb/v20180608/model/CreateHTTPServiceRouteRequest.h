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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEHTTPSERVICEROUTEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEHTTPSERVICEROUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceDomainParam.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateHTTPServiceRoute请求参数结构体
                */
                class CreateHTTPServiceRouteRequest : public AbstractModel
                {
                public:
                    CreateHTTPServiceRouteRequest();
                    ~CreateHTTPServiceRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取域名路由信息
                     * @return Domain 域名路由信息
                     * 
                     */
                    HTTPServiceDomainParam GetDomain() const;

                    /**
                     * 设置域名路由信息
                     * @param _domain 域名路由信息
                     * 
                     */
                    void SetDomain(const HTTPServiceDomainParam& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 域名路由信息
                     */
                    HTTPServiceDomainParam m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEHTTPSERVICEROUTEREQUEST_H_
