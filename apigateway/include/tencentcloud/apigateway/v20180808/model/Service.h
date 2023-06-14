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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 展示服务列表用
                */
                class Service : public AbstractModel
                {
                public:
                    Service();
                    ~Service() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内网访问https端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerHttpsPort 内网访问https端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInnerHttpsPort() const;

                    /**
                     * 设置内网访问https端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerHttpsPort 内网访问https端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerHttpsPort(const int64_t& _innerHttpsPort);

                    /**
                     * 判断参数 InnerHttpsPort 是否已赋值
                     * @return InnerHttpsPort 是否已赋值
                     * 
                     */
                    bool InnerHttpsPortHasBeenSet() const;

                    /**
                     * 获取用户自定义的服务描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceDesc 用户自定义的服务描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceDesc() const;

                    /**
                     * 设置用户自定义的服务描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceDesc 用户自定义的服务描述。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取服务的前端请求类型。如http、https 或者 http&https。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 服务的前端请求类型。如http、https 或者 http&https。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置服务的前端请求类型。如http、https 或者 http&https。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol 服务的前端请求类型。如http、https 或者 http&https。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取服务支持的网络类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetTypes 服务支持的网络类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNetTypes() const;

                    /**
                     * 设置服务支持的网络类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _netTypes 服务支持的网络类型。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取独占集群名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExclusiveSetName 独占集群名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExclusiveSetName() const;

                    /**
                     * 设置独占集群名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exclusiveSetName 独占集群名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExclusiveSetName(const std::string& _exclusiveSetName);

                    /**
                     * 判断参数 ExclusiveSetName 是否已赋值
                     * @return ExclusiveSetName 是否已赋值
                     * 
                     */
                    bool ExclusiveSetNameHasBeenSet() const;

                    /**
                     * 获取服务唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceId 服务唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceId 服务唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取IP版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpVersion IP版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置IP版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipVersion IP版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpVersion(const std::string& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取已经发布的环境列表。如test、prepub、release。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableEnvironments 已经发布的环境列表。如test、prepub、release。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAvailableEnvironments() const;

                    /**
                     * 设置已经发布的环境列表。如test、prepub、release。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableEnvironments 已经发布的环境列表。如test、prepub、release。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableEnvironments(const std::vector<std::string>& _availableEnvironments);

                    /**
                     * 判断参数 AvailableEnvironments 是否已赋值
                     * @return AvailableEnvironments 是否已赋值
                     * 
                     */
                    bool AvailableEnvironmentsHasBeenSet() const;

                    /**
                     * 获取用户自定义的服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName 用户自定义的服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置用户自定义的服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName 用户自定义的服务名称。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取系统为该服务分配的外网域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OuterSubDomain 系统为该服务分配的外网域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOuterSubDomain() const;

                    /**
                     * 设置系统为该服务分配的外网域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outerSubDomain 系统为该服务分配的外网域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOuterSubDomain(const std::string& _outerSubDomain);

                    /**
                     * 判断参数 OuterSubDomain 是否已赋值
                     * @return OuterSubDomain 是否已赋值
                     * 
                     */
                    bool OuterSubDomainHasBeenSet() const;

                    /**
                     * 获取创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取内网访问http端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerHttpPort 内网访问http端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInnerHttpPort() const;

                    /**
                     * 设置内网访问http端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerHttpPort 内网访问http端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerHttpPort(const uint64_t& _innerHttpPort);

                    /**
                     * 判断参数 InnerHttpPort 是否已赋值
                     * @return InnerHttpPort 是否已赋值
                     * 
                     */
                    bool InnerHttpPortHasBeenSet() const;

                    /**
                     * 获取系统为该服务自动分配的内网域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerSubDomain 系统为该服务自动分配的内网域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInnerSubDomain() const;

                    /**
                     * 设置系统为该服务自动分配的内网域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerSubDomain 系统为该服务自动分配的内网域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerSubDomain(const std::string& _innerSubDomain);

                    /**
                     * 判断参数 InnerSubDomain 是否已赋值
                     * @return InnerSubDomain 是否已赋值
                     * 
                     */
                    bool InnerSubDomainHasBeenSet() const;

                    /**
                     * 获取服务的计费状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TradeIsolateStatus 服务的计费状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTradeIsolateStatus() const;

                    /**
                     * 设置服务的计费状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tradeIsolateStatus 服务的计费状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTradeIsolateStatus(const int64_t& _tradeIsolateStatus);

                    /**
                     * 判断参数 TradeIsolateStatus 是否已赋值
                     * @return TradeIsolateStatus 是否已赋值
                     * 
                     */
                    bool TradeIsolateStatusHasBeenSet() const;

                    /**
                     * 获取服务绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 服务绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置服务绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 服务绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取独享实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 独享实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置独享实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 独享实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetType 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSetType() const;

                    /**
                     * 设置集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setType 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSetType(const std::string& _setType);

                    /**
                     * 判断参数 SetType 是否已赋值
                     * @return SetType 是否已赋值
                     * 
                     */
                    bool SetTypeHasBeenSet() const;

                    /**
                     * 获取服务部署的集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeploymentType 服务部署的集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeploymentType() const;

                    /**
                     * 设置服务部署的集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deploymentType 服务部署的集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeploymentType(const std::string& _deploymentType);

                    /**
                     * 判断参数 DeploymentType 是否已赋值
                     * @return DeploymentType 是否已赋值
                     * 
                     */
                    bool DeploymentTypeHasBeenSet() const;

                private:

                    /**
                     * 内网访问https端口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_innerHttpsPort;
                    bool m_innerHttpsPortHasBeenSet;

                    /**
                     * 用户自定义的服务描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceDesc;
                    bool m_serviceDescHasBeenSet;

                    /**
                     * 服务的前端请求类型。如http、https 或者 http&https。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 服务支持的网络类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_netTypes;
                    bool m_netTypesHasBeenSet;

                    /**
                     * 独占集群名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_exclusiveSetName;
                    bool m_exclusiveSetNameHasBeenSet;

                    /**
                     * 服务唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * IP版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * 已经发布的环境列表。如test、prepub、release。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_availableEnvironments;
                    bool m_availableEnvironmentsHasBeenSet;

                    /**
                     * 用户自定义的服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 系统为该服务分配的外网域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outerSubDomain;
                    bool m_outerSubDomainHasBeenSet;

                    /**
                     * 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 内网访问http端口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_innerHttpPort;
                    bool m_innerHttpPortHasBeenSet;

                    /**
                     * 系统为该服务自动分配的内网域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_innerSubDomain;
                    bool m_innerSubDomainHasBeenSet;

                    /**
                     * 服务的计费状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tradeIsolateStatus;
                    bool m_tradeIsolateStatusHasBeenSet;

                    /**
                     * 服务绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 独享实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_setType;
                    bool m_setTypeHasBeenSet;

                    /**
                     * 服务部署的集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deploymentType;
                    bool m_deploymentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICE_H_
