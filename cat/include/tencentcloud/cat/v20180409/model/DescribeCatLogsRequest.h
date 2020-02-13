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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBECATLOGSREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBECATLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeCatLogs请求参数结构体
                */
                class DescribeCatLogsRequest : public AbstractModel
                {
                public:
                    DescribeCatLogsRequest();
                    ~DescribeCatLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取拨测任务Id
                     * @return TaskId 拨测任务Id
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置拨测任务Id
                     * @param TaskId 拨测任务Id
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取从第Offset 条开始查询。缺省值为0
                     * @return Offset 从第Offset 条开始查询。缺省值为0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置从第Offset 条开始查询。缺省值为0
                     * @param Offset 从第Offset 条开始查询。缺省值为0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取本批次查询Limit 条记录。缺省值为20
                     * @return Limit 本批次查询Limit 条记录。缺省值为20
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置本批次查询Limit 条记录。缺省值为20
                     * @param Limit 本批次查询Limit 条记录。缺省值为20
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取格式如：2017-05-09 00:00:00  缺省为当天0点，最多拉取1天的数据
                     * @return BeginTime 格式如：2017-05-09 00:00:00  缺省为当天0点，最多拉取1天的数据
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置格式如：2017-05-09 00:00:00  缺省为当天0点，最多拉取1天的数据
                     * @param BeginTime 格式如：2017-05-09 00:00:00  缺省为当天0点，最多拉取1天的数据
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取格式如：2017-05-10 00:00:00  缺省为当前时间
                     * @return EndTime 格式如：2017-05-10 00:00:00  缺省为当前时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置格式如：2017-05-10 00:00:00  缺省为当前时间
                     * @param EndTime 格式如：2017-05-10 00:00:00  缺省为当前时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取按时间升序或降序。默认降序。可选值： Desc, Asc
                     * @return SortType 按时间升序或降序。默认降序。可选值： Desc, Asc
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置按时间升序或降序。默认降序。可选值： Desc, Asc
                     * @param SortType 按时间升序或降序。默认降序。可选值： Desc, Asc
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     */
                    bool SortTypeHasBeenSet() const;

                private:

                    /**
                     * 拨测任务Id
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 从第Offset 条开始查询。缺省值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 本批次查询Limit 条记录。缺省值为20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 格式如：2017-05-09 00:00:00  缺省为当天0点，最多拉取1天的数据
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 格式如：2017-05-10 00:00:00  缺省为当前时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 按时间升序或降序。默认降序。可选值： Desc, Asc
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBECATLOGSREQUEST_H_
