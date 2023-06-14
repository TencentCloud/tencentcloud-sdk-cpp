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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_TRYLOCKWORKERREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_TRYLOCKWORKERREQUEST_H_

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
                * TrylockWorker请求参数结构体
                */
                class TrylockWorkerRequest : public AbstractModel
                {
                public:
                    TrylockWorkerRequest();
                    ~TrylockWorkerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取唯一用户身份标识，由业务方自定义，平台不予理解。（可根据业务需要决定使用用户的唯一身份标识或是使用时间戳随机生成；在用户重连时应保持UserId不变）
                     * @return UserId 唯一用户身份标识，由业务方自定义，平台不予理解。（可根据业务需要决定使用用户的唯一身份标识或是使用时间戳随机生成；在用户重连时应保持UserId不变）
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置唯一用户身份标识，由业务方自定义，平台不予理解。（可根据业务需要决定使用用户的唯一身份标识或是使用时间戳随机生成；在用户重连时应保持UserId不变）
                     * @param _userId 唯一用户身份标识，由业务方自定义，平台不予理解。（可根据业务需要决定使用用户的唯一身份标识或是使用时间戳随机生成；在用户重连时应保持UserId不变）
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
                     * 获取游戏ID
                     * @return GameId 游戏ID
                     * 
                     */
                    std::string GetGameId() const;

                    /**
                     * 设置游戏ID
                     * @param _gameId 游戏ID
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
                     * 获取游戏区域，ap-guangzhou、ap-shanghai、ap-beijing等，如果不为空，优先按照该区域进行调度分配机器
                     * @return GameRegion 游戏区域，ap-guangzhou、ap-shanghai、ap-beijing等，如果不为空，优先按照该区域进行调度分配机器
                     * 
                     */
                    std::string GetGameRegion() const;

                    /**
                     * 设置游戏区域，ap-guangzhou、ap-shanghai、ap-beijing等，如果不为空，优先按照该区域进行调度分配机器
                     * @param _gameRegion 游戏区域，ap-guangzhou、ap-shanghai、ap-beijing等，如果不为空，优先按照该区域进行调度分配机器
                     * 
                     */
                    void SetGameRegion(const std::string& _gameRegion);

                    /**
                     * 判断参数 GameRegion 是否已赋值
                     * @return GameRegion 是否已赋值
                     * 
                     */
                    bool GameRegionHasBeenSet() const;

                    /**
                     * 获取【废弃】资源池编号
                     * @return SetNo 【废弃】资源池编号
                     * 
                     */
                    uint64_t GetSetNo() const;

                    /**
                     * 设置【废弃】资源池编号
                     * @param _setNo 【废弃】资源池编号
                     * 
                     */
                    void SetSetNo(const uint64_t& _setNo);

                    /**
                     * 判断参数 SetNo 是否已赋值
                     * @return SetNo 是否已赋值
                     * 
                     */
                    bool SetNoHasBeenSet() const;

                    /**
                     * 获取【必选】用户IP，用户客户端的公网IP，用于就近调度，不填将严重影响用户体验
                     * @return UserIp 【必选】用户IP，用户客户端的公网IP，用于就近调度，不填将严重影响用户体验
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置【必选】用户IP，用户客户端的公网IP，用于就近调度，不填将严重影响用户体验
                     * @param _userIp 【必选】用户IP，用户客户端的公网IP，用于就近调度，不填将严重影响用户体验
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取分组ID
                     * @return GroupId 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param _groupId 分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 唯一用户身份标识，由业务方自定义，平台不予理解。（可根据业务需要决定使用用户的唯一身份标识或是使用时间戳随机生成；在用户重连时应保持UserId不变）
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 游戏ID
                     */
                    std::string m_gameId;
                    bool m_gameIdHasBeenSet;

                    /**
                     * 游戏区域，ap-guangzhou、ap-shanghai、ap-beijing等，如果不为空，优先按照该区域进行调度分配机器
                     */
                    std::string m_gameRegion;
                    bool m_gameRegionHasBeenSet;

                    /**
                     * 【废弃】资源池编号
                     */
                    uint64_t m_setNo;
                    bool m_setNoHasBeenSet;

                    /**
                     * 【必选】用户IP，用户客户端的公网IP，用于就近调度，不填将严重影响用户体验
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_TRYLOCKWORKERREQUEST_H_
