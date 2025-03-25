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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_UNBLOCKKICKEDUSERREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_UNBLOCKKICKEDUSERREQUEST_H_

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
                * UnblockKickedUser请求参数结构体
                */
                class UnblockKickedUserRequest : public AbstractModel
                {
                public:
                    UnblockKickedUserRequest();
                    ~UnblockKickedUserRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取需要解禁踢出的成员Id。
                     * @return UserId 需要解禁踢出的成员Id。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置需要解禁踢出的成员Id。
                     * @param _userId 需要解禁踢出的成员Id。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 低代码平台的SdkAppId。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 课堂Id。
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 需要解禁踢出的成员Id。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_UNBLOCKKICKEDUSERREQUEST_H_
