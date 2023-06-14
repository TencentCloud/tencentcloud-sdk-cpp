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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeBasicAlarmList请求参数结构体
                */
                class DescribeBasicAlarmListRequest : public AbstractModel
                {
                public:
                    DescribeBasicAlarmListRequest();
                    ~DescribeBasicAlarmListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取接口模块名，当前取值monitor
                     * @return Module 接口模块名，当前取值monitor
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置接口模块名，当前取值monitor
                     * @param _module 接口模块名，当前取值monitor
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取起始时间，默认一天前的时间戳
                     * @return StartTime 起始时间，默认一天前的时间戳
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置起始时间，默认一天前的时间戳
                     * @param _startTime 起始时间，默认一天前的时间戳
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，默认当前时间戳
                     * @return EndTime 结束时间，默认当前时间戳
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间，默认当前时间戳
                     * @param _endTime 结束时间，默认当前时间戳
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取分页参数，每页返回的数量，取值1~100，默认20
                     * @return Limit 分页参数，每页返回的数量，取值1~100，默认20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数，每页返回的数量，取值1~100，默认20
                     * @param _limit 分页参数，每页返回的数量，取值1~100，默认20
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
                     * 获取分页参数，页偏移量，从0开始计数，默认0
                     * @return Offset 分页参数，页偏移量，从0开始计数，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数，页偏移量，从0开始计数，默认0
                     * @param _offset 分页参数，页偏移量，从0开始计数，默认0
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
                     * 获取根据发生时间排序，取值ASC或DESC
                     * @return OccurTimeOrder 根据发生时间排序，取值ASC或DESC
                     * 
                     */
                    std::string GetOccurTimeOrder() const;

                    /**
                     * 设置根据发生时间排序，取值ASC或DESC
                     * @param _occurTimeOrder 根据发生时间排序，取值ASC或DESC
                     * 
                     */
                    void SetOccurTimeOrder(const std::string& _occurTimeOrder);

                    /**
                     * 判断参数 OccurTimeOrder 是否已赋值
                     * @return OccurTimeOrder 是否已赋值
                     * 
                     */
                    bool OccurTimeOrderHasBeenSet() const;

                    /**
                     * 获取根据项目ID过滤
                     * @return ProjectIds 根据项目ID过滤
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置根据项目ID过滤
                     * @param _projectIds 根据项目ID过滤
                     * 
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取根据策略类型过滤
                     * @return ViewNames 根据策略类型过滤
                     * 
                     */
                    std::vector<std::string> GetViewNames() const;

                    /**
                     * 设置根据策略类型过滤
                     * @param _viewNames 根据策略类型过滤
                     * 
                     */
                    void SetViewNames(const std::vector<std::string>& _viewNames);

                    /**
                     * 判断参数 ViewNames 是否已赋值
                     * @return ViewNames 是否已赋值
                     * 
                     */
                    bool ViewNamesHasBeenSet() const;

                    /**
                     * 获取根据告警状态过滤
                     * @return AlarmStatus 根据告警状态过滤
                     * 
                     */
                    std::vector<int64_t> GetAlarmStatus() const;

                    /**
                     * 设置根据告警状态过滤
                     * @param _alarmStatus 根据告警状态过滤
                     * 
                     */
                    void SetAlarmStatus(const std::vector<int64_t>& _alarmStatus);

                    /**
                     * 判断参数 AlarmStatus 是否已赋值
                     * @return AlarmStatus 是否已赋值
                     * 
                     */
                    bool AlarmStatusHasBeenSet() const;

                    /**
                     * 获取根据告警对象过滤
                     * @return ObjLike 根据告警对象过滤
                     * 
                     */
                    std::string GetObjLike() const;

                    /**
                     * 设置根据告警对象过滤
                     * @param _objLike 根据告警对象过滤
                     * 
                     */
                    void SetObjLike(const std::string& _objLike);

                    /**
                     * 判断参数 ObjLike 是否已赋值
                     * @return ObjLike 是否已赋值
                     * 
                     */
                    bool ObjLikeHasBeenSet() const;

                    /**
                     * 获取根据实例组ID过滤
                     * @return InstanceGroupIds 根据实例组ID过滤
                     * 
                     */
                    std::vector<int64_t> GetInstanceGroupIds() const;

                    /**
                     * 设置根据实例组ID过滤
                     * @param _instanceGroupIds 根据实例组ID过滤
                     * 
                     */
                    void SetInstanceGroupIds(const std::vector<int64_t>& _instanceGroupIds);

                    /**
                     * 判断参数 InstanceGroupIds 是否已赋值
                     * @return InstanceGroupIds 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdsHasBeenSet() const;

                    /**
                     * 获取根据指标名过滤
                     * @return MetricNames 根据指标名过滤
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置根据指标名过滤
                     * @param _metricNames 根据指标名过滤
                     * 
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     * 
                     */
                    bool MetricNamesHasBeenSet() const;

                private:

                    /**
                     * 接口模块名，当前取值monitor
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 起始时间，默认一天前的时间戳
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，默认当前时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页参数，每页返回的数量，取值1~100，默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数，页偏移量，从0开始计数，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 根据发生时间排序，取值ASC或DESC
                     */
                    std::string m_occurTimeOrder;
                    bool m_occurTimeOrderHasBeenSet;

                    /**
                     * 根据项目ID过滤
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 根据策略类型过滤
                     */
                    std::vector<std::string> m_viewNames;
                    bool m_viewNamesHasBeenSet;

                    /**
                     * 根据告警状态过滤
                     */
                    std::vector<int64_t> m_alarmStatus;
                    bool m_alarmStatusHasBeenSet;

                    /**
                     * 根据告警对象过滤
                     */
                    std::string m_objLike;
                    bool m_objLikeHasBeenSet;

                    /**
                     * 根据实例组ID过滤
                     */
                    std::vector<int64_t> m_instanceGroupIds;
                    bool m_instanceGroupIdsHasBeenSet;

                    /**
                     * 根据指标名过滤
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTREQUEST_H_
