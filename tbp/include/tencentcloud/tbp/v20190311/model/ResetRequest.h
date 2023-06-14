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

#ifndef TENCENTCLOUD_TBP_V20190311_MODEL_RESETREQUEST_H_
#define TENCENTCLOUD_TBP_V20190311_MODEL_RESETREQUEST_H_

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
                * Reset请求参数结构体
                */
                class ResetRequest : public AbstractModel
                {
                public:
                    ResetRequest();
                    ~ResetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机器人标识
                     * @return BotId 机器人标识
                     * 
                     */
                    std::string GetBotId() const;

                    /**
                     * 设置机器人标识
                     * @param _botId 机器人标识
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
                     * 获取子账户id，每个终端对应一个
                     * @return UserId 子账户id，每个终端对应一个
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置子账户id，每个终端对应一个
                     * @param _userId 子账户id，每个终端对应一个
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取机器人版本号。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     * @return BotVersion 机器人版本号。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     * 
                     */
                    std::string GetBotVersion() const;

                    /**
                     * 设置机器人版本号。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     * @param _botVersion 机器人版本号。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     * 
                     */
                    void SetBotVersion(const std::string& _botVersion);

                    /**
                     * 判断参数 BotVersion 是否已赋值
                     * @return BotVersion 是否已赋值
                     * 
                     */
                    bool BotVersionHasBeenSet() const;

                    /**
                     * 获取机器人环境{dev:测试;release:线上}。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     * @return BotEnv 机器人环境{dev:测试;release:线上}。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     * 
                     */
                    std::string GetBotEnv() const;

                    /**
                     * 设置机器人环境{dev:测试;release:线上}。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     * @param _botEnv 机器人环境{dev:测试;release:线上}。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
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
                     * 机器人标识
                     */
                    std::string m_botId;
                    bool m_botIdHasBeenSet;

                    /**
                     * 子账户id，每个终端对应一个
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 机器人版本号。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     */
                    std::string m_botVersion;
                    bool m_botVersionHasBeenSet;

                    /**
                     * 机器人环境{dev:测试;release:线上}。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     */
                    std::string m_botEnv;
                    bool m_botEnvHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBP_V20190311_MODEL_RESETREQUEST_H_
