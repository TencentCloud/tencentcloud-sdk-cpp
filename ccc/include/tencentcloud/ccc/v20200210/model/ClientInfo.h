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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CLIENTINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CLIENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 座席登录的终端信息
                */
                class ClientInfo : public AbstractModel
                {
                public:
                    ClientInfo();
                    ~ClientInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取登录的端类型，"Web"表示web工作台，"WeChatMiniProgram"表示微信小程序
                     * @return ClientType 登录的端类型，"Web"表示web工作台，"WeChatMiniProgram"表示微信小程序
                     * 
                     */
                    std::string GetClientType() const;

                    /**
                     * 设置登录的端类型，"Web"表示web工作台，"WeChatMiniProgram"表示微信小程序
                     * @param _clientType 登录的端类型，"Web"表示web工作台，"WeChatMiniProgram"表示微信小程序
                     * 
                     */
                    void SetClientType(const std::string& _clientType);

                    /**
                     * 判断参数 ClientType 是否已赋值
                     * @return ClientType 是否已赋值
                     * 
                     */
                    bool ClientTypeHasBeenSet() const;

                    /**
                     * 获取当前登录的端是否在前台。若登录的端是Web，则该值为true；若登录的端是WeChatMiniProgram，true表示打开着微信小程序，false表示微信小程序退到后台
                     * @return IsConnected 当前登录的端是否在前台。若登录的端是Web，则该值为true；若登录的端是WeChatMiniProgram，true表示打开着微信小程序，false表示微信小程序退到后台
                     * 
                     */
                    bool GetIsConnected() const;

                    /**
                     * 设置当前登录的端是否在前台。若登录的端是Web，则该值为true；若登录的端是WeChatMiniProgram，true表示打开着微信小程序，false表示微信小程序退到后台
                     * @param _isConnected 当前登录的端是否在前台。若登录的端是Web，则该值为true；若登录的端是WeChatMiniProgram，true表示打开着微信小程序，false表示微信小程序退到后台
                     * 
                     */
                    void SetIsConnected(const bool& _isConnected);

                    /**
                     * 判断参数 IsConnected 是否已赋值
                     * @return IsConnected 是否已赋值
                     * 
                     */
                    bool IsConnectedHasBeenSet() const;

                private:

                    /**
                     * 登录的端类型，"Web"表示web工作台，"WeChatMiniProgram"表示微信小程序
                     */
                    std::string m_clientType;
                    bool m_clientTypeHasBeenSet;

                    /**
                     * 当前登录的端是否在前台。若登录的端是Web，则该值为true；若登录的端是WeChatMiniProgram，true表示打开着微信小程序，false表示微信小程序退到后台
                     */
                    bool m_isConnected;
                    bool m_isConnectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CLIENTINFO_H_
