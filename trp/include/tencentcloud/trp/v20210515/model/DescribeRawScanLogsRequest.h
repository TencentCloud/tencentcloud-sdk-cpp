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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBERAWSCANLOGSREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBERAWSCANLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribeRawScanLogs请求参数结构体
                */
                class DescribeRawScanLogsRequest : public AbstractModel
                {
                public:
                    DescribeRawScanLogsRequest();
                    ~DescribeRawScanLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业ID, 默认为当前企业
如果有渠道权限，可以传 0 会查渠道下所有的企业
                     * @return CorpId 企业ID, 默认为当前企业
如果有渠道权限，可以传 0 会查渠道下所有的企业
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID, 默认为当前企业
如果有渠道权限，可以传 0 会查渠道下所有的企业
                     * @param _corpId 企业ID, 默认为当前企业
如果有渠道权限，可以传 0 会查渠道下所有的企业
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取分页数量，默认为 20，最大为 1000
                     * @return PageSize 分页数量，默认为 20，最大为 1000
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页数量，默认为 20，最大为 1000
                     * @param _pageSize 分页数量，默认为 20，最大为 1000
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
                     * 获取当前分页，默认为 1
                     * @return PageNumber 当前分页，默认为 1
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置当前分页，默认为 1
                     * @param _pageNumber 当前分页，默认为 1
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取从哪个日志后查询
即: LogId > $AfterLogId
                     * @return AfterLogId 从哪个日志后查询
即: LogId > $AfterLogId
                     * 
                     */
                    uint64_t GetAfterLogId() const;

                    /**
                     * 设置从哪个日志后查询
即: LogId > $AfterLogId
                     * @param _afterLogId 从哪个日志后查询
即: LogId > $AfterLogId
                     * 
                     */
                    void SetAfterLogId(const uint64_t& _afterLogId);

                    /**
                     * 判断参数 AfterLogId 是否已赋值
                     * @return AfterLogId 是否已赋值
                     * 
                     */
                    bool AfterLogIdHasBeenSet() const;

                    /**
                     * 获取开始时间 >= StartTime
                     * @return StartTime 开始时间 >= StartTime
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间 >= StartTime
                     * @param _startTime 开始时间 >= StartTime
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间 < EndTime
                     * @return EndTime 结束时间 < EndTime
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间 < EndTime
                     * @param _endTime 结束时间 < EndTime
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 企业ID, 默认为当前企业
如果有渠道权限，可以传 0 会查渠道下所有的企业
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 分页数量，默认为 20，最大为 1000
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 当前分页，默认为 1
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 从哪个日志后查询
即: LogId > $AfterLogId
                     */
                    uint64_t m_afterLogId;
                    bool m_afterLogIdHasBeenSet;

                    /**
                     * 开始时间 >= StartTime
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间 < EndTime
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBERAWSCANLOGSREQUEST_H_
