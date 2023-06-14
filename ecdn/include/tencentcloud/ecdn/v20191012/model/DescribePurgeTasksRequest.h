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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEPURGETASKSREQUEST_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEPURGETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * DescribePurgeTasks请求参数结构体
                */
                class DescribePurgeTasksRequest : public AbstractModel
                {
                public:
                    DescribePurgeTasksRequest();
                    ~DescribePurgeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询刷新类型。url：查询 url 刷新记录；path：查询目录刷新记录。
                     * @return PurgeType 查询刷新类型。url：查询 url 刷新记录；path：查询目录刷新记录。
                     * 
                     */
                    std::string GetPurgeType() const;

                    /**
                     * 设置查询刷新类型。url：查询 url 刷新记录；path：查询目录刷新记录。
                     * @param _purgeType 查询刷新类型。url：查询 url 刷新记录；path：查询目录刷新记录。
                     * 
                     */
                    void SetPurgeType(const std::string& _purgeType);

                    /**
                     * 判断参数 PurgeType 是否已赋值
                     * @return PurgeType 是否已赋值
                     * 
                     */
                    bool PurgeTypeHasBeenSet() const;

                    /**
                     * 获取开始时间，如2018-08-08 00:00:00。
                     * @return StartTime 开始时间，如2018-08-08 00:00:00。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，如2018-08-08 00:00:00。
                     * @param _startTime 开始时间，如2018-08-08 00:00:00。
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
                     * 获取结束时间，如2018-08-08 23:59:59。
                     * @return EndTime 结束时间，如2018-08-08 23:59:59。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，如2018-08-08 23:59:59。
                     * @param _endTime 结束时间，如2018-08-08 23:59:59。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取提交时返回的任务 Id，查询时 TaskId 和起始时间必须指定一项。
                     * @return TaskId 提交时返回的任务 Id，查询时 TaskId 和起始时间必须指定一项。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置提交时返回的任务 Id，查询时 TaskId 和起始时间必须指定一项。
                     * @param _taskId 提交时返回的任务 Id，查询时 TaskId 和起始时间必须指定一项。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取分页查询偏移量，默认为0（从第0条开始）。
                     * @return Offset 分页查询偏移量，默认为0（从第0条开始）。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量，默认为0（从第0条开始）。
                     * @param _offset 分页查询偏移量，默认为0（从第0条开始）。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页查询限制数目，默认为20。
                     * @return Limit 分页查询限制数目，默认为20。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询限制数目，默认为20。
                     * @param _limit 分页查询限制数目，默认为20。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取查询关键字，请输入域名或 http(s):// 开头完整 URL。
                     * @return Keyword 查询关键字，请输入域名或 http(s):// 开头完整 URL。
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置查询关键字，请输入域名或 http(s):// 开头完整 URL。
                     * @param _keyword 查询关键字，请输入域名或 http(s):// 开头完整 URL。
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取查询指定任务状态，fail表示失败，done表示成功，process表示刷新中。
                     * @return Status 查询指定任务状态，fail表示失败，done表示成功，process表示刷新中。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置查询指定任务状态，fail表示失败，done表示成功，process表示刷新中。
                     * @param _status 查询指定任务状态，fail表示失败，done表示成功，process表示刷新中。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 查询刷新类型。url：查询 url 刷新记录；path：查询目录刷新记录。
                     */
                    std::string m_purgeType;
                    bool m_purgeTypeHasBeenSet;

                    /**
                     * 开始时间，如2018-08-08 00:00:00。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，如2018-08-08 23:59:59。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 提交时返回的任务 Id，查询时 TaskId 和起始时间必须指定一项。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 分页查询偏移量，默认为0（从第0条开始）。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目，默认为20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询关键字，请输入域名或 http(s):// 开头完整 URL。
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 查询指定任务状态，fail表示失败，done表示成功，process表示刷新中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEPURGETASKSREQUEST_H_
