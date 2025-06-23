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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIPINSTANCE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcEndpointInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ 托管版实例信息
                */
                class RabbitMQVipInstance : public AbstractModel
                {
                public:
                    RabbitMQVipInstance();
                    ~RabbitMQVipInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例 ID
                     * @return InstanceId 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param _instanceId 实例 ID
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例版本
                     * @return InstanceVersion 实例版本
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置实例版本
                     * @param _instanceVersion 实例版本
                     * 
                     */
                    void SetInstanceVersion(const std::string& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
                     * @return Status 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
                     * @param _status 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取节点数量
                     * @return NodeCount 节点数量
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置节点数量
                     * @param _nodeCount 节点数量
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取实例配置规格名称
                     * @return ConfigDisplay 实例配置规格名称
                     * 
                     */
                    std::string GetConfigDisplay() const;

                    /**
                     * 设置实例配置规格名称
                     * @param _configDisplay 实例配置规格名称
                     * 
                     */
                    void SetConfigDisplay(const std::string& _configDisplay);

                    /**
                     * 判断参数 ConfigDisplay 是否已赋值
                     * @return ConfigDisplay 是否已赋值
                     * 
                     */
                    bool ConfigDisplayHasBeenSet() const;

                    /**
                     * 获取峰值TPS
                     * @return MaxTps 峰值TPS
                     * 
                     */
                    uint64_t GetMaxTps() const;

                    /**
                     * 设置峰值TPS
                     * @param _maxTps 峰值TPS
                     * 
                     */
                    void SetMaxTps(const uint64_t& _maxTps);

                    /**
                     * 判断参数 MaxTps 是否已赋值
                     * @return MaxTps 是否已赋值
                     * 
                     */
                    bool MaxTpsHasBeenSet() const;

                    /**
                     * 获取峰值带宽，Mbps为单位
                     * @return MaxBandWidth 峰值带宽，Mbps为单位
                     * 
                     */
                    uint64_t GetMaxBandWidth() const;

                    /**
                     * 设置峰值带宽，Mbps为单位
                     * @param _maxBandWidth 峰值带宽，Mbps为单位
                     * 
                     */
                    void SetMaxBandWidth(const uint64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     * 
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取存储容量，GB为单位
                     * @return MaxStorage 存储容量，GB为单位
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置存储容量，GB为单位
                     * @param _maxStorage 存储容量，GB为单位
                     * 
                     */
                    void SetMaxStorage(const uint64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取实例到期时间，按量付费的资源该值为 0，毫秒为单位。unix 时间戳
                     * @return ExpireTime 实例到期时间，按量付费的资源该值为 0，毫秒为单位。unix 时间戳
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置实例到期时间，按量付费的资源该值为 0，毫秒为单位。unix 时间戳
                     * @param _expireTime 实例到期时间，按量付费的资源该值为 0，毫秒为单位。unix 时间戳
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     * @return AutoRenewFlag 自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     * @param _autoRenewFlag 自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取1 表示预付费，0 表示后付费
                     * @return PayMode 1 表示预付费，0 表示后付费
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置1 表示预付费，0 表示后付费
                     * @param _payMode 1 表示预付费，0 表示后付费
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取集群的节点规格，需要输入对应的规格标识：
2C8G：rabbit-vip-basic-2c8g
4C16G：rabbit-vip-basic-4c16g
8C32G：rabbit-vip-basic-8c32g
16C32G：rabbit-vip-basic-4
16C64G：rabbit-vip-basic-16c64g
2C4G：rabbit-vip-basic-5
4C8G：rabbit-vip-basic-1
8C16G（已售罄）：rabbit-vip-basic-2
不传默认为4C8G：rabbit-vip-basic-1
                     * @return SpecName 集群的节点规格，需要输入对应的规格标识：
2C8G：rabbit-vip-basic-2c8g
4C16G：rabbit-vip-basic-4c16g
8C32G：rabbit-vip-basic-8c32g
16C32G：rabbit-vip-basic-4
16C64G：rabbit-vip-basic-16c64g
2C4G：rabbit-vip-basic-5
4C8G：rabbit-vip-basic-1
8C16G（已售罄）：rabbit-vip-basic-2
不传默认为4C8G：rabbit-vip-basic-1
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置集群的节点规格，需要输入对应的规格标识：
2C8G：rabbit-vip-basic-2c8g
4C16G：rabbit-vip-basic-4c16g
8C32G：rabbit-vip-basic-8c32g
16C32G：rabbit-vip-basic-4
16C64G：rabbit-vip-basic-16c64g
2C4G：rabbit-vip-basic-5
4C8G：rabbit-vip-basic-1
8C16G（已售罄）：rabbit-vip-basic-2
不传默认为4C8G：rabbit-vip-basic-1
                     * @param _specName 集群的节点规格，需要输入对应的规格标识：
2C8G：rabbit-vip-basic-2c8g
4C16G：rabbit-vip-basic-4c16g
8C32G：rabbit-vip-basic-8c32g
16C32G：rabbit-vip-basic-4
16C64G：rabbit-vip-basic-16c64g
2C4G：rabbit-vip-basic-5
4C8G：rabbit-vip-basic-1
8C16G（已售罄）：rabbit-vip-basic-2
不传默认为4C8G：rabbit-vip-basic-1
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取集群异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExceptionInformation 集群异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExceptionInformation() const;

                    /**
                     * 设置集群异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exceptionInformation 集群异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExceptionInformation(const std::string& _exceptionInformation);

                    /**
                     * 判断参数 ExceptionInformation 是否已赋值
                     * @return ExceptionInformation 是否已赋值
                     * 
                     */
                    bool ExceptionInformationHasBeenSet() const;

                    /**
                     * 获取实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
为了和计费区分开，额外开启一个状态位，用于显示。
                     * @return ClusterStatus 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
为了和计费区分开，额外开启一个状态位，用于显示。
                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
为了和计费区分开，额外开启一个状态位，用于显示。
                     * @param _clusterStatus 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
为了和计费区分开，额外开启一个状态位，用于显示。
                     * 
                     */
                    void SetClusterStatus(const int64_t& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取公网接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicAccessEndpoint 公网接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicAccessEndpoint() const;

                    /**
                     * 设置公网接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicAccessEndpoint 公网接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicAccessEndpoint(const std::string& _publicAccessEndpoint);

                    /**
                     * 判断参数 PublicAccessEndpoint 是否已赋值
                     * @return PublicAccessEndpoint 是否已赋值
                     * 
                     */
                    bool PublicAccessEndpointHasBeenSet() const;

                    /**
                     * 获取VPC 接入点列表
                     * @return Vpcs VPC 接入点列表
                     * 
                     */
                    std::vector<VpcEndpointInfo> GetVpcs() const;

                    /**
                     * 设置VPC 接入点列表
                     * @param _vpcs VPC 接入点列表
                     * 
                     */
                    void SetVpcs(const std::vector<VpcEndpointInfo>& _vpcs);

                    /**
                     * 判断参数 Vpcs 是否已赋值
                     * @return Vpcs 是否已赋值
                     * 
                     */
                    bool VpcsHasBeenSet() const;

                    /**
                     * 获取创建时间，毫秒为单位。unix 时间戳
                     * @return CreateTime 创建时间，毫秒为单位。unix 时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，毫秒为单位。unix 时间戳
                     * @param _createTime 创建时间，毫秒为单位。unix 时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取实例类型，0 专享版、1 Serverless 版
                     * @return InstanceType 实例类型，0 专享版、1 Serverless 版
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置实例类型，0 专享版、1 Serverless 版
                     * @param _instanceType 实例类型，0 专享版、1 Serverless 版
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取隔离时间，毫秒为单位
                     * @return IsolatedTime 隔离时间，毫秒为单位
                     * 
                     */
                    uint64_t GetIsolatedTime() const;

                    /**
                     * 设置隔离时间，毫秒为单位
                     * @param _isolatedTime 隔离时间，毫秒为单位
                     * 
                     */
                    void SetIsolatedTime(const uint64_t& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                private:

                    /**
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例版本
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 节点数量
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 实例配置规格名称
                     */
                    std::string m_configDisplay;
                    bool m_configDisplayHasBeenSet;

                    /**
                     * 峰值TPS
                     */
                    uint64_t m_maxTps;
                    bool m_maxTpsHasBeenSet;

                    /**
                     * 峰值带宽，Mbps为单位
                     */
                    uint64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * 存储容量，GB为单位
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * 实例到期时间，按量付费的资源该值为 0，毫秒为单位。unix 时间戳
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 1 表示预付费，0 表示后付费
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 集群的节点规格，需要输入对应的规格标识：
2C8G：rabbit-vip-basic-2c8g
4C16G：rabbit-vip-basic-4c16g
8C32G：rabbit-vip-basic-8c32g
16C32G：rabbit-vip-basic-4
16C64G：rabbit-vip-basic-16c64g
2C4G：rabbit-vip-basic-5
4C8G：rabbit-vip-basic-1
8C16G（已售罄）：rabbit-vip-basic-2
不传默认为4C8G：rabbit-vip-basic-1
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 集群异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_exceptionInformation;
                    bool m_exceptionInformationHasBeenSet;

                    /**
                     * 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
为了和计费区分开，额外开启一个状态位，用于显示。
                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 公网接入点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicAccessEndpoint;
                    bool m_publicAccessEndpointHasBeenSet;

                    /**
                     * VPC 接入点列表
                     */
                    std::vector<VpcEndpointInfo> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * 创建时间，毫秒为单位。unix 时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例类型，0 专享版、1 Serverless 版
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 隔离时间，毫秒为单位
                     */
                    uint64_t m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIPINSTANCE_H_
