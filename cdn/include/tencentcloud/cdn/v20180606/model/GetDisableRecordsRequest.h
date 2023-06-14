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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_GETDISABLERECORDSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_GETDISABLERECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * GetDisableRecords请求参数结构体
                */
                class GetDisableRecordsRequest : public AbstractModel
                {
                public:
                    GetDisableRecordsRequest();
                    ~GetDisableRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定 URL 查询
                     * @return Url 指定 URL 查询
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置指定 URL 查询
                     * @param _url 指定 URL 查询
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取开始时间，如：2018-12-12 10:24:00。
                     * @return StartTime 开始时间，如：2018-12-12 10:24:00。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，如：2018-12-12 10:24:00。
                     * @param _startTime 开始时间，如：2018-12-12 10:24:00。
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
                     * 获取结束时间，如：2018-12-14 10:24:00。
                     * @return EndTime 结束时间，如：2018-12-14 10:24:00。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，如：2018-12-14 10:24:00。
                     * @param _endTime 结束时间，如：2018-12-14 10:24:00。
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
                     * 获取URL 当前状态
disable：当前仍为禁用状态，访问返回 403
enable：当前为可用状态，已解禁，可正常访问
                     * @return Status URL 当前状态
disable：当前仍为禁用状态，访问返回 403
enable：当前为可用状态，已解禁，可正常访问
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置URL 当前状态
disable：当前仍为禁用状态，访问返回 403
enable：当前为可用状态，已解禁，可正常访问
                     * @param _status URL 当前状态
disable：当前仍为禁用状态，访问返回 403
enable：当前为可用状态，已解禁，可正常访问
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取分页查询偏移量，默认为 0
                     * @return Offset 分页查询偏移量，默认为 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量，默认为 0
                     * @param _offset 分页查询偏移量，默认为 0
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
                     * 获取任务ID，任务ID和起始时间需要至少填写一项。
                     * @return TaskId 任务ID，任务ID和起始时间需要至少填写一项。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID，任务ID和起始时间需要至少填写一项。
                     * @param _taskId 任务ID，任务ID和起始时间需要至少填写一项。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 指定 URL 查询
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 开始时间，如：2018-12-12 10:24:00。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，如：2018-12-14 10:24:00。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * URL 当前状态
disable：当前仍为禁用状态，访问返回 403
enable：当前为可用状态，已解禁，可正常访问
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 分页查询偏移量，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目，默认为20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 任务ID，任务ID和起始时间需要至少填写一项。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_GETDISABLERECORDSREQUEST_H_
