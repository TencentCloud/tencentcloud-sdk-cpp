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

#ifndef TENCENTCLOUD_MGOBE_V20190929_MODEL_DISMISSROOMREQUEST_H_
#define TENCENTCLOUD_MGOBE_V20190929_MODEL_DISMISSROOMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mgobe
    {
        namespace V20190929
        {
            namespace Model
            {
                /**
                * DismissRoom请求参数结构体
                */
                class DismissRoomRequest : public AbstractModel
                {
                public:
                    DismissRoomRequest();
                    ~DismissRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表示游戏资源唯一 ID, 由后台自动分配, 无法修改。
                     * @return GameId 表示游戏资源唯一 ID, 由后台自动分配, 无法修改。
                     * 
                     */
                    std::string GetGameId() const;

                    /**
                     * 设置表示游戏资源唯一 ID, 由后台自动分配, 无法修改。
                     * @param _gameId 表示游戏资源唯一 ID, 由后台自动分配, 无法修改。
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
                     * 获取表示游戏房间唯一ID。
                     * @return RoomId 表示游戏房间唯一ID。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置表示游戏房间唯一ID。
                     * @param _roomId 表示游戏房间唯一ID。
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
                     * 表示游戏资源唯一 ID, 由后台自动分配, 无法修改。
                     */
                    std::string m_gameId;
                    bool m_gameIdHasBeenSet;

                    /**
                     * 表示游戏房间唯一ID。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MGOBE_V20190929_MODEL_DISMISSROOMREQUEST_H_
