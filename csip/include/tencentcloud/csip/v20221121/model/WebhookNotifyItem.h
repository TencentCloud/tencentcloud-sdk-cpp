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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKNOTIFYITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKNOTIFYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 单个通知项
                */
                class WebhookNotifyItem : public AbstractModel
                {
                public:
                    WebhookNotifyItem();
                    ~WebhookNotifyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模块编码（与 ModifyNotifySettingAlert 共用枚举）<br>枚举值：<br>Vul：漏洞与云安全态势<br>Alert：告警中心<br>AkSk：云API风险治理<br>Agent：客户端/主机资产<br>LogAnalysis：日志分析</p>
                     * @return Module <p>模块编码（与 ModifyNotifySettingAlert 共用枚举）<br>枚举值：<br>Vul：漏洞与云安全态势<br>Alert：告警中心<br>AkSk：云API风险治理<br>Agent：客户端/主机资产<br>LogAnalysis：日志分析</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>模块编码（与 ModifyNotifySettingAlert 共用枚举）<br>枚举值：<br>Vul：漏洞与云安全态势<br>Alert：告警中心<br>AkSk：云API风险治理<br>Agent：客户端/主机资产<br>LogAnalysis：日志分析</p>
                     * @param _module <p>模块编码（与 ModifyNotifySettingAlert 共用枚举）<br>枚举值：<br>Vul：漏洞与云安全态势<br>Alert：告警中心<br>AkSk：云API风险治理<br>Agent：客户端/主机资产<br>LogAnalysis：日志分析</p>
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取<p>子模块编码<br>枚举值（部分）：<br>MALWARE_FILE：恶意文件<br>MALWARE_PROCESS：恶意进程<br>RISK_LOGIN：异常登录<br>BRUTE_FORCE：密码破解<br>MALICIOUS_REQUEST：恶意请求<br>HIGH_RISK_COMMAND：高危命令<br>PRIVILEGE_ESCALATION：本地提权<br>REVERSE_SHELL：反弹Shell<br>NETWORK_ATTACK：网络攻击<br>MULTI_BEHAVIOR_ATTACK：多行为攻击<br>AGENT_OFFLINE：客户端离线<br>AGENT_UNINSTALL：客户端卸载<br>完整枚举见 DescribeWebhookNotifyItemTree</p>
                     * @return SubModule <p>子模块编码<br>枚举值（部分）：<br>MALWARE_FILE：恶意文件<br>MALWARE_PROCESS：恶意进程<br>RISK_LOGIN：异常登录<br>BRUTE_FORCE：密码破解<br>MALICIOUS_REQUEST：恶意请求<br>HIGH_RISK_COMMAND：高危命令<br>PRIVILEGE_ESCALATION：本地提权<br>REVERSE_SHELL：反弹Shell<br>NETWORK_ATTACK：网络攻击<br>MULTI_BEHAVIOR_ATTACK：多行为攻击<br>AGENT_OFFLINE：客户端离线<br>AGENT_UNINSTALL：客户端卸载<br>完整枚举见 DescribeWebhookNotifyItemTree</p>
                     * 
                     */
                    std::string GetSubModule() const;

                    /**
                     * 设置<p>子模块编码<br>枚举值（部分）：<br>MALWARE_FILE：恶意文件<br>MALWARE_PROCESS：恶意进程<br>RISK_LOGIN：异常登录<br>BRUTE_FORCE：密码破解<br>MALICIOUS_REQUEST：恶意请求<br>HIGH_RISK_COMMAND：高危命令<br>PRIVILEGE_ESCALATION：本地提权<br>REVERSE_SHELL：反弹Shell<br>NETWORK_ATTACK：网络攻击<br>MULTI_BEHAVIOR_ATTACK：多行为攻击<br>AGENT_OFFLINE：客户端离线<br>AGENT_UNINSTALL：客户端卸载<br>完整枚举见 DescribeWebhookNotifyItemTree</p>
                     * @param _subModule <p>子模块编码<br>枚举值（部分）：<br>MALWARE_FILE：恶意文件<br>MALWARE_PROCESS：恶意进程<br>RISK_LOGIN：异常登录<br>BRUTE_FORCE：密码破解<br>MALICIOUS_REQUEST：恶意请求<br>HIGH_RISK_COMMAND：高危命令<br>PRIVILEGE_ESCALATION：本地提权<br>REVERSE_SHELL：反弹Shell<br>NETWORK_ATTACK：网络攻击<br>MULTI_BEHAVIOR_ATTACK：多行为攻击<br>AGENT_OFFLINE：客户端离线<br>AGENT_UNINSTALL：客户端卸载<br>完整枚举见 DescribeWebhookNotifyItemTree</p>
                     * 
                     */
                    void SetSubModule(const std::string& _subModule);

                    /**
                     * 判断参数 SubModule 是否已赋值
                     * @return SubModule 是否已赋值
                     * 
                     */
                    bool SubModuleHasBeenSet() const;

                    /**
                     * 获取<p>风险等级集合<br>枚举值：<br>CRITICAL：严重<br>HIGH：高危<br>MEDIUM：中危<br>LOW：低危<br>INFO：提示<br>不支持等级的子模块传空数组</p>
                     * @return Levels <p>风险等级集合<br>枚举值：<br>CRITICAL：严重<br>HIGH：高危<br>MEDIUM：中危<br>LOW：低危<br>INFO：提示<br>不支持等级的子模块传空数组</p>
                     * 
                     */
                    std::vector<std::string> GetLevels() const;

                    /**
                     * 设置<p>风险等级集合<br>枚举值：<br>CRITICAL：严重<br>HIGH：高危<br>MEDIUM：中危<br>LOW：低危<br>INFO：提示<br>不支持等级的子模块传空数组</p>
                     * @param _levels <p>风险等级集合<br>枚举值：<br>CRITICAL：严重<br>HIGH：高危<br>MEDIUM：中危<br>LOW：低危<br>INFO：提示<br>不支持等级的子模块传空数组</p>
                     * 
                     */
                    void SetLevels(const std::vector<std::string>& _levels);

                    /**
                     * 判断参数 Levels 是否已赋值
                     * @return Levels 是否已赋值
                     * 
                     */
                    bool LevelsHasBeenSet() const;

                    /**
                     * 获取<p>处理状态等</p>
                     * @return Items <p>处理状态等</p>
                     * 
                     */
                    std::vector<std::string> GetItems() const;

                    /**
                     * 设置<p>处理状态等</p>
                     * @param _items <p>处理状态等</p>
                     * 
                     */
                    void SetItems(const std::vector<std::string>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * <p>模块编码（与 ModifyNotifySettingAlert 共用枚举）<br>枚举值：<br>Vul：漏洞与云安全态势<br>Alert：告警中心<br>AkSk：云API风险治理<br>Agent：客户端/主机资产<br>LogAnalysis：日志分析</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>子模块编码<br>枚举值（部分）：<br>MALWARE_FILE：恶意文件<br>MALWARE_PROCESS：恶意进程<br>RISK_LOGIN：异常登录<br>BRUTE_FORCE：密码破解<br>MALICIOUS_REQUEST：恶意请求<br>HIGH_RISK_COMMAND：高危命令<br>PRIVILEGE_ESCALATION：本地提权<br>REVERSE_SHELL：反弹Shell<br>NETWORK_ATTACK：网络攻击<br>MULTI_BEHAVIOR_ATTACK：多行为攻击<br>AGENT_OFFLINE：客户端离线<br>AGENT_UNINSTALL：客户端卸载<br>完整枚举见 DescribeWebhookNotifyItemTree</p>
                     */
                    std::string m_subModule;
                    bool m_subModuleHasBeenSet;

                    /**
                     * <p>风险等级集合<br>枚举值：<br>CRITICAL：严重<br>HIGH：高危<br>MEDIUM：中危<br>LOW：低危<br>INFO：提示<br>不支持等级的子模块传空数组</p>
                     */
                    std::vector<std::string> m_levels;
                    bool m_levelsHasBeenSet;

                    /**
                     * <p>处理状态等</p>
                     */
                    std::vector<std::string> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKNOTIFYITEM_H_
