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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVEAVATARROOMREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVEAVATARROOMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DeleteLiveAvatarRoom请求参数结构体
                */
                class DeleteLiveAvatarRoomRequest : public AbstractModel
                {
                public:
                    DeleteLiveAvatarRoomRequest();
                    ~DeleteLiveAvatarRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取直播间ID。
                     * @return RoomId 直播间ID。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置直播间ID。
                     * @param _roomId 直播间ID。
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                private:

                    /**
                     * 直播间ID。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVEAVATARROOMREQUEST_H_
