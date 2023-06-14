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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_CREATEGAMESERVERSESSIONQUEUERESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_CREATEGAMESERVERSESSIONQUEUERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/GameServerSessionQueue.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * CreateGameServerSessionQueue返回参数结构体
                */
                class CreateGameServerSessionQueueResponse : public AbstractModel
                {
                public:
                    CreateGameServerSessionQueueResponse();
                    ~CreateGameServerSessionQueueResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取游戏服务器会话队列
                     * @return GameServerSessionQueue 游戏服务器会话队列
                     * 
                     */
                    GameServerSessionQueue GetGameServerSessionQueue() const;

                    /**
                     * 判断参数 GameServerSessionQueue 是否已赋值
                     * @return GameServerSessionQueue 是否已赋值
                     * 
                     */
                    bool GameServerSessionQueueHasBeenSet() const;

                private:

                    /**
                     * 游戏服务器会话队列
                     */
                    GameServerSessionQueue m_gameServerSessionQueue;
                    bool m_gameServerSessionQueueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_CREATEGAMESERVERSESSIONQUEUERESPONSE_H_
