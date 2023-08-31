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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSERVICEREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSERVICEREQUEST_H_

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
                * ModifyService请求参数结构体
                */
                class ModifyServiceRequest : public AbstractModel
                {
                public:
                    ModifyServiceRequest();
                    ~ModifyServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改服务的唯一 Id。
                     * @return ServiceId 待修改服务的唯一 Id。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置待修改服务的唯一 Id。
                     * @param _serviceId 待修改服务的唯一 Id。
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
                     * 获取修改后的服务名称。
                     * @return ServiceName 修改后的服务名称。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置修改后的服务名称。
                     * @param _serviceName 修改后的服务名称。
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取修改后的服务描述。
                     * @return ServiceDesc 修改后的服务描述。
                     * 
                     */
                    std::string GetServiceDesc() const;

                    /**
                     * 设置修改后的服务描述。
                     * @param _serviceDesc 修改后的服务描述。
                     * 
                     */
                    void SetServiceDesc(const std::string& _serviceDesc);

                    /**
                     * 判断参数 ServiceDesc 是否已赋值
                     * @return ServiceDesc 是否已赋值
                     * 
                     */
                    bool ServiceDescHasBeenSet() const;

                    /**
                     * 获取修改后的服务前端请求类型，如 http、https和 http&https。
                     * @return Protocol 修改后的服务前端请求类型，如 http、https和 http&https。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置修改后的服务前端请求类型，如 http、https和 http&https。
                     * @param _protocol 修改后的服务前端请求类型，如 http、https和 http&https。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取网络类型列表，用于指定支持的访问类型，INNER为内网访问，OUTER为外网访问。默认为OUTER。
                     * @return NetTypes 网络类型列表，用于指定支持的访问类型，INNER为内网访问，OUTER为外网访问。默认为OUTER。
                     * 
                     */
                    std::vector<std::string> GetNetTypes() const;

                    /**
                     * 设置网络类型列表，用于指定支持的访问类型，INNER为内网访问，OUTER为外网访问。默认为OUTER。
                     * @param _netTypes 网络类型列表，用于指定支持的访问类型，INNER为内网访问，OUTER为外网访问。默认为OUTER。
                     * 
                     */
                    void SetNetTypes(const std::vector<std::string>& _netTypes);

                    /**
                     * 判断参数 NetTypes 是否已赋值
                     * @return NetTypes 是否已赋值
                     * 
                     */
                    bool NetTypesHasBeenSet() const;

                    /**
                     * 获取vpc属性，选择VPC后不可修改。为服务选择VPC后，可对接该VPC下的后端资源
                     * @return UniqVpcId vpc属性，选择VPC后不可修改。为服务选择VPC后，可对接该VPC下的后端资源
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置vpc属性，选择VPC后不可修改。为服务选择VPC后，可对接该VPC下的后端资源
                     * @param _uniqVpcId vpc属性，选择VPC后不可修改。为服务选择VPC后，可对接该VPC下的后端资源
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                private:

                    /**
                     * 待修改服务的唯一 Id。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 修改后的服务名称。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 修改后的服务描述。
                     */
                    std::string m_serviceDesc;
                    bool m_serviceDescHasBeenSet;

                    /**
                     * 修改后的服务前端请求类型，如 http、https和 http&https。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 网络类型列表，用于指定支持的访问类型，INNER为内网访问，OUTER为外网访问。默认为OUTER。
                     */
                    std::vector<std::string> m_netTypes;
                    bool m_netTypesHasBeenSet;

                    /**
                     * vpc属性，选择VPC后不可修改。为服务选择VPC后，可对接该VPC下的后端资源
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSERVICEREQUEST_H_
