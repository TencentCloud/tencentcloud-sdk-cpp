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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMHISTORIESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMHISTORIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/MonitorTypeNamespace.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlarmHistories请求参数结构体
                */
                class DescribeAlarmHistoriesRequest : public AbstractModel
                {
                public:
                    DescribeAlarmHistoriesRequest();
                    ~DescribeAlarmHistoriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取固定值，为"monitor"
                     * @return Module 固定值，为"monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定值，为"monitor"
                     * @param _module 固定值，为"monitor"
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
                     * 获取页数，从 1 开始计数，默认 1
                     * @return PageNumber 页数，从 1 开始计数，默认 1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页数，从 1 开始计数，默认 1
                     * @param _pageNumber 页数，从 1 开始计数，默认 1
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页的数量，取值1~100，默认20
                     * @return PageSize 每页的数量，取值1~100，默认20
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页的数量，取值1~100，默认20
                     * @param _pageSize 每页的数量，取值1~100，默认20
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取默认按首次出现时间倒序排列 "ASC"=正序 "DESC"=逆序
                     * @return Order 默认按首次出现时间倒序排列 "ASC"=正序 "DESC"=逆序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置默认按首次出现时间倒序排列 "ASC"=正序 "DESC"=逆序
                     * @param _order 默认按首次出现时间倒序排列 "ASC"=正序 "DESC"=逆序
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取起始时间，默认一天前的时间戳。对应 `FirstOccurTime` 告警首次出现时间，告警历史的 `FirstOccurTime` 晚于 `StartTime` 才可能被搜索到。
                     * @return StartTime 起始时间，默认一天前的时间戳。对应 `FirstOccurTime` 告警首次出现时间，告警历史的 `FirstOccurTime` 晚于 `StartTime` 才可能被搜索到。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置起始时间，默认一天前的时间戳。对应 `FirstOccurTime` 告警首次出现时间，告警历史的 `FirstOccurTime` 晚于 `StartTime` 才可能被搜索到。
                     * @param _startTime 起始时间，默认一天前的时间戳。对应 `FirstOccurTime` 告警首次出现时间，告警历史的 `FirstOccurTime` 晚于 `StartTime` 才可能被搜索到。
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
                     * 获取结束时间，默认当前时间戳。对应 `FirstOccurTime` 告警首次出现时间，告警历史的 `FirstOccurTime` 早于 `EndTime` 才可能被搜索到。
                     * @return EndTime 结束时间，默认当前时间戳。对应 `FirstOccurTime` 告警首次出现时间，告警历史的 `FirstOccurTime` 早于 `EndTime` 才可能被搜索到。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间，默认当前时间戳。对应 `FirstOccurTime` 告警首次出现时间，告警历史的 `FirstOccurTime` 早于 `EndTime` 才可能被搜索到。
                     * @param _endTime 结束时间，默认当前时间戳。对应 `FirstOccurTime` 告警首次出现时间，告警历史的 `FirstOccurTime` 早于 `EndTime` 才可能被搜索到。
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
                     * 获取根据监控类型过滤，不选默认查所有类型。"MT_QCE"=云产品监控，支持的枚举值有："MT_QCE"=云产品监控；"MT_TAW"=应用性能监控；"MT_RUM"=前端性能监控；"MT_PROBE"=云拨测，"MT_TRTC"=实时音视频，
"MT_RUMAPP"=终端性能监控
                     * @return MonitorTypes 根据监控类型过滤，不选默认查所有类型。"MT_QCE"=云产品监控，支持的枚举值有："MT_QCE"=云产品监控；"MT_TAW"=应用性能监控；"MT_RUM"=前端性能监控；"MT_PROBE"=云拨测，"MT_TRTC"=实时音视频，
"MT_RUMAPP"=终端性能监控
                     * 
                     */
                    std::vector<std::string> GetMonitorTypes() const;

                    /**
                     * 设置根据监控类型过滤，不选默认查所有类型。"MT_QCE"=云产品监控，支持的枚举值有："MT_QCE"=云产品监控；"MT_TAW"=应用性能监控；"MT_RUM"=前端性能监控；"MT_PROBE"=云拨测，"MT_TRTC"=实时音视频，
"MT_RUMAPP"=终端性能监控
                     * @param _monitorTypes 根据监控类型过滤，不选默认查所有类型。"MT_QCE"=云产品监控，支持的枚举值有："MT_QCE"=云产品监控；"MT_TAW"=应用性能监控；"MT_RUM"=前端性能监控；"MT_PROBE"=云拨测，"MT_TRTC"=实时音视频，
"MT_RUMAPP"=终端性能监控
                     * 
                     */
                    void SetMonitorTypes(const std::vector<std::string>& _monitorTypes);

                    /**
                     * 判断参数 MonitorTypes 是否已赋值
                     * @return MonitorTypes 是否已赋值
                     * 
                     */
                    bool MonitorTypesHasBeenSet() const;

                    /**
                     * 获取根据告警对象过滤 字符串模糊搜索
                     * @return AlarmObject 根据告警对象过滤 字符串模糊搜索
                     * 
                     */
                    std::string GetAlarmObject() const;

                    /**
                     * 设置根据告警对象过滤 字符串模糊搜索
                     * @param _alarmObject 根据告警对象过滤 字符串模糊搜索
                     * 
                     */
                    void SetAlarmObject(const std::string& _alarmObject);

                    /**
                     * 判断参数 AlarmObject 是否已赋值
                     * @return AlarmObject 是否已赋值
                     * 
                     */
                    bool AlarmObjectHasBeenSet() const;

                    /**
                     * 获取根据告警状态过滤 ALARM=未恢复 OK=已恢复 NO_CONF=已失效 NO_DATA=数据不足，不选默认查所有
                     * @return AlarmStatus 根据告警状态过滤 ALARM=未恢复 OK=已恢复 NO_CONF=已失效 NO_DATA=数据不足，不选默认查所有
                     * 
                     */
                    std::vector<std::string> GetAlarmStatus() const;

                    /**
                     * 设置根据告警状态过滤 ALARM=未恢复 OK=已恢复 NO_CONF=已失效 NO_DATA=数据不足，不选默认查所有
                     * @param _alarmStatus 根据告警状态过滤 ALARM=未恢复 OK=已恢复 NO_CONF=已失效 NO_DATA=数据不足，不选默认查所有
                     * 
                     */
                    void SetAlarmStatus(const std::vector<std::string>& _alarmStatus);

                    /**
                     * 判断参数 AlarmStatus 是否已赋值
                     * @return AlarmStatus 是否已赋值
                     * 
                     */
                    bool AlarmStatusHasBeenSet() const;

                    /**
                     * 获取根据项目ID过滤，-1=无项目 0=默认项目
可在此页面查询 [项目管理](https://console.cloud.tencent.com/project)
                     * @return ProjectIds 根据项目ID过滤，-1=无项目 0=默认项目
可在此页面查询 [项目管理](https://console.cloud.tencent.com/project)
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置根据项目ID过滤，-1=无项目 0=默认项目
可在此页面查询 [项目管理](https://console.cloud.tencent.com/project)
                     * @param _projectIds 根据项目ID过滤，-1=无项目 0=默认项目
可在此页面查询 [项目管理](https://console.cloud.tencent.com/project)
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
                     * 获取根据策略类型过滤，策略类型是监控类型之下的概念，在这里两者都需要传入，例如 `[{"MonitorType": "MT_QCE", "Namespace": "cvm_device"}]`
可使用 [查询所有名字空间 DescribeAllNamespaces](https://cloud.tencent.com/document/product/248/48683) 接口查询
                     * @return Namespaces 根据策略类型过滤，策略类型是监控类型之下的概念，在这里两者都需要传入，例如 `[{"MonitorType": "MT_QCE", "Namespace": "cvm_device"}]`
可使用 [查询所有名字空间 DescribeAllNamespaces](https://cloud.tencent.com/document/product/248/48683) 接口查询
                     * 
                     */
                    std::vector<MonitorTypeNamespace> GetNamespaces() const;

                    /**
                     * 设置根据策略类型过滤，策略类型是监控类型之下的概念，在这里两者都需要传入，例如 `[{"MonitorType": "MT_QCE", "Namespace": "cvm_device"}]`
可使用 [查询所有名字空间 DescribeAllNamespaces](https://cloud.tencent.com/document/product/248/48683) 接口查询
                     * @param _namespaces 根据策略类型过滤，策略类型是监控类型之下的概念，在这里两者都需要传入，例如 `[{"MonitorType": "MT_QCE", "Namespace": "cvm_device"}]`
可使用 [查询所有名字空间 DescribeAllNamespaces](https://cloud.tencent.com/document/product/248/48683) 接口查询
                     * 
                     */
                    void SetNamespaces(const std::vector<MonitorTypeNamespace>& _namespaces);

                    /**
                     * 判断参数 Namespaces 是否已赋值
                     * @return Namespaces 是否已赋值
                     * 
                     */
                    bool NamespacesHasBeenSet() const;

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

                    /**
                     * 获取根据策略名称模糊搜索,不支持大小写区分
                     * @return PolicyName 根据策略名称模糊搜索,不支持大小写区分
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置根据策略名称模糊搜索,不支持大小写区分
                     * @param _policyName 根据策略名称模糊搜索,不支持大小写区分
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取根据告警内容模糊搜索
                     * @return Content 根据告警内容模糊搜索
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置根据告警内容模糊搜索
                     * @param _content 根据告警内容模糊搜索
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取根据接收人搜索，可以使用“访问管理”的 [拉取子用户 ListUsers](https://cloud.tencent.com/document/product/598/34587) 接口获取用户列表 或 [查询子用户 GetUser](https://cloud.tencent.com/document/product/598/34590) 接口查询子用户详情，此处填入返回结果中的 `Uid` 字段
                     * @return ReceiverUids 根据接收人搜索，可以使用“访问管理”的 [拉取子用户 ListUsers](https://cloud.tencent.com/document/product/598/34587) 接口获取用户列表 或 [查询子用户 GetUser](https://cloud.tencent.com/document/product/598/34590) 接口查询子用户详情，此处填入返回结果中的 `Uid` 字段
                     * 
                     */
                    std::vector<int64_t> GetReceiverUids() const;

                    /**
                     * 设置根据接收人搜索，可以使用“访问管理”的 [拉取子用户 ListUsers](https://cloud.tencent.com/document/product/598/34587) 接口获取用户列表 或 [查询子用户 GetUser](https://cloud.tencent.com/document/product/598/34590) 接口查询子用户详情，此处填入返回结果中的 `Uid` 字段
                     * @param _receiverUids 根据接收人搜索，可以使用“访问管理”的 [拉取子用户 ListUsers](https://cloud.tencent.com/document/product/598/34587) 接口获取用户列表 或 [查询子用户 GetUser](https://cloud.tencent.com/document/product/598/34590) 接口查询子用户详情，此处填入返回结果中的 `Uid` 字段
                     * 
                     */
                    void SetReceiverUids(const std::vector<int64_t>& _receiverUids);

                    /**
                     * 判断参数 ReceiverUids 是否已赋值
                     * @return ReceiverUids 是否已赋值
                     * 
                     */
                    bool ReceiverUidsHasBeenSet() const;

                    /**
                     * 获取根据接收组搜索，可以使用“访问管理”的 [查询用户组列表 ListGroups](https://cloud.tencent.com/document/product/598/34589) 接口获取用户组列表 或 [列出用户关联的用户组 ListGroupsForUser](https://cloud.tencent.com/document/product/598/34588) 查询某个子用户所在的用户组列表 ，此处填入返回结果中的 `GroupId ` 字段
                     * @return ReceiverGroups 根据接收组搜索，可以使用“访问管理”的 [查询用户组列表 ListGroups](https://cloud.tencent.com/document/product/598/34589) 接口获取用户组列表 或 [列出用户关联的用户组 ListGroupsForUser](https://cloud.tencent.com/document/product/598/34588) 查询某个子用户所在的用户组列表 ，此处填入返回结果中的 `GroupId ` 字段
                     * 
                     */
                    std::vector<int64_t> GetReceiverGroups() const;

                    /**
                     * 设置根据接收组搜索，可以使用“访问管理”的 [查询用户组列表 ListGroups](https://cloud.tencent.com/document/product/598/34589) 接口获取用户组列表 或 [列出用户关联的用户组 ListGroupsForUser](https://cloud.tencent.com/document/product/598/34588) 查询某个子用户所在的用户组列表 ，此处填入返回结果中的 `GroupId ` 字段
                     * @param _receiverGroups 根据接收组搜索，可以使用“访问管理”的 [查询用户组列表 ListGroups](https://cloud.tencent.com/document/product/598/34589) 接口获取用户组列表 或 [列出用户关联的用户组 ListGroupsForUser](https://cloud.tencent.com/document/product/598/34588) 查询某个子用户所在的用户组列表 ，此处填入返回结果中的 `GroupId ` 字段
                     * 
                     */
                    void SetReceiverGroups(const std::vector<int64_t>& _receiverGroups);

                    /**
                     * 判断参数 ReceiverGroups 是否已赋值
                     * @return ReceiverGroups 是否已赋值
                     * 
                     */
                    bool ReceiverGroupsHasBeenSet() const;

                    /**
                     * 获取根据告警策略 Id 列表搜索
                     * @return PolicyIds 根据告警策略 Id 列表搜索
                     * 
                     */
                    std::vector<std::string> GetPolicyIds() const;

                    /**
                     * 设置根据告警策略 Id 列表搜索
                     * @param _policyIds 根据告警策略 Id 列表搜索
                     * 
                     */
                    void SetPolicyIds(const std::vector<std::string>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取告警等级,取值范围：Remind、Serious、Warn
                     * @return AlarmLevels 告警等级,取值范围：Remind、Serious、Warn
                     * 
                     */
                    std::vector<std::string> GetAlarmLevels() const;

                    /**
                     * 设置告警等级,取值范围：Remind、Serious、Warn
                     * @param _alarmLevels 告警等级,取值范围：Remind、Serious、Warn
                     * 
                     */
                    void SetAlarmLevels(const std::vector<std::string>& _alarmLevels);

                    /**
                     * 判断参数 AlarmLevels 是否已赋值
                     * @return AlarmLevels 是否已赋值
                     * 
                     */
                    bool AlarmLevelsHasBeenSet() const;

                    /**
                     * 获取收敛历史的唯一id
                     * @return ConvergenceHistoryIDs 收敛历史的唯一id
                     * 
                     */
                    std::vector<std::string> GetConvergenceHistoryIDs() const;

                    /**
                     * 设置收敛历史的唯一id
                     * @param _convergenceHistoryIDs 收敛历史的唯一id
                     * 
                     */
                    void SetConvergenceHistoryIDs(const std::vector<std::string>& _convergenceHistoryIDs);

                    /**
                     * 判断参数 ConvergenceHistoryIDs 是否已赋值
                     * @return ConvergenceHistoryIDs 是否已赋值
                     * 
                     */
                    bool ConvergenceHistoryIDsHasBeenSet() const;

                    /**
                     * 获取告警类型
                     * @return AlarmTypes 告警类型
                     * 
                     */
                    std::vector<std::string> GetAlarmTypes() const;

                    /**
                     * 设置告警类型
                     * @param _alarmTypes 告警类型
                     * 
                     */
                    void SetAlarmTypes(const std::vector<std::string>& _alarmTypes);

                    /**
                     * 判断参数 AlarmTypes 是否已赋值
                     * @return AlarmTypes 是否已赋值
                     * 
                     */
                    bool AlarmTypesHasBeenSet() const;

                private:

                    /**
                     * 固定值，为"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 页数，从 1 开始计数，默认 1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页的数量，取值1~100，默认20
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 默认按首次出现时间倒序排列 "ASC"=正序 "DESC"=逆序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 起始时间，默认一天前的时间戳。对应 `FirstOccurTime` 告警首次出现时间，告警历史的 `FirstOccurTime` 晚于 `StartTime` 才可能被搜索到。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，默认当前时间戳。对应 `FirstOccurTime` 告警首次出现时间，告警历史的 `FirstOccurTime` 早于 `EndTime` 才可能被搜索到。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 根据监控类型过滤，不选默认查所有类型。"MT_QCE"=云产品监控，支持的枚举值有："MT_QCE"=云产品监控；"MT_TAW"=应用性能监控；"MT_RUM"=前端性能监控；"MT_PROBE"=云拨测，"MT_TRTC"=实时音视频，
"MT_RUMAPP"=终端性能监控
                     */
                    std::vector<std::string> m_monitorTypes;
                    bool m_monitorTypesHasBeenSet;

                    /**
                     * 根据告警对象过滤 字符串模糊搜索
                     */
                    std::string m_alarmObject;
                    bool m_alarmObjectHasBeenSet;

                    /**
                     * 根据告警状态过滤 ALARM=未恢复 OK=已恢复 NO_CONF=已失效 NO_DATA=数据不足，不选默认查所有
                     */
                    std::vector<std::string> m_alarmStatus;
                    bool m_alarmStatusHasBeenSet;

                    /**
                     * 根据项目ID过滤，-1=无项目 0=默认项目
可在此页面查询 [项目管理](https://console.cloud.tencent.com/project)
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 根据实例组ID过滤
                     */
                    std::vector<int64_t> m_instanceGroupIds;
                    bool m_instanceGroupIdsHasBeenSet;

                    /**
                     * 根据策略类型过滤，策略类型是监控类型之下的概念，在这里两者都需要传入，例如 `[{"MonitorType": "MT_QCE", "Namespace": "cvm_device"}]`
可使用 [查询所有名字空间 DescribeAllNamespaces](https://cloud.tencent.com/document/product/248/48683) 接口查询
                     */
                    std::vector<MonitorTypeNamespace> m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * 根据指标名过滤
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * 根据策略名称模糊搜索,不支持大小写区分
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 根据告警内容模糊搜索
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 根据接收人搜索，可以使用“访问管理”的 [拉取子用户 ListUsers](https://cloud.tencent.com/document/product/598/34587) 接口获取用户列表 或 [查询子用户 GetUser](https://cloud.tencent.com/document/product/598/34590) 接口查询子用户详情，此处填入返回结果中的 `Uid` 字段
                     */
                    std::vector<int64_t> m_receiverUids;
                    bool m_receiverUidsHasBeenSet;

                    /**
                     * 根据接收组搜索，可以使用“访问管理”的 [查询用户组列表 ListGroups](https://cloud.tencent.com/document/product/598/34589) 接口获取用户组列表 或 [列出用户关联的用户组 ListGroupsForUser](https://cloud.tencent.com/document/product/598/34588) 查询某个子用户所在的用户组列表 ，此处填入返回结果中的 `GroupId ` 字段
                     */
                    std::vector<int64_t> m_receiverGroups;
                    bool m_receiverGroupsHasBeenSet;

                    /**
                     * 根据告警策略 Id 列表搜索
                     */
                    std::vector<std::string> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * 告警等级,取值范围：Remind、Serious、Warn
                     */
                    std::vector<std::string> m_alarmLevels;
                    bool m_alarmLevelsHasBeenSet;

                    /**
                     * 收敛历史的唯一id
                     */
                    std::vector<std::string> m_convergenceHistoryIDs;
                    bool m_convergenceHistoryIDsHasBeenSet;

                    /**
                     * 告警类型
                     */
                    std::vector<std::string> m_alarmTypes;
                    bool m_alarmTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMHISTORIESREQUEST_H_
