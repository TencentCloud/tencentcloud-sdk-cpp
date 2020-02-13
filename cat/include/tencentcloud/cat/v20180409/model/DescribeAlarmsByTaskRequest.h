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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEALARMSBYTASKREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEALARMSBYTASKREQUEST_H_

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
                * DescribeAlarmsByTask请求参数结构体
                */
                class DescribeAlarmsByTaskRequest : public AbstractModel
                {
                public:
                    DescribeAlarmsByTaskRequest();
                    ~DescribeAlarmsByTaskRequest() = default;
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
                     * 获取0 全部, 1 已恢复, 2 未恢复  默认为0。其他值，视为0 查全部状态
                     * @return Status 0 全部, 1 已恢复, 2 未恢复  默认为0。其他值，视为0 查全部状态
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0 全部, 1 已恢复, 2 未恢复  默认为0。其他值，视为0 查全部状态
                     * @param Status 0 全部, 1 已恢复, 2 未恢复  默认为0。其他值，视为0 查全部状态
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取格式如：2017-05-09 00:00:00  缺省为7天前0点
                     * @return BeginTime 格式如：2017-05-09 00:00:00  缺省为7天前0点
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置格式如：2017-05-09 00:00:00  缺省为7天前0点
                     * @param BeginTime 格式如：2017-05-09 00:00:00  缺省为7天前0点
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取格式如：2017-05-10 00:00:00  缺省为明天0点
                     * @return EndTime 格式如：2017-05-10 00:00:00  缺省为明天0点
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置格式如：2017-05-10 00:00:00  缺省为明天0点
                     * @param EndTime 格式如：2017-05-10 00:00:00  缺省为明天0点
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取排序字段，可为Time, ObjName, Duration, Status, Content 之一。缺省为Time
                     * @return SortBy 排序字段，可为Time, ObjName, Duration, Status, Content 之一。缺省为Time
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序字段，可为Time, ObjName, Duration, Status, Content 之一。缺省为Time
                     * @param SortBy 排序字段，可为Time, ObjName, Duration, Status, Content 之一。缺省为Time
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取升序或降序。可为Desc, Asc之一。缺省为Desc
                     * @return SortType 升序或降序。可为Desc, Asc之一。缺省为Desc
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置升序或降序。可为Desc, Asc之一。缺省为Desc
                     * @param SortType 升序或降序。可为Desc, Asc之一。缺省为Desc
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取告警对象的名称
                     * @return ObjName 告警对象的名称
                     */
                    std::string GetObjName() const;

                    /**
                     * 设置告警对象的名称
                     * @param ObjName 告警对象的名称
                     */
                    void SetObjName(const std::string& _objName);

                    /**
                     * 判断参数 ObjName 是否已赋值
                     * @return ObjName 是否已赋值
                     */
                    bool ObjNameHasBeenSet() const;

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
                     * 0 全部, 1 已恢复, 2 未恢复  默认为0。其他值，视为0 查全部状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 格式如：2017-05-09 00:00:00  缺省为7天前0点
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 格式如：2017-05-10 00:00:00  缺省为明天0点
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 排序字段，可为Time, ObjName, Duration, Status, Content 之一。缺省为Time
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 升序或降序。可为Desc, Asc之一。缺省为Desc
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 告警对象的名称
                     */
                    std::string m_objName;
                    bool m_objNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEALARMSBYTASKREQUEST_H_
