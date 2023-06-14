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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATESERVICERESPONSE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATESERVICERESPONSE_H_

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
                * CreateService返回参数结构体
                */
                class CreateServiceResponse : public AbstractModel
                {
                public:
                    CreateServiceResponse();
                    ~CreateServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务唯一ID。
                     * @return ServiceId 服务唯一ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取用户自定义服务名称。
                     * @return ServiceName 用户自定义服务名称。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取用户自定义服务描述。
                     * @return ServiceDesc 用户自定义服务描述。
                     * 
                     */
                    std::string GetServiceDesc() const;

                    /**
                     * 判断参数 ServiceDesc 是否已赋值
                     * @return ServiceDesc 是否已赋值
                     * 
                     */
                    bool ServiceDescHasBeenSet() const;

                    /**
                     * 获取外网默认域名。
                     * @return OuterSubDomain 外网默认域名。
                     * 
                     */
                    std::string GetOuterSubDomain() const;

                    /**
                     * 判断参数 OuterSubDomain 是否已赋值
                     * @return OuterSubDomain 是否已赋值
                     * 
                     */
                    bool OuterSubDomainHasBeenSet() const;

                    /**
                     * 获取vpc内网默认域名。
                     * @return InnerSubDomain vpc内网默认域名。
                     * 
                     */
                    std::string GetInnerSubDomain() const;

                    /**
                     * 判断参数 InnerSubDomain 是否已赋值
                     * @return InnerSubDomain 是否已赋值
                     * 
                     */
                    bool InnerSubDomainHasBeenSet() const;

                    /**
                     * 获取服务创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * @return CreatedTime 服务创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取网络类型列表，INNER为内网访问，OUTER为外网访问。
                     * @return NetTypes 网络类型列表，INNER为内网访问，OUTER为外网访问。
                     * 
                     */
                    std::vector<std::string> GetNetTypes() const;

                    /**
                     * 判断参数 NetTypes 是否已赋值
                     * @return NetTypes 是否已赋值
                     * 
                     */
                    bool NetTypesHasBeenSet() const;

                    /**
                     * 获取IP版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpVersion IP版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                private:

                    /**
                     * 服务唯一ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 用户自定义服务名称。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 用户自定义服务描述。
                     */
                    std::string m_serviceDesc;
                    bool m_serviceDescHasBeenSet;

                    /**
                     * 外网默认域名。
                     */
                    std::string m_outerSubDomain;
                    bool m_outerSubDomainHasBeenSet;

                    /**
                     * vpc内网默认域名。
                     */
                    std::string m_innerSubDomain;
                    bool m_innerSubDomainHasBeenSet;

                    /**
                     * 服务创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 网络类型列表，INNER为内网访问，OUTER为外网访问。
                     */
                    std::vector<std::string> m_netTypes;
                    bool m_netTypesHasBeenSet;

                    /**
                     * IP版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATESERVICERESPONSE_H_
