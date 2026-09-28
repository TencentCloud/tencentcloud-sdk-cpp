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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_VERIFYPLATFORMHTTPSERVICEROUTEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_VERIFYPLATFORMHTTPSERVICEROUTEREQUEST_H_

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
                * VerifyPlatformHTTPServiceRoute请求参数结构体
                */
                class VerifyPlatformHTTPServiceRouteRequest : public AbstractModel
                {
                public:
                    VerifyPlatformHTTPServiceRouteRequest();
                    ~VerifyPlatformHTTPServiceRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>平台id</p>
                     * @return PlatformId <p>平台id</p>
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置<p>平台id</p>
                     * @param _platformId <p>平台id</p>
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取<p>域名路由信息</p>
                     * @return Domain <p>域名路由信息</p>
                     * 
                     */
                    HTTPServiceDomainParam GetDomain() const;

                    /**
                     * 设置<p>域名路由信息</p>
                     * @param _domain <p>域名路由信息</p>
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
                     * <p>平台id</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>域名路由信息</p>
                     */
                    HTTPServiceDomainParam m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_VERIFYPLATFORMHTTPSERVICEROUTEREQUEST_H_
