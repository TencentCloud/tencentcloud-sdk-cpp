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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEROOMINFORESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEROOMINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/RoomState.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
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
                     * 获取返回当页数据总数
                     * @return Total 返回当页数据总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取房间信息列表
                     * @return RoomList 房间信息列表
                     * 
                     */
                    std::vector<RoomState> GetRoomList() const;

                    /**
                     * 判断参数 RoomList 是否已赋值
                     * @return RoomList 是否已赋值
                     * 
                     */
                    bool RoomListHasBeenSet() const;

                private:

                    /**
                     * 返回当页数据总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 房间信息列表
                     */
                    std::vector<RoomState> m_roomList;
                    bool m_roomListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEROOMINFORESPONSE_H_
