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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_STARTMATCHINGBACKFILLREQUEST_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_STARTMATCHINGBACKFILLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/Player.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * StartMatchingBackfill请求参数结构体
                */
                class StartMatchingBackfillRequest : public AbstractModel
                {
                public:
                    StartMatchingBackfillRequest();
                    ~StartMatchingBackfillRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取匹配code
                     * @return MatchCode 匹配code
                     * 
                     */
                    std::string GetMatchCode() const;

                    /**
                     * 设置匹配code
                     * @param _matchCode 匹配code
                     * 
                     */
                    void SetMatchCode(const std::string& _matchCode);

                    /**
                     * 判断参数 MatchCode 是否已赋值
                     * @return MatchCode 是否已赋值
                     * 
                     */
                    bool MatchCodeHasBeenSet() const;

                    /**
                     * 获取玩家信息
                     * @return Players 玩家信息
                     * 
                     */
                    std::vector<Player> GetPlayers() const;

                    /**
                     * 设置玩家信息
                     * @param _players 玩家信息
                     * 
                     */
                    void SetPlayers(const std::vector<Player>& _players);

                    /**
                     * 判断参数 Players 是否已赋值
                     * @return Players 是否已赋值
                     * 
                     */
                    bool PlayersHasBeenSet() const;

                    /**
                     * 获取游戏服务器回话 ID [1-256] 个ASCII 字符
                     * @return GameServerSessionId 游戏服务器回话 ID [1-256] 个ASCII 字符
                     * 
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置游戏服务器回话 ID [1-256] 个ASCII 字符
                     * @param _gameServerSessionId 游戏服务器回话 ID [1-256] 个ASCII 字符
                     * 
                     */
                    void SetGameServerSessionId(const std::string& _gameServerSessionId);

                    /**
                     * 判断参数 GameServerSessionId 是否已赋值
                     * @return GameServerSessionId 是否已赋值
                     * 
                     */
                    bool GameServerSessionIdHasBeenSet() const;

                    /**
                     * 获取匹配票据 Id 默认 "" 为空则由 GPM 自动生成 长度 [1, 128]
                     * @return MatchTicketId 匹配票据 Id 默认 "" 为空则由 GPM 自动生成 长度 [1, 128]
                     * 
                     */
                    std::string GetMatchTicketId() const;

                    /**
                     * 设置匹配票据 Id 默认 "" 为空则由 GPM 自动生成 长度 [1, 128]
                     * @param _matchTicketId 匹配票据 Id 默认 "" 为空则由 GPM 自动生成 长度 [1, 128]
                     * 
                     */
                    void SetMatchTicketId(const std::string& _matchTicketId);

                    /**
                     * 判断参数 MatchTicketId 是否已赋值
                     * @return MatchTicketId 是否已赋值
                     * 
                     */
                    bool MatchTicketIdHasBeenSet() const;

                private:

                    /**
                     * 匹配code
                     */
                    std::string m_matchCode;
                    bool m_matchCodeHasBeenSet;

                    /**
                     * 玩家信息
                     */
                    std::vector<Player> m_players;
                    bool m_playersHasBeenSet;

                    /**
                     * 游戏服务器回话 ID [1-256] 个ASCII 字符
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * 匹配票据 Id 默认 "" 为空则由 GPM 自动生成 长度 [1, 128]
                     */
                    std::string m_matchTicketId;
                    bool m_matchTicketIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_STARTMATCHINGBACKFILLREQUEST_H_
