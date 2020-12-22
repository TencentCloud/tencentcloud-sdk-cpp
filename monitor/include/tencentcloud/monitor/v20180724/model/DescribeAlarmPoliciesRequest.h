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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMPOLICIESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMPOLICIESREQUEST_H_

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
                * DescribeAlarmPolicies请求参数结构体
                */
                class DescribeAlarmPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeAlarmPoliciesRequest();
                    ~DescribeAlarmPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取固定值，为"monitor"
                     * @return Module 固定值，为"monitor"
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定值，为"monitor"
                     * @param Module 固定值，为"monitor"
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取页数，从 1 开始计数，默认 1
                     * @return PageNumber 页数，从 1 开始计数，默认 1
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页数，从 1 开始计数，默认 1
                     * @param PageNumber 页数，从 1 开始计数，默认 1
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页的数量，取值1~100，默认20
                     * @return PageSize 每页的数量，取值1~100，默认20
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页的数量，取值1~100，默认20
                     * @param PageSize 每页的数量，取值1~100，默认20
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取按策略名称模糊搜索
                     * @return PolicyName 按策略名称模糊搜索
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置按策略名称模糊搜索
                     * @param PolicyName 按策略名称模糊搜索
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取根据监控类型过滤 不选默认查所有类型 "MT_QCE"=云产品监控
                     * @return MonitorTypes 根据监控类型过滤 不选默认查所有类型 "MT_QCE"=云产品监控
                     */
                    std::vector<std::string> GetMonitorTypes() const;

                    /**
                     * 设置根据监控类型过滤 不选默认查所有类型 "MT_QCE"=云产品监控
                     * @param MonitorTypes 根据监控类型过滤 不选默认查所有类型 "MT_QCE"=云产品监控
                     */
                    void SetMonitorTypes(const std::vector<std::string>& _monitorTypes);

                    /**
                     * 判断参数 MonitorTypes 是否已赋值
                     * @return MonitorTypes 是否已赋值
                     */
                    bool MonitorTypesHasBeenSet() const;

                    /**
                     * 获取根据命名空间过滤
                     * @return Namespaces 根据命名空间过滤
                     */
                    std::vector<std::string> GetNamespaces() const;

                    /**
                     * 设置根据命名空间过滤
                     * @param Namespaces 根据命名空间过滤
                     */
                    void SetNamespaces(const std::vector<std::string>& _namespaces);

                    /**
                     * 判断参数 Namespaces 是否已赋值
                     * @return Namespaces 是否已赋值
                     */
                    bool NamespacesHasBeenSet() const;

                    /**
                     * 获取告警对象列表
                     * @return Dimensions 告警对象列表
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置告警对象列表
                     * @param Dimensions 告警对象列表
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取根据接收人搜索
                     * @return ReceiverUids 根据接收人搜索
                     */
                    std::vector<int64_t> GetReceiverUids() const;

                    /**
                     * 设置根据接收人搜索
                     * @param ReceiverUids 根据接收人搜索
                     */
                    void SetReceiverUids(const std::vector<int64_t>& _receiverUids);

                    /**
                     * 判断参数 ReceiverUids 是否已赋值
                     * @return ReceiverUids 是否已赋值
                     */
                    bool ReceiverUidsHasBeenSet() const;

                    /**
                     * 获取根据接收组搜索
                     * @return ReceiverGroups 根据接收组搜索
                     */
                    std::vector<int64_t> GetReceiverGroups() const;

                    /**
                     * 设置根据接收组搜索
                     * @param ReceiverGroups 根据接收组搜索
                     */
                    void SetReceiverGroups(const std::vector<int64_t>& _receiverGroups);

                    /**
                     * 判断参数 ReceiverGroups 是否已赋值
                     * @return ReceiverGroups 是否已赋值
                     */
                    bool ReceiverGroupsHasBeenSet() const;

                    /**
                     * 获取根据默认策略筛选 不传展示全部策略 DEFAULT=展示默认策略 NOT_DEFAULT=展示非默认策略
                     * @return PolicyType 根据默认策略筛选 不传展示全部策略 DEFAULT=展示默认策略 NOT_DEFAULT=展示非默认策略
                     */
                    std::vector<std::string> GetPolicyType() const;

                    /**
                     * 设置根据默认策略筛选 不传展示全部策略 DEFAULT=展示默认策略 NOT_DEFAULT=展示非默认策略
                     * @param PolicyType 根据默认策略筛选 不传展示全部策略 DEFAULT=展示默认策略 NOT_DEFAULT=展示非默认策略
                     */
                    void SetPolicyType(const std::vector<std::string>& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return Field 排序字段
                     */
                    std::string GetField() const;

                    /**
                     * 设置排序字段
                     * @param Field 排序字段
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取排序顺序：升序：ASC  降序：DESC
                     * @return Order 排序顺序：升序：ASC  降序：DESC
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序顺序：升序：ASC  降序：DESC
                     * @param Order 排序顺序：升序：ASC  降序：DESC
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取项目id数组
                     * @return ProjectIds 项目id数组
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置项目id数组
                     * @param ProjectIds 项目id数组
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取告警通知id列表
                     * @return NoticeIds 告警通知id列表
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置告警通知id列表
                     * @param NoticeIds 告警通知id列表
                     */
                    void SetNoticeIds(const std::vector<std::string>& _noticeIds);

                    /**
                     * 判断参数 NoticeIds 是否已赋值
                     * @return NoticeIds 是否已赋值
                     */
                    bool NoticeIdsHasBeenSet() const;

                    /**
                     * 获取根据触发条件筛选 不传展示全部策略 STATIC=展示静态阈值策略 DYNAMIC=展示动态阈值策略
                     * @return RuleTypes 根据触发条件筛选 不传展示全部策略 STATIC=展示静态阈值策略 DYNAMIC=展示动态阈值策略
                     */
                    std::vector<std::string> GetRuleTypes() const;

                    /**
                     * 设置根据触发条件筛选 不传展示全部策略 STATIC=展示静态阈值策略 DYNAMIC=展示动态阈值策略
                     * @param RuleTypes 根据触发条件筛选 不传展示全部策略 STATIC=展示静态阈值策略 DYNAMIC=展示动态阈值策略
                     */
                    void SetRuleTypes(const std::vector<std::string>& _ruleTypes);

                    /**
                     * 判断参数 RuleTypes 是否已赋值
                     * @return RuleTypes 是否已赋值
                     */
                    bool RuleTypesHasBeenSet() const;

                    /**
                     * 获取启停，1：启用   0：停止
                     * @return Enable 启停，1：启用   0：停止
                     */
                    std::vector<int64_t> GetEnable() const;

                    /**
                     * 设置启停，1：启用   0：停止
                     * @param Enable 启停，1：启用   0：停止
                     */
                    void SetEnable(const std::vector<int64_t>& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

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
                     * 按策略名称模糊搜索
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 根据监控类型过滤 不选默认查所有类型 "MT_QCE"=云产品监控
                     */
                    std::vector<std::string> m_monitorTypes;
                    bool m_monitorTypesHasBeenSet;

                    /**
                     * 根据命名空间过滤
                     */
                    std::vector<std::string> m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * 告警对象列表
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 根据接收人搜索
                     */
                    std::vector<int64_t> m_receiverUids;
                    bool m_receiverUidsHasBeenSet;

                    /**
                     * 根据接收组搜索
                     */
                    std::vector<int64_t> m_receiverGroups;
                    bool m_receiverGroupsHasBeenSet;

                    /**
                     * 根据默认策略筛选 不传展示全部策略 DEFAULT=展示默认策略 NOT_DEFAULT=展示非默认策略
                     */
                    std::vector<std::string> m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 排序顺序：升序：ASC  降序：DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 项目id数组
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 告警通知id列表
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * 根据触发条件筛选 不传展示全部策略 STATIC=展示静态阈值策略 DYNAMIC=展示动态阈值策略
                     */
                    std::vector<std::string> m_ruleTypes;
                    bool m_ruleTypesHasBeenSet;

                    /**
                     * 启停，1：启用   0：停止
                     */
                    std::vector<int64_t> m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMPOLICIESREQUEST_H_
