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
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>实例版本</p>
                     * @return InstanceVersion <p>实例版本</p>
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置<p>实例版本</p>
                     * @param _instanceVersion <p>实例版本</p>
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
                     * 获取<p>实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败，6 - 变配中，7 - 变配失败</p>
                     * @return Status <p>实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败，6 - 变配中，7 - 变配失败</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败，6 - 变配中，7 - 变配失败</p>
                     * @param _status <p>实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败，6 - 变配中，7 - 变配失败</p>
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
                     * 获取<p>节点数量</p>
                     * @return NodeCount <p>节点数量</p>
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置<p>节点数量</p>
                     * @param _nodeCount <p>节点数量</p>
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
                     * 获取<p>实例配置规格名称</p>
                     * @return ConfigDisplay <p>实例配置规格名称</p>
                     * 
                     */
                    std::string GetConfigDisplay() const;

                    /**
                     * 设置<p>实例配置规格名称</p>
                     * @param _configDisplay <p>实例配置规格名称</p>
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
                     * 获取<p>峰值TPS</p>
                     * @return MaxTps <p>峰值TPS</p>
                     * 
                     */
                    uint64_t GetMaxTps() const;

                    /**
                     * 设置<p>峰值TPS</p>
                     * @param _maxTps <p>峰值TPS</p>
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
                     * 获取<p>峰值带宽，Mbps为单位</p>
                     * @return MaxBandWidth <p>峰值带宽，Mbps为单位</p>
                     * 
                     */
                    uint64_t GetMaxBandWidth() const;

                    /**
                     * 设置<p>峰值带宽，Mbps为单位</p>
                     * @param _maxBandWidth <p>峰值带宽，Mbps为单位</p>
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
                     * 获取<p>存储容量，GB为单位</p>
                     * @return MaxStorage <p>存储容量，GB为单位</p>
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置<p>存储容量，GB为单位</p>
                     * @param _maxStorage <p>存储容量，GB为单位</p>
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
                     * 获取<p>实例到期时间，毫秒为单位</p>
                     * @return ExpireTime <p>实例到期时间，毫秒为单位</p>
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置<p>实例到期时间，毫秒为单位</p>
                     * @param _expireTime <p>实例到期时间，毫秒为单位</p>
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
                     * 获取<p>自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * @return AutoRenewFlag <p>自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * @param _autoRenewFlag <p>自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
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
                     * 获取<p>0-后付费，1-预付费</p>
                     * @return PayMode <p>0-后付费，1-预付费</p>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>0-后付费，1-预付费</p>
                     * @param _payMode <p>0-后付费，1-预付费</p>
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
                     * 获取<p>备注信息</p>
                     * @return Remark <p>备注信息</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注信息</p>
                     * @param _remark <p>备注信息</p>
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
                     * 获取<p>实例规格</p><p>枚举值：</p><ul><li>rocket-vip-basic-0： 通用集群</li><li>rocket-vip-basic-1： 专享集群-基础型</li><li>rocket-vip-basic-2： 专享集群-标准型</li><li>rocket-vip-basic-3： 专享集群-高阶I型</li><li>rocket-vip-basic-4： 专享集群-高阶II型</li></ul>
                     * @return SpecName <p>实例规格</p><p>枚举值：</p><ul><li>rocket-vip-basic-0： 通用集群</li><li>rocket-vip-basic-1： 专享集群-基础型</li><li>rocket-vip-basic-2： 专享集群-标准型</li><li>rocket-vip-basic-3： 专享集群-高阶I型</li><li>rocket-vip-basic-4： 专享集群-高阶II型</li></ul>
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置<p>实例规格</p><p>枚举值：</p><ul><li>rocket-vip-basic-0： 通用集群</li><li>rocket-vip-basic-1： 专享集群-基础型</li><li>rocket-vip-basic-2： 专享集群-标准型</li><li>rocket-vip-basic-3： 专享集群-高阶I型</li><li>rocket-vip-basic-4： 专享集群-高阶II型</li></ul>
                     * @param _specName <p>实例规格</p><p>枚举值：</p><ul><li>rocket-vip-basic-0： 通用集群</li><li>rocket-vip-basic-1： 专享集群-基础型</li><li>rocket-vip-basic-2： 专享集群-标准型</li><li>rocket-vip-basic-3： 专享集群-高阶I型</li><li>rocket-vip-basic-4： 专享集群-高阶II型</li></ul>
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
                     * 获取<p>最大可设置消息保留时间，小时为单位</p>
                     * @return MaxRetention <p>最大可设置消息保留时间，小时为单位</p>
                     * 
                     */
                    int64_t GetMaxRetention() const;

                    /**
                     * 设置<p>最大可设置消息保留时间，小时为单位</p>
                     * @param _maxRetention <p>最大可设置消息保留时间，小时为单位</p>
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
                     * 获取<p>最小可设置消息保留时间，小时为单位</p>
                     * @return MinRetention <p>最小可设置消息保留时间，小时为单位</p>
                     * 
                     */
                    int64_t GetMinRetention() const;

                    /**
                     * 设置<p>最小可设置消息保留时间，小时为单位</p>
                     * @param _minRetention <p>最小可设置消息保留时间，小时为单位</p>
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
                     * 获取<p>实例消息保留时间，小时为单位</p>
                     * @return Retention <p>实例消息保留时间，小时为单位</p>
                     * 
                     */
                    int64_t GetRetention() const;

                    /**
                     * 设置<p>实例消息保留时间，小时为单位</p>
                     * @param _retention <p>实例消息保留时间，小时为单位</p>
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
                     * 获取<p>是否开启ACL鉴权</p>
                     * @return AclEnabled <p>是否开启ACL鉴权</p>
                     * 
                     */
                    bool GetAclEnabled() const;

                    /**
                     * 设置<p>是否开启ACL鉴权</p>
                     * @param _aclEnabled <p>是否开启ACL鉴权</p>
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
                     * 获取<p>销毁时间</p>
                     * @return DestroyTime <p>销毁时间</p>
                     * 
                     */
                    uint64_t GetDestroyTime() const;

                    /**
                     * 设置<p>销毁时间</p>
                     * @param _destroyTime <p>销毁时间</p>
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
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例版本</p>
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * <p>实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败，6 - 变配中，7 - 变配失败</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>节点数量</p>
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>实例配置规格名称</p>
                     */
                    std::string m_configDisplay;
                    bool m_configDisplayHasBeenSet;

                    /**
                     * <p>峰值TPS</p>
                     */
                    uint64_t m_maxTps;
                    bool m_maxTpsHasBeenSet;

                    /**
                     * <p>峰值带宽，Mbps为单位</p>
                     */
                    uint64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * <p>存储容量，GB为单位</p>
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * <p>实例到期时间，毫秒为单位</p>
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>0-后付费，1-预付费</p>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>备注信息</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>实例规格</p><p>枚举值：</p><ul><li>rocket-vip-basic-0： 通用集群</li><li>rocket-vip-basic-1： 专享集群-基础型</li><li>rocket-vip-basic-2： 专享集群-标准型</li><li>rocket-vip-basic-3： 专享集群-高阶I型</li><li>rocket-vip-basic-4： 专享集群-高阶II型</li></ul>
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * <p>最大可设置消息保留时间，小时为单位</p>
                     */
                    int64_t m_maxRetention;
                    bool m_maxRetentionHasBeenSet;

                    /**
                     * <p>最小可设置消息保留时间，小时为单位</p>
                     */
                    int64_t m_minRetention;
                    bool m_minRetentionHasBeenSet;

                    /**
                     * <p>实例消息保留时间，小时为单位</p>
                     */
                    int64_t m_retention;
                    bool m_retentionHasBeenSet;

                    /**
                     * <p>是否开启ACL鉴权</p>
                     */
                    bool m_aclEnabled;
                    bool m_aclEnabledHasBeenSet;

                    /**
                     * <p>销毁时间</p>
                     */
                    uint64_t m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQVIPINSTANCE_H_
