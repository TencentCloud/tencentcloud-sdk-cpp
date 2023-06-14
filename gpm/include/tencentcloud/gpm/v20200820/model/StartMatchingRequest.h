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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_STARTMATCHINGREQUEST_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_STARTMATCHINGREQUEST_H_

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
                * StartMatching请求参数结构体
                */
                class StartMatchingRequest : public AbstractModel
                {
                public:
                    StartMatchingRequest();
                    ~StartMatchingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取匹配 Code。
                     * @return MatchCode 匹配 Code。
                     * 
                     */
                    std::string GetMatchCode() const;

                    /**
                     * 设置匹配 Code。
                     * @param _matchCode 匹配 Code。
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
                     * 获取玩家信息 最多 200 条。
                     * @return Players 玩家信息 最多 200 条。
                     * 
                     */
                    std::vector<Player> GetPlayers() const;

                    /**
                     * 设置玩家信息 最多 200 条。
                     * @param _players 玩家信息 最多 200 条。
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
                     * 获取匹配票据 ID 默认空字符串，为空则由 GPM 自动生成 长度 128，只能包含数字、字母、. 和 -
                     * @return MatchTicketId 匹配票据 ID 默认空字符串，为空则由 GPM 自动生成 长度 128，只能包含数字、字母、. 和 -
                     * 
                     */
                    std::string GetMatchTicketId() const;

                    /**
                     * 设置匹配票据 ID 默认空字符串，为空则由 GPM 自动生成 长度 128，只能包含数字、字母、. 和 -
                     * @param _matchTicketId 匹配票据 ID 默认空字符串，为空则由 GPM 自动生成 长度 128，只能包含数字、字母、. 和 -
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
                     * 匹配 Code。
                     */
                    std::string m_matchCode;
                    bool m_matchCodeHasBeenSet;

                    /**
                     * 玩家信息 最多 200 条。
                     */
                    std::vector<Player> m_players;
                    bool m_playersHasBeenSet;

                    /**
                     * 匹配票据 ID 默认空字符串，为空则由 GPM 自动生成 长度 128，只能包含数字、字母、. 和 -
                     */
                    std::string m_matchTicketId;
                    bool m_matchTicketIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_STARTMATCHINGREQUEST_H_
