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

#ifndef TENCENTCLOUD_MGOBE_V20201014_MODEL_CHANGEROOMPLAYERSTATUSRESPONSE_H_
#define TENCENTCLOUD_MGOBE_V20201014_MODEL_CHANGEROOMPLAYERSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mgobe/v20201014/model/Room.h>


namespace TencentCloud
{
    namespace Mgobe
    {
        namespace V20201014
        {
            namespace Model
            {
                /**
                * ChangeRoomPlayerStatus返回参数结构体
                */
                class ChangeRoomPlayerStatusResponse : public AbstractModel
                {
                public:
                    ChangeRoomPlayerStatusResponse();
                    ~ChangeRoomPlayerStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取房间信息
                     * @return Room 房间信息
                     * 
                     */
                    Room GetRoom() const;

                    /**
                     * 判断参数 Room 是否已赋值
                     * @return Room 是否已赋值
                     * 
                     */
                    bool RoomHasBeenSet() const;

                private:

                    /**
                     * 房间信息
                     */
                    Room m_room;
                    bool m_roomHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MGOBE_V20201014_MODEL_CHANGEROOMPLAYERSTATUSRESPONSE_H_
