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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNPOLICYBASEDROUTINGNEXTHOP_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNPOLICYBASEDROUTINGNEXTHOP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 云联网策略路由下一跳
                */
                class CcnPolicyBasedRoutingNextHop : public AbstractModel
                {
                public:
                    CcnPolicyBasedRoutingNextHop();
                    ~CcnPolicyBasedRoutingNextHop() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略路由下一跳ID
                     * @return PolicyBasedRoutingNextHopId 策略路由下一跳ID
                     * 
                     */
                    std::string GetPolicyBasedRoutingNextHopId() const;

                    /**
                     * 设置策略路由下一跳ID
                     * @param _policyBasedRoutingNextHopId 策略路由下一跳ID
                     * 
                     */
                    void SetPolicyBasedRoutingNextHopId(const std::string& _policyBasedRoutingNextHopId);

                    /**
                     * 判断参数 PolicyBasedRoutingNextHopId 是否已赋值
                     * @return PolicyBasedRoutingNextHopId 是否已赋值
                     * 
                     */
                    bool PolicyBasedRoutingNextHopIdHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取下一跳地域
                     * @return NextHopRegion 下一跳地域
                     * 
                     */
                    std::string GetNextHopRegion() const;

                    /**
                     * 设置下一跳地域
                     * @param _nextHopRegion 下一跳地域
                     * 
                     */
                    void SetNextHopRegion(const std::string& _nextHopRegion);

                    /**
                     * 判断参数 NextHopRegion 是否已赋值
                     * @return NextHopRegion 是否已赋值
                     * 
                     */
                    bool NextHopRegionHasBeenSet() const;

                    /**
                     * 获取关联实例ID
                     * @return InstanceId 关联实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置关联实例ID
                     * @param _instanceId 关联实例ID
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
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取状态(ENABLE/DISABLE)
                     * @return State 状态(ENABLE/DISABLE)
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态(ENABLE/DISABLE)
                     * @param _state 状态(ENABLE/DISABLE)
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取关联实例类型[VPC,DIRECTCONNECT,VPNGW]
                     * @return InstanceType 关联实例类型[VPC,DIRECTCONNECT,VPNGW]
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置关联实例类型[VPC,DIRECTCONNECT,VPNGW]
                     * @param _instanceType 关联实例类型[VPC,DIRECTCONNECT,VPNGW]
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取下一跳资源类型[HAVIP,GWLB_ENDPOINT]
                     * @return NextHopResourceType 下一跳资源类型[HAVIP,GWLB_ENDPOINT]
                     * 
                     */
                    std::string GetNextHopResourceType() const;

                    /**
                     * 设置下一跳资源类型[HAVIP,GWLB_ENDPOINT]
                     * @param _nextHopResourceType 下一跳资源类型[HAVIP,GWLB_ENDPOINT]
                     * 
                     */
                    void SetNextHopResourceType(const std::string& _nextHopResourceType);

                    /**
                     * 判断参数 NextHopResourceType 是否已赋值
                     * @return NextHopResourceType 是否已赋值
                     * 
                     */
                    bool NextHopResourceTypeHasBeenSet() const;

                    /**
                     * 获取下一跳资源ID
                     * @return NextHopResourceId 下一跳资源ID
                     * 
                     */
                    std::string GetNextHopResourceId() const;

                    /**
                     * 设置下一跳资源ID
                     * @param _nextHopResourceId 下一跳资源ID
                     * 
                     */
                    void SetNextHopResourceId(const std::string& _nextHopResourceId);

                    /**
                     * 判断参数 NextHopResourceId 是否已赋值
                     * @return NextHopResourceId 是否已赋值
                     * 
                     */
                    bool NextHopResourceIdHasBeenSet() const;

                    /**
                     * 获取下一跳资源ip
                     * @return NextHopIp 下一跳资源ip
                     * 
                     */
                    std::string GetNextHopIp() const;

                    /**
                     * 设置下一跳资源ip
                     * @param _nextHopIp 下一跳资源ip
                     * 
                     */
                    void SetNextHopIp(const std::string& _nextHopIp);

                    /**
                     * 判断参数 NextHopIp 是否已赋值
                     * @return NextHopIp 是否已赋值
                     * 
                     */
                    bool NextHopIpHasBeenSet() const;

                    /**
                     * 获取0
                     * @return PolicyBasedRoutingRulesCount 0
                     * 
                     */
                    int64_t GetPolicyBasedRoutingRulesCount() const;

                    /**
                     * 设置0
                     * @param _policyBasedRoutingRulesCount 0
                     * 
                     */
                    void SetPolicyBasedRoutingRulesCount(const int64_t& _policyBasedRoutingRulesCount);

                    /**
                     * 判断参数 PolicyBasedRoutingRulesCount 是否已赋值
                     * @return PolicyBasedRoutingRulesCount 是否已赋值
                     * 
                     */
                    bool PolicyBasedRoutingRulesCountHasBeenSet() const;

                private:

                    /**
                     * 策略路由下一跳ID
                     */
                    std::string m_policyBasedRoutingNextHopId;
                    bool m_policyBasedRoutingNextHopIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 下一跳地域
                     */
                    std::string m_nextHopRegion;
                    bool m_nextHopRegionHasBeenSet;

                    /**
                     * 关联实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 状态(ENABLE/DISABLE)
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 关联实例类型[VPC,DIRECTCONNECT,VPNGW]
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 下一跳资源类型[HAVIP,GWLB_ENDPOINT]
                     */
                    std::string m_nextHopResourceType;
                    bool m_nextHopResourceTypeHasBeenSet;

                    /**
                     * 下一跳资源ID
                     */
                    std::string m_nextHopResourceId;
                    bool m_nextHopResourceIdHasBeenSet;

                    /**
                     * 下一跳资源ip
                     */
                    std::string m_nextHopIp;
                    bool m_nextHopIpHasBeenSet;

                    /**
                     * 0
                     */
                    int64_t m_policyBasedRoutingRulesCount;
                    bool m_policyBasedRoutingRulesCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNPOLICYBASEDROUTINGNEXTHOP_H_
