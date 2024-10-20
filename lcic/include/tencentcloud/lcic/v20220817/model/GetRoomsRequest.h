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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMSREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMSREQUEST_H_

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
                * GetRooms请求参数结构体
                */
                class GetRoomsRequest : public AbstractModel
                {
                public:
                    GetRoomsRequest();
                    ~GetRoomsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取低代码平台的SdkAppId。

                     * @return SdkAppId 低代码平台的SdkAppId。

                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码平台的SdkAppId。

                     * @param _sdkAppId 低代码平台的SdkAppId。

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
                     * 获取开始时间。默认以当前时间减去半小时作为开始时间。
                     * @return StartTime 开始时间。默认以当前时间减去半小时作为开始时间。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间。默认以当前时间减去半小时作为开始时间。
                     * @param _startTime 开始时间。默认以当前时间减去半小时作为开始时间。
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
                     * 获取结束时间。默认以当前时间加上半小时作为结束时间。
                     * @return EndTime 结束时间。默认以当前时间加上半小时作为结束时间。
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间。默认以当前时间加上半小时作为结束时间。
                     * @param _endTime 结束时间。默认以当前时间加上半小时作为结束时间。
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取分页查询当前页数，从1开始递增
                     * @return Page 分页查询当前页数，从1开始递增
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置分页查询当前页数，从1开始递增
                     * @param _page 分页查询当前页数，从1开始递增
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取默认10条，最大上限为100条
                     * @return Limit 默认10条，最大上限为100条
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置默认10条，最大上限为100条
                     * @param _limit 默认10条，最大上限为100条
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取课堂状态。默认展示所有课堂，0为未开始，1为正在上课，2为已结束，3为已过期
                     * @return Status 课堂状态。默认展示所有课堂，0为未开始，1为正在上课，2为已结束，3为已过期
                     * 
                     */
                    std::vector<uint64_t> GetStatus() const;

                    /**
                     * 设置课堂状态。默认展示所有课堂，0为未开始，1为正在上课，2为已结束，3为已过期
                     * @param _status 课堂状态。默认展示所有课堂，0为未开始，1为正在上课，2为已结束，3为已过期
                     * 
                     */
                    void SetStatus(const std::vector<uint64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 低代码平台的SdkAppId。

                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 开始时间。默认以当前时间减去半小时作为开始时间。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。默认以当前时间加上半小时作为结束时间。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页查询当前页数，从1开始递增
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 默认10条，最大上限为100条
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 课堂状态。默认展示所有课堂，0为未开始，1为正在上课，2为已结束，3为已过期
                     */
                    std::vector<uint64_t> m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMSREQUEST_H_
