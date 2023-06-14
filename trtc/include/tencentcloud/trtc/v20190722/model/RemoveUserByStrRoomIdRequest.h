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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_REMOVEUSERBYSTRROOMIDREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_REMOVEUSERBYSTRROOMIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * RemoveUserByStrRoomId请求参数结构体
                */
                class RemoveUserByStrRoomIdRequest : public AbstractModel
                {
                public:
                    RemoveUserByStrRoomIdRequest();
                    ~RemoveUserByStrRoomIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TRTC的SDKAppId。
                     * @return SdkAppId TRTC的SDKAppId。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC的SDKAppId。
                     * @param _sdkAppId TRTC的SDKAppId。
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
                     * 获取房间号。
                     * @return RoomId 房间号。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间号。
                     * @param _roomId 房间号。
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
                     * 获取要移出的用户列表，最多10个。
                     * @return UserIds 要移出的用户列表，最多10个。
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置要移出的用户列表，最多10个。
                     * @param _userIds 要移出的用户列表，最多10个。
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                private:

                    /**
                     * TRTC的SDKAppId。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 房间号。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 要移出的用户列表，最多10个。
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_REMOVEUSERBYSTRROOMIDREQUEST_H_
