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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEROOMINFORESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEROOMINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/RoomUser.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeRoomInfo返回参数结构体
                */
                class DescribeRoomInfoResponse : public AbstractModel
                {
                public:
                    DescribeRoomInfoResponse();
                    ~DescribeRoomInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取操作结果, 0成功, 非0失败
                     * @return Result 操作结果, 0成功, 非0失败
                     * 
                     */
                    uint64_t GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取房间用户信息
                     * @return RoomUsers 房间用户信息
                     * 
                     */
                    std::vector<RoomUser> GetRoomUsers() const;

                    /**
                     * 判断参数 RoomUsers 是否已赋值
                     * @return RoomUsers 是否已赋值
                     * 
                     */
                    bool RoomUsersHasBeenSet() const;

                private:

                    /**
                     * 操作结果, 0成功, 非0失败
                     */
                    uint64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 房间用户信息
                     */
                    std::vector<RoomUser> m_roomUsers;
                    bool m_roomUsersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEROOMINFORESPONSE_H_
