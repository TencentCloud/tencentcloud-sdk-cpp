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
#include <tencentcloud/cwp/v20180228/model/CWPTags.h>
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
                     * 获取<p>机器唯一ID</p>
                     * @return QUUID <p>机器唯一ID</p>
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置<p>机器唯一ID</p>
                     * @param _qUUID <p>机器唯一ID</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>公网IP</p>
                     * @return PublicIP <p>公网IP</p>
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置<p>公网IP</p>
                     * @param _publicIP <p>公网IP</p>
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
                     * 获取<p>内网IP</p>
                     * @return PrivateIP <p>内网IP</p>
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置<p>内网IP</p>
                     * @param _privateIP <p>内网IP</p>
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
                     * 获取<p>云标签信息</p>
                     * @return Tags <p>云标签信息</p>
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置<p>云标签信息</p>
                     * @param _tags <p>云标签信息</p>
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
                     * 获取<p>主机标签信息(仅AssetType=CWP/TCSS_HOST有值)</p>
                     * @return CWPTags <p>主机标签信息(仅AssetType=CWP/TCSS_HOST有值)</p>
                     * 
                     */
                    std::vector<CWPTags> GetCWPTags() const;

                    /**
                     * 设置<p>主机标签信息(仅AssetType=CWP/TCSS_HOST有值)</p>
                     * @param _cWPTags <p>主机标签信息(仅AssetType=CWP/TCSS_HOST有值)</p>
                     * 
                     */
                    void SetCWPTags(const std::vector<CWPTags>& _cWPTags);

                    /**
                     * 判断参数 CWPTags 是否已赋值
                     * @return CWPTags 是否已赋值
                     * 
                     */
                    bool CWPTagsHasBeenSet() const;

                    /**
                     * 获取<p>防护版本信息</p><ul><li>CriticalProtection 重保防护包</li><li>Pro 容器安全-专业版</li><li>Ultimate 主机安全-旗舰版</li></ul>
                     * @return ProtectionVersion <p>防护版本信息</p><ul><li>CriticalProtection 重保防护包</li><li>Pro 容器安全-专业版</li><li>Ultimate 主机安全-旗舰版</li></ul>
                     * 
                     */
                    std::vector<std::string> GetProtectionVersion() const;

                    /**
                     * 设置<p>防护版本信息</p><ul><li>CriticalProtection 重保防护包</li><li>Pro 容器安全-专业版</li><li>Ultimate 主机安全-旗舰版</li></ul>
                     * @param _protectionVersion <p>防护版本信息</p><ul><li>CriticalProtection 重保防护包</li><li>Pro 容器安全-专业版</li><li>Ultimate 主机安全-旗舰版</li></ul>
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
                     * 获取<p>防护设置</p><ul><li>0 未配置</li><li>1 已配置</li></ul>
                     * @return ConfigurationSetting <p>防护设置</p><ul><li>0 未配置</li><li>1 已配置</li></ul>
                     * 
                     */
                    uint64_t GetConfigurationSetting() const;

                    /**
                     * 设置<p>防护设置</p><ul><li>0 未配置</li><li>1 已配置</li></ul>
                     * @param _configurationSetting <p>防护设置</p><ul><li>0 未配置</li><li>1 已配置</li></ul>
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
                     * 获取<p>总开关</p><ul><li>0 未开启</li><li>1已开启</li></ul>
                     * @return Enable <p>总开关</p><ul><li>0 未开启</li><li>1已开启</li></ul>
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置<p>总开关</p><ul><li>0 未开启</li><li>1已开启</li></ul>
                     * @param _enable <p>总开关</p><ul><li>0 未开启</li><li>1已开启</li></ul>
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
                     * 获取<p>漏洞防御开关</p><ul><li>0 未开启</li><li>1 开启</li></ul>
                     * @return VulDefEnable <p>漏洞防御开关</p><ul><li>0 未开启</li><li>1 开启</li></ul>
                     * 
                     */
                    uint64_t GetVulDefEnable() const;

                    /**
                     * 设置<p>漏洞防御开关</p><ul><li>0 未开启</li><li>1 开启</li></ul>
                     * @param _vulDefEnable <p>漏洞防御开关</p><ul><li>0 未开启</li><li>1 开启</li></ul>
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
                     * 获取<p>漏洞防御模式</p><ul><li>0 标准</li><li>1 重保</li></ul>
                     * @return VulDefMode <p>漏洞防御模式</p><ul><li>0 标准</li><li>1 重保</li></ul>
                     * 
                     */
                    uint64_t GetVulDefMode() const;

                    /**
                     * 设置<p>漏洞防御模式</p><ul><li>0 标准</li><li>1 重保</li></ul>
                     * @param _vulDefMode <p>漏洞防御模式</p><ul><li>0 标准</li><li>1 重保</li></ul>
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
                     * 获取<p>漏洞防御动作</p><ul><li>0 仅检测</li><li>1 检测+防御</li></ul>
                     * @return VulDefAction <p>漏洞防御动作</p><ul><li>0 仅检测</li><li>1 检测+防御</li></ul>
                     * 
                     */
                    uint64_t GetVulDefAction() const;

                    /**
                     * 设置<p>漏洞防御动作</p><ul><li>0 仅检测</li><li>1 检测+防御</li></ul>
                     * @param _vulDefAction <p>漏洞防御动作</p><ul><li>0 仅检测</li><li>1 检测+防御</li></ul>
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
                     * 获取<p>内存马防御开关</p><ul><li>0 未开启</li><li>1 开启</li></ul>
                     * @return MemShellDefEnable <p>内存马防御开关</p><ul><li>0 未开启</li><li>1 开启</li></ul>
                     * 
                     */
                    uint64_t GetMemShellDefEnable() const;

                    /**
                     * 设置<p>内存马防御开关</p><ul><li>0 未开启</li><li>1 开启</li></ul>
                     * @param _memShellDefEnable <p>内存马防御开关</p><ul><li>0 未开启</li><li>1 开启</li></ul>
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
                     * 获取<p>更多防护</p><ul><li>0 不注入会重启的进程 </li><li>1 注入会重启的进程</li></ul>
                     * @return SafeInject <p>更多防护</p><ul><li>0 不注入会重启的进程 </li><li>1 注入会重启的进程</li></ul>
                     * 
                     */
                    uint64_t GetSafeInject() const;

                    /**
                     * 设置<p>更多防护</p><ul><li>0 不注入会重启的进程 </li><li>1 注入会重启的进程</li></ul>
                     * @param _safeInject <p>更多防护</p><ul><li>0 不注入会重启的进程 </li><li>1 注入会重启的进程</li></ul>
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
                     * 获取<p>性能阈值配置开关</p><ul><li>0 未开启</li><li>1 开启</li></ul>
                     * @return PerformanceLimit <p>性能阈值配置开关</p><ul><li>0 未开启</li><li>1 开启</li></ul>
                     * 
                     */
                    uint64_t GetPerformanceLimit() const;

                    /**
                     * 设置<p>性能阈值配置开关</p><ul><li>0 未开启</li><li>1 开启</li></ul>
                     * @param _performanceLimit <p>性能阈值配置开关</p><ul><li>0 未开启</li><li>1 开启</li></ul>
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
                     * 获取<p>CPU阈值,取值1-99</p>
                     * @return PerformanceLimitCpu <p>CPU阈值,取值1-99</p>
                     * 
                     */
                    uint64_t GetPerformanceLimitCpu() const;

                    /**
                     * 设置<p>CPU阈值,取值1-99</p>
                     * @param _performanceLimitCpu <p>CPU阈值,取值1-99</p>
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
                     * 获取<p>内存阈值,取值1-99</p>
                     * @return PerformanceLimitMem <p>内存阈值,取值1-99</p>
                     * 
                     */
                    uint64_t GetPerformanceLimitMem() const;

                    /**
                     * 设置<p>内存阈值,取值1-99</p>
                     * @param _performanceLimitMem <p>内存阈值,取值1-99</p>
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
                     * 获取<p>内存剩余阈值</p>
                     * @return PerformanceLimitMemAmount <p>内存剩余阈值</p>
                     * 
                     */
                    uint64_t GetPerformanceLimitMemAmount() const;

                    /**
                     * 设置<p>内存剩余阈值</p>
                     * @param _performanceLimitMemAmount <p>内存剩余阈值</p>
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
                     * 获取<p>插件状态</p><ul><li>0 使用正常</li><li>1 存在异常</li><li>2 未使用</li></ul>
                     * @return RaspException <p>插件状态</p><ul><li>0 使用正常</li><li>1 存在异常</li><li>2 未使用</li></ul>
                     * 
                     */
                    uint64_t GetRaspException() const;

                    /**
                     * 设置<p>插件状态</p><ul><li>0 使用正常</li><li>1 存在异常</li><li>2 未使用</li></ul>
                     * @param _raspException <p>插件状态</p><ul><li>0 使用正常</li><li>1 存在异常</li><li>2 未使用</li></ul>
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
                     * 获取<p>最近更新时间</p>
                     * @return LatestUpdateTime <p>最近更新时间</p>
                     * 
                     */
                    std::string GetLatestUpdateTime() const;

                    /**
                     * 设置<p>最近更新时间</p>
                     * @param _latestUpdateTime <p>最近更新时间</p>
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
                     * 获取<p>集群ID,仅容器资产有值</p>
                     * @return ClusterName <p>集群ID,仅容器资产有值</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群ID,仅容器资产有值</p>
                     * @param _clusterName <p>集群ID,仅容器资产有值</p>
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
                     * 获取<p>集群名称,仅容器资产有值</p>
                     * @return ClusterId <p>集群名称,仅容器资产有值</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群名称,仅容器资产有值</p>
                     * @param _clusterId <p>集群名称,仅容器资产有值</p>
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
                     * 获取<p>订单信息</p>
                     * @return OrderDetail <p>订单信息</p>
                     * 
                     */
                    OrderDetail GetOrderDetail() const;

                    /**
                     * 设置<p>订单信息</p>
                     * @param _orderDetail <p>订单信息</p>
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
                     * 获取<p>是否允许解绑,fasle 不允许 true 允许</p>
                     * @return IsUnBind <p>是否允许解绑,fasle 不允许 true 允许</p>
                     * 
                     */
                    bool GetIsUnBind() const;

                    /**
                     * 设置<p>是否允许解绑,fasle 不允许 true 允许</p>
                     * @param _isUnBind <p>是否允许解绑,fasle 不允许 true 允许</p>
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
                     * 获取<p>uuid 机器唯一ID,仅AssetType = CWP 时有值</p>
                     * @return UUID <p>uuid 机器唯一ID,仅AssetType = CWP 时有值</p>
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置<p>uuid 机器唯一ID,仅AssetType = CWP 时有值</p>
                     * @param _uUID <p>uuid 机器唯一ID,仅AssetType = CWP 时有值</p>
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
                     * 获取<p>无注入/注入失败原因</p>
                     * @return Reason <p>无注入/注入失败原因</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>无注入/注入失败原因</p>
                     * @param _reason <p>无注入/注入失败原因</p>
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
                     * <p>机器唯一ID</p>
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>公网IP</p>
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * <p>内网IP</p>
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * <p>云标签信息</p>
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>主机标签信息(仅AssetType=CWP/TCSS_HOST有值)</p>
                     */
                    std::vector<CWPTags> m_cWPTags;
                    bool m_cWPTagsHasBeenSet;

                    /**
                     * <p>防护版本信息</p><ul><li>CriticalProtection 重保防护包</li><li>Pro 容器安全-专业版</li><li>Ultimate 主机安全-旗舰版</li></ul>
                     */
                    std::vector<std::string> m_protectionVersion;
                    bool m_protectionVersionHasBeenSet;

                    /**
                     * <p>防护设置</p><ul><li>0 未配置</li><li>1 已配置</li></ul>
                     */
                    uint64_t m_configurationSetting;
                    bool m_configurationSettingHasBeenSet;

                    /**
                     * <p>总开关</p><ul><li>0 未开启</li><li>1已开启</li></ul>
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>漏洞防御开关</p><ul><li>0 未开启</li><li>1 开启</li></ul>
                     */
                    uint64_t m_vulDefEnable;
                    bool m_vulDefEnableHasBeenSet;

                    /**
                     * <p>漏洞防御模式</p><ul><li>0 标准</li><li>1 重保</li></ul>
                     */
                    uint64_t m_vulDefMode;
                    bool m_vulDefModeHasBeenSet;

                    /**
                     * <p>漏洞防御动作</p><ul><li>0 仅检测</li><li>1 检测+防御</li></ul>
                     */
                    uint64_t m_vulDefAction;
                    bool m_vulDefActionHasBeenSet;

                    /**
                     * <p>内存马防御开关</p><ul><li>0 未开启</li><li>1 开启</li></ul>
                     */
                    uint64_t m_memShellDefEnable;
                    bool m_memShellDefEnableHasBeenSet;

                    /**
                     * <p>更多防护</p><ul><li>0 不注入会重启的进程 </li><li>1 注入会重启的进程</li></ul>
                     */
                    uint64_t m_safeInject;
                    bool m_safeInjectHasBeenSet;

                    /**
                     * <p>性能阈值配置开关</p><ul><li>0 未开启</li><li>1 开启</li></ul>
                     */
                    uint64_t m_performanceLimit;
                    bool m_performanceLimitHasBeenSet;

                    /**
                     * <p>CPU阈值,取值1-99</p>
                     */
                    uint64_t m_performanceLimitCpu;
                    bool m_performanceLimitCpuHasBeenSet;

                    /**
                     * <p>内存阈值,取值1-99</p>
                     */
                    uint64_t m_performanceLimitMem;
                    bool m_performanceLimitMemHasBeenSet;

                    /**
                     * <p>内存剩余阈值</p>
                     */
                    uint64_t m_performanceLimitMemAmount;
                    bool m_performanceLimitMemAmountHasBeenSet;

                    /**
                     * <p>插件状态</p><ul><li>0 使用正常</li><li>1 存在异常</li><li>2 未使用</li></ul>
                     */
                    uint64_t m_raspException;
                    bool m_raspExceptionHasBeenSet;

                    /**
                     * <p>最近更新时间</p>
                     */
                    std::string m_latestUpdateTime;
                    bool m_latestUpdateTimeHasBeenSet;

                    /**
                     * <p>集群ID,仅容器资产有值</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群名称,仅容器资产有值</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>订单信息</p>
                     */
                    OrderDetail m_orderDetail;
                    bool m_orderDetailHasBeenSet;

                    /**
                     * <p>是否允许解绑,fasle 不允许 true 允许</p>
                     */
                    bool m_isUnBind;
                    bool m_isUnBindHasBeenSet;

                    /**
                     * <p>uuid 机器唯一ID,仅AssetType = CWP 时有值</p>
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * <p>无注入/注入失败原因</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPLICENSELIST_H_
