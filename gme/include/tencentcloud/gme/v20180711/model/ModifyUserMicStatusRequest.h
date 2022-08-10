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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_MODIFYUSERMICSTATUSREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_MODIFYUSERMICSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/UserMicStatus.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * ModifyUserMicStatus请求参数结构体
                */
                class ModifyUserMicStatusRequest : public AbstractModel
                {
                public:
                    ModifyUserMicStatusRequest();
                    ~ModifyUserMicStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return BizId 应用ID
                     */
                    int64_t GetBizId() const;

                    /**
                     * 设置应用ID
                     * @param BizId 应用ID
                     */
                    void SetBizId(const int64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取房间ID
                     * @return RoomId 房间ID
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间ID
                     * @param RoomId 房间ID
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取用户麦克风状态，数组长度不超过20
                     * @return Users 用户麦克风状态，数组长度不超过20
                     */
                    std::vector<UserMicStatus> GetUsers() const;

                    /**
                     * 设置用户麦克风状态，数组长度不超过20
                     * @param Users 用户麦克风状态，数组长度不超过20
                     */
                    void SetUsers(const std::vector<UserMicStatus>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     */
                    bool UsersHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    int64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 房间ID
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 用户麦克风状态，数组长度不超过20
                     */
                    std::vector<UserMicStatus> m_users;
                    bool m_usersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_MODIFYUSERMICSTATUSREQUEST_H_
