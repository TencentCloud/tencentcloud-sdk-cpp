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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARROOMSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARROOMSREQUEST_H_

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
                * DescribeLiveAvatarRooms请求参数结构体
                */
                class DescribeLiveAvatarRoomsRequest : public AbstractModel
                {
                public:
                    DescribeLiveAvatarRoomsRequest();
                    ~DescribeLiveAvatarRoomsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数字人直播间 ID。
                     * @return RoomId 数字人直播间 ID。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置数字人直播间 ID。
                     * @param _roomId 数字人直播间 ID。
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
                     * 获取数字人直播间名称。
                     * @return Name 数字人直播间名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数字人直播间名称。
                     * @param _name 数字人直播间名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取分页查询的页数。
                     * @return PageIndex 分页查询的页数。
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置分页查询的页数。
                     * @param _pageIndex 分页查询的页数。
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取分页查询的每页个数。
                     * @return PageSize 分页查询的每页个数。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页查询的每页个数。
                     * @param _pageSize 分页查询的每页个数。
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 数字人直播间 ID。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 数字人直播间名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分页查询的页数。
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 分页查询的每页个数。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARROOMSREQUEST_H_
