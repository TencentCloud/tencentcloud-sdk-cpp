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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATESERVICEREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * CreateService请求参数结构体
                */
                class CreateServiceRequest : public AbstractModel
                {
                public:
                    CreateServiceRequest();
                    ~CreateServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户自定义的服务名称。如果没传，则系统自动生成一个唯一名称。
                     * @return ServiceName 用户自定义的服务名称。如果没传，则系统自动生成一个唯一名称。
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置用户自定义的服务名称。如果没传，则系统自动生成一个唯一名称。
                     * @param ServiceName 用户自定义的服务名称。如果没传，则系统自动生成一个唯一名称。
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取服务的前端请求类型。如 http、https、http&https。
                     * @return Protocol 服务的前端请求类型。如 http、https、http&https。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置服务的前端请求类型。如 http、https、http&https。
                     * @param Protocol 服务的前端请求类型。如 http、https、http&https。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取用户自定义的服务描述。
                     * @return ServiceDesc 用户自定义的服务描述。
                     */
                    std::string GetServiceDesc() const;

                    /**
                     * 设置用户自定义的服务描述。
                     * @param ServiceDesc 用户自定义的服务描述。
                     */
                    void SetServiceDesc(const std::string& _serviceDesc);

                    /**
                     * 判断参数 ServiceDesc 是否已赋值
                     * @return ServiceDesc 是否已赋值
                     */
                    bool ServiceDescHasBeenSet() const;

                    /**
                     * 获取独立集群名称，用于指定创建服务所在的独立集群。
                     * @return ExclusiveSetName 独立集群名称，用于指定创建服务所在的独立集群。
                     */
                    std::string GetExclusiveSetName() const;

                    /**
                     * 设置独立集群名称，用于指定创建服务所在的独立集群。
                     * @param ExclusiveSetName 独立集群名称，用于指定创建服务所在的独立集群。
                     */
                    void SetExclusiveSetName(const std::string& _exclusiveSetName);

                    /**
                     * 判断参数 ExclusiveSetName 是否已赋值
                     * @return ExclusiveSetName 是否已赋值
                     */
                    bool ExclusiveSetNameHasBeenSet() const;

                    /**
                     * 获取网络类型列表，用于指定支持的访问类型，INNER为内网访问，OUTER为外网访问。默认为OUTER。
                     * @return NetTypes 网络类型列表，用于指定支持的访问类型，INNER为内网访问，OUTER为外网访问。默认为OUTER。
                     */
                    std::vector<std::string> GetNetTypes() const;

                    /**
                     * 设置网络类型列表，用于指定支持的访问类型，INNER为内网访问，OUTER为外网访问。默认为OUTER。
                     * @param NetTypes 网络类型列表，用于指定支持的访问类型，INNER为内网访问，OUTER为外网访问。默认为OUTER。
                     */
                    void SetNetTypes(const std::vector<std::string>& _netTypes);

                    /**
                     * 判断参数 NetTypes 是否已赋值
                     * @return NetTypes 是否已赋值
                     */
                    bool NetTypesHasBeenSet() const;

                    /**
                     * 获取IP版本号，支持IPv4和IPv6，默认为IPv4。
                     * @return IpVersion IP版本号，支持IPv4和IPv6，默认为IPv4。
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置IP版本号，支持IPv4和IPv6，默认为IPv4。
                     * @param IpVersion IP版本号，支持IPv4和IPv6，默认为IPv4。
                     */
                    void SetIpVersion(const std::string& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取集群名称。保留字段，tsf serverlss类型使用。
                     * @return SetServerName 集群名称。保留字段，tsf serverlss类型使用。
                     */
                    std::string GetSetServerName() const;

                    /**
                     * 设置集群名称。保留字段，tsf serverlss类型使用。
                     * @param SetServerName 集群名称。保留字段，tsf serverlss类型使用。
                     */
                    void SetSetServerName(const std::string& _setServerName);

                    /**
                     * 判断参数 SetServerName 是否已赋值
                     * @return SetServerName 是否已赋值
                     */
                    bool SetServerNameHasBeenSet() const;

                    /**
                     * 获取用户类型。保留类型，serverless用户使用。
                     * @return AppIdType 用户类型。保留类型，serverless用户使用。
                     */
                    std::string GetAppIdType() const;

                    /**
                     * 设置用户类型。保留类型，serverless用户使用。
                     * @param AppIdType 用户类型。保留类型，serverless用户使用。
                     */
                    void SetAppIdType(const std::string& _appIdType);

                    /**
                     * 判断参数 AppIdType 是否已赋值
                     * @return AppIdType 是否已赋值
                     */
                    bool AppIdTypeHasBeenSet() const;

                    /**
                     * 获取标签。
                     * @return Tags 标签。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签。
                     * @param Tags 标签。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 用户自定义的服务名称。如果没传，则系统自动生成一个唯一名称。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 服务的前端请求类型。如 http、https、http&https。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 用户自定义的服务描述。
                     */
                    std::string m_serviceDesc;
                    bool m_serviceDescHasBeenSet;

                    /**
                     * 独立集群名称，用于指定创建服务所在的独立集群。
                     */
                    std::string m_exclusiveSetName;
                    bool m_exclusiveSetNameHasBeenSet;

                    /**
                     * 网络类型列表，用于指定支持的访问类型，INNER为内网访问，OUTER为外网访问。默认为OUTER。
                     */
                    std::vector<std::string> m_netTypes;
                    bool m_netTypesHasBeenSet;

                    /**
                     * IP版本号，支持IPv4和IPv6，默认为IPv4。
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * 集群名称。保留字段，tsf serverlss类型使用。
                     */
                    std::string m_setServerName;
                    bool m_setServerNameHasBeenSet;

                    /**
                     * 用户类型。保留类型，serverless用户使用。
                     */
                    std::string m_appIdType;
                    bool m_appIdTypeHasBeenSet;

                    /**
                     * 标签。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATESERVICEREQUEST_H_
