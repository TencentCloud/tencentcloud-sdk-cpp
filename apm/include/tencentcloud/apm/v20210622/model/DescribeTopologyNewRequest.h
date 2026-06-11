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
                     * 获取<p>业务系统 ID</p>
                     * @return InstanceId <p>业务系统 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>业务系统 ID</p>
                     * @param _instanceId <p>业务系统 ID</p>
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
                     * 获取<p>查询开始时间</p>
                     * @return StartTime <p>查询开始时间</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>查询开始时间</p>
                     * @param _startTime <p>查询开始时间</p>
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
                     * 获取<p>查询结束时间</p>
                     * @return EndTime <p>查询结束时间</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间</p>
                     * @param _endTime <p>查询结束时间</p>
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
                     * 获取<p>应用名</p>
                     * @return ServiceName <p>应用名</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>应用名</p>
                     * @param _serviceName <p>应用名</p>
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
                     * 获取<p>上游层级</p>
                     * @return UpLevel <p>上游层级</p>
                     * 
                     */
                    int64_t GetUpLevel() const;

                    /**
                     * 设置<p>上游层级</p>
                     * @param _upLevel <p>上游层级</p>
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
                     * 获取<p>应用实例信息</p>
                     * @return ServiceInstance <p>应用实例信息</p>
                     * 
                     */
                    std::string GetServiceInstance() const;

                    /**
                     * 设置<p>应用实例信息</p>
                     * @param _serviceInstance <p>应用实例信息</p>
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
                     * 获取<p>下游层级</p>
                     * @return DownLevel <p>下游层级</p>
                     * 
                     */
                    int64_t GetDownLevel() const;

                    /**
                     * 设置<p>下游层级</p>
                     * @param _downLevel <p>下游层级</p>
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
                     * 获取<p>视角</p>
                     * @return View <p>视角</p>
                     * 
                     */
                    std::string GetView() const;

                    /**
                     * 设置<p>视角</p>
                     * @param _view <p>视角</p>
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
                     * 获取<p>过滤器</p>
                     * @return Filters <p>过滤器</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤器</p>
                     * @param _filters <p>过滤器</p>
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
                     * 获取<p>表示Topic（MQ拓扑图用）</p>
                     * @return Topic <p>表示Topic（MQ拓扑图用）</p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>表示Topic（MQ拓扑图用）</p>
                     * @param _topic <p>表示Topic（MQ拓扑图用）</p>
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
                     * 获取<p>视图筛选列表</p>
                     * @return Selectors <p>视图筛选列表</p>
                     * 
                     */
                    Selectors GetSelectors() const;

                    /**
                     * 设置<p>视图筛选列表</p>
                     * @param _selectors <p>视图筛选列表</p>
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
                     * 获取<p>视图ID</p>
                     * @return Id <p>视图ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>视图ID</p>
                     * @param _id <p>视图ID</p>
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
                     * 获取<p>TraceID</p>
                     * @return TraceID <p>TraceID</p>
                     * 
                     */
                    std::string GetTraceID() const;

                    /**
                     * 设置<p>TraceID</p>
                     * @param _traceID <p>TraceID</p>
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
                     * 获取<p>查询top5慢响应节点</p>
                     * @return IsSlowTopFive <p>查询top5慢响应节点</p>
                     * 
                     */
                    bool GetIsSlowTopFive() const;

                    /**
                     * 设置<p>查询top5慢响应节点</p>
                     * @param _isSlowTopFive <p>查询top5慢响应节点</p>
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
                     * 获取<p>是否获取资源层信息</p>
                     * @return GetResource <p>是否获取资源层信息</p>
                     * 
                     */
                    bool GetGetResource() const;

                    /**
                     * 设置<p>是否获取资源层信息</p>
                     * @param _getResource <p>是否获取资源层信息</p>
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
                     * 获取<p>根据应用标签过滤</p>
                     * @return Tags <p>根据应用标签过滤</p>
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置<p>根据应用标签过滤</p>
                     * @param _tags <p>根据应用标签过滤</p>
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
                     * 获取<p>不显示的节点类型</p>
                     * @return Hidden <p>不显示的节点类型</p>
                     * 
                     */
                    Selectors GetHidden() const;

                    /**
                     * 设置<p>不显示的节点类型</p>
                     * @param _hidden <p>不显示的节点类型</p>
                     * 
                     */
                    void SetHidden(const Selectors& _hidden);

                    /**
                     * 判断参数 Hidden 是否已赋值
                     * @return Hidden 是否已赋值
                     * 
                     */
                    bool HiddenHasBeenSet() const;

                    /**
                     * 获取<p>是否开启云资源关联</p>
                     * @return EnableResourceLink <p>是否开启云资源关联</p>
                     * 
                     */
                    bool GetEnableResourceLink() const;

                    /**
                     * 设置<p>是否开启云资源关联</p>
                     * @param _enableResourceLink <p>是否开启云资源关联</p>
                     * 
                     */
                    void SetEnableResourceLink(const bool& _enableResourceLink);

                    /**
                     * 判断参数 EnableResourceLink 是否已赋值
                     * @return EnableResourceLink 是否已赋值
                     * 
                     */
                    bool EnableResourceLinkHasBeenSet() const;

                private:

                    /**
                     * <p>业务系统 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>查询开始时间</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>应用名</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>上游层级</p>
                     */
                    int64_t m_upLevel;
                    bool m_upLevelHasBeenSet;

                    /**
                     * <p>应用实例信息</p>
                     */
                    std::string m_serviceInstance;
                    bool m_serviceInstanceHasBeenSet;

                    /**
                     * <p>下游层级</p>
                     */
                    int64_t m_downLevel;
                    bool m_downLevelHasBeenSet;

                    /**
                     * <p>视角</p>
                     */
                    std::string m_view;
                    bool m_viewHasBeenSet;

                    /**
                     * <p>过滤器</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>表示Topic（MQ拓扑图用）</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>视图筛选列表</p>
                     */
                    Selectors m_selectors;
                    bool m_selectorsHasBeenSet;

                    /**
                     * <p>视图ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>TraceID</p>
                     */
                    std::string m_traceID;
                    bool m_traceIDHasBeenSet;

                    /**
                     * <p>查询top5慢响应节点</p>
                     */
                    bool m_isSlowTopFive;
                    bool m_isSlowTopFiveHasBeenSet;

                    /**
                     * <p>是否获取资源层信息</p>
                     */
                    bool m_getResource;
                    bool m_getResourceHasBeenSet;

                    /**
                     * <p>根据应用标签过滤</p>
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>不显示的节点类型</p>
                     */
                    Selectors m_hidden;
                    bool m_hiddenHasBeenSet;

                    /**
                     * <p>是否开启云资源关联</p>
                     */
                    bool m_enableResourceLink;
                    bool m_enableResourceLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETOPOLOGYNEWREQUEST_H_
