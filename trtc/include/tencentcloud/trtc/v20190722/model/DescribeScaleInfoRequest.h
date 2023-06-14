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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBESCALEINFOREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBESCALEINFOREQUEST_H_

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
                * DescribeScaleInfo请求参数结构体
                */
                class DescribeScaleInfoRequest : public AbstractModel
                {
                public:
                    DescribeScaleInfoRequest();
                    ~DescribeScaleInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户SdkAppId（如：1400xxxxxx）
                     * @return SdkAppId 用户SdkAppId（如：1400xxxxxx）
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置用户SdkAppId（如：1400xxxxxx）
                     * @param _sdkAppId 用户SdkAppId（如：1400xxxxxx）
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间，本地unix时间戳，单位为秒（如：1590065777）
注意：支持查询14天内的数据。
                     * @return StartTime 查询开始时间，本地unix时间戳，单位为秒（如：1590065777）
注意：支持查询14天内的数据。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置查询开始时间，本地unix时间戳，单位为秒（如：1590065777）
注意：支持查询14天内的数据。
                     * @param _startTime 查询开始时间，本地unix时间戳，单位为秒（如：1590065777）
注意：支持查询14天内的数据。
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间，本地unix时间戳，单位为秒（如：1590065877），建议与StartTime间隔时间超过24小时。
注意：按天统计，结束时间大于前一天，否则查询数据为空（如：需查询20号数据，结束时间需晚于20号0点）。
                     * @return EndTime 查询结束时间，本地unix时间戳，单位为秒（如：1590065877），建议与StartTime间隔时间超过24小时。
注意：按天统计，结束时间大于前一天，否则查询数据为空（如：需查询20号数据，结束时间需晚于20号0点）。
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置查询结束时间，本地unix时间戳，单位为秒（如：1590065877），建议与StartTime间隔时间超过24小时。
注意：按天统计，结束时间大于前一天，否则查询数据为空（如：需查询20号数据，结束时间需晚于20号0点）。
                     * @param _endTime 查询结束时间，本地unix时间戳，单位为秒（如：1590065877），建议与StartTime间隔时间超过24小时。
注意：按天统计，结束时间大于前一天，否则查询数据为空（如：需查询20号数据，结束时间需晚于20号0点）。
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 用户SdkAppId（如：1400xxxxxx）
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 查询开始时间，本地unix时间戳，单位为秒（如：1590065777）
注意：支持查询14天内的数据。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，本地unix时间戳，单位为秒（如：1590065877），建议与StartTime间隔时间超过24小时。
注意：按天统计，结束时间大于前一天，否则查询数据为空（如：需查询20号数据，结束时间需晚于20号0点）。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBESCALEINFOREQUEST_H_
