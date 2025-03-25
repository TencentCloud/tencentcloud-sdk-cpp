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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DELETEROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DELETEROOMREQUEST_H_

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
                * DeleteRoom请求参数结构体
                */
                class DeleteRoomRequest : public AbstractModel
                {
                public:
                    DeleteRoomRequest();
                    ~DeleteRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取课堂ID。
                     * @return RoomId 课堂ID。
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置课堂ID。
                     * @param _roomId 课堂ID。
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
                     * 课堂ID。
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DELETEROOMREQUEST_H_
