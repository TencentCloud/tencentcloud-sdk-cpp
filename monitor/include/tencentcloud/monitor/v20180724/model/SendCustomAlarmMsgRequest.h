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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_SENDCUSTOMALARMMSGREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_SENDCUSTOMALARMMSGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * SendCustomAlarmMsg请求参数结构体
                */
                class SendCustomAlarmMsgRequest : public AbstractModel
                {
                public:
                    SendCustomAlarmMsgRequest();
                    ~SendCustomAlarmMsgRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取接口模块名，当前取值monitor
                     * @return Module 接口模块名，当前取值monitor
                     */
                    std::string GetModule() const;

                    /**
                     * 设置接口模块名，当前取值monitor
                     * @param Module 接口模块名，当前取值monitor
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取消息策略ID，在自定义消息页面配置
                     * @return PolicyId 消息策略ID，在自定义消息页面配置
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置消息策略ID，在自定义消息页面配置
                     * @param PolicyId 消息策略ID，在自定义消息页面配置
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取用户想要发送的自定义消息内容
                     * @return Msg 用户想要发送的自定义消息内容
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置用户想要发送的自定义消息内容
                     * @param Msg 用户想要发送的自定义消息内容
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 接口模块名，当前取值monitor
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 消息策略ID，在自定义消息页面配置
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 用户想要发送的自定义消息内容
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_SENDCUSTOMALARMMSGREQUEST_H_
