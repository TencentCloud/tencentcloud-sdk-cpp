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

#ifndef TENCENTCLOUD_MGOBE_V20201014_MODEL_DESCRIBEPLAYERREQUEST_H_
#define TENCENTCLOUD_MGOBE_V20201014_MODEL_DESCRIBEPLAYERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mgobe
    {
        namespace V20201014
        {
            namespace Model
            {
                /**
                * DescribePlayer请求参数结构体
                */
                class DescribePlayerRequest : public AbstractModel
                {
                public:
                    DescribePlayerRequest();
                    ~DescribePlayerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取游戏资源Id。
                     * @return GameId 游戏资源Id。
                     * 
                     */
                    std::string GetGameId() const;

                    /**
                     * 设置游戏资源Id。
                     * @param _gameId 游戏资源Id。
                     * 
                     */
                    void SetGameId(const std::string& _gameId);

                    /**
                     * 判断参数 GameId 是否已赋值
                     * @return GameId 是否已赋值
                     * 
                     */
                    bool GameIdHasBeenSet() const;

                    /**
                     * 获取玩家OpenId。
                     * @return OpenId 玩家OpenId。
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置玩家OpenId。
                     * @param _openId 玩家OpenId。
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取玩家PlayerId，由后台分配，当OpenId不传的时候，PlayerId必传，传入PlayerId可以查询当前PlayerId的玩家信息，当OpenId传入的时候，PlayerId可不传，按照OpenId查询玩家信息。
                     * @return PlayerId 玩家PlayerId，由后台分配，当OpenId不传的时候，PlayerId必传，传入PlayerId可以查询当前PlayerId的玩家信息，当OpenId传入的时候，PlayerId可不传，按照OpenId查询玩家信息。
                     * 
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置玩家PlayerId，由后台分配，当OpenId不传的时候，PlayerId必传，传入PlayerId可以查询当前PlayerId的玩家信息，当OpenId传入的时候，PlayerId可不传，按照OpenId查询玩家信息。
                     * @param _playerId 玩家PlayerId，由后台分配，当OpenId不传的时候，PlayerId必传，传入PlayerId可以查询当前PlayerId的玩家信息，当OpenId传入的时候，PlayerId可不传，按照OpenId查询玩家信息。
                     * 
                     */
                    void SetPlayerId(const std::string& _playerId);

                    /**
                     * 判断参数 PlayerId 是否已赋值
                     * @return PlayerId 是否已赋值
                     * 
                     */
                    bool PlayerIdHasBeenSet() const;

                private:

                    /**
                     * 游戏资源Id。
                     */
                    std::string m_gameId;
                    bool m_gameIdHasBeenSet;

                    /**
                     * 玩家OpenId。
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 玩家PlayerId，由后台分配，当OpenId不传的时候，PlayerId必传，传入PlayerId可以查询当前PlayerId的玩家信息，当OpenId传入的时候，PlayerId可不传，按照OpenId查询玩家信息。
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MGOBE_V20201014_MODEL_DESCRIBEPLAYERREQUEST_H_
