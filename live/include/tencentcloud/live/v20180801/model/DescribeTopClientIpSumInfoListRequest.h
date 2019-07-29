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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETOPCLIENTIPSUMINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETOPCLIENTIPSUMINFOLISTREQUEST_H_

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
                * DescribeTopClientIpSumInfoList请求参数结构体
                */
                class DescribeTopClientIpSumInfoListRequest : public AbstractModel
                {
                public:
                    DescribeTopClientIpSumInfoListRequest();
                    ~DescribeTopClientIpSumInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间点，格式为yyyy-mm-dd HH:MM:SS。
                     * @return StartTime 起始时间点，格式为yyyy-mm-dd HH:MM:SS。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间点，格式为yyyy-mm-dd HH:MM:SS。
                     * @param StartTime 起始时间点，格式为yyyy-mm-dd HH:MM:SS。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间点，格式为yyyy-mm-dd HH:MM:SS
时间跨度在（0,4小时]，支持最近1天数据查询。
                     * @return EndTime 结束时间点，格式为yyyy-mm-dd HH:MM:SS
时间跨度在（0,4小时]，支持最近1天数据查询。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间点，格式为yyyy-mm-dd HH:MM:SS
时间跨度在（0,4小时]，支持最近1天数据查询。
                     * @param EndTime 结束时间点，格式为yyyy-mm-dd HH:MM:SS
时间跨度在（0,4小时]，支持最近1天数据查询。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取播放域名，默认为不填，表示求总体数据。
                     * @return PlayDomains 播放域名，默认为不填，表示求总体数据。
                     */
                    std::vector<std::string> GetPlayDomains() const;

                    /**
                     * 设置播放域名，默认为不填，表示求总体数据。
                     * @param PlayDomains 播放域名，默认为不填，表示求总体数据。
                     */
                    void SetPlayDomains(const std::vector<std::string>& _playDomains);

                    /**
                     * 判断参数 PlayDomains 是否已赋值
                     * @return PlayDomains 是否已赋值
                     */
                    bool PlayDomainsHasBeenSet() const;

                    /**
                     * 获取页号，
范围是[1,1000]，
默认值是1。
                     * @return PageNum 页号，
范围是[1,1000]，
默认值是1。
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置页号，
范围是[1,1000]，
默认值是1。
                     * @param PageNum 页号，
范围是[1,1000]，
默认值是1。
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取每页个数，范围是[1,1000]，
默认值是20。
                     * @return PageSize 每页个数，范围是[1,1000]，
默认值是20。
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页个数，范围是[1,1000]，
默认值是20。
                     * @param PageSize 每页个数，范围是[1,1000]，
默认值是20。
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取排序指标，可选值包括”TotalRequest”，”FailedRequest”,“TotalFlux”。
                     * @return OrderParam 排序指标，可选值包括”TotalRequest”，”FailedRequest”,“TotalFlux”。
                     */
                    std::string GetOrderParam() const;

                    /**
                     * 设置排序指标，可选值包括”TotalRequest”，”FailedRequest”,“TotalFlux”。
                     * @param OrderParam 排序指标，可选值包括”TotalRequest”，”FailedRequest”,“TotalFlux”。
                     */
                    void SetOrderParam(const std::string& _orderParam);

                    /**
                     * 判断参数 OrderParam 是否已赋值
                     * @return OrderParam 是否已赋值
                     */
                    bool OrderParamHasBeenSet() const;

                private:

                    /**
                     * 起始时间点，格式为yyyy-mm-dd HH:MM:SS。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间点，格式为yyyy-mm-dd HH:MM:SS
时间跨度在（0,4小时]，支持最近1天数据查询。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 播放域名，默认为不填，表示求总体数据。
                     */
                    std::vector<std::string> m_playDomains;
                    bool m_playDomainsHasBeenSet;

                    /**
                     * 页号，
范围是[1,1000]，
默认值是1。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 每页个数，范围是[1,1000]，
默认值是20。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 排序指标，可选值包括”TotalRequest”，”FailedRequest”,“TotalFlux”。
                     */
                    std::string m_orderParam;
                    bool m_orderParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETOPCLIENTIPSUMINFOLISTREQUEST_H_
