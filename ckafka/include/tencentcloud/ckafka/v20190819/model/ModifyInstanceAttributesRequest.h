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
                     * 获取<p>ckafka集群实例Id,可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * @return InstanceId <p>ckafka集群实例Id,可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka集群实例Id,可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * @param _instanceId <p>ckafka集群实例Id,可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
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
                     * 获取<p>实例日志的最长保留时间，单位分钟，最大90天，最小为1min</p>
                     * @return MsgRetentionTime <p>实例日志的最长保留时间，单位分钟，最大90天，最小为1min</p>
                     * 
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置<p>实例日志的最长保留时间，单位分钟，最大90天，最小为1min</p>
                     * @param _msgRetentionTime <p>实例日志的最长保留时间，单位分钟，最大90天，最小为1min</p>
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
                     * 获取<p>ckafka集群实例Name</p>
                     * @return InstanceName <p>ckafka集群实例Name</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>ckafka集群实例Name</p>
                     * @param _instanceName <p>ckafka集群实例Name</p>
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
                     * 获取<p>实例配置</p>
                     * @return Config <p>实例配置</p>
                     * 
                     */
                    ModifyInstanceAttributesConfig GetConfig() const;

                    /**
                     * 设置<p>实例配置</p>
                     * @param _config <p>实例配置</p>
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
                     * 获取<p>动态消息保留策略配置</p>
                     * @return DynamicRetentionConfig <p>动态消息保留策略配置</p>
                     * 
                     */
                    DynamicRetentionTime GetDynamicRetentionConfig() const;

                    /**
                     * 设置<p>动态消息保留策略配置</p>
                     * @param _dynamicRetentionConfig <p>动态消息保留策略配置</p>
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
                     * 获取<p>用于修改升级版本或升配定时任务的执行时间，Unix时间戳，精确到秒</p>
                     * @return RebalanceTime <p>用于修改升级版本或升配定时任务的执行时间，Unix时间戳，精确到秒</p>
                     * 
                     */
                    int64_t GetRebalanceTime() const;

                    /**
                     * 设置<p>用于修改升级版本或升配定时任务的执行时间，Unix时间戳，精确到秒</p>
                     * @param _rebalanceTime <p>用于修改升级版本或升配定时任务的执行时间，Unix时间戳，精确到秒</p>
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
                     * 获取<p>公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写</p>
                     * @return PublicNetwork <p>公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写</p>
                     * 
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置<p>公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写</p>
                     * @param _publicNetwork <p>公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写</p>
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
                     * 获取<p>动态硬盘扩容策略配置</p>
                     * @return DynamicDiskConfig <p>动态硬盘扩容策略配置</p>
                     * @deprecated
                     */
                    DynamicDiskConfig GetDynamicDiskConfig() const;

                    /**
                     * 设置<p>动态硬盘扩容策略配置</p>
                     * @param _dynamicDiskConfig <p>动态硬盘扩容策略配置</p>
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
                     * 获取<p>实例级别单条消息大小（单位byte)  最大 12582912(不包含)  最小1024(不包含)</p>
                     * @return MaxMessageByte <p>实例级别单条消息大小（单位byte)  最大 12582912(不包含)  最小1024(不包含)</p>
                     * 
                     */
                    uint64_t GetMaxMessageByte() const;

                    /**
                     * 设置<p>实例级别单条消息大小（单位byte)  最大 12582912(不包含)  最小1024(不包含)</p>
                     * @param _maxMessageByte <p>实例级别单条消息大小（单位byte)  最大 12582912(不包含)  最小1024(不包含)</p>
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
                     * 获取<p>是否允许未同步的副本选为 leader: 1 开启  0 关闭</p>
                     * @return UncleanLeaderElectionEnable <p>是否允许未同步的副本选为 leader: 1 开启  0 关闭</p>
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置<p>是否允许未同步的副本选为 leader: 1 开启  0 关闭</p>
                     * @param _uncleanLeaderElectionEnable <p>是否允许未同步的副本选为 leader: 1 开启  0 关闭</p>
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
                     * 获取<p>实例删除保护开关: 1 开启  0 关闭</p>
                     * @return DeleteProtectionEnable <p>实例删除保护开关: 1 开启  0 关闭</p>
                     * 
                     */
                    int64_t GetDeleteProtectionEnable() const;

                    /**
                     * 设置<p>实例删除保护开关: 1 开启  0 关闭</p>
                     * @param _deleteProtectionEnable <p>实例删除保护开关: 1 开启  0 关闭</p>
                     * 
                     */
                    void SetDeleteProtectionEnable(const int64_t& _deleteProtectionEnable);

                    /**
                     * 判断参数 DeleteProtectionEnable 是否已赋值
                     * @return DeleteProtectionEnable 是否已赋值
                     * 
                     */
                    bool DeleteProtectionEnableHasBeenSet() const;

                    /**
                     * 获取<p>实例级别消息保留大小</p>单位：byte<br>默认值：-1<br><p>实例级别消息保留大小</p>
                     * @return RetentionBytes <p>实例级别消息保留大小</p>单位：byte<br>默认值：-1<br><p>实例级别消息保留大小</p>
                     * 
                     */
                    int64_t GetRetentionBytes() const;

                    /**
                     * 设置<p>实例级别消息保留大小</p>单位：byte<br>默认值：-1<br><p>实例级别消息保留大小</p>
                     * @param _retentionBytes <p>实例级别消息保留大小</p>单位：byte<br>默认值：-1<br><p>实例级别消息保留大小</p>
                     * 
                     */
                    void SetRetentionBytes(const int64_t& _retentionBytes);

                    /**
                     * 判断参数 RetentionBytes 是否已赋值
                     * @return RetentionBytes 是否已赋值
                     * 
                     */
                    bool RetentionBytesHasBeenSet() const;

                    /**
                     * 获取<p>是否封禁高风险admin接口; true则封禁高风险adminApi; 关闭后不支持打开,仅专业版支持; 默认是false 对高风险admin接口不做处理</p>
                     * @return AdminSecurity <p>是否封禁高风险admin接口; true则封禁高风险adminApi; 关闭后不支持打开,仅专业版支持; 默认是false 对高风险admin接口不做处理</p>
                     * 
                     */
                    bool GetAdminSecurity() const;

                    /**
                     * 设置<p>是否封禁高风险admin接口; true则封禁高风险adminApi; 关闭后不支持打开,仅专业版支持; 默认是false 对高风险admin接口不做处理</p>
                     * @param _adminSecurity <p>是否封禁高风险admin接口; true则封禁高风险adminApi; 关闭后不支持打开,仅专业版支持; 默认是false 对高风险admin接口不做处理</p>
                     * 
                     */
                    void SetAdminSecurity(const bool& _adminSecurity);

                    /**
                     * 判断参数 AdminSecurity 是否已赋值
                     * @return AdminSecurity 是否已赋值
                     * 
                     */
                    bool AdminSecurityHasBeenSet() const;

                    /**
                     * 获取<p>事务ID最大空闲时间，超时未提交的事务将被标记为过期</p>取值范围：[3600000, 604800000]<br>单位：ms
                     * @return TransactionalIdExpirationMs <p>事务ID最大空闲时间，超时未提交的事务将被标记为过期</p>取值范围：[3600000, 604800000]<br>单位：ms
                     * 
                     */
                    int64_t GetTransactionalIdExpirationMs() const;

                    /**
                     * 设置<p>事务ID最大空闲时间，超时未提交的事务将被标记为过期</p>取值范围：[3600000, 604800000]<br>单位：ms
                     * @param _transactionalIdExpirationMs <p>事务ID最大空闲时间，超时未提交的事务将被标记为过期</p>取值范围：[3600000, 604800000]<br>单位：ms
                     * 
                     */
                    void SetTransactionalIdExpirationMs(const int64_t& _transactionalIdExpirationMs);

                    /**
                     * 判断参数 TransactionalIdExpirationMs 是否已赋值
                     * @return TransactionalIdExpirationMs 是否已赋值
                     * 
                     */
                    bool TransactionalIdExpirationMsHasBeenSet() const;

                private:

                    /**
                     * <p>ckafka集群实例Id,可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例日志的最长保留时间，单位分钟，最大90天，最小为1min</p>
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * <p>ckafka集群实例Name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例配置</p>
                     */
                    ModifyInstanceAttributesConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>动态消息保留策略配置</p>
                     */
                    DynamicRetentionTime m_dynamicRetentionConfig;
                    bool m_dynamicRetentionConfigHasBeenSet;

                    /**
                     * <p>用于修改升级版本或升配定时任务的执行时间，Unix时间戳，精确到秒</p>
                     */
                    int64_t m_rebalanceTime;
                    bool m_rebalanceTimeHasBeenSet;

                    /**
                     * <p>公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写</p>
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * <p>动态硬盘扩容策略配置</p>
                     */
                    DynamicDiskConfig m_dynamicDiskConfig;
                    bool m_dynamicDiskConfigHasBeenSet;

                    /**
                     * <p>实例级别单条消息大小（单位byte)  最大 12582912(不包含)  最小1024(不包含)</p>
                     */
                    uint64_t m_maxMessageByte;
                    bool m_maxMessageByteHasBeenSet;

                    /**
                     * <p>是否允许未同步的副本选为 leader: 1 开启  0 关闭</p>
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * <p>实例删除保护开关: 1 开启  0 关闭</p>
                     */
                    int64_t m_deleteProtectionEnable;
                    bool m_deleteProtectionEnableHasBeenSet;

                    /**
                     * <p>实例级别消息保留大小</p>单位：byte<br>默认值：-1<br><p>实例级别消息保留大小</p>
                     */
                    int64_t m_retentionBytes;
                    bool m_retentionBytesHasBeenSet;

                    /**
                     * <p>是否封禁高风险admin接口; true则封禁高风险adminApi; 关闭后不支持打开,仅专业版支持; 默认是false 对高风险admin接口不做处理</p>
                     */
                    bool m_adminSecurity;
                    bool m_adminSecurityHasBeenSet;

                    /**
                     * <p>事务ID最大空闲时间，超时未提交的事务将被标记为过期</p>取值范围：[3600000, 604800000]<br>单位：ms
                     */
                    int64_t m_transactionalIdExpirationMs;
                    bool m_transactionalIdExpirationMsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESREQUEST_H_
