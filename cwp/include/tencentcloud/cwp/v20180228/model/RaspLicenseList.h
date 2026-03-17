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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPLICENSELIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPLICENSELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>
#include <tencentcloud/cwp/v20180228/model/OrderDetail.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 重保授权包列表对象
                */
                class RaspLicenseList : public AbstractModel
                {
                public:
                    RaspLicenseList();
                    ~RaspLicenseList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器唯一ID
                     * @return QUUID 机器唯一ID
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置机器唯一ID
                     * @param _qUUID 机器唯一ID
                     * 
                     */
                    void SetQUUID(const std::string& _qUUID);

                    /**
                     * 判断参数 QUUID 是否已赋值
                     * @return QUUID 是否已赋值
                     * 
                     */
                    bool QUUIDHasBeenSet() const;

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
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取公网IP
                     * @return PublicIP 公网IP
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置公网IP
                     * @param _publicIP 公网IP
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取内网IP
                     * @return PrivateIP 内网IP
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置内网IP
                     * @param _privateIP 内网IP
                     * 
                     */
                    void SetPrivateIP(const std::string& _privateIP);

                    /**
                     * 判断参数 PrivateIP 是否已赋值
                     * @return PrivateIP 是否已赋值
                     * 
                     */
                    bool PrivateIPHasBeenSet() const;

                    /**
                     * 获取云标签信息
                     * @return Tags 云标签信息
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置云标签信息
                     * @param _tags 云标签信息
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取防护版本信息
- CriticalProtection 重保防护包
- Pro 容器安全-专业版
- Ultimate 主机安全-旗舰版
                     * @return ProtectionVersion 防护版本信息
- CriticalProtection 重保防护包
- Pro 容器安全-专业版
- Ultimate 主机安全-旗舰版
                     * 
                     */
                    std::vector<std::string> GetProtectionVersion() const;

                    /**
                     * 设置防护版本信息
- CriticalProtection 重保防护包
- Pro 容器安全-专业版
- Ultimate 主机安全-旗舰版
                     * @param _protectionVersion 防护版本信息
- CriticalProtection 重保防护包
- Pro 容器安全-专业版
- Ultimate 主机安全-旗舰版
                     * 
                     */
                    void SetProtectionVersion(const std::vector<std::string>& _protectionVersion);

                    /**
                     * 判断参数 ProtectionVersion 是否已赋值
                     * @return ProtectionVersion 是否已赋值
                     * 
                     */
                    bool ProtectionVersionHasBeenSet() const;

                    /**
                     * 获取防护设置
- 0 未配置
- 1 已配置
                     * @return ConfigurationSetting 防护设置
- 0 未配置
- 1 已配置
                     * 
                     */
                    uint64_t GetConfigurationSetting() const;

                    /**
                     * 设置防护设置
- 0 未配置
- 1 已配置
                     * @param _configurationSetting 防护设置
- 0 未配置
- 1 已配置
                     * 
                     */
                    void SetConfigurationSetting(const uint64_t& _configurationSetting);

                    /**
                     * 判断参数 ConfigurationSetting 是否已赋值
                     * @return ConfigurationSetting 是否已赋值
                     * 
                     */
                    bool ConfigurationSettingHasBeenSet() const;

                    /**
                     * 获取总开关
- 0 未开启
- 1已开启
                     * @return Enable 总开关
- 0 未开启
- 1已开启
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置总开关
- 0 未开启
- 1已开启
                     * @param _enable 总开关
- 0 未开启
- 1已开启
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取漏洞防御开关
- 0 未开启
- 1 开启
                     * @return VulDefEnable 漏洞防御开关
- 0 未开启
- 1 开启
                     * 
                     */
                    uint64_t GetVulDefEnable() const;

                    /**
                     * 设置漏洞防御开关
- 0 未开启
- 1 开启
                     * @param _vulDefEnable 漏洞防御开关
- 0 未开启
- 1 开启
                     * 
                     */
                    void SetVulDefEnable(const uint64_t& _vulDefEnable);

                    /**
                     * 判断参数 VulDefEnable 是否已赋值
                     * @return VulDefEnable 是否已赋值
                     * 
                     */
                    bool VulDefEnableHasBeenSet() const;

                    /**
                     * 获取漏洞防御模式
- 0 标准
- 1 重保
                     * @return VulDefMode 漏洞防御模式
- 0 标准
- 1 重保
                     * 
                     */
                    uint64_t GetVulDefMode() const;

                    /**
                     * 设置漏洞防御模式
- 0 标准
- 1 重保
                     * @param _vulDefMode 漏洞防御模式
- 0 标准
- 1 重保
                     * 
                     */
                    void SetVulDefMode(const uint64_t& _vulDefMode);

                    /**
                     * 判断参数 VulDefMode 是否已赋值
                     * @return VulDefMode 是否已赋值
                     * 
                     */
                    bool VulDefModeHasBeenSet() const;

                    /**
                     * 获取漏洞防御动作
- 0 仅检测
- 1 检测+防御
                     * @return VulDefAction 漏洞防御动作
- 0 仅检测
- 1 检测+防御
                     * 
                     */
                    uint64_t GetVulDefAction() const;

                    /**
                     * 设置漏洞防御动作
- 0 仅检测
- 1 检测+防御
                     * @param _vulDefAction 漏洞防御动作
- 0 仅检测
- 1 检测+防御
                     * 
                     */
                    void SetVulDefAction(const uint64_t& _vulDefAction);

                    /**
                     * 判断参数 VulDefAction 是否已赋值
                     * @return VulDefAction 是否已赋值
                     * 
                     */
                    bool VulDefActionHasBeenSet() const;

                    /**
                     * 获取内存马防御开关
- 0 未开启
- 1 开启
                     * @return MemShellDefEnable 内存马防御开关
- 0 未开启
- 1 开启
                     * 
                     */
                    uint64_t GetMemShellDefEnable() const;

                    /**
                     * 设置内存马防御开关
- 0 未开启
- 1 开启
                     * @param _memShellDefEnable 内存马防御开关
- 0 未开启
- 1 开启
                     * 
                     */
                    void SetMemShellDefEnable(const uint64_t& _memShellDefEnable);

                    /**
                     * 判断参数 MemShellDefEnable 是否已赋值
                     * @return MemShellDefEnable 是否已赋值
                     * 
                     */
                    bool MemShellDefEnableHasBeenSet() const;

                    /**
                     * 获取更多防护
- 0 不注入会重启的进程 
- 1 注入会重启的进程
                     * @return SafeInject 更多防护
- 0 不注入会重启的进程 
- 1 注入会重启的进程
                     * 
                     */
                    uint64_t GetSafeInject() const;

                    /**
                     * 设置更多防护
- 0 不注入会重启的进程 
- 1 注入会重启的进程
                     * @param _safeInject 更多防护
- 0 不注入会重启的进程 
- 1 注入会重启的进程
                     * 
                     */
                    void SetSafeInject(const uint64_t& _safeInject);

                    /**
                     * 判断参数 SafeInject 是否已赋值
                     * @return SafeInject 是否已赋值
                     * 
                     */
                    bool SafeInjectHasBeenSet() const;

                    /**
                     * 获取性能阈值配置开关
- 0 未开启
- 1 开启
                     * @return PerformanceLimit 性能阈值配置开关
- 0 未开启
- 1 开启
                     * 
                     */
                    uint64_t GetPerformanceLimit() const;

                    /**
                     * 设置性能阈值配置开关
- 0 未开启
- 1 开启
                     * @param _performanceLimit 性能阈值配置开关
- 0 未开启
- 1 开启
                     * 
                     */
                    void SetPerformanceLimit(const uint64_t& _performanceLimit);

                    /**
                     * 判断参数 PerformanceLimit 是否已赋值
                     * @return PerformanceLimit 是否已赋值
                     * 
                     */
                    bool PerformanceLimitHasBeenSet() const;

                    /**
                     * 获取CPU阈值,取值1-99
                     * @return PerformanceLimitCpu CPU阈值,取值1-99
                     * 
                     */
                    uint64_t GetPerformanceLimitCpu() const;

                    /**
                     * 设置CPU阈值,取值1-99
                     * @param _performanceLimitCpu CPU阈值,取值1-99
                     * 
                     */
                    void SetPerformanceLimitCpu(const uint64_t& _performanceLimitCpu);

                    /**
                     * 判断参数 PerformanceLimitCpu 是否已赋值
                     * @return PerformanceLimitCpu 是否已赋值
                     * 
                     */
                    bool PerformanceLimitCpuHasBeenSet() const;

                    /**
                     * 获取内存阈值,取值1-99
                     * @return PerformanceLimitMem 内存阈值,取值1-99
                     * 
                     */
                    uint64_t GetPerformanceLimitMem() const;

                    /**
                     * 设置内存阈值,取值1-99
                     * @param _performanceLimitMem 内存阈值,取值1-99
                     * 
                     */
                    void SetPerformanceLimitMem(const uint64_t& _performanceLimitMem);

                    /**
                     * 判断参数 PerformanceLimitMem 是否已赋值
                     * @return PerformanceLimitMem 是否已赋值
                     * 
                     */
                    bool PerformanceLimitMemHasBeenSet() const;

                    /**
                     * 获取内存剩余阈值
                     * @return PerformanceLimitMemAmount 内存剩余阈值
                     * 
                     */
                    uint64_t GetPerformanceLimitMemAmount() const;

                    /**
                     * 设置内存剩余阈值
                     * @param _performanceLimitMemAmount 内存剩余阈值
                     * 
                     */
                    void SetPerformanceLimitMemAmount(const uint64_t& _performanceLimitMemAmount);

                    /**
                     * 判断参数 PerformanceLimitMemAmount 是否已赋值
                     * @return PerformanceLimitMemAmount 是否已赋值
                     * 
                     */
                    bool PerformanceLimitMemAmountHasBeenSet() const;

                    /**
                     * 获取插件状态
- 0 使用正常
- 1 存在异常
- 2 未使用
                     * @return RaspException 插件状态
- 0 使用正常
- 1 存在异常
- 2 未使用
                     * 
                     */
                    uint64_t GetRaspException() const;

                    /**
                     * 设置插件状态
- 0 使用正常
- 1 存在异常
- 2 未使用
                     * @param _raspException 插件状态
- 0 使用正常
- 1 存在异常
- 2 未使用
                     * 
                     */
                    void SetRaspException(const uint64_t& _raspException);

                    /**
                     * 判断参数 RaspException 是否已赋值
                     * @return RaspException 是否已赋值
                     * 
                     */
                    bool RaspExceptionHasBeenSet() const;

                    /**
                     * 获取最近更新时间
                     * @return LatestUpdateTime 最近更新时间
                     * 
                     */
                    std::string GetLatestUpdateTime() const;

                    /**
                     * 设置最近更新时间
                     * @param _latestUpdateTime 最近更新时间
                     * 
                     */
                    void SetLatestUpdateTime(const std::string& _latestUpdateTime);

                    /**
                     * 判断参数 LatestUpdateTime 是否已赋值
                     * @return LatestUpdateTime 是否已赋值
                     * 
                     */
                    bool LatestUpdateTimeHasBeenSet() const;

                    /**
                     * 获取集群ID,仅容器资产有值
                     * @return ClusterName 集群ID,仅容器资产有值
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群ID,仅容器资产有值
                     * @param _clusterName 集群ID,仅容器资产有值
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群名称,仅容器资产有值
                     * @return ClusterId 集群名称,仅容器资产有值
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群名称,仅容器资产有值
                     * @param _clusterId 集群名称,仅容器资产有值
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取订单信息
                     * @return OrderDetail 订单信息
                     * 
                     */
                    OrderDetail GetOrderDetail() const;

                    /**
                     * 设置订单信息
                     * @param _orderDetail 订单信息
                     * 
                     */
                    void SetOrderDetail(const OrderDetail& _orderDetail);

                    /**
                     * 判断参数 OrderDetail 是否已赋值
                     * @return OrderDetail 是否已赋值
                     * 
                     */
                    bool OrderDetailHasBeenSet() const;

                    /**
                     * 获取是否允许解绑,fasle 不允许 true 允许
                     * @return IsUnBind 是否允许解绑,fasle 不允许 true 允许
                     * 
                     */
                    bool GetIsUnBind() const;

                    /**
                     * 设置是否允许解绑,fasle 不允许 true 允许
                     * @param _isUnBind 是否允许解绑,fasle 不允许 true 允许
                     * 
                     */
                    void SetIsUnBind(const bool& _isUnBind);

                    /**
                     * 判断参数 IsUnBind 是否已赋值
                     * @return IsUnBind 是否已赋值
                     * 
                     */
                    bool IsUnBindHasBeenSet() const;

                    /**
                     * 获取uuid 机器唯一ID,仅AssetType = CWP 时有值
                     * @return UUID uuid 机器唯一ID,仅AssetType = CWP 时有值
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置uuid 机器唯一ID,仅AssetType = CWP 时有值
                     * @param _uUID uuid 机器唯一ID,仅AssetType = CWP 时有值
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取无注入/注入失败原因
                     * @return Reason 无注入/注入失败原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置无注入/注入失败原因
                     * @param _reason 无注入/注入失败原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 机器唯一ID
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 公网IP
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * 云标签信息
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 防护版本信息
- CriticalProtection 重保防护包
- Pro 容器安全-专业版
- Ultimate 主机安全-旗舰版
                     */
                    std::vector<std::string> m_protectionVersion;
                    bool m_protectionVersionHasBeenSet;

                    /**
                     * 防护设置
- 0 未配置
- 1 已配置
                     */
                    uint64_t m_configurationSetting;
                    bool m_configurationSettingHasBeenSet;

                    /**
                     * 总开关
- 0 未开启
- 1已开启
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 漏洞防御开关
- 0 未开启
- 1 开启
                     */
                    uint64_t m_vulDefEnable;
                    bool m_vulDefEnableHasBeenSet;

                    /**
                     * 漏洞防御模式
- 0 标准
- 1 重保
                     */
                    uint64_t m_vulDefMode;
                    bool m_vulDefModeHasBeenSet;

                    /**
                     * 漏洞防御动作
- 0 仅检测
- 1 检测+防御
                     */
                    uint64_t m_vulDefAction;
                    bool m_vulDefActionHasBeenSet;

                    /**
                     * 内存马防御开关
- 0 未开启
- 1 开启
                     */
                    uint64_t m_memShellDefEnable;
                    bool m_memShellDefEnableHasBeenSet;

                    /**
                     * 更多防护
- 0 不注入会重启的进程 
- 1 注入会重启的进程
                     */
                    uint64_t m_safeInject;
                    bool m_safeInjectHasBeenSet;

                    /**
                     * 性能阈值配置开关
- 0 未开启
- 1 开启
                     */
                    uint64_t m_performanceLimit;
                    bool m_performanceLimitHasBeenSet;

                    /**
                     * CPU阈值,取值1-99
                     */
                    uint64_t m_performanceLimitCpu;
                    bool m_performanceLimitCpuHasBeenSet;

                    /**
                     * 内存阈值,取值1-99
                     */
                    uint64_t m_performanceLimitMem;
                    bool m_performanceLimitMemHasBeenSet;

                    /**
                     * 内存剩余阈值
                     */
                    uint64_t m_performanceLimitMemAmount;
                    bool m_performanceLimitMemAmountHasBeenSet;

                    /**
                     * 插件状态
- 0 使用正常
- 1 存在异常
- 2 未使用
                     */
                    uint64_t m_raspException;
                    bool m_raspExceptionHasBeenSet;

                    /**
                     * 最近更新时间
                     */
                    std::string m_latestUpdateTime;
                    bool m_latestUpdateTimeHasBeenSet;

                    /**
                     * 集群ID,仅容器资产有值
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群名称,仅容器资产有值
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 订单信息
                     */
                    OrderDetail m_orderDetail;
                    bool m_orderDetailHasBeenSet;

                    /**
                     * 是否允许解绑,fasle 不允许 true 允许
                     */
                    bool m_isUnBind;
                    bool m_isUnBindHasBeenSet;

                    /**
                     * uuid 机器唯一ID,仅AssetType = CWP 时有值
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * 无注入/注入失败原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPLICENSELIST_H_
