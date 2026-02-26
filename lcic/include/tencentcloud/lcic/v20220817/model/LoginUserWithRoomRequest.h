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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_LOGINUSERWITHROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_LOGINUSERWITHROOMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * LoginUserWithRoom请求参数结构体
                */
                class LoginUserWithRoomRequest : public AbstractModel
                {
                public:
                    LoginUserWithRoomRequest();
                    ~LoginUserWithRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>注册获取的用户id。</p>
                     * @return UserId <p>注册获取的用户id。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>注册获取的用户id。</p>
                     * @param _userId <p>注册获取的用户id。</p>
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
                     * 获取<p>课堂 ID</p>
                     * @return RoomId <p>课堂 ID</p>
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置<p>课堂 ID</p>
                     * @param _roomId <p>课堂 ID</p>
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                private:

                    /**
                     * <p>注册获取的用户id。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>课堂 ID</p>
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_LOGINUSERWITHROOMREQUEST_H_
