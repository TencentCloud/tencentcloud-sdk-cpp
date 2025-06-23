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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyInstanceAttributesConfig.h>
#include <tencentcloud/ckafka/v20190819/model/DynamicRetentionTime.h>
#include <tencentcloud/ckafka/v20190819/model/DynamicDiskConfig.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyInstanceAttributes请求参数结构体
                */
                class ModifyInstanceAttributesRequest : public AbstractModel
                {
                public:
                    ModifyInstanceAttributesRequest();
                    ~ModifyInstanceAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka集群实例Id
                     * @return InstanceId ckafka集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id
                     * @param _instanceId ckafka集群实例Id
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
                     * 获取实例日志的最长保留时间，单位分钟，最大90天，0代表不开启日志保留时间回收策略
                     * @return MsgRetentionTime 实例日志的最长保留时间，单位分钟，最大90天，0代表不开启日志保留时间回收策略
                     * 
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置实例日志的最长保留时间，单位分钟，最大90天，0代表不开启日志保留时间回收策略
                     * @param _msgRetentionTime 实例日志的最长保留时间，单位分钟，最大90天，0代表不开启日志保留时间回收策略
                     * 
                     */
                    void SetMsgRetentionTime(const int64_t& _msgRetentionTime);

                    /**
                     * 判断参数 MsgRetentionTime 是否已赋值
                     * @return MsgRetentionTime 是否已赋值
                     * 
                     */
                    bool MsgRetentionTimeHasBeenSet() const;

                    /**
                     * 获取ckafka集群实例Name
                     * @return InstanceName ckafka集群实例Name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置ckafka集群实例Name
                     * @param _instanceName ckafka集群实例Name
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
                     * 获取实例配置
                     * @return Config 实例配置
                     * 
                     */
                    ModifyInstanceAttributesConfig GetConfig() const;

                    /**
                     * 设置实例配置
                     * @param _config 实例配置
                     * 
                     */
                    void SetConfig(const ModifyInstanceAttributesConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取动态消息保留策略配置
                     * @return DynamicRetentionConfig 动态消息保留策略配置
                     * 
                     */
                    DynamicRetentionTime GetDynamicRetentionConfig() const;

                    /**
                     * 设置动态消息保留策略配置
                     * @param _dynamicRetentionConfig 动态消息保留策略配置
                     * 
                     */
                    void SetDynamicRetentionConfig(const DynamicRetentionTime& _dynamicRetentionConfig);

                    /**
                     * 判断参数 DynamicRetentionConfig 是否已赋值
                     * @return DynamicRetentionConfig 是否已赋值
                     * 
                     */
                    bool DynamicRetentionConfigHasBeenSet() const;

                    /**
                     * 获取用于修改升级版本或升配定时任务的执行时间，Unix时间戳，精确到秒
                     * @return RebalanceTime 用于修改升级版本或升配定时任务的执行时间，Unix时间戳，精确到秒
                     * 
                     */
                    int64_t GetRebalanceTime() const;

                    /**
                     * 设置用于修改升级版本或升配定时任务的执行时间，Unix时间戳，精确到秒
                     * @param _rebalanceTime 用于修改升级版本或升配定时任务的执行时间，Unix时间戳，精确到秒
                     * 
                     */
                    void SetRebalanceTime(const int64_t& _rebalanceTime);

                    /**
                     * 判断参数 RebalanceTime 是否已赋值
                     * @return RebalanceTime 是否已赋值
                     * 
                     */
                    bool RebalanceTimeHasBeenSet() const;

                    /**
                     * 获取公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写
                     * @return PublicNetwork 公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写
                     * 
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写
                     * @param _publicNetwork 公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写
                     * 
                     */
                    void SetPublicNetwork(const int64_t& _publicNetwork);

                    /**
                     * 判断参数 PublicNetwork 是否已赋值
                     * @return PublicNetwork 是否已赋值
                     * 
                     */
                    bool PublicNetworkHasBeenSet() const;

                    /**
                     * 获取动态硬盘扩容策略配置
                     * @return DynamicDiskConfig 动态硬盘扩容策略配置
                     * @deprecated
                     */
                    DynamicDiskConfig GetDynamicDiskConfig() const;

                    /**
                     * 设置动态硬盘扩容策略配置
                     * @param _dynamicDiskConfig 动态硬盘扩容策略配置
                     * @deprecated
                     */
                    void SetDynamicDiskConfig(const DynamicDiskConfig& _dynamicDiskConfig);

                    /**
                     * 判断参数 DynamicDiskConfig 是否已赋值
                     * @return DynamicDiskConfig 是否已赋值
                     * @deprecated
                     */
                    bool DynamicDiskConfigHasBeenSet() const;

                    /**
                     * 获取实例级别单条消息大小（单位byte)  最大 12582912(不包含)  最小1024(不包含)
                     * @return MaxMessageByte 实例级别单条消息大小（单位byte)  最大 12582912(不包含)  最小1024(不包含)
                     * 
                     */
                    uint64_t GetMaxMessageByte() const;

                    /**
                     * 设置实例级别单条消息大小（单位byte)  最大 12582912(不包含)  最小1024(不包含)
                     * @param _maxMessageByte 实例级别单条消息大小（单位byte)  最大 12582912(不包含)  最小1024(不包含)
                     * 
                     */
                    void SetMaxMessageByte(const uint64_t& _maxMessageByte);

                    /**
                     * 判断参数 MaxMessageByte 是否已赋值
                     * @return MaxMessageByte 是否已赋值
                     * 
                     */
                    bool MaxMessageByteHasBeenSet() const;

                    /**
                     * 获取集群topic默认 unclean.leader.election.enable配置: 1 开启  0 关闭
                     * @return UncleanLeaderElectionEnable 集群topic默认 unclean.leader.election.enable配置: 1 开启  0 关闭
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置集群topic默认 unclean.leader.election.enable配置: 1 开启  0 关闭
                     * @param _uncleanLeaderElectionEnable 集群topic默认 unclean.leader.election.enable配置: 1 开启  0 关闭
                     * 
                     */
                    void SetUncleanLeaderElectionEnable(const int64_t& _uncleanLeaderElectionEnable);

                    /**
                     * 判断参数 UncleanLeaderElectionEnable 是否已赋值
                     * @return UncleanLeaderElectionEnable 是否已赋值
                     * 
                     */
                    bool UncleanLeaderElectionEnableHasBeenSet() const;

                    /**
                     * 获取实例删除保护开关: 1 开启  0 关闭
                     * @return DeleteProtectionEnable 实例删除保护开关: 1 开启  0 关闭
                     * 
                     */
                    int64_t GetDeleteProtectionEnable() const;

                    /**
                     * 设置实例删除保护开关: 1 开启  0 关闭
                     * @param _deleteProtectionEnable 实例删除保护开关: 1 开启  0 关闭
                     * 
                     */
                    void SetDeleteProtectionEnable(const int64_t& _deleteProtectionEnable);

                    /**
                     * 判断参数 DeleteProtectionEnable 是否已赋值
                     * @return DeleteProtectionEnable 是否已赋值
                     * 
                     */
                    bool DeleteProtectionEnableHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例日志的最长保留时间，单位分钟，最大90天，0代表不开启日志保留时间回收策略
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * ckafka集群实例Name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例配置
                     */
                    ModifyInstanceAttributesConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 动态消息保留策略配置
                     */
                    DynamicRetentionTime m_dynamicRetentionConfig;
                    bool m_dynamicRetentionConfigHasBeenSet;

                    /**
                     * 用于修改升级版本或升配定时任务的执行时间，Unix时间戳，精确到秒
                     */
                    int64_t m_rebalanceTime;
                    bool m_rebalanceTimeHasBeenSet;

                    /**
                     * 公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * 动态硬盘扩容策略配置
                     */
                    DynamicDiskConfig m_dynamicDiskConfig;
                    bool m_dynamicDiskConfigHasBeenSet;

                    /**
                     * 实例级别单条消息大小（单位byte)  最大 12582912(不包含)  最小1024(不包含)
                     */
                    uint64_t m_maxMessageByte;
                    bool m_maxMessageByteHasBeenSet;

                    /**
                     * 集群topic默认 unclean.leader.election.enable配置: 1 开启  0 关闭
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * 实例删除保护开关: 1 开启  0 关闭
                     */
                    int64_t m_deleteProtectionEnable;
                    bool m_deleteProtectionEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESREQUEST_H_
