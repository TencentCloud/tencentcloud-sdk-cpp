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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_REMOVEUSERBYROOMIDFROMTRTCREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_REMOVEUSERBYROOMIDFROMTRTCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * RemoveUserByRoomIdFromTRTC请求参数结构体
                */
                class RemoveUserByRoomIdFromTRTCRequest : public AbstractModel
                {
                public:
                    RemoveUserByRoomIdFromTRTCRequest();
                    ~RemoveUserByRoomIdFromTRTCRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取房间id
                     * @return RoomId 房间id
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间id
                     * @param _roomId 房间id
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
                     * 获取用户名称数组，数组元素不可重复，最长不超过 10 个。
                     * @return TRTCUserIds 用户名称数组，数组元素不可重复，最长不超过 10 个。
                     * 
                     */
                    std::vector<std::string> GetTRTCUserIds() const;

                    /**
                     * 设置用户名称数组，数组元素不可重复，最长不超过 10 个。
                     * @param _tRTCUserIds 用户名称数组，数组元素不可重复，最长不超过 10 个。
                     * 
                     */
                    void SetTRTCUserIds(const std::vector<std::string>& _tRTCUserIds);

                    /**
                     * 判断参数 TRTCUserIds 是否已赋值
                     * @return TRTCUserIds 是否已赋值
                     * 
                     */
                    bool TRTCUserIdsHasBeenSet() const;

                private:

                    /**
                     * 房间id
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 用户名称数组，数组元素不可重复，最长不超过 10 个。
                     */
                    std::vector<std::string> m_tRTCUserIds;
                    bool m_tRTCUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_REMOVEUSERBYROOMIDFROMTRTCREQUEST_H_
