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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETIWROOMDAILYUSAGEREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETIWROOMDAILYUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeTIWRoomDailyUsage请求参数结构体
                */
                class DescribeTIWRoomDailyUsageRequest : public AbstractModel
                {
                public:
                    DescribeTIWRoomDailyUsageRequest();
                    ~DescribeTIWRoomDailyUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取互动白板应用SdkAppId
                     * @return SdkAppId 互动白板应用SdkAppId
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置互动白板应用SdkAppId
                     * @param SdkAppId 互动白板应用SdkAppId
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取需要查询的子产品用量，支持传入以下值
- sp_tiw_board: 互动白板时长，单位为分钟
- sp_tiw_ric: 实时录制时长，单位分钟
                     * @return SubProduct 需要查询的子产品用量，支持传入以下值
- sp_tiw_board: 互动白板时长，单位为分钟
- sp_tiw_ric: 实时录制时长，单位分钟
                     */
                    std::string GetSubProduct() const;

                    /**
                     * 设置需要查询的子产品用量，支持传入以下值
- sp_tiw_board: 互动白板时长，单位为分钟
- sp_tiw_ric: 实时录制时长，单位分钟
                     * @param SubProduct 需要查询的子产品用量，支持传入以下值
- sp_tiw_board: 互动白板时长，单位为分钟
- sp_tiw_ric: 实时录制时长，单位分钟
                     */
                    void SetSubProduct(const std::string& _subProduct);

                    /**
                     * 判断参数 SubProduct 是否已赋值
                     * @return SubProduct 是否已赋值
                     */
                    bool SubProductHasBeenSet() const;

                    /**
                     * 获取开始时间，格式YYYY-MM-DD，查询结果里包括该天数据
                     * @return StartTime 开始时间，格式YYYY-MM-DD，查询结果里包括该天数据
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，格式YYYY-MM-DD，查询结果里包括该天数据
                     * @param StartTime 开始时间，格式YYYY-MM-DD，查询结果里包括该天数据
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，格式YYYY-MM-DD，查询结果里包括该天数据，单次查询统计区间最多不能超过31天。
                     * @return EndTime 结束时间，格式YYYY-MM-DD，查询结果里包括该天数据，单次查询统计区间最多不能超过31天。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，格式YYYY-MM-DD，查询结果里包括该天数据，单次查询统计区间最多不能超过31天。
                     * @param EndTime 结束时间，格式YYYY-MM-DD，查询结果里包括该天数据，单次查询统计区间最多不能超过31天。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取需要查询的房间ID列表，不填默认查询全部房间
                     * @return RoomIDs 需要查询的房间ID列表，不填默认查询全部房间
                     */
                    std::vector<uint64_t> GetRoomIDs() const;

                    /**
                     * 设置需要查询的房间ID列表，不填默认查询全部房间
                     * @param RoomIDs 需要查询的房间ID列表，不填默认查询全部房间
                     */
                    void SetRoomIDs(const std::vector<uint64_t>& _roomIDs);

                    /**
                     * 判断参数 RoomIDs 是否已赋值
                     * @return RoomIDs 是否已赋值
                     */
                    bool RoomIDsHasBeenSet() const;

                    /**
                     * 获取查询偏移量，默认为0
                     * @return Offset 查询偏移量，默认为0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询偏移量，默认为0
                     * @param Offset 查询偏移量，默认为0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每次查询返回条目限制，默认为20
                     * @return Limit 每次查询返回条目限制，默认为20
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每次查询返回条目限制，默认为20
                     * @param Limit 每次查询返回条目限制，默认为20
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 互动白板应用SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 需要查询的子产品用量，支持传入以下值
- sp_tiw_board: 互动白板时长，单位为分钟
- sp_tiw_ric: 实时录制时长，单位分钟
                     */
                    std::string m_subProduct;
                    bool m_subProductHasBeenSet;

                    /**
                     * 开始时间，格式YYYY-MM-DD，查询结果里包括该天数据
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，格式YYYY-MM-DD，查询结果里包括该天数据，单次查询统计区间最多不能超过31天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 需要查询的房间ID列表，不填默认查询全部房间
                     */
                    std::vector<uint64_t> m_roomIDs;
                    bool m_roomIDsHasBeenSet;

                    /**
                     * 查询偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每次查询返回条目限制，默认为20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETIWROOMDAILYUSAGEREQUEST_H_
