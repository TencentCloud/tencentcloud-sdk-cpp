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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WECOMROBOTWEBSOCKETACCESS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WECOMROBOTWEBSOCKETACCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 企微机器人WebSocket接入配置
                */
                class WecomRobotWebsocketAccess : public AbstractModel
                {
                public:
                    WecomRobotWebsocketAccess();
                    ~WecomRobotWebsocketAccess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>绑定类型：1-扫码绑定，2-填写表单绑定</p>
                     * @return BindType <p>绑定类型：1-扫码绑定，2-填写表单绑定</p>
                     * 
                     */
                    int64_t GetBindType() const;

                    /**
                     * 设置<p>绑定类型：1-扫码绑定，2-填写表单绑定</p>
                     * @param _bindType <p>绑定类型：1-扫码绑定，2-填写表单绑定</p>
                     * 
                     */
                    void SetBindType(const int64_t& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取<p>企微机器人BotId</p>
                     * @return BotId <p>企微机器人BotId</p>
                     * 
                     */
                    std::string GetBotId() const;

                    /**
                     * 设置<p>企微机器人BotId</p>
                     * @param _botId <p>企微机器人BotId</p>
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
                     * 获取<p>企微机器人BotSecret</p>
                     * @return BotSecret <p>企微机器人BotSecret</p>
                     * 
                     */
                    std::string GetBotSecret() const;

                    /**
                     * 设置<p>企微机器人BotSecret</p>
                     * @param _botSecret <p>企微机器人BotSecret</p>
                     * 
                     */
                    void SetBotSecret(const std::string& _botSecret);

                    /**
                     * 判断参数 BotSecret 是否已赋值
                     * @return BotSecret 是否已赋值
                     * 
                     */
                    bool BotSecretHasBeenSet() const;

                private:

                    /**
                     * <p>绑定类型：1-扫码绑定，2-填写表单绑定</p>
                     */
                    int64_t m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * <p>企微机器人BotId</p>
                     */
                    std::string m_botId;
                    bool m_botIdHasBeenSet;

                    /**
                     * <p>企微机器人BotSecret</p>
                     */
                    std::string m_botSecret;
                    bool m_botSecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WECOMROBOTWEBSOCKETACCESS_H_
