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
                     * 获取根据命名空间过滤，不同策略类型的值详见
[策略类型列表](https://cloud.tencent.com/document/product/248/50397)
                     * @return Namespaces 根据命名空间过滤，不同策略类型的值详见
[策略类型列表](https://cloud.tencent.com/document/product/248/50397)
                     */
                    std::vector<std::string> GetNamespaces() const;

                    /**
                     * 设置根据命名空间过滤，不同策略类型的值详见
[策略类型列表](https://cloud.tencent.com/document/product/248/50397)
                     * @param Namespaces 根据命名空间过滤，不同策略类型的值详见
[策略类型列表](https://cloud.tencent.com/document/product/248/50397)
                     */
                    void SetNamespaces(const std::vector<std::string>& _namespaces);

                    /**
                     * 判断参数 Namespaces 是否已赋值
                     * @return Namespaces 是否已赋值
                     */
                    bool NamespacesHasBeenSet() const;

                    /**
                     * 获取告警对象列表，外层数组，对应多个实例
内层数组，每个数组对应一个实例，里面的object对应的是这个实例的维度信息。格式为
[
	[{"name":"unInstanceId","value":"ins-qr888845g"}],
	[{"name":"unInstanceId","value":"ins-qr8d555g"}]
	...
]
不同云产品参数示例详见
[维度信息Dimensions列表](https://cloud.tencent.com/document/product/248/50397)
                     * @return Dimensions 告警对象列表，外层数组，对应多个实例
内层数组，每个数组对应一个实例，里面的object对应的是这个实例的维度信息。格式为
[
	[{"name":"unInstanceId","value":"ins-qr888845g"}],
	[{"name":"unInstanceId","value":"ins-qr8d555g"}]
	...
]
不同云产品参数示例详见
[维度信息Dimensions列表](https://cloud.tencent.com/document/product/248/50397)
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置告警对象列表，外层数组，对应多个实例
内层数组，每个数组对应一个实例，里面的object对应的是这个实例的维度信息。格式为
[
	[{"name":"unInstanceId","value":"ins-qr888845g"}],
	[{"name":"unInstanceId","value":"ins-qr8d555g"}]
	...
]
不同云产品参数示例详见
[维度信息Dimensions列表](https://cloud.tencent.com/document/product/248/50397)
                     * @param Dimensions 告警对象列表，外层数组，对应多个实例
内层数组，每个数组对应一个实例，里面的object对应的是这个实例的维度信息。格式为
[
	[{"name":"unInstanceId","value":"ins-qr888845g"}],
	[{"name":"unInstanceId","value":"ins-qr8d555g"}]
	...
]
不同云产品参数示例详见
[维度信息Dimensions列表](https://cloud.tencent.com/document/product/248/50397)
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取根据接收人的uid搜索，需要调用访问管理的api查询。详见
[拉取子用户](https://cloud.tencent.com/document/product/598/34587)
                     * @return ReceiverUids 根据接收人的uid搜索，需要调用访问管理的api查询。详见
[拉取子用户](https://cloud.tencent.com/document/product/598/34587)
                     */
                    std::vector<int64_t> GetReceiverUids() const;

                    /**
                     * 设置根据接收人的uid搜索，需要调用访问管理的api查询。详见
[拉取子用户](https://cloud.tencent.com/document/product/598/34587)
                     * @param ReceiverUids 根据接收人的uid搜索，需要调用访问管理的api查询。详见
[拉取子用户](https://cloud.tencent.com/document/product/598/34587)
                     */
                    void SetReceiverUids(const std::vector<int64_t>& _receiverUids);

                    /**
                     * 判断参数 ReceiverUids 是否已赋值
                     * @return ReceiverUids 是否已赋值
                     */
                    bool ReceiverUidsHasBeenSet() const;

                    /**
                     * 获取根据接收组的uid搜索，需要调用访问管理的api查询，详见
[查询用户组列表](https://cloud.tencent.com/document/product/598/34589)
                     * @return ReceiverGroups 根据接收组的uid搜索，需要调用访问管理的api查询，详见
[查询用户组列表](https://cloud.tencent.com/document/product/598/34589)
                     */
                    std::vector<int64_t> GetReceiverGroups() const;

                    /**
                     * 设置根据接收组的uid搜索，需要调用访问管理的api查询，详见
[查询用户组列表](https://cloud.tencent.com/document/product/598/34589)
                     * @param ReceiverGroups 根据接收组的uid搜索，需要调用访问管理的api查询，详见
[查询用户组列表](https://cloud.tencent.com/document/product/598/34589)
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
                     * 获取排序字段，例如按照最后修改时间排序，Field: "UpdateTime"
                     * @return Field 排序字段，例如按照最后修改时间排序，Field: "UpdateTime"
                     */
                    std::string GetField() const;

                    /**
                     * 设置排序字段，例如按照最后修改时间排序，Field: "UpdateTime"
                     * @param Field 排序字段，例如按照最后修改时间排序，Field: "UpdateTime"
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
                     * 获取策略所属项目的id数组，可在此页面查看
[项目管理](https://console.cloud.tencent.com/project)
                     * @return ProjectIds 策略所属项目的id数组，可在此页面查看
[项目管理](https://console.cloud.tencent.com/project)
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置策略所属项目的id数组，可在此页面查看
[项目管理](https://console.cloud.tencent.com/project)
                     * @param ProjectIds 策略所属项目的id数组，可在此页面查看
[项目管理](https://console.cloud.tencent.com/project)
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取通知模版的id列表，可查询通知模版列表获取。
[查询通知模板列表](https://cloud.tencent.com/document/product/248/51280)
                     * @return NoticeIds 通知模版的id列表，可查询通知模版列表获取。
[查询通知模板列表](https://cloud.tencent.com/document/product/248/51280)
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置通知模版的id列表，可查询通知模版列表获取。
[查询通知模板列表](https://cloud.tencent.com/document/product/248/51280)
                     * @param NoticeIds 通知模版的id列表，可查询通知模版列表获取。
[查询通知模板列表](https://cloud.tencent.com/document/product/248/51280)
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
                     * 获取告警启停筛选，[1]：启用   [0]：停止，全部[0, 1]
                     * @return Enable 告警启停筛选，[1]：启用   [0]：停止，全部[0, 1]
                     */
                    std::vector<int64_t> GetEnable() const;

                    /**
                     * 设置告警启停筛选，[1]：启用   [0]：停止，全部[0, 1]
                     * @param Enable 告警启停筛选，[1]：启用   [0]：停止，全部[0, 1]
                     */
                    void SetEnable(const std::vector<int64_t>& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取是否未配置通知规则，1：未配置，0：配置
                     * @return NotBindingNoticeRule 是否未配置通知规则，1：未配置，0：配置
                     */
                    int64_t GetNotBindingNoticeRule() const;

                    /**
                     * 设置是否未配置通知规则，1：未配置，0：配置
                     * @param NotBindingNoticeRule 是否未配置通知规则，1：未配置，0：配置
                     */
                    void SetNotBindingNoticeRule(const int64_t& _notBindingNoticeRule);

                    /**
                     * 判断参数 NotBindingNoticeRule 是否已赋值
                     * @return NotBindingNoticeRule 是否已赋值
                     */
                    bool NotBindingNoticeRuleHasBeenSet() const;

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
                     * 根据命名空间过滤，不同策略类型的值详见
[策略类型列表](https://cloud.tencent.com/document/product/248/50397)
                     */
                    std::vector<std::string> m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * 告警对象列表，外层数组，对应多个实例
内层数组，每个数组对应一个实例，里面的object对应的是这个实例的维度信息。格式为
[
	[{"name":"unInstanceId","value":"ins-qr888845g"}],
	[{"name":"unInstanceId","value":"ins-qr8d555g"}]
	...
]
不同云产品参数示例详见
[维度信息Dimensions列表](https://cloud.tencent.com/document/product/248/50397)
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 根据接收人的uid搜索，需要调用访问管理的api查询。详见
[拉取子用户](https://cloud.tencent.com/document/product/598/34587)
                     */
                    std::vector<int64_t> m_receiverUids;
                    bool m_receiverUidsHasBeenSet;

                    /**
                     * 根据接收组的uid搜索，需要调用访问管理的api查询，详见
[查询用户组列表](https://cloud.tencent.com/document/product/598/34589)
                     */
                    std::vector<int64_t> m_receiverGroups;
                    bool m_receiverGroupsHasBeenSet;

                    /**
                     * 根据默认策略筛选 不传展示全部策略 DEFAULT=展示默认策略 NOT_DEFAULT=展示非默认策略
                     */
                    std::vector<std::string> m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 排序字段，例如按照最后修改时间排序，Field: "UpdateTime"
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 排序顺序：升序：ASC  降序：DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 策略所属项目的id数组，可在此页面查看
[项目管理](https://console.cloud.tencent.com/project)
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 通知模版的id列表，可查询通知模版列表获取。
[查询通知模板列表](https://cloud.tencent.com/document/product/248/51280)
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * 根据触发条件筛选 不传展示全部策略 STATIC=展示静态阈值策略 DYNAMIC=展示动态阈值策略
                     */
                    std::vector<std::string> m_ruleTypes;
                    bool m_ruleTypesHasBeenSet;

                    /**
                     * 告警启停筛选，[1]：启用   [0]：停止，全部[0, 1]
                     */
                    std::vector<int64_t> m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 是否未配置通知规则，1：未配置，0：配置
                     */
                    int64_t m_notBindingNoticeRule;
                    bool m_notBindingNoticeRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMPOLICIESREQUEST_H_
