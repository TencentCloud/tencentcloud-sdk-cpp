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

#ifndef TENCENTCLOUD_TBP_V20190627_MODEL_TEXTPROCESSREQUEST_H_
#define TENCENTCLOUD_TBP_V20190627_MODEL_TEXTPROCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbp
    {
        namespace V20190627
        {
            namespace Model
            {
                /**
                * TextProcess请求参数结构体
                */
                class TextProcessRequest : public AbstractModel
                {
                public:
                    TextProcessRequest();
                    ~TextProcessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机器人标识，用于定义抽象机器人。
                     * @return BotId 机器人标识，用于定义抽象机器人。
                     * 
                     */
                    std::string GetBotId() const;

                    /**
                     * 设置机器人标识，用于定义抽象机器人。
                     * @param _botId 机器人标识，用于定义抽象机器人。
                     * 
                     */
                    void SetBotId(const std::string& _botId);

                    /**
                     * 判断参数 BotId 是否已赋值
                     * @return BotId 是否已赋值
                     * 
                     */
                    bool BotIdHasBeenSet() const;

                    /**
                     * 获取机器人版本，取值"dev"或"release"，{调试版本：dev；线上版本：release}。
                     * @return BotEnv 机器人版本，取值"dev"或"release"，{调试版本：dev；线上版本：release}。
                     * 
                     */
                    std::string GetBotEnv() const;

                    /**
                     * 设置机器人版本，取值"dev"或"release"，{调试版本：dev；线上版本：release}。
                     * @param _botEnv 机器人版本，取值"dev"或"release"，{调试版本：dev；线上版本：release}。
                     * 
                     */
                    void SetBotEnv(const std::string& _botEnv);

                    /**
                     * 判断参数 BotEnv 是否已赋值
                     * @return BotEnv 是否已赋值
                     * 
                     */
                    bool BotEnvHasBeenSet() const;

                    /**
                     * 获取终端标识，每个终端(或线程)对应一个，区分并发多用户。
                     * @return TerminalId 终端标识，每个终端(或线程)对应一个，区分并发多用户。
                     * 
                     */
                    std::string GetTerminalId() const;

                    /**
                     * 设置终端标识，每个终端(或线程)对应一个，区分并发多用户。
                     * @param _terminalId 终端标识，每个终端(或线程)对应一个，区分并发多用户。
                     * 
                     */
                    void SetTerminalId(const std::string& _terminalId);

                    /**
                     * 判断参数 TerminalId 是否已赋值
                     * @return TerminalId 是否已赋值
                     * 
                     */
                    bool TerminalIdHasBeenSet() const;

                    /**
                     * 获取请求的文本。
                     * @return InputText 请求的文本。
                     * 
                     */
                    std::string GetInputText() const;

                    /**
                     * 设置请求的文本。
                     * @param _inputText 请求的文本。
                     * 
                     */
                    void SetInputText(const std::string& _inputText);

                    /**
                     * 判断参数 InputText 是否已赋值
                     * @return InputText 是否已赋值
                     * 
                     */
                    bool InputTextHasBeenSet() const;

                    /**
                     * 获取透传字段，透传给用户自定义的WebService服务。
                     * @return SessionAttributes 透传字段，透传给用户自定义的WebService服务。
                     * 
                     */
                    std::string GetSessionAttributes() const;

                    /**
                     * 设置透传字段，透传给用户自定义的WebService服务。
                     * @param _sessionAttributes 透传字段，透传给用户自定义的WebService服务。
                     * 
                     */
                    void SetSessionAttributes(const std::string& _sessionAttributes);

                    /**
                     * 判断参数 SessionAttributes 是否已赋值
                     * @return SessionAttributes 是否已赋值
                     * 
                     */
                    bool SessionAttributesHasBeenSet() const;

                    /**
                     * 获取平台类型，{小程序：MiniProgram；小微：XiaoWei；公众号：OfficialAccount；企业微信: WXWork}。
                     * @return PlatformType 平台类型，{小程序：MiniProgram；小微：XiaoWei；公众号：OfficialAccount；企业微信: WXWork}。
                     * 
                     */
                    std::string GetPlatformType() const;

                    /**
                     * 设置平台类型，{小程序：MiniProgram；小微：XiaoWei；公众号：OfficialAccount；企业微信: WXWork}。
                     * @param _platformType 平台类型，{小程序：MiniProgram；小微：XiaoWei；公众号：OfficialAccount；企业微信: WXWork}。
                     * 
                     */
                    void SetPlatformType(const std::string& _platformType);

                    /**
                     * 判断参数 PlatformType 是否已赋值
                     * @return PlatformType 是否已赋值
                     * 
                     */
                    bool PlatformTypeHasBeenSet() const;

                    /**
                     * 获取当PlatformType为微信公众号或企业微信时，传递对应微信公众号或企业微信的唯一标识
                     * @return PlatformId 当PlatformType为微信公众号或企业微信时，传递对应微信公众号或企业微信的唯一标识
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置当PlatformType为微信公众号或企业微信时，传递对应微信公众号或企业微信的唯一标识
                     * @param _platformId 当PlatformType为微信公众号或企业微信时，传递对应微信公众号或企业微信的唯一标识
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                private:

                    /**
                     * 机器人标识，用于定义抽象机器人。
                     */
                    std::string m_botId;
                    bool m_botIdHasBeenSet;

                    /**
                     * 机器人版本，取值"dev"或"release"，{调试版本：dev；线上版本：release}。
                     */
                    std::string m_botEnv;
                    bool m_botEnvHasBeenSet;

                    /**
                     * 终端标识，每个终端(或线程)对应一个，区分并发多用户。
                     */
                    std::string m_terminalId;
                    bool m_terminalIdHasBeenSet;

                    /**
                     * 请求的文本。
                     */
                    std::string m_inputText;
                    bool m_inputTextHasBeenSet;

                    /**
                     * 透传字段，透传给用户自定义的WebService服务。
                     */
                    std::string m_sessionAttributes;
                    bool m_sessionAttributesHasBeenSet;

                    /**
                     * 平台类型，{小程序：MiniProgram；小微：XiaoWei；公众号：OfficialAccount；企业微信: WXWork}。
                     */
                    std::string m_platformType;
                    bool m_platformTypeHasBeenSet;

                    /**
                     * 当PlatformType为微信公众号或企业微信时，传递对应微信公众号或企业微信的唯一标识
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBP_V20190627_MODEL_TEXTPROCESSREQUEST_H_
