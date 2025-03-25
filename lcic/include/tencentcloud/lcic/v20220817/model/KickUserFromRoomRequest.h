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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_KICKUSERFROMROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_KICKUSERFROMROOMREQUEST_H_

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
                * KickUserFromRoom请求参数结构体
                */
                class KickUserFromRoomRequest : public AbstractModel
                {
                public:
                    KickUserFromRoomRequest();
                    ~KickUserFromRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取课堂Id。
                     * @return RoomId 课堂Id。
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置课堂Id。
                     * @param _roomId 课堂Id。
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取低代码平台的SdkAppId。
                     * @return SdkAppId 低代码平台的SdkAppId。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码平台的SdkAppId。
                     * @param _sdkAppId 低代码平台的SdkAppId。
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取需要踢出成员Id
                     * @return UserId 需要踢出成员Id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置需要踢出成员Id
                     * @param _userId 需要踢出成员Id
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
                     * 获取踢出类型：
1：临时踢出，可以使用Duration参数指定污点时间，污点时间间隔内用户无法进入房间。
2：永久踢出
                     * @return KickType 踢出类型：
1：临时踢出，可以使用Duration参数指定污点时间，污点时间间隔内用户无法进入房间。
2：永久踢出
                     * 
                     */
                    uint64_t GetKickType() const;

                    /**
                     * 设置踢出类型：
1：临时踢出，可以使用Duration参数指定污点时间，污点时间间隔内用户无法进入房间。
2：永久踢出
                     * @param _kickType 踢出类型：
1：临时踢出，可以使用Duration参数指定污点时间，污点时间间隔内用户无法进入房间。
2：永久踢出
                     * 
                     */
                    void SetKickType(const uint64_t& _kickType);

                    /**
                     * 判断参数 KickType 是否已赋值
                     * @return KickType 是否已赋值
                     * 
                     */
                    bool KickTypeHasBeenSet() const;

                    /**
                     * 获取污点时间(单位秒)，KickType = 1时生效，默认为0
                     * @return Duration 污点时间(单位秒)，KickType = 1时生效，默认为0
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置污点时间(单位秒)，KickType = 1时生效，默认为0
                     * @param _duration 污点时间(单位秒)，KickType = 1时生效，默认为0
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * 课堂Id。
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 低代码平台的SdkAppId。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 需要踢出成员Id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 踢出类型：
1：临时踢出，可以使用Duration参数指定污点时间，污点时间间隔内用户无法进入房间。
2：永久踢出
                     */
                    uint64_t m_kickType;
                    bool m_kickTypeHasBeenSet;

                    /**
                     * 污点时间(单位秒)，KickType = 1时生效，默认为0
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_KICKUSERFROMROOMREQUEST_H_
