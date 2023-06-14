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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPURGETASKSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPURGETASKSREQUEST_H_

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
                * DescribePurgeTasks请求参数结构体
                */
                class DescribePurgeTasksRequest : public AbstractModel
                {
                public:
                    DescribePurgeTasksRequest();
                    ~DescribePurgeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定刷新类型查询
url：url 刷新记录
path：目录刷新记录
                     * @return PurgeType 指定刷新类型查询
url：url 刷新记录
path：目录刷新记录
                     * 
                     */
                    std::string GetPurgeType() const;

                    /**
                     * 设置指定刷新类型查询
url：url 刷新记录
path：目录刷新记录
                     * @param _purgeType 指定刷新类型查询
url：url 刷新记录
path：目录刷新记录
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
                     * 获取根据时间区间查询时，填充开始时间，如 2018-08-08 00:00:00
                     * @return StartTime 根据时间区间查询时，填充开始时间，如 2018-08-08 00:00:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置根据时间区间查询时，填充开始时间，如 2018-08-08 00:00:00
                     * @param _startTime 根据时间区间查询时，填充开始时间，如 2018-08-08 00:00:00
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
                     * 获取根据时间区间查询时，填充结束时间，如 2018-08-08 23:59:59
                     * @return EndTime 根据时间区间查询时，填充结束时间，如 2018-08-08 23:59:59
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置根据时间区间查询时，填充结束时间，如 2018-08-08 23:59:59
                     * @param _endTime 根据时间区间查询时，填充结束时间，如 2018-08-08 23:59:59
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
                     * 获取根据任务 ID 查询时，填充任务 ID
查询时任务 ID 与起始时间必须填充一项
                     * @return TaskId 根据任务 ID 查询时，填充任务 ID
查询时任务 ID 与起始时间必须填充一项
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置根据任务 ID 查询时，填充任务 ID
查询时任务 ID 与起始时间必须填充一项
                     * @param _taskId 根据任务 ID 查询时，填充任务 ID
查询时任务 ID 与起始时间必须填充一项
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
                     * 获取分页查询限制数目，默认为 20
                     * @return Limit 分页查询限制数目，默认为 20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询限制数目，默认为 20
                     * @param _limit 分页查询限制数目，默认为 20
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
                     * 获取支持域名过滤，或 http(s):// 开头完整 URL 过滤
                     * @return Keyword 支持域名过滤，或 http(s):// 开头完整 URL 过滤
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置支持域名过滤，或 http(s):// 开头完整 URL 过滤
                     * @param _keyword 支持域名过滤，或 http(s):// 开头完整 URL 过滤
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
                     * 获取指定任务状态查询
fail：刷新失败
done：刷新成功
process：刷新中
                     * @return Status 指定任务状态查询
fail：刷新失败
done：刷新成功
process：刷新中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置指定任务状态查询
fail：刷新失败
done：刷新成功
process：刷新中
                     * @param _status 指定任务状态查询
fail：刷新失败
done：刷新成功
process：刷新中
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
                     * 获取指定刷新地域查询
mainland：境内
overseas：境外
global：全球
                     * @return Area 指定刷新地域查询
mainland：境内
overseas：境外
global：全球
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置指定刷新地域查询
mainland：境内
overseas：境外
global：全球
                     * @param _area 指定刷新地域查询
mainland：境内
overseas：境外
global：全球
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 指定刷新类型查询
url：url 刷新记录
path：目录刷新记录
                     */
                    std::string m_purgeType;
                    bool m_purgeTypeHasBeenSet;

                    /**
                     * 根据时间区间查询时，填充开始时间，如 2018-08-08 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 根据时间区间查询时，填充结束时间，如 2018-08-08 23:59:59
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 根据任务 ID 查询时，填充任务 ID
查询时任务 ID 与起始时间必须填充一项
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 分页查询偏移量，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目，默认为 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 支持域名过滤，或 http(s):// 开头完整 URL 过滤
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 指定任务状态查询
fail：刷新失败
done：刷新成功
process：刷新中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 指定刷新地域查询
mainland：境内
overseas：境外
global：全球
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPURGETASKSREQUEST_H_
