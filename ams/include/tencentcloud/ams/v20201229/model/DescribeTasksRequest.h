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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_DESCRIBETASKSREQUEST_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_DESCRIBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20201229/model/TaskFilter.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * DescribeTasks请求参数结构体
                */
                class DescribeTasksRequest : public AbstractModel
                {
                public:
                    DescribeTasksRequest();
                    ~DescribeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页展示多少条。（默认展示10条）
                     * @return Limit 每页展示多少条。（默认展示10条）
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页展示多少条。（默认展示10条）
                     * @param Limit 每页展示多少条。（默认展示10条）
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤参数
                     * @return Filter 过滤参数
                     */
                    TaskFilter GetFilter() const;

                    /**
                     * 设置过滤参数
                     * @param Filter 过滤参数
                     */
                    void SetFilter(const TaskFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取翻页token，在向前或向后翻页时需要
                     * @return PageToken 翻页token，在向前或向后翻页时需要
                     */
                    std::string GetPageToken() const;

                    /**
                     * 设置翻页token，在向前或向后翻页时需要
                     * @param PageToken 翻页token，在向前或向后翻页时需要
                     */
                    void SetPageToken(const std::string& _pageToken);

                    /**
                     * 判断参数 PageToken 是否已赋值
                     * @return PageToken 是否已赋值
                     */
                    bool PageTokenHasBeenSet() const;

                    /**
                     * 获取开始时间。默认是最近3天。
                     * @return StartTime 开始时间。默认是最近3天。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。默认是最近3天。
                     * @param StartTime 开始时间。默认是最近3天。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间。默认为空
                     * @return EndTime 结束时间。默认为空
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。默认为空
                     * @param EndTime 结束时间。默认为空
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 每页展示多少条。（默认展示10条）
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤参数
                     */
                    TaskFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 翻页token，在向前或向后翻页时需要
                     */
                    std::string m_pageToken;
                    bool m_pageTokenHasBeenSet;

                    /**
                     * 开始时间。默认是最近3天。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。默认为空
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_DESCRIBETASKSREQUEST_H_
