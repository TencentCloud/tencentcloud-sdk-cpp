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
                     * 获取推流域名。
                     * @return PushDomain 推流域名。
                     * 
                     */
                    std::string GetPushDomain() const;

                    /**
                     * 设置推流域名。
                     * @param _pushDomain 推流域名。
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
                     * 获取流名称。
                     * @return StreamName 流名称。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
                     * @param _streamName 流名称。
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
                     * 获取查询时间，北京时间，
格式：yyyymmdd。
注意：支持查询近1个月内某天的详细数据，截止到昨天。
                     * @return DayTime 查询时间，北京时间，
格式：yyyymmdd。
注意：支持查询近1个月内某天的详细数据，截止到昨天。
                     * 
                     */
                    std::string GetDayTime() const;

                    /**
                     * 设置查询时间，北京时间，
格式：yyyymmdd。
注意：支持查询近1个月内某天的详细数据，截止到昨天。
                     * @param _dayTime 查询时间，北京时间，
格式：yyyymmdd。
注意：支持查询近1个月内某天的详细数据，截止到昨天。
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
                     * 获取页数，默认1，
不超过100页。
                     * @return PageNum 页数，默认1，
不超过100页。
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置页数，默认1，
不超过100页。
                     * @param _pageNum 页数，默认1，
不超过100页。
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
                     * 获取每页个数，默认20，
范围：[10,1000]。
                     * @return PageSize 每页个数，默认20，
范围：[10,1000]。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页个数，默认20，
范围：[10,1000]。
                     * @param _pageSize 每页个数，默认20，
范围：[10,1000]。
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
                     * 获取起始天时间，北京时间，
格式：yyyymmdd。
注意：支持查询近1个月内的详细数据。
                     * @return StartDayTime 起始天时间，北京时间，
格式：yyyymmdd。
注意：支持查询近1个月内的详细数据。
                     * 
                     */
                    std::string GetStartDayTime() const;

                    /**
                     * 设置起始天时间，北京时间，
格式：yyyymmdd。
注意：支持查询近1个月内的详细数据。
                     * @param _startDayTime 起始天时间，北京时间，
格式：yyyymmdd。
注意：支持查询近1个月内的详细数据。
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
                     * 获取结束天时间，北京时间，
格式：yyyymmdd。
注意：支持查询近1个月内的详细数据，截止到昨天，注意DayTime 与（StartDayTime，EndDayTime）必须要传一个，如果都传，会以DayTime为准 。
                     * @return EndDayTime 结束天时间，北京时间，
格式：yyyymmdd。
注意：支持查询近1个月内的详细数据，截止到昨天，注意DayTime 与（StartDayTime，EndDayTime）必须要传一个，如果都传，会以DayTime为准 。
                     * 
                     */
                    std::string GetEndDayTime() const;

                    /**
                     * 设置结束天时间，北京时间，
格式：yyyymmdd。
注意：支持查询近1个月内的详细数据，截止到昨天，注意DayTime 与（StartDayTime，EndDayTime）必须要传一个，如果都传，会以DayTime为准 。
                     * @param _endDayTime 结束天时间，北京时间，
格式：yyyymmdd。
注意：支持查询近1个月内的详细数据，截止到昨天，注意DayTime 与（StartDayTime，EndDayTime）必须要传一个，如果都传，会以DayTime为准 。
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
                     * 推流域名。
                     */
                    std::string m_pushDomain;
                    bool m_pushDomainHasBeenSet;

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 查询时间，北京时间，
格式：yyyymmdd。
注意：支持查询近1个月内某天的详细数据，截止到昨天。
                     */
                    std::string m_dayTime;
                    bool m_dayTimeHasBeenSet;

                    /**
                     * 页数，默认1，
不超过100页。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 每页个数，默认20，
范围：[10,1000]。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 起始天时间，北京时间，
格式：yyyymmdd。
注意：支持查询近1个月内的详细数据。
                     */
                    std::string m_startDayTime;
                    bool m_startDayTimeHasBeenSet;

                    /**
                     * 结束天时间，北京时间，
格式：yyyymmdd。
注意：支持查询近1个月内的详细数据，截止到昨天，注意DayTime 与（StartDayTime，EndDayTime）必须要传一个，如果都传，会以DayTime为准 。
                     */
                    std::string m_endDayTime;
                    bool m_endDayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODEDETAILINFOREQUEST_H_
