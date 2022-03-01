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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_UPDATESCANROOMSREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_UPDATESCANROOMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * UpdateScanRooms请求参数结构体
                */
                class UpdateScanRoomsRequest : public AbstractModel
                {
                public:
                    UpdateScanRoomsRequest();
                    ~UpdateScanRoomsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return BizId 应用ID
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置应用ID
                     * @param BizId 应用ID
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取字符串房间号，逗号分隔
                     * @return RoomIdString 字符串房间号，逗号分隔
                     */
                    std::string GetRoomIdString() const;

                    /**
                     * 设置字符串房间号，逗号分隔
                     * @param RoomIdString 字符串房间号，逗号分隔
                     */
                    void SetRoomIdString(const std::string& _roomIdString);

                    /**
                     * 判断参数 RoomIdString 是否已赋值
                     * @return RoomIdString 是否已赋值
                     */
                    bool RoomIdStringHasBeenSet() const;

                    /**
                     * 获取正则表达式房间号，["^6.*"]6开头的房间号
                     * @return RoomIdRegex 正则表达式房间号，["^6.*"]6开头的房间号
                     */
                    std::vector<std::string> GetRoomIdRegex() const;

                    /**
                     * 设置正则表达式房间号，["^6.*"]6开头的房间号
                     * @param RoomIdRegex 正则表达式房间号，["^6.*"]6开头的房间号
                     */
                    void SetRoomIdRegex(const std::vector<std::string>& _roomIdRegex);

                    /**
                     * 判断参数 RoomIdRegex 是否已赋值
                     * @return RoomIdRegex 是否已赋值
                     */
                    bool RoomIdRegexHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 字符串房间号，逗号分隔
                     */
                    std::string m_roomIdString;
                    bool m_roomIdStringHasBeenSet;

                    /**
                     * 正则表达式房间号，["^6.*"]6开头的房间号
                     */
                    std::vector<std::string> m_roomIdRegex;
                    bool m_roomIdRegexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_UPDATESCANROOMSREQUEST_H_
