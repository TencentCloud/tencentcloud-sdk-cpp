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
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyTriggerTask.h>
#include <tencentcloud/monitor/v20180724/model/Tag.h>


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
                     * 获取按策略名称模糊搜索
                     * @return PolicyName 按策略名称模糊搜索
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置按策略名称模糊搜索
                     * @param _policyName 按策略名称模糊搜索
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
                     * 获取根据监控类型过滤 不选默认查所有类型 "MT_QCE"=云产品监控,当Dimension不为空时，该项为必填项
                     * @return MonitorTypes 根据监控类型过滤 不选默认查所有类型 "MT_QCE"=云产品监控,当Dimension不为空时，该项为必填项
                     * 
                     */
                    std::vector<std::string> GetMonitorTypes() const;

                    /**
                     * 设置根据监控类型过滤 不选默认查所有类型 "MT_QCE"=云产品监控,当Dimension不为空时，该项为必填项
                     * @param _monitorTypes 根据监控类型过滤 不选默认查所有类型 "MT_QCE"=云产品监控,当Dimension不为空时，该项为必填项
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
                     * 获取根据命名空间过滤，不同策略类型的值详见
[策略类型列表](https://cloud.tencent.com/document/product/248/50397)当Dimension不为空时，该项为必填项
                     * @return Namespaces 根据命名空间过滤，不同策略类型的值详见
[策略类型列表](https://cloud.tencent.com/document/product/248/50397)当Dimension不为空时，该项为必填项
                     * 
                     */
                    std::vector<std::string> GetNamespaces() const;

                    /**
                     * 设置根据命名空间过滤，不同策略类型的值详见
[策略类型列表](https://cloud.tencent.com/document/product/248/50397)当Dimension不为空时，该项为必填项
                     * @param _namespaces 根据命名空间过滤，不同策略类型的值详见
[策略类型列表](https://cloud.tencent.com/document/product/248/50397)当Dimension不为空时，该项为必填项
                     * 
                     */
                    void SetNamespaces(const std::vector<std::string>& _namespaces);

                    /**
                     * 判断参数 Namespaces 是否已赋值
                     * @return Namespaces 是否已赋值
                     * 
                     */
                    bool NamespacesHasBeenSet() const;

                    /**
                     * 获取告警对象列表，JSON 字符串。外层数组，对应多个实例，内层为对象的维度。例如“云服务器-基础监控”可写为：`[[{"name":"unInstanceId","value":"ins-qr888845g"}]]`具体也可以参考下方的示例 2。不同云产品参数示例详见 [维度信息Dimensions列表](https://cloud.tencent.com/document/product/248/50397)注意：如果NeedCorrespondence传入1，即需要返回策略与实例对应关系，请传入不多于20个告警对象维度，否则容易请求超时
                     * @return Dimensions 告警对象列表，JSON 字符串。外层数组，对应多个实例，内层为对象的维度。例如“云服务器-基础监控”可写为：`[[{"name":"unInstanceId","value":"ins-qr888845g"}]]`具体也可以参考下方的示例 2。不同云产品参数示例详见 [维度信息Dimensions列表](https://cloud.tencent.com/document/product/248/50397)注意：如果NeedCorrespondence传入1，即需要返回策略与实例对应关系，请传入不多于20个告警对象维度，否则容易请求超时
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置告警对象列表，JSON 字符串。外层数组，对应多个实例，内层为对象的维度。例如“云服务器-基础监控”可写为：`[[{"name":"unInstanceId","value":"ins-qr888845g"}]]`具体也可以参考下方的示例 2。不同云产品参数示例详见 [维度信息Dimensions列表](https://cloud.tencent.com/document/product/248/50397)注意：如果NeedCorrespondence传入1，即需要返回策略与实例对应关系，请传入不多于20个告警对象维度，否则容易请求超时
                     * @param _dimensions 告警对象列表，JSON 字符串。外层数组，对应多个实例，内层为对象的维度。例如“云服务器-基础监控”可写为：`[[{"name":"unInstanceId","value":"ins-qr888845g"}]]`具体也可以参考下方的示例 2。不同云产品参数示例详见 [维度信息Dimensions列表](https://cloud.tencent.com/document/product/248/50397)注意：如果NeedCorrespondence传入1，即需要返回策略与实例对应关系，请传入不多于20个告警对象维度，否则容易请求超时
                     * 
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

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
                     * 获取根据默认策略筛选 不传展示全部策略 DEFAULT=展示默认策略 NOT_DEFAULT=展示非默认策略
                     * @return PolicyType 根据默认策略筛选 不传展示全部策略 DEFAULT=展示默认策略 NOT_DEFAULT=展示非默认策略
                     * 
                     */
                    std::vector<std::string> GetPolicyType() const;

                    /**
                     * 设置根据默认策略筛选 不传展示全部策略 DEFAULT=展示默认策略 NOT_DEFAULT=展示非默认策略
                     * @param _policyType 根据默认策略筛选 不传展示全部策略 DEFAULT=展示默认策略 NOT_DEFAULT=展示非默认策略
                     * 
                     */
                    void SetPolicyType(const std::vector<std::string>& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取排序字段，例如按照最后修改时间排序，Field: "UpdateTime"
                     * @return Field 排序字段，例如按照最后修改时间排序，Field: "UpdateTime"
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置排序字段，例如按照最后修改时间排序，Field: "UpdateTime"
                     * @param _field 排序字段，例如按照最后修改时间排序，Field: "UpdateTime"
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取排序顺序：升序：ASC  降序：DESC
                     * @return Order 排序顺序：升序：ASC  降序：DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序顺序：升序：ASC  降序：DESC
                     * @param _order 排序顺序：升序：ASC  降序：DESC
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
                     * 获取策略所属项目的id数组，可在此页面查看
[项目管理](https://console.cloud.tencent.com/project)
                     * @return ProjectIds 策略所属项目的id数组，可在此页面查看
[项目管理](https://console.cloud.tencent.com/project)
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置策略所属项目的id数组，可在此页面查看
[项目管理](https://console.cloud.tencent.com/project)
                     * @param _projectIds 策略所属项目的id数组，可在此页面查看
[项目管理](https://console.cloud.tencent.com/project)
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
                     * 获取通知模板的id列表，可查询通知模板列表获取。
可使用 [查询通知模板列表](https://cloud.tencent.com/document/product/248/51280) 接口查询。
                     * @return NoticeIds 通知模板的id列表，可查询通知模板列表获取。
可使用 [查询通知模板列表](https://cloud.tencent.com/document/product/248/51280) 接口查询。
                     * 
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置通知模板的id列表，可查询通知模板列表获取。
可使用 [查询通知模板列表](https://cloud.tencent.com/document/product/248/51280) 接口查询。
                     * @param _noticeIds 通知模板的id列表，可查询通知模板列表获取。
可使用 [查询通知模板列表](https://cloud.tencent.com/document/product/248/51280) 接口查询。
                     * 
                     */
                    void SetNoticeIds(const std::vector<std::string>& _noticeIds);

                    /**
                     * 判断参数 NoticeIds 是否已赋值
                     * @return NoticeIds 是否已赋值
                     * 
                     */
                    bool NoticeIdsHasBeenSet() const;

                    /**
                     * 获取根据触发条件筛选 不传展示全部策略 STATIC=展示静态阈值策略 DYNAMIC=展示动态阈值策略
                     * @return RuleTypes 根据触发条件筛选 不传展示全部策略 STATIC=展示静态阈值策略 DYNAMIC=展示动态阈值策略
                     * 
                     */
                    std::vector<std::string> GetRuleTypes() const;

                    /**
                     * 设置根据触发条件筛选 不传展示全部策略 STATIC=展示静态阈值策略 DYNAMIC=展示动态阈值策略
                     * @param _ruleTypes 根据触发条件筛选 不传展示全部策略 STATIC=展示静态阈值策略 DYNAMIC=展示动态阈值策略
                     * 
                     */
                    void SetRuleTypes(const std::vector<std::string>& _ruleTypes);

                    /**
                     * 判断参数 RuleTypes 是否已赋值
                     * @return RuleTypes 是否已赋值
                     * 
                     */
                    bool RuleTypesHasBeenSet() const;

                    /**
                     * 获取告警启停筛选，[1]：启用   [0]：停止，全部[0, 1]
                     * @return Enable 告警启停筛选，[1]：启用   [0]：停止，全部[0, 1]
                     * 
                     */
                    std::vector<int64_t> GetEnable() const;

                    /**
                     * 设置告警启停筛选，[1]：启用   [0]：停止，全部[0, 1]
                     * @param _enable 告警启停筛选，[1]：启用   [0]：停止，全部[0, 1]
                     * 
                     */
                    void SetEnable(const std::vector<int64_t>& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取传 1 查询未配置通知规则的告警策略；不传或传其他数值，查询所有策略。
                     * @return NotBindingNoticeRule 传 1 查询未配置通知规则的告警策略；不传或传其他数值，查询所有策略。
                     * 
                     */
                    int64_t GetNotBindingNoticeRule() const;

                    /**
                     * 设置传 1 查询未配置通知规则的告警策略；不传或传其他数值，查询所有策略。
                     * @param _notBindingNoticeRule 传 1 查询未配置通知规则的告警策略；不传或传其他数值，查询所有策略。
                     * 
                     */
                    void SetNotBindingNoticeRule(const int64_t& _notBindingNoticeRule);

                    /**
                     * 判断参数 NotBindingNoticeRule 是否已赋值
                     * @return NotBindingNoticeRule 是否已赋值
                     * 
                     */
                    bool NotBindingNoticeRuleHasBeenSet() const;

                    /**
                     * 获取实例分组id
                     * @return InstanceGroupId 实例分组id
                     * 
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置实例分组id
                     * @param _instanceGroupId 实例分组id
                     * 
                     */
                    void SetInstanceGroupId(const int64_t& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取是否需要策略与入参过滤维度参数的对应关系，1：是  0：否，默认为0
                     * @return NeedCorrespondence 是否需要策略与入参过滤维度参数的对应关系，1：是  0：否，默认为0
                     * 
                     */
                    int64_t GetNeedCorrespondence() const;

                    /**
                     * 设置是否需要策略与入参过滤维度参数的对应关系，1：是  0：否，默认为0
                     * @param _needCorrespondence 是否需要策略与入参过滤维度参数的对应关系，1：是  0：否，默认为0
                     * 
                     */
                    void SetNeedCorrespondence(const int64_t& _needCorrespondence);

                    /**
                     * 判断参数 NeedCorrespondence 是否已赋值
                     * @return NeedCorrespondence 是否已赋值
                     * 
                     */
                    bool NeedCorrespondenceHasBeenSet() const;

                    /**
                     * 获取按照触发任务（例如弹性伸缩）过滤策略。最多10个
                     * @return TriggerTasks 按照触发任务（例如弹性伸缩）过滤策略。最多10个
                     * 
                     */
                    std::vector<AlarmPolicyTriggerTask> GetTriggerTasks() const;

                    /**
                     * 设置按照触发任务（例如弹性伸缩）过滤策略。最多10个
                     * @param _triggerTasks 按照触发任务（例如弹性伸缩）过滤策略。最多10个
                     * 
                     */
                    void SetTriggerTasks(const std::vector<AlarmPolicyTriggerTask>& _triggerTasks);

                    /**
                     * 判断参数 TriggerTasks 是否已赋值
                     * @return TriggerTasks 是否已赋值
                     * 
                     */
                    bool TriggerTasksHasBeenSet() const;

                    /**
                     * 获取根据一键告警策略筛选 不传展示全部策略 ONECLICK=展示一键告警策略 NOT_ONECLICK=展示非一键告警策略
                     * @return OneClickPolicyType 根据一键告警策略筛选 不传展示全部策略 ONECLICK=展示一键告警策略 NOT_ONECLICK=展示非一键告警策略
                     * 
                     */
                    std::vector<std::string> GetOneClickPolicyType() const;

                    /**
                     * 设置根据一键告警策略筛选 不传展示全部策略 ONECLICK=展示一键告警策略 NOT_ONECLICK=展示非一键告警策略
                     * @param _oneClickPolicyType 根据一键告警策略筛选 不传展示全部策略 ONECLICK=展示一键告警策略 NOT_ONECLICK=展示非一键告警策略
                     * 
                     */
                    void SetOneClickPolicyType(const std::vector<std::string>& _oneClickPolicyType);

                    /**
                     * 判断参数 OneClickPolicyType 是否已赋值
                     * @return OneClickPolicyType 是否已赋值
                     * 
                     */
                    bool OneClickPolicyTypeHasBeenSet() const;

                    /**
                     * 获取返回结果过滤掉绑定全部对象的策略，1代表需要过滤，0则无需过滤
                     * @return NotBindAll 返回结果过滤掉绑定全部对象的策略，1代表需要过滤，0则无需过滤
                     * 
                     */
                    int64_t GetNotBindAll() const;

                    /**
                     * 设置返回结果过滤掉绑定全部对象的策略，1代表需要过滤，0则无需过滤
                     * @param _notBindAll 返回结果过滤掉绑定全部对象的策略，1代表需要过滤，0则无需过滤
                     * 
                     */
                    void SetNotBindAll(const int64_t& _notBindAll);

                    /**
                     * 判断参数 NotBindAll 是否已赋值
                     * @return NotBindAll 是否已赋值
                     * 
                     */
                    bool NotBindAllHasBeenSet() const;

                    /**
                     * 获取返回结果过滤掉关联实例为实例分组的策略，1代表需要过滤，0则无需过滤
                     * @return NotInstanceGroup 返回结果过滤掉关联实例为实例分组的策略，1代表需要过滤，0则无需过滤
                     * 
                     */
                    int64_t GetNotInstanceGroup() const;

                    /**
                     * 设置返回结果过滤掉关联实例为实例分组的策略，1代表需要过滤，0则无需过滤
                     * @param _notInstanceGroup 返回结果过滤掉关联实例为实例分组的策略，1代表需要过滤，0则无需过滤
                     * 
                     */
                    void SetNotInstanceGroup(const int64_t& _notInstanceGroup);

                    /**
                     * 判断参数 NotInstanceGroup 是否已赋值
                     * @return NotInstanceGroup 是否已赋值
                     * 
                     */
                    bool NotInstanceGroupHasBeenSet() const;

                    /**
                     * 获取策略根据标签过滤
                     * @return Tags 策略根据标签过滤
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置策略根据标签过滤
                     * @param _tags 策略根据标签过滤
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取prom实例id，自定义指标策略时会用到
                     * @return PromInsId prom实例id，自定义指标策略时会用到
                     * 
                     */
                    std::string GetPromInsId() const;

                    /**
                     * 设置prom实例id，自定义指标策略时会用到
                     * @param _promInsId prom实例id，自定义指标策略时会用到
                     * 
                     */
                    void SetPromInsId(const std::string& _promInsId);

                    /**
                     * 判断参数 PromInsId 是否已赋值
                     * @return PromInsId 是否已赋值
                     * 
                     */
                    bool PromInsIdHasBeenSet() const;

                    /**
                     * 获取根据排班表搜索
                     * @return ReceiverOnCallFormIDs 根据排班表搜索
                     * 
                     */
                    std::vector<std::string> GetReceiverOnCallFormIDs() const;

                    /**
                     * 设置根据排班表搜索
                     * @param _receiverOnCallFormIDs 根据排班表搜索
                     * 
                     */
                    void SetReceiverOnCallFormIDs(const std::vector<std::string>& _receiverOnCallFormIDs);

                    /**
                     * 判断参数 ReceiverOnCallFormIDs 是否已赋值
                     * @return ReceiverOnCallFormIDs 是否已赋值
                     * 
                     */
                    bool ReceiverOnCallFormIDsHasBeenSet() const;

                    /**
                     * 获取通知内容模板ID筛选
                     * @return NoticeContentTmplIDs 通知内容模板ID筛选
                     * 
                     */
                    std::vector<std::string> GetNoticeContentTmplIDs() const;

                    /**
                     * 设置通知内容模板ID筛选
                     * @param _noticeContentTmplIDs 通知内容模板ID筛选
                     * 
                     */
                    void SetNoticeContentTmplIDs(const std::vector<std::string>& _noticeContentTmplIDs);

                    /**
                     * 判断参数 NoticeContentTmplIDs 是否已赋值
                     * @return NoticeContentTmplIDs 是否已赋值
                     * 
                     */
                    bool NoticeContentTmplIDsHasBeenSet() const;

                    /**
                     * 获取是否为预设策略，1是，0否
                     * @return IsPredefined 是否为预设策略，1是，0否
                     * 
                     */
                    int64_t GetIsPredefined() const;

                    /**
                     * 设置是否为预设策略，1是，0否
                     * @param _isPredefined 是否为预设策略，1是，0否
                     * 
                     */
                    void SetIsPredefined(const int64_t& _isPredefined);

                    /**
                     * 判断参数 IsPredefined 是否已赋值
                     * @return IsPredefined 是否已赋值
                     * 
                     */
                    bool IsPredefinedHasBeenSet() const;

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
                     * 根据监控类型过滤 不选默认查所有类型 "MT_QCE"=云产品监控,当Dimension不为空时，该项为必填项
                     */
                    std::vector<std::string> m_monitorTypes;
                    bool m_monitorTypesHasBeenSet;

                    /**
                     * 根据命名空间过滤，不同策略类型的值详见
[策略类型列表](https://cloud.tencent.com/document/product/248/50397)当Dimension不为空时，该项为必填项
                     */
                    std::vector<std::string> m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * 告警对象列表，JSON 字符串。外层数组，对应多个实例，内层为对象的维度。例如“云服务器-基础监控”可写为：`[[{"name":"unInstanceId","value":"ins-qr888845g"}]]`具体也可以参考下方的示例 2。不同云产品参数示例详见 [维度信息Dimensions列表](https://cloud.tencent.com/document/product/248/50397)注意：如果NeedCorrespondence传入1，即需要返回策略与实例对应关系，请传入不多于20个告警对象维度，否则容易请求超时
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

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
                     * 通知模板的id列表，可查询通知模板列表获取。
可使用 [查询通知模板列表](https://cloud.tencent.com/document/product/248/51280) 接口查询。
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
                     * 传 1 查询未配置通知规则的告警策略；不传或传其他数值，查询所有策略。
                     */
                    int64_t m_notBindingNoticeRule;
                    bool m_notBindingNoticeRuleHasBeenSet;

                    /**
                     * 实例分组id
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 是否需要策略与入参过滤维度参数的对应关系，1：是  0：否，默认为0
                     */
                    int64_t m_needCorrespondence;
                    bool m_needCorrespondenceHasBeenSet;

                    /**
                     * 按照触发任务（例如弹性伸缩）过滤策略。最多10个
                     */
                    std::vector<AlarmPolicyTriggerTask> m_triggerTasks;
                    bool m_triggerTasksHasBeenSet;

                    /**
                     * 根据一键告警策略筛选 不传展示全部策略 ONECLICK=展示一键告警策略 NOT_ONECLICK=展示非一键告警策略
                     */
                    std::vector<std::string> m_oneClickPolicyType;
                    bool m_oneClickPolicyTypeHasBeenSet;

                    /**
                     * 返回结果过滤掉绑定全部对象的策略，1代表需要过滤，0则无需过滤
                     */
                    int64_t m_notBindAll;
                    bool m_notBindAllHasBeenSet;

                    /**
                     * 返回结果过滤掉关联实例为实例分组的策略，1代表需要过滤，0则无需过滤
                     */
                    int64_t m_notInstanceGroup;
                    bool m_notInstanceGroupHasBeenSet;

                    /**
                     * 策略根据标签过滤
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * prom实例id，自定义指标策略时会用到
                     */
                    std::string m_promInsId;
                    bool m_promInsIdHasBeenSet;

                    /**
                     * 根据排班表搜索
                     */
                    std::vector<std::string> m_receiverOnCallFormIDs;
                    bool m_receiverOnCallFormIDsHasBeenSet;

                    /**
                     * 通知内容模板ID筛选
                     */
                    std::vector<std::string> m_noticeContentTmplIDs;
                    bool m_noticeContentTmplIDsHasBeenSet;

                    /**
                     * 是否为预设策略，1是，0否
                     */
                    int64_t m_isPredefined;
                    bool m_isPredefinedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMPOLICIESREQUEST_H_
