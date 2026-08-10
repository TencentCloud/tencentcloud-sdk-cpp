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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXABLEMACHINEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXABLEMACHINEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/MiniTagItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 可修复主机信息
                */
                class VulFixableMachineItem : public AbstractModel
                {
                public:
                    VulFixableMachineItem();
                    ~VulFixableMachineItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>漏洞ID列表，按 SupportAutoFix 维度分组：SupportAutoFix=1 时为可修复的漏洞ID，SupportAutoFix=0 时为不可修复的漏洞ID</p>
                     * @return VulIds <p>漏洞ID列表，按 SupportAutoFix 维度分组：SupportAutoFix=1 时为可修复的漏洞ID，SupportAutoFix=0 时为不可修复的漏洞ID</p>
                     * 
                     */
                    std::vector<int64_t> GetVulIds() const;

                    /**
                     * 设置<p>漏洞ID列表，按 SupportAutoFix 维度分组：SupportAutoFix=1 时为可修复的漏洞ID，SupportAutoFix=0 时为不可修复的漏洞ID</p>
                     * @param _vulIds <p>漏洞ID列表，按 SupportAutoFix 维度分组：SupportAutoFix=1 时为可修复的漏洞ID，SupportAutoFix=0 时为不可修复的漏洞ID</p>
                     * 
                     */
                    void SetVulIds(const std::vector<int64_t>& _vulIds);

                    /**
                     * 判断参数 VulIds 是否已赋值
                     * @return VulIds 是否已赋值
                     * 
                     */
                    bool VulIdsHasBeenSet() const;

                    /**
                     * 获取<p>主机实例ID</p>
                     * @return InstanceId <p>主机实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>主机实例ID</p>
                     * @param _instanceId <p>主机实例ID</p>
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
                     * 获取<p>主机名称</p>
                     * @return MachineName <p>主机名称</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>主机名称</p>
                     * @param _machineName <p>主机名称</p>
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取<p>主机IP</p>
                     * @return MachineIp <p>主机IP</p>
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置<p>主机IP</p>
                     * @param _machineIp <p>主机IP</p>
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取<p>公网IP</p>
                     * @return PublicIp <p>公网IP</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>公网IP</p>
                     * @param _publicIp <p>公网IP</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>操作系统类型<br>枚举值：<br>linux：Linux操作系统<br>windows：Windows操作系统</p>
                     * @return OsType <p>操作系统类型<br>枚举值：<br>linux：Linux操作系统<br>windows：Windows操作系统</p>
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置<p>操作系统类型<br>枚举值：<br>linux：Linux操作系统<br>windows：Windows操作系统</p>
                     * @param _osType <p>操作系统类型<br>枚举值：<br>linux：Linux操作系统<br>windows：Windows操作系统</p>
                     * 
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取<p>操作系统名称</p>
                     * @return OsName <p>操作系统名称</p>
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置<p>操作系统名称</p>
                     * @param _osName <p>操作系统名称</p>
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取<p>主机在线状态<br>枚举值：<br>ONLINE：在线<br>OFFLINE：离线</p>
                     * @return MachineStatus <p>主机在线状态<br>枚举值：<br>ONLINE：在线<br>OFFLINE：离线</p>
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置<p>主机在线状态<br>枚举值：<br>ONLINE：在线<br>OFFLINE：离线</p>
                     * @param _machineStatus <p>主机在线状态<br>枚举值：<br>ONLINE：在线<br>OFFLINE：离线</p>
                     * 
                     */
                    void SetMachineStatus(const std::string& _machineStatus);

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     * 
                     */
                    bool MachineStatusHasBeenSet() const;

                    /**
                     * 获取<p>是否支持自动修复<br>枚举值：<br>0：不支持<br>1：支持</p>
                     * @return SupportAutoFix <p>是否支持自动修复<br>枚举值：<br>0：不支持<br>1：支持</p>
                     * 
                     */
                    int64_t GetSupportAutoFix() const;

                    /**
                     * 设置<p>是否支持自动修复<br>枚举值：<br>0：不支持<br>1：支持</p>
                     * @param _supportAutoFix <p>是否支持自动修复<br>枚举值：<br>0：不支持<br>1：支持</p>
                     * 
                     */
                    void SetSupportAutoFix(const int64_t& _supportAutoFix);

                    /**
                     * 判断参数 SupportAutoFix 是否已赋值
                     * @return SupportAutoFix 是否已赋值
                     * 
                     */
                    bool SupportAutoFixHasBeenSet() const;

                    /**
                     * 获取<p>当前修复状态<br>枚举值：<br>0：未修复<br>1：修复中<br>2：修复失败<br>3：修复成功<br>4：修复超时</p>
                     * @return FixStatus <p>当前修复状态<br>枚举值：<br>0：未修复<br>1：修复中<br>2：修复失败<br>3：修复成功<br>4：修复超时</p>
                     * 
                     */
                    int64_t GetFixStatus() const;

                    /**
                     * 设置<p>当前修复状态<br>枚举值：<br>0：未修复<br>1：修复中<br>2：修复失败<br>3：修复成功<br>4：修复超时</p>
                     * @param _fixStatus <p>当前修复状态<br>枚举值：<br>0：未修复<br>1：修复中<br>2：修复失败<br>3：修复成功<br>4：修复超时</p>
                     * 
                     */
                    void SetFixStatus(const int64_t& _fixStatus);

                    /**
                     * 判断参数 FixStatus 是否已赋值
                     * @return FixStatus 是否已赋值
                     * 
                     */
                    bool FixStatusHasBeenSet() const;

                    /**
                     * 获取<p>最近一次修复时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @return LatestFixTime <p>最近一次修复时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    std::string GetLatestFixTime() const;

                    /**
                     * 设置<p>最近一次修复时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @param _latestFixTime <p>最近一次修复时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    void SetLatestFixTime(const std::string& _latestFixTime);

                    /**
                     * 判断参数 LatestFixTime 是否已赋值
                     * @return LatestFixTime 是否已赋值
                     * 
                     */
                    bool LatestFixTimeHasBeenSet() const;

                    /**
                     * 获取<p>不可修复原因，SupportAutoFix为0时返回</p>
                     * @return NotFixableReason <p>不可修复原因，SupportAutoFix为0时返回</p>
                     * 
                     */
                    std::string GetNotFixableReason() const;

                    /**
                     * 设置<p>不可修复原因，SupportAutoFix为0时返回</p>
                     * @param _notFixableReason <p>不可修复原因，SupportAutoFix为0时返回</p>
                     * 
                     */
                    void SetNotFixableReason(const std::string& _notFixableReason);

                    /**
                     * 判断参数 NotFixableReason 是否已赋值
                     * @return NotFixableReason 是否已赋值
                     * 
                     */
                    bool NotFixableReasonHasBeenSet() const;

                    /**
                     * 获取<p>修复命令列表，SupportAutoFix为1时返回</p>
                     * @return FixCommands <p>修复命令列表，SupportAutoFix为1时返回</p>
                     * 
                     */
                    std::vector<std::string> GetFixCommands() const;

                    /**
                     * 设置<p>修复命令列表，SupportAutoFix为1时返回</p>
                     * @param _fixCommands <p>修复命令列表，SupportAutoFix为1时返回</p>
                     * 
                     */
                    void SetFixCommands(const std::vector<std::string>& _fixCommands);

                    /**
                     * 判断参数 FixCommands 是否已赋值
                     * @return FixCommands 是否已赋值
                     * 
                     */
                    bool FixCommandsHasBeenSet() const;

                    /**
                     * 获取<p>关联组件列表</p>
                     * @return Components <p>关联组件列表</p>
                     * 
                     */
                    std::vector<std::string> GetComponents() const;

                    /**
                     * 设置<p>关联组件列表</p>
                     * @param _components <p>关联组件列表</p>
                     * 
                     */
                    void SetComponents(const std::vector<std::string>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取<p>资产标签列表</p>
                     * @return TagItems <p>资产标签列表</p>
                     * 
                     */
                    std::vector<MiniTagItem> GetTagItems() const;

                    /**
                     * 设置<p>资产标签列表</p>
                     * @param _tagItems <p>资产标签列表</p>
                     * 
                     */
                    void SetTagItems(const std::vector<MiniTagItem>& _tagItems);

                    /**
                     * 判断参数 TagItems 是否已赋值
                     * @return TagItems 是否已赋值
                     * 
                     */
                    bool TagItemsHasBeenSet() const;

                    /**
                     * 获取<p>所属账号AppId</p>
                     * @return AppId <p>所属账号AppId</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>所属账号AppId</p>
                     * @param _appId <p>所属账号AppId</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>付费版本信息<br>枚举值：<br>BASIC：基础版<br>PRO：专业版<br>ULTIMATE：旗舰版</p>
                     * @return PayVersion <p>付费版本信息<br>枚举值：<br>BASIC：基础版<br>PRO：专业版<br>ULTIMATE：旗舰版</p>
                     * 
                     */
                    std::string GetPayVersion() const;

                    /**
                     * 设置<p>付费版本信息<br>枚举值：<br>BASIC：基础版<br>PRO：专业版<br>ULTIMATE：旗舰版</p>
                     * @param _payVersion <p>付费版本信息<br>枚举值：<br>BASIC：基础版<br>PRO：专业版<br>ULTIMATE：旗舰版</p>
                     * 
                     */
                    void SetPayVersion(const std::string& _payVersion);

                    /**
                     * 判断参数 PayVersion 是否已赋值
                     * @return PayVersion 是否已赋值
                     * 
                     */
                    bool PayVersionHasBeenSet() const;

                private:

                    /**
                     * <p>漏洞ID列表，按 SupportAutoFix 维度分组：SupportAutoFix=1 时为可修复的漏洞ID，SupportAutoFix=0 时为不可修复的漏洞ID</p>
                     */
                    std::vector<int64_t> m_vulIds;
                    bool m_vulIdsHasBeenSet;

                    /**
                     * <p>主机实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>主机名称</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>主机IP</p>
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * <p>公网IP</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>操作系统类型<br>枚举值：<br>linux：Linux操作系统<br>windows：Windows操作系统</p>
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * <p>操作系统名称</p>
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * <p>主机在线状态<br>枚举值：<br>ONLINE：在线<br>OFFLINE：离线</p>
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * <p>是否支持自动修复<br>枚举值：<br>0：不支持<br>1：支持</p>
                     */
                    int64_t m_supportAutoFix;
                    bool m_supportAutoFixHasBeenSet;

                    /**
                     * <p>当前修复状态<br>枚举值：<br>0：未修复<br>1：修复中<br>2：修复失败<br>3：修复成功<br>4：修复超时</p>
                     */
                    int64_t m_fixStatus;
                    bool m_fixStatusHasBeenSet;

                    /**
                     * <p>最近一次修复时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     */
                    std::string m_latestFixTime;
                    bool m_latestFixTimeHasBeenSet;

                    /**
                     * <p>不可修复原因，SupportAutoFix为0时返回</p>
                     */
                    std::string m_notFixableReason;
                    bool m_notFixableReasonHasBeenSet;

                    /**
                     * <p>修复命令列表，SupportAutoFix为1时返回</p>
                     */
                    std::vector<std::string> m_fixCommands;
                    bool m_fixCommandsHasBeenSet;

                    /**
                     * <p>关联组件列表</p>
                     */
                    std::vector<std::string> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * <p>资产标签列表</p>
                     */
                    std::vector<MiniTagItem> m_tagItems;
                    bool m_tagItemsHasBeenSet;

                    /**
                     * <p>所属账号AppId</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>付费版本信息<br>枚举值：<br>BASIC：基础版<br>PRO：专业版<br>ULTIMATE：旗舰版</p>
                     */
                    std::string m_payVersion;
                    bool m_payVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXABLEMACHINEITEM_H_
