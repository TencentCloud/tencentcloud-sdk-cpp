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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEROOMINFORMATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEROOMINFORMATIONREQUEST_H_

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
                * DescribeRoomInformation请求参数结构体
                */
                class DescribeRoomInformationRequest : public AbstractModel
                {
                public:
                    DescribeRoomInformationRequest();
                    ~DescribeRoomInformationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户sdkappid
                     * @return SdkAppId 用户sdkappid
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置用户sdkappid
                     * @param SdkAppId 用户sdkappid
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间，14天内。本地unix时间戳（1588031999s）
                     * @return StartTime 查询开始时间，14天内。本地unix时间戳（1588031999s）
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置查询开始时间，14天内。本地unix时间戳（1588031999s）
                     * @param StartTime 查询开始时间，14天内。本地unix时间戳（1588031999s）
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间，本地unix时间戳（1588031999s）
                     * @return EndTime 查询结束时间，本地unix时间戳（1588031999s）
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置查询结束时间，本地unix时间戳（1588031999s）
                     * @param EndTime 查询结束时间，本地unix时间戳（1588031999s）
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取字符串房间号
                     * @return RoomId 字符串房间号
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置字符串房间号
                     * @param RoomId 字符串房间号
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取分页index，从0开始（PageNumber和PageSize 其中一个不填均默认返回10条数据）
                     * @return PageNumber 分页index，从0开始（PageNumber和PageSize 其中一个不填均默认返回10条数据）
                     */
                    std::string GetPageNumber() const;

                    /**
                     * 设置分页index，从0开始（PageNumber和PageSize 其中一个不填均默认返回10条数据）
                     * @param PageNumber 分页index，从0开始（PageNumber和PageSize 其中一个不填均默认返回10条数据）
                     */
                    void SetPageNumber(const std::string& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取分页大小（PageNumber和PageSize 其中一个不填均默认返回10条数据,最大不超过100）
                     * @return PageSize 分页大小（PageNumber和PageSize 其中一个不填均默认返回10条数据,最大不超过100）
                     */
                    std::string GetPageSize() const;

                    /**
                     * 设置分页大小（PageNumber和PageSize 其中一个不填均默认返回10条数据,最大不超过100）
                     * @param PageSize 分页大小（PageNumber和PageSize 其中一个不填均默认返回10条数据,最大不超过100）
                     */
                    void SetPageSize(const std::string& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 用户sdkappid
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 查询开始时间，14天内。本地unix时间戳（1588031999s）
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，本地unix时间戳（1588031999s）
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 字符串房间号
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 分页index，从0开始（PageNumber和PageSize 其中一个不填均默认返回10条数据）
                     */
                    std::string m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小（PageNumber和PageSize 其中一个不填均默认返回10条数据,最大不超过100）
                     */
                    std::string m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEROOMINFORMATIONREQUEST_H_
