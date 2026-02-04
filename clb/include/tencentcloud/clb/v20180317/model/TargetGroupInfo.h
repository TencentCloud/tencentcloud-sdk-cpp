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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/AssociationItem.h>
#include <tencentcloud/clb/v20180317/model/TargetGroupHealthCheck.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 目标组信息
                */
                class TargetGroupInfo : public AbstractModel
                {
                public:
                    TargetGroupInfo();
                    ~TargetGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>目标组ID</p>
                     * @return TargetGroupId <p>目标组ID</p>
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置<p>目标组ID</p>
                     * @param _targetGroupId <p>目标组ID</p>
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>目标组的vpcid</p>
                     * @return VpcId <p>目标组的vpcid</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>目标组的vpcid</p>
                     * @param _vpcId <p>目标组的vpcid</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>目标组的名字</p>
                     * @return TargetGroupName <p>目标组的名字</p>
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置<p>目标组的名字</p>
                     * @param _targetGroupName <p>目标组的名字</p>
                     * 
                     */
                    void SetTargetGroupName(const std::string& _targetGroupName);

                    /**
                     * 判断参数 TargetGroupName 是否已赋值
                     * @return TargetGroupName 是否已赋值
                     * 
                     */
                    bool TargetGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>目标组的默认端口，全监听目标组此字段返回0，表示无效端口。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port <p>目标组的默认端口，全监听目标组此字段返回0，表示无效端口。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>目标组的默认端口，全监听目标组此字段返回0，表示无效端口。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port <p>目标组的默认端口，全监听目标组此字段返回0，表示无效端口。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>目标组的创建时间</p>
                     * @return CreatedTime <p>目标组的创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>目标组的创建时间</p>
                     * @param _createdTime <p>目标组的创建时间</p>
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
                     * 获取<p>目标组的修改时间</p>
                     * @return UpdatedTime <p>目标组的修改时间</p>
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置<p>目标组的修改时间</p>
                     * @param _updatedTime <p>目标组的修改时间</p>
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>关联到的规则数组。在DescribeTargetGroupList接口调用时无法获取到该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssociatedRule <p>关联到的规则数组。在DescribeTargetGroupList接口调用时无法获取到该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AssociationItem> GetAssociatedRule() const;

                    /**
                     * 设置<p>关联到的规则数组。在DescribeTargetGroupList接口调用时无法获取到该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _associatedRule <p>关联到的规则数组。在DescribeTargetGroupList接口调用时无法获取到该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssociatedRule(const std::vector<AssociationItem>& _associatedRule);

                    /**
                     * 判断参数 AssociatedRule 是否已赋值
                     * @return AssociatedRule 是否已赋值
                     * 
                     */
                    bool AssociatedRuleHasBeenSet() const;

                    /**
                     * 获取<p>目标组后端转发协议, 仅v2新版目标组返回有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol <p>目标组后端转发协议, 仅v2新版目标组返回有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>目标组后端转发协议, 仅v2新版目标组返回有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol <p>目标组后端转发协议, 仅v2新版目标组返回有效值。</p>
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
                     * 获取<p>调度算法，仅后端转发协议为(HTTP、HTTPS、GRPC)的目标组返回有效值， 可选值：<br><ur></p><li>WRR:按权重轮询。</li><li>LEAST_CONN:最小连接数。</li><li>IP_HASH:按IP哈希。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleAlgorithm <p>调度算法，仅后端转发协议为(HTTP、HTTPS、GRPC)的目标组返回有效值， 可选值：<br><ur></p><li>WRR:按权重轮询。</li><li>LEAST_CONN:最小连接数。</li><li>IP_HASH:按IP哈希。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleAlgorithm() const;

                    /**
                     * 设置<p>调度算法，仅后端转发协议为(HTTP、HTTPS、GRPC)的目标组返回有效值， 可选值：<br><ur></p><li>WRR:按权重轮询。</li><li>LEAST_CONN:最小连接数。</li><li>IP_HASH:按IP哈希。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleAlgorithm <p>调度算法，仅后端转发协议为(HTTP、HTTPS、GRPC)的目标组返回有效值， 可选值：<br><ur></p><li>WRR:按权重轮询。</li><li>LEAST_CONN:最小连接数。</li><li>IP_HASH:按IP哈希。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleAlgorithm(const std::string& _scheduleAlgorithm);

                    /**
                     * 判断参数 ScheduleAlgorithm 是否已赋值
                     * @return ScheduleAlgorithm 是否已赋值
                     * 
                     */
                    bool ScheduleAlgorithmHasBeenSet() const;

                    /**
                     * 获取<p>健康检查详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheck <p>健康检查详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TargetGroupHealthCheck GetHealthCheck() const;

                    /**
                     * 设置<p>健康检查详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheck <p>健康检查详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthCheck(const TargetGroupHealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取<p>目标组类型，当前支持v1(旧版目标组), v2(新版目标组)。默认为v1旧版目标组。</p>
                     * @return TargetGroupType <p>目标组类型，当前支持v1(旧版目标组), v2(新版目标组)。默认为v1旧版目标组。</p>
                     * 
                     */
                    std::string GetTargetGroupType() const;

                    /**
                     * 设置<p>目标组类型，当前支持v1(旧版目标组), v2(新版目标组)。默认为v1旧版目标组。</p>
                     * @param _targetGroupType <p>目标组类型，当前支持v1(旧版目标组), v2(新版目标组)。默认为v1旧版目标组。</p>
                     * 
                     */
                    void SetTargetGroupType(const std::string& _targetGroupType);

                    /**
                     * 判断参数 TargetGroupType 是否已赋值
                     * @return TargetGroupType 是否已赋值
                     * 
                     */
                    bool TargetGroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>目标组已关联的规则数。</p>
                     * @return AssociatedRuleCount <p>目标组已关联的规则数。</p>
                     * 
                     */
                    int64_t GetAssociatedRuleCount() const;

                    /**
                     * 设置<p>目标组已关联的规则数。</p>
                     * @param _associatedRuleCount <p>目标组已关联的规则数。</p>
                     * 
                     */
                    void SetAssociatedRuleCount(const int64_t& _associatedRuleCount);

                    /**
                     * 判断参数 AssociatedRuleCount 是否已赋值
                     * @return AssociatedRuleCount 是否已赋值
                     * 
                     */
                    bool AssociatedRuleCountHasBeenSet() const;

                    /**
                     * 获取<p>目标组内的实例数量。</p>
                     * @return RegisteredInstancesCount <p>目标组内的实例数量。</p>
                     * 
                     */
                    int64_t GetRegisteredInstancesCount() const;

                    /**
                     * 设置<p>目标组内的实例数量。</p>
                     * @param _registeredInstancesCount <p>目标组内的实例数量。</p>
                     * 
                     */
                    void SetRegisteredInstancesCount(const int64_t& _registeredInstancesCount);

                    /**
                     * 判断参数 RegisteredInstancesCount 是否已赋值
                     * @return RegisteredInstancesCount 是否已赋值
                     * 
                     */
                    bool RegisteredInstancesCountHasBeenSet() const;

                    /**
                     * 获取<p>标签。</p>
                     * @return Tag <p>标签。</p>
                     * 
                     */
                    std::vector<TagInfo> GetTag() const;

                    /**
                     * 设置<p>标签。</p>
                     * @param _tag <p>标签。</p>
                     * 
                     */
                    void SetTag(const std::vector<TagInfo>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>默认权重。只有v2类型目标组返回该字段。当返回为NULL时， 表示未设置默认权重。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight <p>默认权重。只有v2类型目标组返回该字段。当返回为NULL时， 表示未设置默认权重。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置<p>默认权重。只有v2类型目标组返回该字段。当返回为NULL时， 表示未设置默认权重。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight <p>默认权重。只有v2类型目标组返回该字段。当返回为NULL时， 表示未设置默认权重。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取<p>是否全监听目标组。</p>
                     * @return FullListenSwitch <p>是否全监听目标组。</p>
                     * 
                     */
                    bool GetFullListenSwitch() const;

                    /**
                     * 设置<p>是否全监听目标组。</p>
                     * @param _fullListenSwitch <p>是否全监听目标组。</p>
                     * 
                     */
                    void SetFullListenSwitch(const bool& _fullListenSwitch);

                    /**
                     * 判断参数 FullListenSwitch 是否已赋值
                     * @return FullListenSwitch 是否已赋值
                     * 
                     */
                    bool FullListenSwitchHasBeenSet() const;

                    /**
                     * 获取<p>是否开启长连接,  仅后端转发协议为HTTP/HTTPS/GRPC目标组返回有效值。</p>
                     * @return KeepaliveEnable <p>是否开启长连接,  仅后端转发协议为HTTP/HTTPS/GRPC目标组返回有效值。</p>
                     * 
                     */
                    bool GetKeepaliveEnable() const;

                    /**
                     * 设置<p>是否开启长连接,  仅后端转发协议为HTTP/HTTPS/GRPC目标组返回有效值。</p>
                     * @param _keepaliveEnable <p>是否开启长连接,  仅后端转发协议为HTTP/HTTPS/GRPC目标组返回有效值。</p>
                     * 
                     */
                    void SetKeepaliveEnable(const bool& _keepaliveEnable);

                    /**
                     * 判断参数 KeepaliveEnable 是否已赋值
                     * @return KeepaliveEnable 是否已赋值
                     * 
                     */
                    bool KeepaliveEnableHasBeenSet() const;

                    /**
                     * 获取<p>会话保持时间，仅后端转发协议为HTTP/HTTPS/GRPC目标组返回有效值。</p>
                     * @return SessionExpireTime <p>会话保持时间，仅后端转发协议为HTTP/HTTPS/GRPC目标组返回有效值。</p>
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置<p>会话保持时间，仅后端转发协议为HTTP/HTTPS/GRPC目标组返回有效值。</p>
                     * @param _sessionExpireTime <p>会话保持时间，仅后端转发协议为HTTP/HTTPS/GRPC目标组返回有效值。</p>
                     * 
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     * 
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>IP版本。</p>
                     * @return IpVersion <p>IP版本。</p>
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置<p>IP版本。</p>
                     * @param _ipVersion <p>IP版本。</p>
                     * 
                     */
                    void SetIpVersion(const std::string& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                private:

                    /**
                     * <p>目标组ID</p>
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * <p>目标组的vpcid</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>目标组的名字</p>
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * <p>目标组的默认端口，全监听目标组此字段返回0，表示无效端口。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>目标组的创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>目标组的修改时间</p>
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * <p>关联到的规则数组。在DescribeTargetGroupList接口调用时无法获取到该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssociationItem> m_associatedRule;
                    bool m_associatedRuleHasBeenSet;

                    /**
                     * <p>目标组后端转发协议, 仅v2新版目标组返回有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>调度算法，仅后端转发协议为(HTTP、HTTPS、GRPC)的目标组返回有效值， 可选值：<br><ur></p><li>WRR:按权重轮询。</li><li>LEAST_CONN:最小连接数。</li><li>IP_HASH:按IP哈希。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleAlgorithm;
                    bool m_scheduleAlgorithmHasBeenSet;

                    /**
                     * <p>健康检查详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TargetGroupHealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * <p>目标组类型，当前支持v1(旧版目标组), v2(新版目标组)。默认为v1旧版目标组。</p>
                     */
                    std::string m_targetGroupType;
                    bool m_targetGroupTypeHasBeenSet;

                    /**
                     * <p>目标组已关联的规则数。</p>
                     */
                    int64_t m_associatedRuleCount;
                    bool m_associatedRuleCountHasBeenSet;

                    /**
                     * <p>目标组内的实例数量。</p>
                     */
                    int64_t m_registeredInstancesCount;
                    bool m_registeredInstancesCountHasBeenSet;

                    /**
                     * <p>标签。</p>
                     */
                    std::vector<TagInfo> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>默认权重。只有v2类型目标组返回该字段。当返回为NULL时， 表示未设置默认权重。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>是否全监听目标组。</p>
                     */
                    bool m_fullListenSwitch;
                    bool m_fullListenSwitchHasBeenSet;

                    /**
                     * <p>是否开启长连接,  仅后端转发协议为HTTP/HTTPS/GRPC目标组返回有效值。</p>
                     */
                    bool m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * <p>会话保持时间，仅后端转发协议为HTTP/HTTPS/GRPC目标组返回有效值。</p>
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * <p>IP版本。</p>
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINFO_H_
