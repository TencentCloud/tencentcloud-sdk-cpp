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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETOPOLOGYNEWREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETOPOLOGYNEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Filter.h>
#include <tencentcloud/apm/v20210622/model/Selectors.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTopologyNew请求参数结构体
                */
                class DescribeTopologyNewRequest : public AbstractModel
                {
                public:
                    DescribeTopologyNewRequest();
                    ~DescribeTopologyNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务系统 ID
                     * @return InstanceId 业务系统 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置业务系统 ID
                     * @param _instanceId 业务系统 ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间
                     * @return StartTime 查询开始时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置查询开始时间
                     * @param _startTime 查询开始时间
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
                     * 获取查询结束时间
                     * @return EndTime 查询结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置查询结束时间
                     * @param _endTime 查询结束时间
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
                     * 获取应用名
                     * @return ServiceName 应用名
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置应用名
                     * @param _serviceName 应用名
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取上游层级
                     * @return UpLevel 上游层级
                     * 
                     */
                    int64_t GetUpLevel() const;

                    /**
                     * 设置上游层级
                     * @param _upLevel 上游层级
                     * 
                     */
                    void SetUpLevel(const int64_t& _upLevel);

                    /**
                     * 判断参数 UpLevel 是否已赋值
                     * @return UpLevel 是否已赋值
                     * 
                     */
                    bool UpLevelHasBeenSet() const;

                    /**
                     * 获取应用实例信息
                     * @return ServiceInstance 应用实例信息
                     * 
                     */
                    std::string GetServiceInstance() const;

                    /**
                     * 设置应用实例信息
                     * @param _serviceInstance 应用实例信息
                     * 
                     */
                    void SetServiceInstance(const std::string& _serviceInstance);

                    /**
                     * 判断参数 ServiceInstance 是否已赋值
                     * @return ServiceInstance 是否已赋值
                     * 
                     */
                    bool ServiceInstanceHasBeenSet() const;

                    /**
                     * 获取下游层级
                     * @return DownLevel 下游层级
                     * 
                     */
                    int64_t GetDownLevel() const;

                    /**
                     * 设置下游层级
                     * @param _downLevel 下游层级
                     * 
                     */
                    void SetDownLevel(const int64_t& _downLevel);

                    /**
                     * 判断参数 DownLevel 是否已赋值
                     * @return DownLevel 是否已赋值
                     * 
                     */
                    bool DownLevelHasBeenSet() const;

                    /**
                     * 获取视角
                     * @return View 视角
                     * 
                     */
                    std::string GetView() const;

                    /**
                     * 设置视角
                     * @param _view 视角
                     * 
                     */
                    void SetView(const std::string& _view);

                    /**
                     * 判断参数 View 是否已赋值
                     * @return View 是否已赋值
                     * 
                     */
                    bool ViewHasBeenSet() const;

                    /**
                     * 获取过滤器
                     * @return Filters 过滤器
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器
                     * @param _filters 过滤器
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取表示Topic（MQ拓扑图用）
                     * @return Topic 表示Topic（MQ拓扑图用）
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置表示Topic（MQ拓扑图用）
                     * @param _topic 表示Topic（MQ拓扑图用）
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取视图筛选列表
                     * @return Selectors 视图筛选列表
                     * 
                     */
                    Selectors GetSelectors() const;

                    /**
                     * 设置视图筛选列表
                     * @param _selectors 视图筛选列表
                     * 
                     */
                    void SetSelectors(const Selectors& _selectors);

                    /**
                     * 判断参数 Selectors 是否已赋值
                     * @return Selectors 是否已赋值
                     * 
                     */
                    bool SelectorsHasBeenSet() const;

                    /**
                     * 获取视图ID
                     * @return Id 视图ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置视图ID
                     * @param _id 视图ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取TraceID
                     * @return TraceID TraceID
                     * 
                     */
                    std::string GetTraceID() const;

                    /**
                     * 设置TraceID
                     * @param _traceID TraceID
                     * 
                     */
                    void SetTraceID(const std::string& _traceID);

                    /**
                     * 判断参数 TraceID 是否已赋值
                     * @return TraceID 是否已赋值
                     * 
                     */
                    bool TraceIDHasBeenSet() const;

                    /**
                     * 获取查询top5慢响应节点
                     * @return IsSlowTopFive 查询top5慢响应节点
                     * 
                     */
                    bool GetIsSlowTopFive() const;

                    /**
                     * 设置查询top5慢响应节点
                     * @param _isSlowTopFive 查询top5慢响应节点
                     * 
                     */
                    void SetIsSlowTopFive(const bool& _isSlowTopFive);

                    /**
                     * 判断参数 IsSlowTopFive 是否已赋值
                     * @return IsSlowTopFive 是否已赋值
                     * 
                     */
                    bool IsSlowTopFiveHasBeenSet() const;

                    /**
                     * 获取是否获取资源层信息
                     * @return GetResource 是否获取资源层信息
                     * 
                     */
                    bool GetGetResource() const;

                    /**
                     * 设置是否获取资源层信息
                     * @param _getResource 是否获取资源层信息
                     * 
                     */
                    void SetGetResource(const bool& _getResource);

                    /**
                     * 判断参数 GetResource 是否已赋值
                     * @return GetResource 是否已赋值
                     * 
                     */
                    bool GetResourceHasBeenSet() const;

                    /**
                     * 获取根据应用标签过滤
                     * @return Tags 根据应用标签过滤
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置根据应用标签过滤
                     * @param _tags 根据应用标签过滤
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取不显示的节点类型
                     * @return Hidden 不显示的节点类型
                     * 
                     */
                    Selectors GetHidden() const;

                    /**
                     * 设置不显示的节点类型
                     * @param _hidden 不显示的节点类型
                     * 
                     */
                    void SetHidden(const Selectors& _hidden);

                    /**
                     * 判断参数 Hidden 是否已赋值
                     * @return Hidden 是否已赋值
                     * 
                     */
                    bool HiddenHasBeenSet() const;

                private:

                    /**
                     * 业务系统 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 查询开始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 应用名
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 上游层级
                     */
                    int64_t m_upLevel;
                    bool m_upLevelHasBeenSet;

                    /**
                     * 应用实例信息
                     */
                    std::string m_serviceInstance;
                    bool m_serviceInstanceHasBeenSet;

                    /**
                     * 下游层级
                     */
                    int64_t m_downLevel;
                    bool m_downLevelHasBeenSet;

                    /**
                     * 视角
                     */
                    std::string m_view;
                    bool m_viewHasBeenSet;

                    /**
                     * 过滤器
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 表示Topic（MQ拓扑图用）
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 视图筛选列表
                     */
                    Selectors m_selectors;
                    bool m_selectorsHasBeenSet;

                    /**
                     * 视图ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * TraceID
                     */
                    std::string m_traceID;
                    bool m_traceIDHasBeenSet;

                    /**
                     * 查询top5慢响应节点
                     */
                    bool m_isSlowTopFive;
                    bool m_isSlowTopFiveHasBeenSet;

                    /**
                     * 是否获取资源层信息
                     */
                    bool m_getResource;
                    bool m_getResourceHasBeenSet;

                    /**
                     * 根据应用标签过滤
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 不显示的节点类型
                     */
                    Selectors m_hidden;
                    bool m_hiddenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETOPOLOGYNEWREQUEST_H_
