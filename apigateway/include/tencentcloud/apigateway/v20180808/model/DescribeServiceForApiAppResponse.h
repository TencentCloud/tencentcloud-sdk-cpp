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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBESERVICEFORAPIAPPRESPONSE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBESERVICEFORAPIAPPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/ApiIdStatus.h>
#include <tencentcloud/apigateway/v20180808/model/UsagePlan.h>
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
                * DescribeServiceForApiApp返回参数结构体
                */
                class DescribeServiceForApiAppResponse : public AbstractModel
                {
                public:
                    DescribeServiceForApiAppResponse();
                    ~DescribeServiceForApiAppResponse() = default;
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
                     * 获取服务 环境列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableEnvironments 服务 环境列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAvailableEnvironments() const;

                    /**
                     * 判断参数 AvailableEnvironments 是否已赋值
                     * @return AvailableEnvironments 是否已赋值
                     * 
                     */
                    bool AvailableEnvironmentsHasBeenSet() const;

                    /**
                     * 获取服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName 服务名称。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取服务描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceDesc 服务描述。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取服务支持协议，可选值为http、https、http&https。
                     * @return Protocol 服务支持协议，可选值为http、https、http&https。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取服务创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 服务创建时间。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取服务修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 服务修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

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
                     * 获取内网访问子域名。
                     * @return InternalSubDomain 内网访问子域名。
                     * 
                     */
                    std::string GetInternalSubDomain() const;

                    /**
                     * 判断参数 InternalSubDomain 是否已赋值
                     * @return InternalSubDomain 是否已赋值
                     * 
                     */
                    bool InternalSubDomainHasBeenSet() const;

                    /**
                     * 获取外网访问子域名。
                     * @return OuterSubDomain 外网访问子域名。
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
                     * 获取内网访问http服务端口号。
                     * @return InnerHttpPort 内网访问http服务端口号。
                     * 
                     */
                    int64_t GetInnerHttpPort() const;

                    /**
                     * 判断参数 InnerHttpPort 是否已赋值
                     * @return InnerHttpPort 是否已赋值
                     * 
                     */
                    bool InnerHttpPortHasBeenSet() const;

                    /**
                     * 获取内网访问https端口号。
                     * @return InnerHttpsPort 内网访问https端口号。
                     * 
                     */
                    int64_t GetInnerHttpsPort() const;

                    /**
                     * 判断参数 InnerHttpsPort 是否已赋值
                     * @return InnerHttpsPort 是否已赋值
                     * 
                     */
                    bool InnerHttpsPortHasBeenSet() const;

                    /**
                     * 获取API总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiTotalCount API总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetApiTotalCount() const;

                    /**
                     * 判断参数 ApiTotalCount 是否已赋值
                     * @return ApiTotalCount 是否已赋值
                     * 
                     */
                    bool ApiTotalCountHasBeenSet() const;

                    /**
                     * 获取API列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiIdStatusSet API列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApiIdStatus> GetApiIdStatusSet() const;

                    /**
                     * 判断参数 ApiIdStatusSet 是否已赋值
                     * @return ApiIdStatusSet 是否已赋值
                     * 
                     */
                    bool ApiIdStatusSetHasBeenSet() const;

                    /**
                     * 获取使用计划总数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsagePlanTotalCount 使用计划总数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUsagePlanTotalCount() const;

                    /**
                     * 判断参数 UsagePlanTotalCount 是否已赋值
                     * @return UsagePlanTotalCount 是否已赋值
                     * 
                     */
                    bool UsagePlanTotalCountHasBeenSet() const;

                    /**
                     * 获取使用计划数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsagePlanList 使用计划数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UsagePlan> GetUsagePlanList() const;

                    /**
                     * 判断参数 UsagePlanList 是否已赋值
                     * @return UsagePlanList 是否已赋值
                     * 
                     */
                    bool UsagePlanListHasBeenSet() const;

                    /**
                     * 获取IP版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpVersion IP版本。
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

                    /**
                     * 获取此服务的用户类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserType 此服务的用户类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取预留字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetId 预留字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSetId() const;

                    /**
                     * 判断参数 SetId 是否已赋值
                     * @return SetId 是否已赋值
                     * 
                     */
                    bool SetIdHasBeenSet() const;

                    /**
                     * 获取服务绑定的标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 服务绑定的标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 服务唯一ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 服务 环境列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_availableEnvironments;
                    bool m_availableEnvironmentsHasBeenSet;

                    /**
                     * 服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 服务描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceDesc;
                    bool m_serviceDescHasBeenSet;

                    /**
                     * 服务支持协议，可选值为http、https、http&https。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 服务创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 服务修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 网络类型列表，INNER为内网访问，OUTER为外网访问。
                     */
                    std::vector<std::string> m_netTypes;
                    bool m_netTypesHasBeenSet;

                    /**
                     * 内网访问子域名。
                     */
                    std::string m_internalSubDomain;
                    bool m_internalSubDomainHasBeenSet;

                    /**
                     * 外网访问子域名。
                     */
                    std::string m_outerSubDomain;
                    bool m_outerSubDomainHasBeenSet;

                    /**
                     * 内网访问http服务端口号。
                     */
                    int64_t m_innerHttpPort;
                    bool m_innerHttpPortHasBeenSet;

                    /**
                     * 内网访问https端口号。
                     */
                    int64_t m_innerHttpsPort;
                    bool m_innerHttpsPortHasBeenSet;

                    /**
                     * API总数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_apiTotalCount;
                    bool m_apiTotalCountHasBeenSet;

                    /**
                     * API列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApiIdStatus> m_apiIdStatusSet;
                    bool m_apiIdStatusSetHasBeenSet;

                    /**
                     * 使用计划总数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_usagePlanTotalCount;
                    bool m_usagePlanTotalCountHasBeenSet;

                    /**
                     * 使用计划数组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UsagePlan> m_usagePlanList;
                    bool m_usagePlanListHasBeenSet;

                    /**
                     * IP版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * 此服务的用户类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 预留字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_setId;
                    bool m_setIdHasBeenSet;

                    /**
                     * 服务绑定的标签。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBESERVICEFORAPIAPPRESPONSE_H_
