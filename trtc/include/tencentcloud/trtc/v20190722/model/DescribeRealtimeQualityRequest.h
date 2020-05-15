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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEREALTIMEQUALITYREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEREALTIMEQUALITYREQUEST_H_

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
                * DescribeRealtimeQuality请求参数结构体
                */
                class DescribeRealtimeQualityRequest : public AbstractModel
                {
                public:
                    DescribeRealtimeQualityRequest();
                    ~DescribeRealtimeQualityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询开始时间，24小时内。本地unix时间戳（1588031999s）
                     * @return StartTime 查询开始时间，24小时内。本地unix时间戳（1588031999s）
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置查询开始时间，24小时内。本地unix时间戳（1588031999s）
                     * @param StartTime 查询开始时间，24小时内。本地unix时间戳（1588031999s）
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
                     * 获取查询的数据类型
enterTotalSuccPercent：进房成功率
fistFreamInSecRate：首帧秒开率
blockPercent：视频卡顿率
audioBlockPercent：音频卡顿率
                     * @return DataType 查询的数据类型
enterTotalSuccPercent：进房成功率
fistFreamInSecRate：首帧秒开率
blockPercent：视频卡顿率
audioBlockPercent：音频卡顿率
                     */
                    std::vector<std::string> GetDataType() const;

                    /**
                     * 设置查询的数据类型
enterTotalSuccPercent：进房成功率
fistFreamInSecRate：首帧秒开率
blockPercent：视频卡顿率
audioBlockPercent：音频卡顿率
                     * @param DataType 查询的数据类型
enterTotalSuccPercent：进房成功率
fistFreamInSecRate：首帧秒开率
blockPercent：视频卡顿率
audioBlockPercent：音频卡顿率
                     */
                    void SetDataType(const std::vector<std::string>& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     */
                    bool DataTypeHasBeenSet() const;

                private:

                    /**
                     * 查询开始时间，24小时内。本地unix时间戳（1588031999s）
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，本地unix时间戳（1588031999s）
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 用户sdkappid
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 查询的数据类型
enterTotalSuccPercent：进房成功率
fistFreamInSecRate：首帧秒开率
blockPercent：视频卡顿率
audioBlockPercent：音频卡顿率
                     */
                    std::vector<std::string> m_dataType;
                    bool m_dataTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEREALTIMEQUALITYREQUEST_H_
