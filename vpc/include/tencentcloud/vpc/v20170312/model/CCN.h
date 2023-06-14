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
                     * 获取云联网唯一ID
                     * @return CcnId 云联网唯一ID
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网唯一ID
                     * @param _ccnId 云联网唯一ID
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
                     * 获取云联网名称
                     * @return CcnName 云联网名称
                     * 
                     */
                    std::string GetCcnName() const;

                    /**
                     * 设置云联网名称
                     * @param _ccnName 云联网名称
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
                     * 获取云联网描述信息
                     * @return CcnDescription 云联网描述信息
                     * 
                     */
                    std::string GetCcnDescription() const;

                    /**
                     * 设置云联网描述信息
                     * @param _ccnDescription 云联网描述信息
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
                     * 获取关联实例数量
                     * @return InstanceCount 关联实例数量
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置关联实例数量
                     * @param _instanceCount 关联实例数量
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取实例状态， 'ISOLATED': 隔离中（欠费停服），'AVAILABLE'：运行中。
                     * @return State 实例状态， 'ISOLATED': 隔离中（欠费停服），'AVAILABLE'：运行中。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置实例状态， 'ISOLATED': 隔离中（欠费停服），'AVAILABLE'：运行中。
                     * @param _state 实例状态， 'ISOLATED': 隔离中（欠费停服），'AVAILABLE'：运行中。
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
                     * 获取实例服务质量，’PT’：白金，'AU'：金，'AG'：银。
                     * @return QosLevel 实例服务质量，’PT’：白金，'AU'：金，'AG'：银。
                     * 
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置实例服务质量，’PT’：白金，'AU'：金，'AG'：银。
                     * @param _qosLevel 实例服务质量，’PT’：白金，'AU'：金，'AG'：银。
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
                     * 获取付费类型，PREPAID为预付费，POSTPAID为后付费。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceChargeType 付费类型，PREPAID为预付费，POSTPAID为后付费。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置付费类型，PREPAID为预付费，POSTPAID为后付费。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceChargeType 付费类型，PREPAID为预付费，POSTPAID为后付费。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取限速类型，`INTER_REGION_LIMIT` 为地域间限速；`OUTER_REGION_LIMIT` 为地域出口限速。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BandwidthLimitType 限速类型，`INTER_REGION_LIMIT` 为地域间限速；`OUTER_REGION_LIMIT` 为地域出口限速。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBandwidthLimitType() const;

                    /**
                     * 设置限速类型，`INTER_REGION_LIMIT` 为地域间限速；`OUTER_REGION_LIMIT` 为地域出口限速。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidthLimitType 限速类型，`INTER_REGION_LIMIT` 为地域间限速；`OUTER_REGION_LIMIT` 为地域出口限速。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取标签键值对。
                     * @return TagSet 标签键值对。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。
                     * @param _tagSet 标签键值对。
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
                     * 获取是否支持云联网路由优先级的功能。`False`：不支持，`True`：支持。
                     * @return RoutePriorityFlag 是否支持云联网路由优先级的功能。`False`：不支持，`True`：支持。
                     * 
                     */
                    bool GetRoutePriorityFlag() const;

                    /**
                     * 设置是否支持云联网路由优先级的功能。`False`：不支持，`True`：支持。
                     * @param _routePriorityFlag 是否支持云联网路由优先级的功能。`False`：不支持，`True`：支持。
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
                     * 获取实例关联的路由表个数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RouteTableCount 实例关联的路由表个数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRouteTableCount() const;

                    /**
                     * 设置实例关联的路由表个数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routeTableCount 实例关联的路由表个数。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否开启云联网多路由表特性。`False`：未开启，`True`：开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RouteTableFlag 是否开启云联网多路由表特性。`False`：未开启，`True`：开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRouteTableFlag() const;

                    /**
                     * 设置是否开启云联网多路由表特性。`False`：未开启，`True`：开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routeTableFlag 是否开启云联网多路由表特性。`False`：未开启，`True`：开启。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取`true`：实例已被封禁，流量不通，`false`:解封禁。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSecurityLock `true`：实例已被封禁，流量不通，`false`:解封禁。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsSecurityLock() const;

                    /**
                     * 设置`true`：实例已被封禁，流量不通，`false`:解封禁。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSecurityLock `true`：实例已被封禁，流量不通，`false`:解封禁。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否开启云联网路由传播策略。`False` 未开启，`True` 开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RouteBroadcastPolicyFlag 是否开启云联网路由传播策略。`False` 未开启，`True` 开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRouteBroadcastPolicyFlag() const;

                    /**
                     * 设置是否开启云联网路由传播策略。`False` 未开启，`True` 开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routeBroadcastPolicyFlag 是否开启云联网路由传播策略。`False` 未开启，`True` 开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRouteBroadcastPolicyFlag(const bool& _routeBroadcastPolicyFlag);

                    /**
                     * 判断参数 RouteBroadcastPolicyFlag 是否已赋值
                     * @return RouteBroadcastPolicyFlag 是否已赋值
                     * 
                     */
                    bool RouteBroadcastPolicyFlagHasBeenSet() const;

                private:

                    /**
                     * 云联网唯一ID
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 云联网名称
                     */
                    std::string m_ccnName;
                    bool m_ccnNameHasBeenSet;

                    /**
                     * 云联网描述信息
                     */
                    std::string m_ccnDescription;
                    bool m_ccnDescriptionHasBeenSet;

                    /**
                     * 关联实例数量
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例状态， 'ISOLATED': 隔离中（欠费停服），'AVAILABLE'：运行中。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 实例服务质量，’PT’：白金，'AU'：金，'AG'：银。
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                    /**
                     * 付费类型，PREPAID为预付费，POSTPAID为后付费。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 限速类型，`INTER_REGION_LIMIT` 为地域间限速；`OUTER_REGION_LIMIT` 为地域出口限速。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bandwidthLimitType;
                    bool m_bandwidthLimitTypeHasBeenSet;

                    /**
                     * 标签键值对。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 是否支持云联网路由优先级的功能。`False`：不支持，`True`：支持。
                     */
                    bool m_routePriorityFlag;
                    bool m_routePriorityFlagHasBeenSet;

                    /**
                     * 实例关联的路由表个数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_routeTableCount;
                    bool m_routeTableCountHasBeenSet;

                    /**
                     * 是否开启云联网多路由表特性。`False`：未开启，`True`：开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_routeTableFlag;
                    bool m_routeTableFlagHasBeenSet;

                    /**
                     * `true`：实例已被封禁，流量不通，`false`:解封禁。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isSecurityLock;
                    bool m_isSecurityLockHasBeenSet;

                    /**
                     * 是否开启云联网路由传播策略。`False` 未开启，`True` 开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_routeBroadcastPolicyFlag;
                    bool m_routeBroadcastPolicyFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCN_H_
