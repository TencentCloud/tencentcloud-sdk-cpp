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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBESERVICESUBDOMAINMAPPINGSREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBESERVICESUBDOMAINMAPPINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeServiceSubDomainMappings请求参数结构体
                */
                class DescribeServiceSubDomainMappingsRequest : public AbstractModel
                {
                public:
                    DescribeServiceSubDomainMappingsRequest();
                    ~DescribeServiceSubDomainMappingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务唯一 ID。
                     * @return ServiceId 服务唯一 ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务唯一 ID。
                     * @param _serviceId 服务唯一 ID。
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
                     * 获取服务绑定的自定义域名。
                     * @return SubDomain 服务绑定的自定义域名。
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置服务绑定的自定义域名。
                     * @param _subDomain 服务绑定的自定义域名。
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                private:

                    /**
                     * 服务唯一 ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 服务绑定的自定义域名。
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBESERVICESUBDOMAINMAPPINGSREQUEST_H_
