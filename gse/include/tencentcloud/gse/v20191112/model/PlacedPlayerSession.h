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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_PLACEDPLAYERSESSION_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_PLACEDPLAYERSESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 部署的玩家游戏会话
                */
                class PlacedPlayerSession : public AbstractModel
                {
                public:
                    PlacedPlayerSession();
                    ~PlacedPlayerSession() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取玩家Id
                     * @return PlayerId 玩家Id
                     * 
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置玩家Id
                     * @param _playerId 玩家Id
                     * 
                     */
                    void SetPlayerId(const std::string& _playerId);

                    /**
                     * 判断参数 PlayerId 是否已赋值
                     * @return PlayerId 是否已赋值
                     * 
                     */
                    bool PlayerIdHasBeenSet() const;

                    /**
                     * 获取玩家会话Id
                     * @return PlayerSessionId 玩家会话Id
                     * 
                     */
                    std::string GetPlayerSessionId() const;

                    /**
                     * 设置玩家会话Id
                     * @param _playerSessionId 玩家会话Id
                     * 
                     */
                    void SetPlayerSessionId(const std::string& _playerSessionId);

                    /**
                     * 判断参数 PlayerSessionId 是否已赋值
                     * @return PlayerSessionId 是否已赋值
                     * 
                     */
                    bool PlayerSessionIdHasBeenSet() const;

                private:

                    /**
                     * 玩家Id
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                    /**
                     * 玩家会话Id
                     */
                    std::string m_playerSessionId;
                    bool m_playerSessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_PLACEDPLAYERSESSION_H_
