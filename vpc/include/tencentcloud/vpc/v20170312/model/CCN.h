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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCN_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 云联网（CCN）对象
                */
                class CCN : public AbstractModel
                {
                public:
                    CCN();
                    ~CCN() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>云联网唯一ID</p>
                     * @return CcnId <p>云联网唯一ID</p>
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置<p>云联网唯一ID</p>
                     * @param _ccnId <p>云联网唯一ID</p>
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
                     * 获取<p>云联网名称</p>
                     * @return CcnName <p>云联网名称</p>
                     * 
                     */
                    std::string GetCcnName() const;

                    /**
                     * 设置<p>云联网名称</p>
                     * @param _ccnName <p>云联网名称</p>
                     * 
                     */
                    void SetCcnName(const std::string& _ccnName);

                    /**
                     * 判断参数 CcnName 是否已赋值
                     * @return CcnName 是否已赋值
                     * 
                     */
                    bool CcnNameHasBeenSet() const;

                    /**
                     * 获取<p>云联网描述信息</p>
                     * @return CcnDescription <p>云联网描述信息</p>
                     * 
                     */
                    std::string GetCcnDescription() const;

                    /**
                     * 设置<p>云联网描述信息</p>
                     * @param _ccnDescription <p>云联网描述信息</p>
                     * 
                     */
                    void SetCcnDescription(const std::string& _ccnDescription);

                    /**
                     * 判断参数 CcnDescription 是否已赋值
                     * @return CcnDescription 是否已赋值
                     * 
                     */
                    bool CcnDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>关联实例数量</p>
                     * @return InstanceCount <p>关联实例数量</p>
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置<p>关联实例数量</p>
                     * @param _instanceCount <p>关联实例数量</p>
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例状态， &#39;ISOLATED&#39;: 隔离中（欠费停服），&#39;AVAILABLE&#39;：运行中。</p>
                     * @return State <p>实例状态， &#39;ISOLATED&#39;: 隔离中（欠费停服），&#39;AVAILABLE&#39;：运行中。</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>实例状态， &#39;ISOLATED&#39;: 隔离中（欠费停服），&#39;AVAILABLE&#39;：运行中。</p>
                     * @param _state <p>实例状态， &#39;ISOLATED&#39;: 隔离中（欠费停服），&#39;AVAILABLE&#39;：运行中。</p>
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
                     * 获取<p>实例服务质量，’PT’：白金，&#39;AU&#39;：金，&#39;AG&#39;：银。</p>
                     * @return QosLevel <p>实例服务质量，’PT’：白金，&#39;AU&#39;：金，&#39;AG&#39;：银。</p>
                     * 
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置<p>实例服务质量，’PT’：白金，&#39;AU&#39;：金，&#39;AG&#39;：银。</p>
                     * @param _qosLevel <p>实例服务质量，’PT’：白金，&#39;AU&#39;：金，&#39;AG&#39;：银。</p>
                     * 
                     */
                    void SetQosLevel(const std::string& _qosLevel);

                    /**
                     * 判断参数 QosLevel 是否已赋值
                     * @return QosLevel 是否已赋值
                     * 
                     */
                    bool QosLevelHasBeenSet() const;

                    /**
                     * 获取<p>付费类型，PREPAID为预付费，POSTPAID为后付费。</p>
                     * @return InstanceChargeType <p>付费类型，PREPAID为预付费，POSTPAID为后付费。</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>付费类型，PREPAID为预付费，POSTPAID为后付费。</p>
                     * @param _instanceChargeType <p>付费类型，PREPAID为预付费，POSTPAID为后付费。</p>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>计量类型</p>
                     * @return InstanceMeteringType <p>计量类型</p>
                     * 
                     */
                    std::string GetInstanceMeteringType() const;

                    /**
                     * 设置<p>计量类型</p>
                     * @param _instanceMeteringType <p>计量类型</p>
                     * 
                     */
                    void SetInstanceMeteringType(const std::string& _instanceMeteringType);

                    /**
                     * 判断参数 InstanceMeteringType 是否已赋值
                     * @return InstanceMeteringType 是否已赋值
                     * 
                     */
                    bool InstanceMeteringTypeHasBeenSet() const;

                    /**
                     * 获取<p>限速类型，<code>INTER_REGION_LIMIT</code> 为地域间限速；<code>OUTER_REGION_LIMIT</code> 为地域出口限速。</p>
                     * @return BandwidthLimitType <p>限速类型，<code>INTER_REGION_LIMIT</code> 为地域间限速；<code>OUTER_REGION_LIMIT</code> 为地域出口限速。</p>
                     * 
                     */
                    std::string GetBandwidthLimitType() const;

                    /**
                     * 设置<p>限速类型，<code>INTER_REGION_LIMIT</code> 为地域间限速；<code>OUTER_REGION_LIMIT</code> 为地域出口限速。</p>
                     * @param _bandwidthLimitType <p>限速类型，<code>INTER_REGION_LIMIT</code> 为地域间限速；<code>OUTER_REGION_LIMIT</code> 为地域出口限速。</p>
                     * 
                     */
                    void SetBandwidthLimitType(const std::string& _bandwidthLimitType);

                    /**
                     * 判断参数 BandwidthLimitType 是否已赋值
                     * @return BandwidthLimitType 是否已赋值
                     * 
                     */
                    bool BandwidthLimitTypeHasBeenSet() const;

                    /**
                     * 获取<p>标签键值对。</p>
                     * @return TagSet <p>标签键值对。</p>
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置<p>标签键值对。</p>
                     * @param _tagSet <p>标签键值对。</p>
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取<p>是否支持云联网路由优先级的功能。<code>False</code>：不支持，<code>True</code>：支持。</p>
                     * @return RoutePriorityFlag <p>是否支持云联网路由优先级的功能。<code>False</code>：不支持，<code>True</code>：支持。</p>
                     * 
                     */
                    bool GetRoutePriorityFlag() const;

                    /**
                     * 设置<p>是否支持云联网路由优先级的功能。<code>False</code>：不支持，<code>True</code>：支持。</p>
                     * @param _routePriorityFlag <p>是否支持云联网路由优先级的功能。<code>False</code>：不支持，<code>True</code>：支持。</p>
                     * 
                     */
                    void SetRoutePriorityFlag(const bool& _routePriorityFlag);

                    /**
                     * 判断参数 RoutePriorityFlag 是否已赋值
                     * @return RoutePriorityFlag 是否已赋值
                     * 
                     */
                    bool RoutePriorityFlagHasBeenSet() const;

                    /**
                     * 获取<p>实例关联的路由表个数。</p>
                     * @return RouteTableCount <p>实例关联的路由表个数。</p>
                     * 
                     */
                    uint64_t GetRouteTableCount() const;

                    /**
                     * 设置<p>实例关联的路由表个数。</p>
                     * @param _routeTableCount <p>实例关联的路由表个数。</p>
                     * 
                     */
                    void SetRouteTableCount(const uint64_t& _routeTableCount);

                    /**
                     * 判断参数 RouteTableCount 是否已赋值
                     * @return RouteTableCount 是否已赋值
                     * 
                     */
                    bool RouteTableCountHasBeenSet() const;

                    /**
                     * 获取<p>是否开启云联网多路由表特性。<code>False</code>：未开启，<code>True</code>：开启。</p>
                     * @return RouteTableFlag <p>是否开启云联网多路由表特性。<code>False</code>：未开启，<code>True</code>：开启。</p>
                     * 
                     */
                    bool GetRouteTableFlag() const;

                    /**
                     * 设置<p>是否开启云联网多路由表特性。<code>False</code>：未开启，<code>True</code>：开启。</p>
                     * @param _routeTableFlag <p>是否开启云联网多路由表特性。<code>False</code>：未开启，<code>True</code>：开启。</p>
                     * 
                     */
                    void SetRouteTableFlag(const bool& _routeTableFlag);

                    /**
                     * 判断参数 RouteTableFlag 是否已赋值
                     * @return RouteTableFlag 是否已赋值
                     * 
                     */
                    bool RouteTableFlagHasBeenSet() const;

                    /**
                     * 获取<p><code>true</code>：实例已被封禁，流量不通，<code>false</code>:解封禁。</p>
                     * @return IsSecurityLock <p><code>true</code>：实例已被封禁，流量不通，<code>false</code>:解封禁。</p>
                     * 
                     */
                    bool GetIsSecurityLock() const;

                    /**
                     * 设置<p><code>true</code>：实例已被封禁，流量不通，<code>false</code>:解封禁。</p>
                     * @param _isSecurityLock <p><code>true</code>：实例已被封禁，流量不通，<code>false</code>:解封禁。</p>
                     * 
                     */
                    void SetIsSecurityLock(const bool& _isSecurityLock);

                    /**
                     * 判断参数 IsSecurityLock 是否已赋值
                     * @return IsSecurityLock 是否已赋值
                     * 
                     */
                    bool IsSecurityLockHasBeenSet() const;

                    /**
                     * 获取<p>是否开启云联网路由传播策略。<code>False</code> 未开启，<code>True</code> 开启。</p>
                     * @return RouteBroadcastPolicyFlag <p>是否开启云联网路由传播策略。<code>False</code> 未开启，<code>True</code> 开启。</p>
                     * 
                     */
                    bool GetRouteBroadcastPolicyFlag() const;

                    /**
                     * 设置<p>是否开启云联网路由传播策略。<code>False</code> 未开启，<code>True</code> 开启。</p>
                     * @param _routeBroadcastPolicyFlag <p>是否开启云联网路由传播策略。<code>False</code> 未开启，<code>True</code> 开启。</p>
                     * 
                     */
                    void SetRouteBroadcastPolicyFlag(const bool& _routeBroadcastPolicyFlag);

                    /**
                     * 判断参数 RouteBroadcastPolicyFlag 是否已赋值
                     * @return RouteBroadcastPolicyFlag 是否已赋值
                     * 
                     */
                    bool RouteBroadcastPolicyFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否开启等价路由功能。<code>False</code> 未开启，<code>True</code> 开启。</p>
                     * @return RouteECMPFlag <p>是否开启等价路由功能。<code>False</code> 未开启，<code>True</code> 开启。</p>
                     * 
                     */
                    bool GetRouteECMPFlag() const;

                    /**
                     * 设置<p>是否开启等价路由功能。<code>False</code> 未开启，<code>True</code> 开启。</p>
                     * @param _routeECMPFlag <p>是否开启等价路由功能。<code>False</code> 未开启，<code>True</code> 开启。</p>
                     * 
                     */
                    void SetRouteECMPFlag(const bool& _routeECMPFlag);

                    /**
                     * 判断参数 RouteECMPFlag 是否已赋值
                     * @return RouteECMPFlag 是否已赋值
                     * 
                     */
                    bool RouteECMPFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否开启路由重叠功能。<code>False</code> 未开启，<code>True</code> 开启。</p>
                     * @return RouteOverlapFlag <p>是否开启路由重叠功能。<code>False</code> 未开启，<code>True</code> 开启。</p>
                     * 
                     */
                    bool GetRouteOverlapFlag() const;

                    /**
                     * 设置<p>是否开启路由重叠功能。<code>False</code> 未开启，<code>True</code> 开启。</p>
                     * @param _routeOverlapFlag <p>是否开启路由重叠功能。<code>False</code> 未开启，<code>True</code> 开启。</p>
                     * 
                     */
                    void SetRouteOverlapFlag(const bool& _routeOverlapFlag);

                    /**
                     * 判断参数 RouteOverlapFlag 是否已赋值
                     * @return RouteOverlapFlag 是否已赋值
                     * 
                     */
                    bool RouteOverlapFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否开启QOS。</p>
                     * @return TrafficMarkingPolicyFlag <p>是否开启QOS。</p>
                     * 
                     */
                    bool GetTrafficMarkingPolicyFlag() const;

                    /**
                     * 设置<p>是否开启QOS。</p>
                     * @param _trafficMarkingPolicyFlag <p>是否开启QOS。</p>
                     * 
                     */
                    void SetTrafficMarkingPolicyFlag(const bool& _trafficMarkingPolicyFlag);

                    /**
                     * 判断参数 TrafficMarkingPolicyFlag 是否已赋值
                     * @return TrafficMarkingPolicyFlag 是否已赋值
                     * 
                     */
                    bool TrafficMarkingPolicyFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否开启路由表选择策略。</p>
                     * @return RouteSelectPolicyFlag <p>是否开启路由表选择策略。</p>
                     * 
                     */
                    bool GetRouteSelectPolicyFlag() const;

                    /**
                     * 设置<p>是否开启路由表选择策略。</p>
                     * @param _routeSelectPolicyFlag <p>是否开启路由表选择策略。</p>
                     * 
                     */
                    void SetRouteSelectPolicyFlag(const bool& _routeSelectPolicyFlag);

                    /**
                     * 判断参数 RouteSelectPolicyFlag 是否已赋值
                     * @return RouteSelectPolicyFlag 是否已赋值
                     * 
                     */
                    bool RouteSelectPolicyFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否开启二层云联网通道。</p>
                     * @return DirectConnectAccelerateChannelFlag <p>是否开启二层云联网通道。</p>
                     * 
                     */
                    bool GetDirectConnectAccelerateChannelFlag() const;

                    /**
                     * 设置<p>是否开启二层云联网通道。</p>
                     * @param _directConnectAccelerateChannelFlag <p>是否开启二层云联网通道。</p>
                     * 
                     */
                    void SetDirectConnectAccelerateChannelFlag(const bool& _directConnectAccelerateChannelFlag);

                    /**
                     * 判断参数 DirectConnectAccelerateChannelFlag 是否已赋值
                     * @return DirectConnectAccelerateChannelFlag 是否已赋值
                     * 
                     */
                    bool DirectConnectAccelerateChannelFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否支持ipv6路由表</p>
                     * @return Ipv6Flag <p>是否支持ipv6路由表</p>
                     * 
                     */
                    bool GetIpv6Flag() const;

                    /**
                     * 设置<p>是否支持ipv6路由表</p>
                     * @param _ipv6Flag <p>是否支持ipv6路由表</p>
                     * 
                     */
                    void SetIpv6Flag(const bool& _ipv6Flag);

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     * 
                     */
                    bool Ipv6FlagHasBeenSet() const;

                    /**
                     * 获取<p>是否支持路由表聚合策略</p>
                     * @return MrtbAggregatePolicyFlag <p>是否支持路由表聚合策略</p>
                     * 
                     */
                    bool GetMrtbAggregatePolicyFlag() const;

                    /**
                     * 设置<p>是否支持路由表聚合策略</p>
                     * @param _mrtbAggregatePolicyFlag <p>是否支持路由表聚合策略</p>
                     * 
                     */
                    void SetMrtbAggregatePolicyFlag(const bool& _mrtbAggregatePolicyFlag);

                    /**
                     * 判断参数 MrtbAggregatePolicyFlag 是否已赋值
                     * @return MrtbAggregatePolicyFlag 是否已赋值
                     * 
                     */
                    bool MrtbAggregatePolicyFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否支持AsPath策略值</p>
                     * @return MrtbPolicyValueFlag <p>是否支持AsPath策略值</p>
                     * 
                     */
                    bool GetMrtbPolicyValueFlag() const;

                    /**
                     * 设置<p>是否支持AsPath策略值</p>
                     * @param _mrtbPolicyValueFlag <p>是否支持AsPath策略值</p>
                     * 
                     */
                    void SetMrtbPolicyValueFlag(const bool& _mrtbPolicyValueFlag);

                    /**
                     * 判断参数 MrtbPolicyValueFlag 是否已赋值
                     * @return MrtbPolicyValueFlag 是否已赋值
                     * 
                     */
                    bool MrtbPolicyValueFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否支持Community策略值</p>
                     * @return RouteTablePolicyValueCommunityFlag <p>是否支持Community策略值</p>
                     * 
                     */
                    bool GetRouteTablePolicyValueCommunityFlag() const;

                    /**
                     * 设置<p>是否支持Community策略值</p>
                     * @param _routeTablePolicyValueCommunityFlag <p>是否支持Community策略值</p>
                     * 
                     */
                    void SetRouteTablePolicyValueCommunityFlag(const bool& _routeTablePolicyValueCommunityFlag);

                    /**
                     * 判断参数 RouteTablePolicyValueCommunityFlag 是否已赋值
                     * @return RouteTablePolicyValueCommunityFlag 是否已赋值
                     * 
                     */
                    bool RouteTablePolicyValueCommunityFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否支持策略路由</p>
                     * @return PolicyBasedRoutingFlag <p>是否支持策略路由</p>
                     * 
                     */
                    bool GetPolicyBasedRoutingFlag() const;

                    /**
                     * 设置<p>是否支持策略路由</p>
                     * @param _policyBasedRoutingFlag <p>是否支持策略路由</p>
                     * 
                     */
                    void SetPolicyBasedRoutingFlag(const bool& _policyBasedRoutingFlag);

                    /**
                     * 判断参数 PolicyBasedRoutingFlag 是否已赋值
                     * @return PolicyBasedRoutingFlag 是否已赋值
                     * 
                     */
                    bool PolicyBasedRoutingFlagHasBeenSet() const;

                    /**
                     * 获取<p>服务等级模式</p><p>枚举值：</p><ul><li>0： 云联网模式</li><li>1： 地域间模式</li></ul>
                     * @return ServiceLevelMode <p>服务等级模式</p><p>枚举值：</p><ul><li>0： 云联网模式</li><li>1： 地域间模式</li></ul>
                     * 
                     */
                    uint64_t GetServiceLevelMode() const;

                    /**
                     * 设置<p>服务等级模式</p><p>枚举值：</p><ul><li>0： 云联网模式</li><li>1： 地域间模式</li></ul>
                     * @param _serviceLevelMode <p>服务等级模式</p><p>枚举值：</p><ul><li>0： 云联网模式</li><li>1： 地域间模式</li></ul>
                     * 
                     */
                    void SetServiceLevelMode(const uint64_t& _serviceLevelMode);

                    /**
                     * 判断参数 ServiceLevelMode 是否已赋值
                     * @return ServiceLevelMode 是否已赋值
                     * 
                     */
                    bool ServiceLevelModeHasBeenSet() const;

                private:

                    /**
                     * <p>云联网唯一ID</p>
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * <p>云联网名称</p>
                     */
                    std::string m_ccnName;
                    bool m_ccnNameHasBeenSet;

                    /**
                     * <p>云联网描述信息</p>
                     */
                    std::string m_ccnDescription;
                    bool m_ccnDescriptionHasBeenSet;

                    /**
                     * <p>关联实例数量</p>
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>实例状态， &#39;ISOLATED&#39;: 隔离中（欠费停服），&#39;AVAILABLE&#39;：运行中。</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>实例服务质量，’PT’：白金，&#39;AU&#39;：金，&#39;AG&#39;：银。</p>
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                    /**
                     * <p>付费类型，PREPAID为预付费，POSTPAID为后付费。</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>计量类型</p>
                     */
                    std::string m_instanceMeteringType;
                    bool m_instanceMeteringTypeHasBeenSet;

                    /**
                     * <p>限速类型，<code>INTER_REGION_LIMIT</code> 为地域间限速；<code>OUTER_REGION_LIMIT</code> 为地域出口限速。</p>
                     */
                    std::string m_bandwidthLimitType;
                    bool m_bandwidthLimitTypeHasBeenSet;

                    /**
                     * <p>标签键值对。</p>
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * <p>是否支持云联网路由优先级的功能。<code>False</code>：不支持，<code>True</code>：支持。</p>
                     */
                    bool m_routePriorityFlag;
                    bool m_routePriorityFlagHasBeenSet;

                    /**
                     * <p>实例关联的路由表个数。</p>
                     */
                    uint64_t m_routeTableCount;
                    bool m_routeTableCountHasBeenSet;

                    /**
                     * <p>是否开启云联网多路由表特性。<code>False</code>：未开启，<code>True</code>：开启。</p>
                     */
                    bool m_routeTableFlag;
                    bool m_routeTableFlagHasBeenSet;

                    /**
                     * <p><code>true</code>：实例已被封禁，流量不通，<code>false</code>:解封禁。</p>
                     */
                    bool m_isSecurityLock;
                    bool m_isSecurityLockHasBeenSet;

                    /**
                     * <p>是否开启云联网路由传播策略。<code>False</code> 未开启，<code>True</code> 开启。</p>
                     */
                    bool m_routeBroadcastPolicyFlag;
                    bool m_routeBroadcastPolicyFlagHasBeenSet;

                    /**
                     * <p>是否开启等价路由功能。<code>False</code> 未开启，<code>True</code> 开启。</p>
                     */
                    bool m_routeECMPFlag;
                    bool m_routeECMPFlagHasBeenSet;

                    /**
                     * <p>是否开启路由重叠功能。<code>False</code> 未开启，<code>True</code> 开启。</p>
                     */
                    bool m_routeOverlapFlag;
                    bool m_routeOverlapFlagHasBeenSet;

                    /**
                     * <p>是否开启QOS。</p>
                     */
                    bool m_trafficMarkingPolicyFlag;
                    bool m_trafficMarkingPolicyFlagHasBeenSet;

                    /**
                     * <p>是否开启路由表选择策略。</p>
                     */
                    bool m_routeSelectPolicyFlag;
                    bool m_routeSelectPolicyFlagHasBeenSet;

                    /**
                     * <p>是否开启二层云联网通道。</p>
                     */
                    bool m_directConnectAccelerateChannelFlag;
                    bool m_directConnectAccelerateChannelFlagHasBeenSet;

                    /**
                     * <p>是否支持ipv6路由表</p>
                     */
                    bool m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                    /**
                     * <p>是否支持路由表聚合策略</p>
                     */
                    bool m_mrtbAggregatePolicyFlag;
                    bool m_mrtbAggregatePolicyFlagHasBeenSet;

                    /**
                     * <p>是否支持AsPath策略值</p>
                     */
                    bool m_mrtbPolicyValueFlag;
                    bool m_mrtbPolicyValueFlagHasBeenSet;

                    /**
                     * <p>是否支持Community策略值</p>
                     */
                    bool m_routeTablePolicyValueCommunityFlag;
                    bool m_routeTablePolicyValueCommunityFlagHasBeenSet;

                    /**
                     * <p>是否支持策略路由</p>
                     */
                    bool m_policyBasedRoutingFlag;
                    bool m_policyBasedRoutingFlagHasBeenSet;

                    /**
                     * <p>服务等级模式</p><p>枚举值：</p><ul><li>0： 云联网模式</li><li>1： 地域间模式</li></ul>
                     */
                    uint64_t m_serviceLevelMode;
                    bool m_serviceLevelModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCN_H_
