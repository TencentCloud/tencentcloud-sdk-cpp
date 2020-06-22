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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_ENTERQUEUEREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_ENTERQUEUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * EnterQueue请求参数结构体
                */
                class EnterQueueRequest : public AbstractModel
                {
                public:
                    EnterQueueRequest();
                    ~EnterQueueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取true：第一次请求排队 false：已在排队中，查询当前排名
                     * @return First true：第一次请求排队 false：已在排队中，查询当前排名
                     */
                    bool GetFirst() const;

                    /**
                     * 设置true：第一次请求排队 false：已在排队中，查询当前排名
                     * @param First true：第一次请求排队 false：已在排队中，查询当前排名
                     */
                    void SetFirst(const bool& _first);

                    /**
                     * 判断参数 First 是否已赋值
                     * @return First 是否已赋值
                     */
                    bool FirstHasBeenSet() const;

                    /**
                     * 获取游戏ID
                     * @return GameId 游戏ID
                     */
                    std::string GetGameId() const;

                    /**
                     * 设置游戏ID
                     * @param GameId 游戏ID
                     */
                    void SetGameId(const std::string& _gameId);

                    /**
                     * 判断参数 GameId 是否已赋值
                     * @return GameId 是否已赋值
                     */
                    bool GameIdHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param UserId 用户ID
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取资源池编号
                     * @return SetNumber 资源池编号
                     */
                    uint64_t GetSetNumber() const;

                    /**
                     * 设置资源池编号
                     * @param SetNumber 资源池编号
                     */
                    void SetSetNumber(const uint64_t& _setNumber);

                    /**
                     * 判断参数 SetNumber 是否已赋值
                     * @return SetNumber 是否已赋值
                     */
                    bool SetNumberHasBeenSet() const;

                    /**
                     * 获取游戏用户IP，用于就近调度，例如125.127.178.228
                     * @return UserIp 游戏用户IP，用于就近调度，例如125.127.178.228
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置游戏用户IP，用于就近调度，例如125.127.178.228
                     * @param UserIp 游戏用户IP，用于就近调度，例如125.127.178.228
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     */
                    bool UserIpHasBeenSet() const;

                private:

                    /**
                     * true：第一次请求排队 false：已在排队中，查询当前排名
                     */
                    bool m_first;
                    bool m_firstHasBeenSet;

                    /**
                     * 游戏ID
                     */
                    std::string m_gameId;
                    bool m_gameIdHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 资源池编号
                     */
                    uint64_t m_setNumber;
                    bool m_setNumberHasBeenSet;

                    /**
                     * 游戏用户IP，用于就近调度，例如125.127.178.228
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_ENTERQUEUEREQUEST_H_
