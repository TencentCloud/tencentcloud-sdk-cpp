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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNOTIFYSETTINGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNOTIFYSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyNotifySetting请求参数结构体
                */
                class ModifyNotifySettingRequest : public AbstractModel
                {
                public:
                    ModifyNotifySettingRequest();
                    ~ModifyNotifySettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>通知模块</p><p>枚举值：</p><ul><li>AkSk： 云API风险治理</li><li>Alert： 告警中心</li><li>Agent： 客户端</li></ul>
                     * @return Module <p>通知模块</p><p>枚举值：</p><ul><li>AkSk： 云API风险治理</li><li>Alert： 告警中心</li><li>Agent： 客户端</li></ul>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>通知模块</p><p>枚举值：</p><ul><li>AkSk： 云API风险治理</li><li>Alert： 告警中心</li><li>Agent： 客户端</li></ul>
                     * @param _module <p>通知模块</p><p>枚举值：</p><ul><li>AkSk： 云API风险治理</li><li>Alert： 告警中心</li><li>Agent： 客户端</li></ul>
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
                     * 获取<p>通知设置模式</p><p>枚举值：</p><ul><li>0： 标准模式</li><li>1： 高级模式</li></ul>
                     * @return Mode <p>通知设置模式</p><p>枚举值：</p><ul><li>0： 标准模式</li><li>1： 高级模式</li></ul>
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置<p>通知设置模式</p><p>枚举值：</p><ul><li>0： 标准模式</li><li>1： 高级模式</li></ul>
                     * @param _mode <p>通知设置模式</p><p>枚举值：</p><ul><li>0： 标准模式</li><li>1： 高级模式</li></ul>
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>通知状态</p><p>枚举值：</p><ul><li>0： 通知关闭</li><li>1： 通知开启</li></ul>
                     * @return Status <p>通知状态</p><p>枚举值：</p><ul><li>0： 通知关闭</li><li>1： 通知开启</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>通知状态</p><p>枚举值：</p><ul><li>0： 通知关闭</li><li>1： 通知开启</li></ul>
                     * @param _status <p>通知状态</p><p>枚举值：</p><ul><li>0： 通知关闭</li><li>1： 通知开启</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>通知开始时间</p><p>参数格式：hh:mm:ss</p>
                     * @return BeginTime <p>通知开始时间</p><p>参数格式：hh:mm:ss</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>通知开始时间</p><p>参数格式：hh:mm:ss</p>
                     * @param _beginTime <p>通知开始时间</p><p>参数格式：hh:mm:ss</p>
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>通知结束时间</p><p>参数格式：hh:mm:ss</p>
                     * @return EndTime <p>通知结束时间</p><p>参数格式：hh:mm:ss</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>通知结束时间</p><p>参数格式：hh:mm:ss</p>
                     * @param _endTime <p>通知结束时间</p><p>参数格式：hh:mm:ss</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>通知选项</p><p>枚举值：</p><ul><li>CRITICAL： 告警等级：严重</li><li>HIGH： 告警等级：高危</li><li>MEDIUM： 告警等级：中危</li><li>LOW： 告警等级：低危</li><li>INFO： 告警等级：提醒</li><li>AGENT_UNINSTALL： 客户端卸载</li><li>AGENT_OFFLINE： 客户端离线</li></ul>
                     * @return Option <p>通知选项</p><p>枚举值：</p><ul><li>CRITICAL： 告警等级：严重</li><li>HIGH： 告警等级：高危</li><li>MEDIUM： 告警等级：中危</li><li>LOW： 告警等级：低危</li><li>INFO： 告警等级：提醒</li><li>AGENT_UNINSTALL： 客户端卸载</li><li>AGENT_OFFLINE： 客户端离线</li></ul>
                     * 
                     */
                    std::vector<std::string> GetOption() const;

                    /**
                     * 设置<p>通知选项</p><p>枚举值：</p><ul><li>CRITICAL： 告警等级：严重</li><li>HIGH： 告警等级：高危</li><li>MEDIUM： 告警等级：中危</li><li>LOW： 告警等级：低危</li><li>INFO： 告警等级：提醒</li><li>AGENT_UNINSTALL： 客户端卸载</li><li>AGENT_OFFLINE： 客户端离线</li></ul>
                     * @param _option <p>通知选项</p><p>枚举值：</p><ul><li>CRITICAL： 告警等级：严重</li><li>HIGH： 告警等级：高危</li><li>MEDIUM： 告警等级：中危</li><li>LOW： 告警等级：低危</li><li>INFO： 告警等级：提醒</li><li>AGENT_UNINSTALL： 客户端卸载</li><li>AGENT_OFFLINE： 客户端离线</li></ul>
                     * 
                     */
                    void SetOption(const std::vector<std::string>& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * 
                     */
                    bool OptionHasBeenSet() const;

                private:

                    /**
                     * <p>通知模块</p><p>枚举值：</p><ul><li>AkSk： 云API风险治理</li><li>Alert： 告警中心</li><li>Agent： 客户端</li></ul>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>通知设置模式</p><p>枚举值：</p><ul><li>0： 标准模式</li><li>1： 高级模式</li></ul>
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>通知状态</p><p>枚举值：</p><ul><li>0： 通知关闭</li><li>1： 通知开启</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>通知开始时间</p><p>参数格式：hh:mm:ss</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>通知结束时间</p><p>参数格式：hh:mm:ss</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>通知选项</p><p>枚举值：</p><ul><li>CRITICAL： 告警等级：严重</li><li>HIGH： 告警等级：高危</li><li>MEDIUM： 告警等级：中危</li><li>LOW： 告警等级：低危</li><li>INFO： 告警等级：提醒</li><li>AGENT_UNINSTALL： 客户端卸载</li><li>AGENT_OFFLINE： 客户端离线</li></ul>
                     */
                    std::vector<std::string> m_option;
                    bool m_optionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNOTIFYSETTINGREQUEST_H_
