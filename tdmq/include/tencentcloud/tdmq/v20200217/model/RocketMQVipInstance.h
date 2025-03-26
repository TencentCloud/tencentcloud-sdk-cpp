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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQVIPINSTANCE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQVIPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RocketMQ专享实例信息
                */
                class RocketMQVipInstance : public AbstractModel
                {
                public:
                    RocketMQVipInstance();
                    ~RocketMQVipInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败，6 - 变配中，7 - 变配失败
                     * @return Status 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败，6 - 变配中，7 - 变配失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败，6 - 变配中，7 - 变配失败
                     * @param _status 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败，6 - 变配中，7 - 变配失败
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
                     * 获取实例到期时间，毫秒为单位
                     * @return ExpireTime 实例到期时间，毫秒为单位
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置实例到期时间，毫秒为单位
                     * @param _expireTime 实例到期时间，毫秒为单位
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
                     * 获取0-后付费，1-预付费
                     * @return PayMode 0-后付费，1-预付费
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置0-后付费，1-预付费
                     * @param _payMode 0-后付费，1-预付费
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
                     * 获取实例配置ID
                     * @return SpecName 实例配置ID
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置实例配置ID
                     * @param _specName 实例配置ID
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
                     * 获取最大可设置消息保留时间，小时为单位
                     * @return MaxRetention 最大可设置消息保留时间，小时为单位
                     * 
                     */
                    int64_t GetMaxRetention() const;

                    /**
                     * 设置最大可设置消息保留时间，小时为单位
                     * @param _maxRetention 最大可设置消息保留时间，小时为单位
                     * 
                     */
                    void SetMaxRetention(const int64_t& _maxRetention);

                    /**
                     * 判断参数 MaxRetention 是否已赋值
                     * @return MaxRetention 是否已赋值
                     * 
                     */
                    bool MaxRetentionHasBeenSet() const;

                    /**
                     * 获取最小可设置消息保留时间，小时为单位
                     * @return MinRetention 最小可设置消息保留时间，小时为单位
                     * 
                     */
                    int64_t GetMinRetention() const;

                    /**
                     * 设置最小可设置消息保留时间，小时为单位
                     * @param _minRetention 最小可设置消息保留时间，小时为单位
                     * 
                     */
                    void SetMinRetention(const int64_t& _minRetention);

                    /**
                     * 判断参数 MinRetention 是否已赋值
                     * @return MinRetention 是否已赋值
                     * 
                     */
                    bool MinRetentionHasBeenSet() const;

                    /**
                     * 获取实例消息保留时间，小时为单位
                     * @return Retention 实例消息保留时间，小时为单位
                     * 
                     */
                    int64_t GetRetention() const;

                    /**
                     * 设置实例消息保留时间，小时为单位
                     * @param _retention 实例消息保留时间，小时为单位
                     * 
                     */
                    void SetRetention(const int64_t& _retention);

                    /**
                     * 判断参数 Retention 是否已赋值
                     * @return Retention 是否已赋值
                     * 
                     */
                    bool RetentionHasBeenSet() const;

                    /**
                     * 获取是否开启ACL鉴权
                     * @return AclEnabled 是否开启ACL鉴权
                     * 
                     */
                    bool GetAclEnabled() const;

                    /**
                     * 设置是否开启ACL鉴权
                     * @param _aclEnabled 是否开启ACL鉴权
                     * 
                     */
                    void SetAclEnabled(const bool& _aclEnabled);

                    /**
                     * 判断参数 AclEnabled 是否已赋值
                     * @return AclEnabled 是否已赋值
                     * 
                     */
                    bool AclEnabledHasBeenSet() const;

                    /**
                     * 获取销毁时间
                     * @return DestroyTime 销毁时间
                     * 
                     */
                    uint64_t GetDestroyTime() const;

                    /**
                     * 设置销毁时间
                     * @param _destroyTime 销毁时间
                     * 
                     */
                    void SetDestroyTime(const uint64_t& _destroyTime);

                    /**
                     * 判断参数 DestroyTime 是否已赋值
                     * @return DestroyTime 是否已赋值
                     * 
                     */
                    bool DestroyTimeHasBeenSet() const;

                private:

                    /**
                     * 实例id
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
                     * 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败，6 - 变配中，7 - 变配失败
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
                     * 实例到期时间，毫秒为单位
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 0-后付费，1-预付费
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 实例配置ID
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 最大可设置消息保留时间，小时为单位
                     */
                    int64_t m_maxRetention;
                    bool m_maxRetentionHasBeenSet;

                    /**
                     * 最小可设置消息保留时间，小时为单位
                     */
                    int64_t m_minRetention;
                    bool m_minRetentionHasBeenSet;

                    /**
                     * 实例消息保留时间，小时为单位
                     */
                    int64_t m_retention;
                    bool m_retentionHasBeenSet;

                    /**
                     * 是否开启ACL鉴权
                     */
                    bool m_aclEnabled;
                    bool m_aclEnabledHasBeenSet;

                    /**
                     * 销毁时间
                     */
                    uint64_t m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQVIPINSTANCE_H_
