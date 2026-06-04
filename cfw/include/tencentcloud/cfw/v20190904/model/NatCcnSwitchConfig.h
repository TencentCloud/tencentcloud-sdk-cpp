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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NATCCNSWITCHCONFIG_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NATCCNSWITCHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/AccessInstanceInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * NAT CCN防火墙开关配置
                */
                class NatCcnSwitchConfig : public AbstractModel
                {
                public:
                    NatCcnSwitchConfig();
                    ~NatCcnSwitchConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>NAT防火墙实例ID</p>
                     * @return NatInsId <p>NAT防火墙实例ID</p>
                     * 
                     */
                    std::string GetNatInsId() const;

                    /**
                     * 设置<p>NAT防火墙实例ID</p>
                     * @param _natInsId <p>NAT防火墙实例ID</p>
                     * 
                     */
                    void SetNatInsId(const std::string& _natInsId);

                    /**
                     * 判断参数 NatInsId 是否已赋值
                     * @return NatInsId 是否已赋值
                     * 
                     */
                    bool NatInsIdHasBeenSet() const;

                    /**
                     * 获取<p>云联网实例ID</p>
                     * @return CcnId <p>云联网实例ID</p>
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置<p>云联网实例ID</p>
                     * @param _ccnId <p>云联网实例ID</p>
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取<p>开关接入模式，1:自动接入，2:手动接入</p>
                     * @return SwitchMode <p>开关接入模式，1:自动接入，2:手动接入</p>
                     * 
                     */
                    int64_t GetSwitchMode() const;

                    /**
                     * 设置<p>开关接入模式，1:自动接入，2:手动接入</p>
                     * @param _switchMode <p>开关接入模式，1:自动接入，2:手动接入</p>
                     * 
                     */
                    void SetSwitchMode(const int64_t& _switchMode);

                    /**
                     * 判断参数 SwitchMode 是否已赋值
                     * @return SwitchMode 是否已赋值
                     * 
                     */
                    bool SwitchModeHasBeenSet() const;

                    /**
                     * 获取<p>引流路由方法，0:多路由表，1:策略路由。自动接入模式仅支持策略路由(1)；手动接入模式支持多路由表(0)和策略路由(1)</p>
                     * @return RoutingMode <p>引流路由方法，0:多路由表，1:策略路由。自动接入模式仅支持策略路由(1)；手动接入模式支持多路由表(0)和策略路由(1)</p>
                     * 
                     */
                    int64_t GetRoutingMode() const;

                    /**
                     * 设置<p>引流路由方法，0:多路由表，1:策略路由。自动接入模式仅支持策略路由(1)；手动接入模式支持多路由表(0)和策略路由(1)</p>
                     * @param _routingMode <p>引流路由方法，0:多路由表，1:策略路由。自动接入模式仅支持策略路由(1)；手动接入模式支持多路由表(0)和策略路由(1)</p>
                     * 
                     */
                    void SetRoutingMode(const int64_t& _routingMode);

                    /**
                     * 判断参数 RoutingMode 是否已赋值
                     * @return RoutingMode 是否已赋值
                     * 
                     */
                    bool RoutingModeHasBeenSet() const;

                    /**
                     * 获取<p>接入的实例列表</p>
                     * @return AccessInstanceList <p>接入的实例列表</p>
                     * 
                     */
                    std::vector<AccessInstanceInfo> GetAccessInstanceList() const;

                    /**
                     * 设置<p>接入的实例列表</p>
                     * @param _accessInstanceList <p>接入的实例列表</p>
                     * 
                     */
                    void SetAccessInstanceList(const std::vector<AccessInstanceInfo>& _accessInstanceList);

                    /**
                     * 判断参数 AccessInstanceList 是否已赋值
                     * @return AccessInstanceList 是否已赋值
                     * 
                     */
                    bool AccessInstanceListHasBeenSet() const;

                    /**
                     * 获取<p>引流VPC的CIDR网段</p>
                     * @return LeadVpcCidr <p>引流VPC的CIDR网段</p>
                     * 
                     */
                    std::string GetLeadVpcCidr() const;

                    /**
                     * 设置<p>引流VPC的CIDR网段</p>
                     * @param _leadVpcCidr <p>引流VPC的CIDR网段</p>
                     * 
                     */
                    void SetLeadVpcCidr(const std::string& _leadVpcCidr);

                    /**
                     * 判断参数 LeadVpcCidr 是否已赋值
                     * @return LeadVpcCidr 是否已赋值
                     * 
                     */
                    bool LeadVpcCidrHasBeenSet() const;

                private:

                    /**
                     * <p>NAT防火墙实例ID</p>
                     */
                    std::string m_natInsId;
                    bool m_natInsIdHasBeenSet;

                    /**
                     * <p>云联网实例ID</p>
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * <p>开关接入模式，1:自动接入，2:手动接入</p>
                     */
                    int64_t m_switchMode;
                    bool m_switchModeHasBeenSet;

                    /**
                     * <p>引流路由方法，0:多路由表，1:策略路由。自动接入模式仅支持策略路由(1)；手动接入模式支持多路由表(0)和策略路由(1)</p>
                     */
                    int64_t m_routingMode;
                    bool m_routingModeHasBeenSet;

                    /**
                     * <p>接入的实例列表</p>
                     */
                    std::vector<AccessInstanceInfo> m_accessInstanceList;
                    bool m_accessInstanceListHasBeenSet;

                    /**
                     * <p>引流VPC的CIDR网段</p>
                     */
                    std::string m_leadVpcCidr;
                    bool m_leadVpcCidrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NATCCNSWITCHCONFIG_H_
