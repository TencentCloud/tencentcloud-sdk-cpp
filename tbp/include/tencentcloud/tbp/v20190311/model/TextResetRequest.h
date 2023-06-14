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

#ifndef TENCENTCLOUD_TBP_V20190311_MODEL_TEXTRESETREQUEST_H_
#define TENCENTCLOUD_TBP_V20190311_MODEL_TEXTRESETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbp
    {
        namespace V20190311
        {
            namespace Model
            {
                /**
                * TextReset请求参数结构体
                */
                class TextResetRequest : public AbstractModel
                {
                public:
                    TextResetRequest();
                    ~TextResetRequest() = default;
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

                private:

                    /**
                     * 机器人标识，用于定义抽象机器人。
                     */
                    std::string m_botId;
                    bool m_botIdHasBeenSet;

                    /**
                     * 终端标识，每个终端(或线程)对应一个，区分并发多用户。
                     */
                    std::string m_terminalId;
                    bool m_terminalIdHasBeenSet;

                    /**
                     * 机器人版本，取值"dev"或"release"，{调试版本：dev；线上版本：release}。
                     */
                    std::string m_botEnv;
                    bool m_botEnvHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBP_V20190311_MODEL_TEXTRESETREQUEST_H_
