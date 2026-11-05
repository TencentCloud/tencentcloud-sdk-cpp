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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_KBUPDATEMACHINEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_KBUPDATEMACHINEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VulFixableMachineAction.h>
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
                * 可更新补丁主机信息
                */
                class KBUpdateMachineItem : public AbstractModel
                {
                public:
                    KBUpdateMachineItem();
                    ~KBUpdateMachineItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取KB补丁ID
                     * @return KBId KB补丁ID
                     * 
                     */
                    int64_t GetKBId() const;

                    /**
                     * 设置KB补丁ID
                     * @param _kBId KB补丁ID
                     * 
                     */
                    void SetKBId(const int64_t& _kBId);

                    /**
                     * 判断参数 KBId 是否已赋值
                     * @return KBId 是否已赋值
                     * 
                     */
                    bool KBIdHasBeenSet() const;

                    /**
                     * 获取主机实例ID
                     * @return InstanceId 主机实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置主机实例ID
                     * @param _instanceId 主机实例ID
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
                     * 获取主机名称
                     * @return MachineName 主机名称
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名称
                     * @param _machineName 主机名称
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
                     * 获取主机IP
                     * @return MachineIp 主机IP
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机IP
                     * @param _machineIp 主机IP
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
                     * 获取公网IP
                     * @return PublicIp 公网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网IP
                     * @param _publicIp 公网IP
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
                     * 获取操作系统名称
                     * @return OsName 操作系统名称
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置操作系统名称
                     * @param _osName 操作系统名称
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
                     * 获取主机在线状态
枚举值：
ONLINE：在线
OFFLINE：离线
                     * @return MachineStatus 主机在线状态
枚举值：
ONLINE：在线
OFFLINE：离线
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置主机在线状态
枚举值：
ONLINE：在线
OFFLINE：离线
                     * @param _machineStatus 主机在线状态
枚举值：
ONLINE：在线
OFFLINE：离线
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
                     * 获取主机运行状态
枚举值：
RUNNING：运行中
STOPPED：已停止
EXPIRED：待回收
                     * @return HostStatus 主机运行状态
枚举值：
RUNNING：运行中
STOPPED：已停止
EXPIRED：待回收
                     * 
                     */
                    std::string GetHostStatus() const;

                    /**
                     * 设置主机运行状态
枚举值：
RUNNING：运行中
STOPPED：已停止
EXPIRED：待回收
                     * @param _hostStatus 主机运行状态
枚举值：
RUNNING：运行中
STOPPED：已停止
EXPIRED：待回收
                     * 
                     */
                    void SetHostStatus(const std::string& _hostStatus);

                    /**
                     * 判断参数 HostStatus 是否已赋值
                     * @return HostStatus 是否已赋值
                     * 
                     */
                    bool HostStatusHasBeenSet() const;

                    /**
                     * 获取是否支持自动更新补丁
枚举值：
0：不支持
1：支持
                     * @return SupportAutoFix 是否支持自动更新补丁
枚举值：
0：不支持
1：支持
                     * 
                     */
                    int64_t GetSupportAutoFix() const;

                    /**
                     * 设置是否支持自动更新补丁
枚举值：
0：不支持
1：支持
                     * @param _supportAutoFix 是否支持自动更新补丁
枚举值：
0：不支持
1：支持
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
                     * 获取当前修复状态
枚举值：
0：未修复
1：修复中
2：修复失败
3：修复成功
4：修复超时
                     * @return FixStatus 当前修复状态
枚举值：
0：未修复
1：修复中
2：修复失败
3：修复成功
4：修复超时
                     * 
                     */
                    int64_t GetFixStatus() const;

                    /**
                     * 设置当前修复状态
枚举值：
0：未修复
1：修复中
2：修复失败
3：修复成功
4：修复超时
                     * @param _fixStatus 当前修复状态
枚举值：
0：未修复
1：修复中
2：修复失败
3：修复成功
4：修复超时
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
                     * 获取最近一次修复时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return LatestFixTime 最近一次修复时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetLatestFixTime() const;

                    /**
                     * 设置最近一次修复时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @param _latestFixTime 最近一次修复时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
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
                     * 获取不可修复原因，SupportAutoFix为0时返回
                     * @return NotFixableReason 不可修复原因，SupportAutoFix为0时返回
                     * 
                     */
                    std::string GetNotFixableReason() const;

                    /**
                     * 设置不可修复原因，SupportAutoFix为0时返回
                     * @param _notFixableReason 不可修复原因，SupportAutoFix为0时返回
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
                     * 获取不可修复原因关联动作，SupportAutoFix为0且存在可引导动作时返回
                     * @return NotFixableAction 不可修复原因关联动作，SupportAutoFix为0且存在可引导动作时返回
                     * 
                     */
                    VulFixableMachineAction GetNotFixableAction() const;

                    /**
                     * 设置不可修复原因关联动作，SupportAutoFix为0且存在可引导动作时返回
                     * @param _notFixableAction 不可修复原因关联动作，SupportAutoFix为0且存在可引导动作时返回
                     * 
                     */
                    void SetNotFixableAction(const VulFixableMachineAction& _notFixableAction);

                    /**
                     * 判断参数 NotFixableAction 是否已赋值
                     * @return NotFixableAction 是否已赋值
                     * 
                     */
                    bool NotFixableActionHasBeenSet() const;

                    /**
                     * 获取资产标签列表
                     * @return TagItems 资产标签列表
                     * 
                     */
                    std::vector<MiniTagItem> GetTagItems() const;

                    /**
                     * 设置资产标签列表
                     * @param _tagItems 资产标签列表
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
                     * 获取所属账号AppId
                     * @return AppId 所属账号AppId
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置所属账号AppId
                     * @param _appId 所属账号AppId
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
                     * 获取付费版本信息
枚举值：
BASIC：基础版
PRO：专业版
ULTIMATE：旗舰版
PRO_LH：轻量版
                     * @return PayVersion 付费版本信息
枚举值：
BASIC：基础版
PRO：专业版
ULTIMATE：旗舰版
PRO_LH：轻量版
                     * 
                     */
                    std::string GetPayVersion() const;

                    /**
                     * 设置付费版本信息
枚举值：
BASIC：基础版
PRO：专业版
ULTIMATE：旗舰版
PRO_LH：轻量版
                     * @param _payVersion 付费版本信息
枚举值：
BASIC：基础版
PRO：专业版
ULTIMATE：旗舰版
PRO_LH：轻量版
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
                     * KB补丁ID
                     */
                    int64_t m_kBId;
                    bool m_kBIdHasBeenSet;

                    /**
                     * 主机实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 主机IP
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 公网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 操作系统名称
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 主机在线状态
枚举值：
ONLINE：在线
OFFLINE：离线
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * 主机运行状态
枚举值：
RUNNING：运行中
STOPPED：已停止
EXPIRED：待回收
                     */
                    std::string m_hostStatus;
                    bool m_hostStatusHasBeenSet;

                    /**
                     * 是否支持自动更新补丁
枚举值：
0：不支持
1：支持
                     */
                    int64_t m_supportAutoFix;
                    bool m_supportAutoFixHasBeenSet;

                    /**
                     * 当前修复状态
枚举值：
0：未修复
1：修复中
2：修复失败
3：修复成功
4：修复超时
                     */
                    int64_t m_fixStatus;
                    bool m_fixStatusHasBeenSet;

                    /**
                     * 最近一次修复时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     */
                    std::string m_latestFixTime;
                    bool m_latestFixTimeHasBeenSet;

                    /**
                     * 不可修复原因，SupportAutoFix为0时返回
                     */
                    std::string m_notFixableReason;
                    bool m_notFixableReasonHasBeenSet;

                    /**
                     * 不可修复原因关联动作，SupportAutoFix为0且存在可引导动作时返回
                     */
                    VulFixableMachineAction m_notFixableAction;
                    bool m_notFixableActionHasBeenSet;

                    /**
                     * 资产标签列表
                     */
                    std::vector<MiniTagItem> m_tagItems;
                    bool m_tagItemsHasBeenSet;

                    /**
                     * 所属账号AppId
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 付费版本信息
枚举值：
BASIC：基础版
PRO：专业版
ULTIMATE：旗舰版
PRO_LH：轻量版
                     */
                    std::string m_payVersion;
                    bool m_payVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_KBUPDATEMACHINEITEM_H_
