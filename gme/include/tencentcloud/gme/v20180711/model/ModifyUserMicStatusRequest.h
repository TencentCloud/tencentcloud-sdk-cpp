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
                     * 获取来自 [腾讯云控制台](https://console.cloud.tencent.com/gamegme) 的 GME 服务提供的 AppID，获取请参考 [语音服务开通指引](https://cloud.tencent.com/document/product/607/10782#.E9.87.8D.E7.82.B9.E5.8F.82.E6.95.B0)。
                     * @return BizId 来自 [腾讯云控制台](https://console.cloud.tencent.com/gamegme) 的 GME 服务提供的 AppID，获取请参考 [语音服务开通指引](https://cloud.tencent.com/document/product/607/10782#.E9.87.8D.E7.82.B9.E5.8F.82.E6.95.B0)。
                     * 
                     */
                    int64_t GetBizId() const;

                    /**
                     * 设置来自 [腾讯云控制台](https://console.cloud.tencent.com/gamegme) 的 GME 服务提供的 AppID，获取请参考 [语音服务开通指引](https://cloud.tencent.com/document/product/607/10782#.E9.87.8D.E7.82.B9.E5.8F.82.E6.95.B0)。
                     * @param _bizId 来自 [腾讯云控制台](https://console.cloud.tencent.com/gamegme) 的 GME 服务提供的 AppID，获取请参考 [语音服务开通指引](https://cloud.tencent.com/document/product/607/10782#.E9.87.8D.E7.82.B9.E5.8F.82.E6.95.B0)。
                     * 
                     */
                    void SetBizId(const int64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取实时语音房间号。
                     * @return RoomId 实时语音房间号。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置实时语音房间号。
                     * @param _roomId 实时语音房间号。
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取需要操作的房间内用户以及该用户的目标麦克风状态。
                     * @return Users 需要操作的房间内用户以及该用户的目标麦克风状态。
                     * 
                     */
                    std::vector<UserMicStatus> GetUsers() const;

                    /**
                     * 设置需要操作的房间内用户以及该用户的目标麦克风状态。
                     * @param _users 需要操作的房间内用户以及该用户的目标麦克风状态。
                     * 
                     */
                    void SetUsers(const std::vector<UserMicStatus>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                private:

                    /**
                     * 来自 [腾讯云控制台](https://console.cloud.tencent.com/gamegme) 的 GME 服务提供的 AppID，获取请参考 [语音服务开通指引](https://cloud.tencent.com/document/product/607/10782#.E9.87.8D.E7.82.B9.E5.8F.82.E6.95.B0)。
                     */
                    int64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 实时语音房间号。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 需要操作的房间内用户以及该用户的目标麦克风状态。
                     */
                    std::vector<UserMicStatus> m_users;
                    bool m_usersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_MODIFYUSERMICSTATUSREQUEST_H_
