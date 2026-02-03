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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEGWSERVICERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEGWSERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseGWService.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseGWService返回参数结构体
                */
                class DescribeCloudBaseGWServiceResponse : public AbstractModel
                {
                public:
                    DescribeCloudBaseGWServiceResponse();
                    ~DescribeCloudBaseGWServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceSet 服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudBaseGWService> GetServiceSet() const;

                    /**
                     * 判断参数 ServiceSet 是否已赋值
                     * @return ServiceSet 是否已赋值
                     * 
                     */
                    bool ServiceSetHasBeenSet() const;

                    /**
                     * 获取是否开启服务
                     * @return EnableService 是否开启服务
                     * 
                     */
                    bool GetEnableService() const;

                    /**
                     * 判断参数 EnableService 是否已赋值
                     * @return EnableService 是否已赋值
                     * 
                     */
                    bool EnableServiceHasBeenSet() const;

                    /**
                     * 获取默认域名信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultDomain 默认域名信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultDomain() const;

                    /**
                     * 判断参数 DefaultDomain 是否已赋值
                     * @return DefaultDomain 是否已赋值
                     * 
                     */
                    bool DefaultDomainHasBeenSet() const;

                    /**
                     * 获取是否开启CDN迁移
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableUnion 是否开启CDN迁移
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableUnion() const;

                    /**
                     * 判断参数 EnableUnion 是否已赋值
                     * @return EnableUnion 是否已赋值
                     * 
                     */
                    bool EnableUnionHasBeenSet() const;

                    /**
                     * 获取是否开启跨域校验，默认开启 true
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableCheckAcrossDomain 是否开启跨域校验，默认开启 true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableCheckAcrossDomain() const;

                    /**
                     * 判断参数 EnableCheckAcrossDomain 是否已赋值
                     * @return EnableCheckAcrossDomain 是否已赋值
                     * 
                     */
                    bool EnableCheckAcrossDomainHasBeenSet() const;

                    /**
                     * 获取自定义路由规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomRoutingRules 自定义路由规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomRoutingRules() const;

                    /**
                     * 判断参数 CustomRoutingRules 是否已赋值
                     * @return CustomRoutingRules 是否已赋值
                     * 
                     */
                    bool CustomRoutingRulesHasBeenSet() const;

                    /**
                     * 获取默认域名绑定类型，1绑定TCB-CDN，2绑定tcbingres（不经过cdn）
                     * @return AccessFlag 默认域名绑定类型，1绑定TCB-CDN，2绑定tcbingres（不经过cdn）
                     * 
                     */
                    uint64_t GetAccessFlag() const;

                    /**
                     * 判断参数 AccessFlag 是否已赋值
                     * @return AccessFlag 是否已赋值
                     * 
                     */
                    bool AccessFlagHasBeenSet() const;

                    /**
                     * 获取云接入源站域名
                     * @return OriginDomain 云接入源站域名
                     * 
                     */
                    std::string GetOriginDomain() const;

                    /**
                     * 判断参数 OriginDomain 是否已赋值
                     * @return OriginDomain 是否已赋值
                     * 
                     */
                    bool OriginDomainHasBeenSet() const;

                private:

                    /**
                     * 服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudBaseGWService> m_serviceSet;
                    bool m_serviceSetHasBeenSet;

                    /**
                     * 是否开启服务
                     */
                    bool m_enableService;
                    bool m_enableServiceHasBeenSet;

                    /**
                     * 默认域名信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultDomain;
                    bool m_defaultDomainHasBeenSet;

                    /**
                     * 是否开启CDN迁移
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableUnion;
                    bool m_enableUnionHasBeenSet;

                    /**
                     * 是否开启跨域校验，默认开启 true
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableCheckAcrossDomain;
                    bool m_enableCheckAcrossDomainHasBeenSet;

                    /**
                     * 自定义路由规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customRoutingRules;
                    bool m_customRoutingRulesHasBeenSet;

                    /**
                     * 默认域名绑定类型，1绑定TCB-CDN，2绑定tcbingres（不经过cdn）
                     */
                    uint64_t m_accessFlag;
                    bool m_accessFlagHasBeenSet;

                    /**
                     * 云接入源站域名
                     */
                    std::string m_originDomain;
                    bool m_originDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEGWSERVICERESPONSE_H_
