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
                     * 获取<p>接口模块名，当前取值monitor</p>
                     * @return Module <p>接口模块名，当前取值monitor</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>接口模块名，当前取值monitor</p>
                     * @param _module <p>接口模块名，当前取值monitor</p>
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
                     * 获取<p>起始时间，默认一天前的时间戳</p>
                     * @return StartTime <p>起始时间，默认一天前的时间戳</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>起始时间，默认一天前的时间戳</p>
                     * @param _startTime <p>起始时间，默认一天前的时间戳</p>
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
                     * 获取<p>结束时间，默认当前时间戳</p>
                     * @return EndTime <p>结束时间，默认当前时间戳</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间，默认当前时间戳</p>
                     * @param _endTime <p>结束时间，默认当前时间戳</p>
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
                     * 获取<p>分页参数，每页返回的数量，取值1~100，默认20</p>
                     * @return Limit <p>分页参数，每页返回的数量，取值1~100，默认20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页参数，每页返回的数量，取值1~100，默认20</p>
                     * @param _limit <p>分页参数，每页返回的数量，取值1~100，默认20</p>
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
                     * 获取<p>分页参数，页偏移量，从0开始计数，默认0</p>
                     * @return Offset <p>分页参数，页偏移量，从0开始计数，默认0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页参数，页偏移量，从0开始计数，默认0</p>
                     * @param _offset <p>分页参数，页偏移量，从0开始计数，默认0</p>
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
                     * 获取<p>根据发生时间排序，取值ASC或DESC</p>
                     * @return OccurTimeOrder <p>根据发生时间排序，取值ASC或DESC</p>
                     * 
                     */
                    std::string GetOccurTimeOrder() const;

                    /**
                     * 设置<p>根据发生时间排序，取值ASC或DESC</p>
                     * @param _occurTimeOrder <p>根据发生时间排序，取值ASC或DESC</p>
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
                     * 获取<p>根据项目ID过滤</p>
                     * @return ProjectIds <p>根据项目ID过滤</p>
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置<p>根据项目ID过滤</p>
                     * @param _projectIds <p>根据项目ID过滤</p>
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
                     * 获取<p>根据策略类型过滤</p>
                     * @return ViewNames <p>根据策略类型过滤</p>
                     * 
                     */
                    std::vector<std::string> GetViewNames() const;

                    /**
                     * 设置<p>根据策略类型过滤</p>
                     * @param _viewNames <p>根据策略类型过滤</p>
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
                     * 获取<p>根据告警状态过滤</p>
                     * @return AlarmStatus <p>根据告警状态过滤</p>
                     * 
                     */
                    std::vector<int64_t> GetAlarmStatus() const;

                    /**
                     * 设置<p>根据告警状态过滤</p>
                     * @param _alarmStatus <p>根据告警状态过滤</p>
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
                     * 获取<p>根据告警对象过滤</p>
                     * @return ObjLike <p>根据告警对象过滤</p>
                     * 
                     */
                    std::string GetObjLike() const;

                    /**
                     * 设置<p>根据告警对象过滤</p>
                     * @param _objLike <p>根据告警对象过滤</p>
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
                     * 获取<p>根据实例组ID过滤</p>
                     * @return InstanceGroupIds <p>根据实例组ID过滤</p>
                     * 
                     */
                    std::vector<int64_t> GetInstanceGroupIds() const;

                    /**
                     * 设置<p>根据实例组ID过滤</p>
                     * @param _instanceGroupIds <p>根据实例组ID过滤</p>
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
                     * 获取<p>根据指标名过滤</p>
                     * @return MetricNames <p>根据指标名过滤</p>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置<p>根据指标名过滤</p>
                     * @param _metricNames <p>根据指标名过滤</p>
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
                     * <p>接口模块名，当前取值monitor</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>起始时间，默认一天前的时间戳</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，默认当前时间戳</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>分页参数，每页返回的数量，取值1~100，默认20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页参数，页偏移量，从0开始计数，默认0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>根据发生时间排序，取值ASC或DESC</p>
                     */
                    std::string m_occurTimeOrder;
                    bool m_occurTimeOrderHasBeenSet;

                    /**
                     * <p>根据项目ID过滤</p>
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * <p>根据策略类型过滤</p>
                     */
                    std::vector<std::string> m_viewNames;
                    bool m_viewNamesHasBeenSet;

                    /**
                     * <p>根据告警状态过滤</p>
                     */
                    std::vector<int64_t> m_alarmStatus;
                    bool m_alarmStatusHasBeenSet;

                    /**
                     * <p>根据告警对象过滤</p>
                     */
                    std::string m_objLike;
                    bool m_objLikeHasBeenSet;

                    /**
                     * <p>根据实例组ID过滤</p>
                     */
                    std::vector<int64_t> m_instanceGroupIds;
                    bool m_instanceGroupIdsHasBeenSet;

                    /**
                     * <p>根据指标名过滤</p>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTREQUEST_H_
