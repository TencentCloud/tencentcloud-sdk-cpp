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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECALLDETAILREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECALLDETAILREQUEST_H_

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
                * DescribeCallDetail请求参数结构体
                */
                class DescribeCallDetailRequest : public AbstractModel
                {
                public:
                    DescribeCallDetailRequest();
                    ~DescribeCallDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通话 ID（唯一标识一次通话）： sdkappid_roomgString（房间号_createTime（房间创建时间，unix时间戳，单位为s）例：1400353843_218695_1590065777。通过 DescribeRoomInformation（查询房间列表）接口获取（链接：https://cloud.tencent.com/document/product/647/44050）
                     * @return CommId 通话 ID（唯一标识一次通话）： sdkappid_roomgString（房间号_createTime（房间创建时间，unix时间戳，单位为s）例：1400353843_218695_1590065777。通过 DescribeRoomInformation（查询房间列表）接口获取（链接：https://cloud.tencent.com/document/product/647/44050）
                     */
                    std::string GetCommId() const;

                    /**
                     * 设置通话 ID（唯一标识一次通话）： sdkappid_roomgString（房间号_createTime（房间创建时间，unix时间戳，单位为s）例：1400353843_218695_1590065777。通过 DescribeRoomInformation（查询房间列表）接口获取（链接：https://cloud.tencent.com/document/product/647/44050）
                     * @param CommId 通话 ID（唯一标识一次通话）： sdkappid_roomgString（房间号_createTime（房间创建时间，unix时间戳，单位为s）例：1400353843_218695_1590065777。通过 DescribeRoomInformation（查询房间列表）接口获取（链接：https://cloud.tencent.com/document/product/647/44050）
                     */
                    void SetCommId(const std::string& _commId);

                    /**
                     * 判断参数 CommId 是否已赋值
                     * @return CommId 是否已赋值
                     */
                    bool CommIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间，14天内。本地unix时间戳（1588031999s），查询实时数据时，查询起止时间不超过1个小时。
                     * @return StartTime 查询开始时间，14天内。本地unix时间戳（1588031999s），查询实时数据时，查询起止时间不超过1个小时。
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置查询开始时间，14天内。本地unix时间戳（1588031999s），查询实时数据时，查询起止时间不超过1个小时。
                     * @param StartTime 查询开始时间，14天内。本地unix时间戳（1588031999s），查询实时数据时，查询起止时间不超过1个小时。
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
                     * 获取用户SDKAppID（1400188366）
                     * @return SdkAppId 用户SDKAppID（1400188366）
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置用户SDKAppID（1400188366）
                     * @param SdkAppId 用户SDKAppID（1400188366）
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取需查询的用户数组，不填默认返回6个用户,最多可填6个用户
                     * @return UserIds 需查询的用户数组，不填默认返回6个用户,最多可填6个用户
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置需查询的用户数组，不填默认返回6个用户,最多可填6个用户
                     * @param UserIds 需查询的用户数组，不填默认返回6个用户,最多可填6个用户
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取需查询的指标，不填则只返回用户列表，填all则返回所有指标。
appCpu：APP CPU使用率；
sysCpu：系统 CPU使用率；
aBit：上/下行音频码率；
aBlock：音频卡顿时长；
bigvBit：上/下行视频码率；
bigvCapFps：视频采集帧率；
bigvEncFps：视频发送帧率；
bigvDecFps：渲染帧率；
bigvBlock：视频卡顿时长；
aLoss：上/下行音频丢包；
bigvLoss：上/下行视频丢包；
bigvWidth：上/下行分辨率宽；
bigvHeight：上/下行分辨率高
                     * @return DataType 需查询的指标，不填则只返回用户列表，填all则返回所有指标。
appCpu：APP CPU使用率；
sysCpu：系统 CPU使用率；
aBit：上/下行音频码率；
aBlock：音频卡顿时长；
bigvBit：上/下行视频码率；
bigvCapFps：视频采集帧率；
bigvEncFps：视频发送帧率；
bigvDecFps：渲染帧率；
bigvBlock：视频卡顿时长；
aLoss：上/下行音频丢包；
bigvLoss：上/下行视频丢包；
bigvWidth：上/下行分辨率宽；
bigvHeight：上/下行分辨率高
                     */
                    std::vector<std::string> GetDataType() const;

                    /**
                     * 设置需查询的指标，不填则只返回用户列表，填all则返回所有指标。
appCpu：APP CPU使用率；
sysCpu：系统 CPU使用率；
aBit：上/下行音频码率；
aBlock：音频卡顿时长；
bigvBit：上/下行视频码率；
bigvCapFps：视频采集帧率；
bigvEncFps：视频发送帧率；
bigvDecFps：渲染帧率；
bigvBlock：视频卡顿时长；
aLoss：上/下行音频丢包；
bigvLoss：上/下行视频丢包；
bigvWidth：上/下行分辨率宽；
bigvHeight：上/下行分辨率高
                     * @param DataType 需查询的指标，不填则只返回用户列表，填all则返回所有指标。
appCpu：APP CPU使用率；
sysCpu：系统 CPU使用率；
aBit：上/下行音频码率；
aBlock：音频卡顿时长；
bigvBit：上/下行视频码率；
bigvCapFps：视频采集帧率；
bigvEncFps：视频发送帧率；
bigvDecFps：渲染帧率；
bigvBlock：视频卡顿时长；
aLoss：上/下行音频丢包；
bigvLoss：上/下行视频丢包；
bigvWidth：上/下行分辨率宽；
bigvHeight：上/下行分辨率高
                     */
                    void SetDataType(const std::vector<std::string>& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取设置分页index，从0开始（PageNumber和PageSize 其中一个不填均默认返回6条数据）
                     * @return PageNumber 设置分页index，从0开始（PageNumber和PageSize 其中一个不填均默认返回6条数据）
                     */
                    std::string GetPageNumber() const;

                    /**
                     * 设置设置分页index，从0开始（PageNumber和PageSize 其中一个不填均默认返回6条数据）
                     * @param PageNumber 设置分页index，从0开始（PageNumber和PageSize 其中一个不填均默认返回6条数据）
                     */
                    void SetPageNumber(const std::string& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取设置分页大小（PageNumber和PageSize 其中一个不填均默认返回6条数据,DataType，UserIds不为null，PageSize最大不超过6，DataType，UserIds为null，PageSize最大不超过100）
                     * @return PageSize 设置分页大小（PageNumber和PageSize 其中一个不填均默认返回6条数据,DataType，UserIds不为null，PageSize最大不超过6，DataType，UserIds为null，PageSize最大不超过100）
                     */
                    std::string GetPageSize() const;

                    /**
                     * 设置设置分页大小（PageNumber和PageSize 其中一个不填均默认返回6条数据,DataType，UserIds不为null，PageSize最大不超过6，DataType，UserIds为null，PageSize最大不超过100）
                     * @param PageSize 设置分页大小（PageNumber和PageSize 其中一个不填均默认返回6条数据,DataType，UserIds不为null，PageSize最大不超过6，DataType，UserIds为null，PageSize最大不超过100）
                     */
                    void SetPageSize(const std::string& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 通话 ID（唯一标识一次通话）： sdkappid_roomgString（房间号_createTime（房间创建时间，unix时间戳，单位为s）例：1400353843_218695_1590065777。通过 DescribeRoomInformation（查询房间列表）接口获取（链接：https://cloud.tencent.com/document/product/647/44050）
                     */
                    std::string m_commId;
                    bool m_commIdHasBeenSet;

                    /**
                     * 查询开始时间，14天内。本地unix时间戳（1588031999s），查询实时数据时，查询起止时间不超过1个小时。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，本地unix时间戳（1588031999s）
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 用户SDKAppID（1400188366）
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 需查询的用户数组，不填默认返回6个用户,最多可填6个用户
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * 需查询的指标，不填则只返回用户列表，填all则返回所有指标。
appCpu：APP CPU使用率；
sysCpu：系统 CPU使用率；
aBit：上/下行音频码率；
aBlock：音频卡顿时长；
bigvBit：上/下行视频码率；
bigvCapFps：视频采集帧率；
bigvEncFps：视频发送帧率；
bigvDecFps：渲染帧率；
bigvBlock：视频卡顿时长；
aLoss：上/下行音频丢包；
bigvLoss：上/下行视频丢包；
bigvWidth：上/下行分辨率宽；
bigvHeight：上/下行分辨率高
                     */
                    std::vector<std::string> m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * 设置分页index，从0开始（PageNumber和PageSize 其中一个不填均默认返回6条数据）
                     */
                    std::string m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 设置分页大小（PageNumber和PageSize 其中一个不填均默认返回6条数据,DataType，UserIds不为null，PageSize最大不超过6，DataType，UserIds为null，PageSize最大不超过100）
                     */
                    std::string m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECALLDETAILREQUEST_H_
