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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEGWSERVICEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEGWSERVICEREQUEST_H_

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
                * DescribeCloudBaseGWService请求参数结构体
                */
                class DescribeCloudBaseGWServiceRequest : public AbstractModel
                {
                public:
                    DescribeCloudBaseGWServiceRequest();
                    ~DescribeCloudBaseGWServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务ID
                     * @return ServiceId 服务ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务ID
                     * @param _serviceId 服务ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取服务域名
                     * @return Domain 服务域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置服务域名
                     * @param _domain 服务域名
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
                     * 获取是否启用多地域
                     * @return EnableRegion 是否启用多地域
                     * 
                     */
                    bool GetEnableRegion() const;

                    /**
                     * 设置是否启用多地域
                     * @param _enableRegion 是否启用多地域
                     * 
                     */
                    void SetEnableRegion(const bool& _enableRegion);

                    /**
                     * 判断参数 EnableRegion 是否已赋值
                     * @return EnableRegion 是否已赋值
                     * 
                     */
                    bool EnableRegionHasBeenSet() const;

                    /**
                     * 获取是否启用统一域名
                     * @return EnableUnion 是否启用统一域名
                     * 
                     */
                    bool GetEnableUnion() const;

                    /**
                     * 设置是否启用统一域名
                     * @param _enableUnion 是否启用统一域名
                     * 
                     */
                    void SetEnableUnion(const bool& _enableUnion);

                    /**
                     * 判断参数 EnableUnion 是否已赋值
                     * @return EnableUnion 是否已赋值
                     * 
                     */
                    bool EnableUnionHasBeenSet() const;

                private:

                    /**
                     * 服务ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 服务域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 是否启用多地域
                     */
                    bool m_enableRegion;
                    bool m_enableRegionHasBeenSet;

                    /**
                     * 是否启用统一域名
                     */
                    bool m_enableUnion;
                    bool m_enableUnionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEGWSERVICEREQUEST_H_
