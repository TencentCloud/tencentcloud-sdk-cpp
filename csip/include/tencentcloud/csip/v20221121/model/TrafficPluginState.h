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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICPLUGINSTATE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICPLUGINSTATE_H_

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
                * AI Agent 流量沙箱插件状态
                */
                class TrafficPluginState : public AbstractModel
                {
                public:
                    TrafficPluginState();
                    ~TrafficPluginState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插件安装状态（上层聚合）
枚举值：
NONE：未安装
INSTALLING：安装中
INSTALLED：已安装
INSTALL_FAIL：安装失败
                     * @return InstallStatus 插件安装状态（上层聚合）
枚举值：
NONE：未安装
INSTALLING：安装中
INSTALLED：已安装
INSTALL_FAIL：安装失败
                     * 
                     */
                    std::string GetInstallStatus() const;

                    /**
                     * 设置插件安装状态（上层聚合）
枚举值：
NONE：未安装
INSTALLING：安装中
INSTALLED：已安装
INSTALL_FAIL：安装失败
                     * @param _installStatus 插件安装状态（上层聚合）
枚举值：
NONE：未安装
INSTALLING：安装中
INSTALLED：已安装
INSTALL_FAIL：安装失败
                     * 
                     */
                    void SetInstallStatus(const std::string& _installStatus);

                    /**
                     * 判断参数 InstallStatus 是否已赋值
                     * @return InstallStatus 是否已赋值
                     * 
                     */
                    bool InstallStatusHasBeenSet() const;

                    /**
                     * 获取插件安装细分状态。取值与 InstallStatus 对应：未安装（InstallStatus=UNINSTALL）时为空字符串；安装成功（InstallStatus=INSTALLED）时为 SUCCESS；安装失败（InstallStatus=INSTALL_FAIL）时为具体失败原因
枚举值：
NOT_SUPPORT：环境不支持
CONTAINER_NOT_FOUND：容器不存在
REQUIRE_RESTART：需要重启
CA_FAILED：CA 失败
EBPF_FAILED：eBPF 失败
IPTABLE_FAILED：iptables 失败
REDIRECT_FAILED：流量重定向失败
                     * @return Status 插件安装细分状态。取值与 InstallStatus 对应：未安装（InstallStatus=UNINSTALL）时为空字符串；安装成功（InstallStatus=INSTALLED）时为 SUCCESS；安装失败（InstallStatus=INSTALL_FAIL）时为具体失败原因
枚举值：
NOT_SUPPORT：环境不支持
CONTAINER_NOT_FOUND：容器不存在
REQUIRE_RESTART：需要重启
CA_FAILED：CA 失败
EBPF_FAILED：eBPF 失败
IPTABLE_FAILED：iptables 失败
REDIRECT_FAILED：流量重定向失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置插件安装细分状态。取值与 InstallStatus 对应：未安装（InstallStatus=UNINSTALL）时为空字符串；安装成功（InstallStatus=INSTALLED）时为 SUCCESS；安装失败（InstallStatus=INSTALL_FAIL）时为具体失败原因
枚举值：
NOT_SUPPORT：环境不支持
CONTAINER_NOT_FOUND：容器不存在
REQUIRE_RESTART：需要重启
CA_FAILED：CA 失败
EBPF_FAILED：eBPF 失败
IPTABLE_FAILED：iptables 失败
REDIRECT_FAILED：流量重定向失败
                     * @param _status 插件安装细分状态。取值与 InstallStatus 对应：未安装（InstallStatus=UNINSTALL）时为空字符串；安装成功（InstallStatus=INSTALLED）时为 SUCCESS；安装失败（InstallStatus=INSTALL_FAIL）时为具体失败原因
枚举值：
NOT_SUPPORT：环境不支持
CONTAINER_NOT_FOUND：容器不存在
REQUIRE_RESTART：需要重启
CA_FAILED：CA 失败
EBPF_FAILED：eBPF 失败
IPTABLE_FAILED：iptables 失败
REDIRECT_FAILED：流量重定向失败
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态文案（由 Status 根据请求语言派生的国际化描述）
                     * @return Message 状态文案（由 Status 根据请求语言派生的国际化描述）
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置状态文案（由 Status 根据请求语言派生的国际化描述）
                     * @param _message 状态文案（由 Status 根据请求语言派生的国际化描述）
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取插件最近活跃时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return ActivityTime 插件最近活跃时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetActivityTime() const;

                    /**
                     * 设置插件最近活跃时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @param _activityTime 插件最近活跃时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    void SetActivityTime(const std::string& _activityTime);

                    /**
                     * 判断参数 ActivityTime 是否已赋值
                     * @return ActivityTime 是否已赋值
                     * 
                     */
                    bool ActivityTimeHasBeenSet() const;

                private:

                    /**
                     * 插件安装状态（上层聚合）
枚举值：
NONE：未安装
INSTALLING：安装中
INSTALLED：已安装
INSTALL_FAIL：安装失败
                     */
                    std::string m_installStatus;
                    bool m_installStatusHasBeenSet;

                    /**
                     * 插件安装细分状态。取值与 InstallStatus 对应：未安装（InstallStatus=UNINSTALL）时为空字符串；安装成功（InstallStatus=INSTALLED）时为 SUCCESS；安装失败（InstallStatus=INSTALL_FAIL）时为具体失败原因
枚举值：
NOT_SUPPORT：环境不支持
CONTAINER_NOT_FOUND：容器不存在
REQUIRE_RESTART：需要重启
CA_FAILED：CA 失败
EBPF_FAILED：eBPF 失败
IPTABLE_FAILED：iptables 失败
REDIRECT_FAILED：流量重定向失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态文案（由 Status 根据请求语言派生的国际化描述）
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 插件最近活跃时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     */
                    std::string m_activityTime;
                    bool m_activityTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICPLUGINSTATE_H_
