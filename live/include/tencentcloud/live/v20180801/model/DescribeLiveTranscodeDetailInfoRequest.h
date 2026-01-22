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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODEDETAILINFOREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODEDETAILINFOREQUEST_H_

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
                * DescribeLiveTranscodeDetailInfo请求参数结构体
                */
                class DescribeLiveTranscodeDetailInfoRequest : public AbstractModel
                {
                public:
                    DescribeLiveTranscodeDetailInfoRequest();
                    ~DescribeLiveTranscodeDetailInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>推流域名。</p>
                     * @return PushDomain <p>推流域名。</p>
                     * 
                     */
                    std::string GetPushDomain() const;

                    /**
                     * 设置<p>推流域名。</p>
                     * @param _pushDomain <p>推流域名。</p>
                     * 
                     */
                    void SetPushDomain(const std::string& _pushDomain);

                    /**
                     * 判断参数 PushDomain 是否已赋值
                     * @return PushDomain 是否已赋值
                     * 
                     */
                    bool PushDomainHasBeenSet() const;

                    /**
                     * 获取<p>流名称。</p>
                     * @return StreamName <p>流名称。</p>
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置<p>流名称。</p>
                     * @param _streamName <p>流名称。</p>
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取<p>查询时间，北京时间，<br>格式：yyyymmdd。<br>注意：支持查询近1个月内某天的详细数据，截止到昨天。</p>
                     * @return DayTime <p>查询时间，北京时间，<br>格式：yyyymmdd。<br>注意：支持查询近1个月内某天的详细数据，截止到昨天。</p>
                     * 
                     */
                    std::string GetDayTime() const;

                    /**
                     * 设置<p>查询时间，北京时间，<br>格式：yyyymmdd。<br>注意：支持查询近1个月内某天的详细数据，截止到昨天。</p>
                     * @param _dayTime <p>查询时间，北京时间，<br>格式：yyyymmdd。<br>注意：支持查询近1个月内某天的详细数据，截止到昨天。</p>
                     * 
                     */
                    void SetDayTime(const std::string& _dayTime);

                    /**
                     * 判断参数 DayTime 是否已赋值
                     * @return DayTime 是否已赋值
                     * 
                     */
                    bool DayTimeHasBeenSet() const;

                    /**
                     * 获取<p>页数，默认1，<br>不超过100页。</p>
                     * @return PageNum <p>页数，默认1，<br>不超过100页。</p>
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置<p>页数，默认1，<br>不超过100页。</p>
                     * @param _pageNum <p>页数，默认1，<br>不超过100页。</p>
                     * 
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取<p>每页个数，默认20，<br>范围：[10,1000]。</p>
                     * @return PageSize <p>每页个数，默认20，<br>范围：[10,1000]。</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页个数，默认20，<br>范围：[10,1000]。</p>
                     * @param _pageSize <p>每页个数，默认20，<br>范围：[10,1000]。</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>起始天时间，北京时间，<br>格式：yyyymmdd。<br>注意：支持查询近1个月内的详细数据。</p>
                     * @return StartDayTime <p>起始天时间，北京时间，<br>格式：yyyymmdd。<br>注意：支持查询近1个月内的详细数据。</p>
                     * 
                     */
                    std::string GetStartDayTime() const;

                    /**
                     * 设置<p>起始天时间，北京时间，<br>格式：yyyymmdd。<br>注意：支持查询近1个月内的详细数据。</p>
                     * @param _startDayTime <p>起始天时间，北京时间，<br>格式：yyyymmdd。<br>注意：支持查询近1个月内的详细数据。</p>
                     * 
                     */
                    void SetStartDayTime(const std::string& _startDayTime);

                    /**
                     * 判断参数 StartDayTime 是否已赋值
                     * @return StartDayTime 是否已赋值
                     * 
                     */
                    bool StartDayTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束天时间，北京时间，<br>格式：yyyymmdd。<br>注意：支持查询近1个月内的详细数据，截止到昨天，注意DayTime 与（StartDayTime，EndDayTime）必须要传一个，如果都传，会以DayTime为准 。</p>
                     * @return EndDayTime <p>结束天时间，北京时间，<br>格式：yyyymmdd。<br>注意：支持查询近1个月内的详细数据，截止到昨天，注意DayTime 与（StartDayTime，EndDayTime）必须要传一个，如果都传，会以DayTime为准 。</p>
                     * 
                     */
                    std::string GetEndDayTime() const;

                    /**
                     * 设置<p>结束天时间，北京时间，<br>格式：yyyymmdd。<br>注意：支持查询近1个月内的详细数据，截止到昨天，注意DayTime 与（StartDayTime，EndDayTime）必须要传一个，如果都传，会以DayTime为准 。</p>
                     * @param _endDayTime <p>结束天时间，北京时间，<br>格式：yyyymmdd。<br>注意：支持查询近1个月内的详细数据，截止到昨天，注意DayTime 与（StartDayTime，EndDayTime）必须要传一个，如果都传，会以DayTime为准 。</p>
                     * 
                     */
                    void SetEndDayTime(const std::string& _endDayTime);

                    /**
                     * 判断参数 EndDayTime 是否已赋值
                     * @return EndDayTime 是否已赋值
                     * 
                     */
                    bool EndDayTimeHasBeenSet() const;

                private:

                    /**
                     * <p>推流域名。</p>
                     */
                    std::string m_pushDomain;
                    bool m_pushDomainHasBeenSet;

                    /**
                     * <p>流名称。</p>
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * <p>查询时间，北京时间，<br>格式：yyyymmdd。<br>注意：支持查询近1个月内某天的详细数据，截止到昨天。</p>
                     */
                    std::string m_dayTime;
                    bool m_dayTimeHasBeenSet;

                    /**
                     * <p>页数，默认1，<br>不超过100页。</p>
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * <p>每页个数，默认20，<br>范围：[10,1000]。</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>起始天时间，北京时间，<br>格式：yyyymmdd。<br>注意：支持查询近1个月内的详细数据。</p>
                     */
                    std::string m_startDayTime;
                    bool m_startDayTimeHasBeenSet;

                    /**
                     * <p>结束天时间，北京时间，<br>格式：yyyymmdd。<br>注意：支持查询近1个月内的详细数据，截止到昨天，注意DayTime 与（StartDayTime，EndDayTime）必须要传一个，如果都传，会以DayTime为准 。</p>
                     */
                    std::string m_endDayTime;
                    bool m_endDayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODEDETAILINFOREQUEST_H_
