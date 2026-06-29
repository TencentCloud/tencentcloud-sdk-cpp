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
                     * 获取<p>固定值，为&quot;monitor&quot;</p>
                     * @return Module <p>固定值，为&quot;monitor&quot;</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>固定值，为&quot;monitor&quot;</p>
                     * @param _module <p>固定值，为&quot;monitor&quot;</p>
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
                     * 获取<p>页数，从 1 开始计数，默认 1</p>
                     * @return PageNumber <p>页数，从 1 开始计数，默认 1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页数，从 1 开始计数，默认 1</p>
                     * @param _pageNumber <p>页数，从 1 开始计数，默认 1</p>
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
                     * 获取<p>每页的数量，取值1~100，默认20</p>
                     * @return PageSize <p>每页的数量，取值1~100，默认20</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页的数量，取值1~100，默认20</p>
                     * @param _pageSize <p>每页的数量，取值1~100，默认20</p>
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
                     * 获取<p>按策略名称模糊搜索</p>
                     * @return PolicyName <p>按策略名称模糊搜索</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>按策略名称模糊搜索</p>
                     * @param _policyName <p>按策略名称模糊搜索</p>
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
                     * 获取<p>根据监控类型过滤 不选默认查所有类型 &quot;MT_QCE&quot;=云产品监控,当Dimension不为空时，该项为必填项</p>
                     * @return MonitorTypes <p>根据监控类型过滤 不选默认查所有类型 &quot;MT_QCE&quot;=云产品监控,当Dimension不为空时，该项为必填项</p>
                     * 
                     */
                    std::vector<std::string> GetMonitorTypes() const;

                    /**
                     * 设置<p>根据监控类型过滤 不选默认查所有类型 &quot;MT_QCE&quot;=云产品监控,当Dimension不为空时，该项为必填项</p>
                     * @param _monitorTypes <p>根据监控类型过滤 不选默认查所有类型 &quot;MT_QCE&quot;=云产品监控,当Dimension不为空时，该项为必填项</p>
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
                     * 获取<p>根据命名空间过滤，不同策略类型的值详见<br><a href="https://cloud.tencent.com/document/product/248/50397">策略类型列表</a>当Dimension不为空时，该项为必填项</p>
                     * @return Namespaces <p>根据命名空间过滤，不同策略类型的值详见<br><a href="https://cloud.tencent.com/document/product/248/50397">策略类型列表</a>当Dimension不为空时，该项为必填项</p>
                     * 
                     */
                    std::vector<std::string> GetNamespaces() const;

                    /**
                     * 设置<p>根据命名空间过滤，不同策略类型的值详见<br><a href="https://cloud.tencent.com/document/product/248/50397">策略类型列表</a>当Dimension不为空时，该项为必填项</p>
                     * @param _namespaces <p>根据命名空间过滤，不同策略类型的值详见<br><a href="https://cloud.tencent.com/document/product/248/50397">策略类型列表</a>当Dimension不为空时，该项为必填项</p>
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
                     * 获取<p>告警对象列表，JSON 字符串。外层数组，对应多个实例，内层为对象的维度。例如“云服务器-基础监控”可写为：<code>[[{&quot;name&quot;:&quot;unInstanceId&quot;,&quot;value&quot;:&quot;ins-qr888845g&quot;}]]</code>具体也可以参考下方的示例 2。不同云产品参数示例详见 <a href="https://cloud.tencent.com/document/product/248/50397">维度信息Dimensions列表</a>注意：如果NeedCorrespondence传入1，即需要返回策略与实例对应关系，请传入不多于20个告警对象维度，否则容易请求超时</p>
                     * @return Dimensions <p>告警对象列表，JSON 字符串。外层数组，对应多个实例，内层为对象的维度。例如“云服务器-基础监控”可写为：<code>[[{&quot;name&quot;:&quot;unInstanceId&quot;,&quot;value&quot;:&quot;ins-qr888845g&quot;}]]</code>具体也可以参考下方的示例 2。不同云产品参数示例详见 <a href="https://cloud.tencent.com/document/product/248/50397">维度信息Dimensions列表</a>注意：如果NeedCorrespondence传入1，即需要返回策略与实例对应关系，请传入不多于20个告警对象维度，否则容易请求超时</p>
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置<p>告警对象列表，JSON 字符串。外层数组，对应多个实例，内层为对象的维度。例如“云服务器-基础监控”可写为：<code>[[{&quot;name&quot;:&quot;unInstanceId&quot;,&quot;value&quot;:&quot;ins-qr888845g&quot;}]]</code>具体也可以参考下方的示例 2。不同云产品参数示例详见 <a href="https://cloud.tencent.com/document/product/248/50397">维度信息Dimensions列表</a>注意：如果NeedCorrespondence传入1，即需要返回策略与实例对应关系，请传入不多于20个告警对象维度，否则容易请求超时</p>
                     * @param _dimensions <p>告警对象列表，JSON 字符串。外层数组，对应多个实例，内层为对象的维度。例如“云服务器-基础监控”可写为：<code>[[{&quot;name&quot;:&quot;unInstanceId&quot;,&quot;value&quot;:&quot;ins-qr888845g&quot;}]]</code>具体也可以参考下方的示例 2。不同云产品参数示例详见 <a href="https://cloud.tencent.com/document/product/248/50397">维度信息Dimensions列表</a>注意：如果NeedCorrespondence传入1，即需要返回策略与实例对应关系，请传入不多于20个告警对象维度，否则容易请求超时</p>
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
                     * 获取<p>根据接收人搜索，可以使用“访问管理”的 <a href="https://cloud.tencent.com/document/product/598/34587">拉取子用户 ListUsers</a> 接口获取用户列表 或 <a href="https://cloud.tencent.com/document/product/598/34590">查询子用户 GetUser</a> 接口查询子用户详情，此处填入返回结果中的 <code>Uid</code> 字段</p>
                     * @return ReceiverUids <p>根据接收人搜索，可以使用“访问管理”的 <a href="https://cloud.tencent.com/document/product/598/34587">拉取子用户 ListUsers</a> 接口获取用户列表 或 <a href="https://cloud.tencent.com/document/product/598/34590">查询子用户 GetUser</a> 接口查询子用户详情，此处填入返回结果中的 <code>Uid</code> 字段</p>
                     * 
                     */
                    std::vector<int64_t> GetReceiverUids() const;

                    /**
                     * 设置<p>根据接收人搜索，可以使用“访问管理”的 <a href="https://cloud.tencent.com/document/product/598/34587">拉取子用户 ListUsers</a> 接口获取用户列表 或 <a href="https://cloud.tencent.com/document/product/598/34590">查询子用户 GetUser</a> 接口查询子用户详情，此处填入返回结果中的 <code>Uid</code> 字段</p>
                     * @param _receiverUids <p>根据接收人搜索，可以使用“访问管理”的 <a href="https://cloud.tencent.com/document/product/598/34587">拉取子用户 ListUsers</a> 接口获取用户列表 或 <a href="https://cloud.tencent.com/document/product/598/34590">查询子用户 GetUser</a> 接口查询子用户详情，此处填入返回结果中的 <code>Uid</code> 字段</p>
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
                     * 获取<p>根据接收组搜索，可以使用“访问管理”的 <a href="https://cloud.tencent.com/document/product/598/34589">查询用户组列表 ListGroups</a> 接口获取用户组列表 或 <a href="https://cloud.tencent.com/document/product/598/34588">列出用户关联的用户组 ListGroupsForUser</a> 查询某个子用户所在的用户组列表 ，此处填入返回结果中的 <code>GroupId</code> 字段</p>
                     * @return ReceiverGroups <p>根据接收组搜索，可以使用“访问管理”的 <a href="https://cloud.tencent.com/document/product/598/34589">查询用户组列表 ListGroups</a> 接口获取用户组列表 或 <a href="https://cloud.tencent.com/document/product/598/34588">列出用户关联的用户组 ListGroupsForUser</a> 查询某个子用户所在的用户组列表 ，此处填入返回结果中的 <code>GroupId</code> 字段</p>
                     * 
                     */
                    std::vector<int64_t> GetReceiverGroups() const;

                    /**
                     * 设置<p>根据接收组搜索，可以使用“访问管理”的 <a href="https://cloud.tencent.com/document/product/598/34589">查询用户组列表 ListGroups</a> 接口获取用户组列表 或 <a href="https://cloud.tencent.com/document/product/598/34588">列出用户关联的用户组 ListGroupsForUser</a> 查询某个子用户所在的用户组列表 ，此处填入返回结果中的 <code>GroupId</code> 字段</p>
                     * @param _receiverGroups <p>根据接收组搜索，可以使用“访问管理”的 <a href="https://cloud.tencent.com/document/product/598/34589">查询用户组列表 ListGroups</a> 接口获取用户组列表 或 <a href="https://cloud.tencent.com/document/product/598/34588">列出用户关联的用户组 ListGroupsForUser</a> 查询某个子用户所在的用户组列表 ，此处填入返回结果中的 <code>GroupId</code> 字段</p>
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
                     * 获取<p>根据默认策略筛选 不传展示全部策略 DEFAULT=展示默认策略 NOT_DEFAULT=展示非默认策略</p>
                     * @return PolicyType <p>根据默认策略筛选 不传展示全部策略 DEFAULT=展示默认策略 NOT_DEFAULT=展示非默认策略</p>
                     * 
                     */
                    std::vector<std::string> GetPolicyType() const;

                    /**
                     * 设置<p>根据默认策略筛选 不传展示全部策略 DEFAULT=展示默认策略 NOT_DEFAULT=展示非默认策略</p>
                     * @param _policyType <p>根据默认策略筛选 不传展示全部策略 DEFAULT=展示默认策略 NOT_DEFAULT=展示非默认策略</p>
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
                     * 获取<p>排序字段，例如按照最后修改时间排序，Field: &quot;UpdateTime&quot;</p>
                     * @return Field <p>排序字段，例如按照最后修改时间排序，Field: &quot;UpdateTime&quot;</p>
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置<p>排序字段，例如按照最后修改时间排序，Field: &quot;UpdateTime&quot;</p>
                     * @param _field <p>排序字段，例如按照最后修改时间排序，Field: &quot;UpdateTime&quot;</p>
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
                     * 获取<p>排序顺序：升序：ASC  降序：DESC</p>
                     * @return Order <p>排序顺序：升序：ASC  降序：DESC</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序顺序：升序：ASC  降序：DESC</p>
                     * @param _order <p>排序顺序：升序：ASC  降序：DESC</p>
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
                     * 获取<p>策略所属项目的id数组，可在此页面查看<br><a href="https://console.cloud.tencent.com/project">项目管理</a></p>
                     * @return ProjectIds <p>策略所属项目的id数组，可在此页面查看<br><a href="https://console.cloud.tencent.com/project">项目管理</a></p>
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置<p>策略所属项目的id数组，可在此页面查看<br><a href="https://console.cloud.tencent.com/project">项目管理</a></p>
                     * @param _projectIds <p>策略所属项目的id数组，可在此页面查看<br><a href="https://console.cloud.tencent.com/project">项目管理</a></p>
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
                     * 获取<p>通知模板的id列表，可查询通知模板列表获取。<br>可使用 <a href="https://cloud.tencent.com/document/product/248/51280">查询通知模板列表</a> 接口查询。</p>
                     * @return NoticeIds <p>通知模板的id列表，可查询通知模板列表获取。<br>可使用 <a href="https://cloud.tencent.com/document/product/248/51280">查询通知模板列表</a> 接口查询。</p>
                     * 
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置<p>通知模板的id列表，可查询通知模板列表获取。<br>可使用 <a href="https://cloud.tencent.com/document/product/248/51280">查询通知模板列表</a> 接口查询。</p>
                     * @param _noticeIds <p>通知模板的id列表，可查询通知模板列表获取。<br>可使用 <a href="https://cloud.tencent.com/document/product/248/51280">查询通知模板列表</a> 接口查询。</p>
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
                     * 获取<p>根据触发条件筛选 不传展示全部策略 STATIC=展示静态阈值策略 DYNAMIC=展示动态阈值策略</p>
                     * @return RuleTypes <p>根据触发条件筛选 不传展示全部策略 STATIC=展示静态阈值策略 DYNAMIC=展示动态阈值策略</p>
                     * 
                     */
                    std::vector<std::string> GetRuleTypes() const;

                    /**
                     * 设置<p>根据触发条件筛选 不传展示全部策略 STATIC=展示静态阈值策略 DYNAMIC=展示动态阈值策略</p>
                     * @param _ruleTypes <p>根据触发条件筛选 不传展示全部策略 STATIC=展示静态阈值策略 DYNAMIC=展示动态阈值策略</p>
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
                     * 获取<p>告警启停筛选，[1]：启用   [0]：停止，全部[0, 1]</p>
                     * @return Enable <p>告警启停筛选，[1]：启用   [0]：停止，全部[0, 1]</p>
                     * 
                     */
                    std::vector<int64_t> GetEnable() const;

                    /**
                     * 设置<p>告警启停筛选，[1]：启用   [0]：停止，全部[0, 1]</p>
                     * @param _enable <p>告警启停筛选，[1]：启用   [0]：停止，全部[0, 1]</p>
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
                     * 获取<p>传 1 查询未配置通知规则的告警策略；不传或传其他数值，查询所有策略。</p>
                     * @return NotBindingNoticeRule <p>传 1 查询未配置通知规则的告警策略；不传或传其他数值，查询所有策略。</p>
                     * 
                     */
                    int64_t GetNotBindingNoticeRule() const;

                    /**
                     * 设置<p>传 1 查询未配置通知规则的告警策略；不传或传其他数值，查询所有策略。</p>
                     * @param _notBindingNoticeRule <p>传 1 查询未配置通知规则的告警策略；不传或传其他数值，查询所有策略。</p>
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
                     * 获取<p>实例分组id</p>
                     * @return InstanceGroupId <p>实例分组id</p>
                     * 
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置<p>实例分组id</p>
                     * @param _instanceGroupId <p>实例分组id</p>
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
                     * 获取<p>是否需要策略与入参过滤维度参数的对应关系，1：是  0：否，默认为0</p>
                     * @return NeedCorrespondence <p>是否需要策略与入参过滤维度参数的对应关系，1：是  0：否，默认为0</p>
                     * 
                     */
                    int64_t GetNeedCorrespondence() const;

                    /**
                     * 设置<p>是否需要策略与入参过滤维度参数的对应关系，1：是  0：否，默认为0</p>
                     * @param _needCorrespondence <p>是否需要策略与入参过滤维度参数的对应关系，1：是  0：否，默认为0</p>
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
                     * 获取<p>按照触发任务（例如弹性伸缩）过滤策略。最多10个</p>
                     * @return TriggerTasks <p>按照触发任务（例如弹性伸缩）过滤策略。最多10个</p>
                     * 
                     */
                    std::vector<AlarmPolicyTriggerTask> GetTriggerTasks() const;

                    /**
                     * 设置<p>按照触发任务（例如弹性伸缩）过滤策略。最多10个</p>
                     * @param _triggerTasks <p>按照触发任务（例如弹性伸缩）过滤策略。最多10个</p>
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
                     * 获取<p>根据一键告警策略筛选 不传展示全部策略 ONECLICK=展示一键告警策略 NOT_ONECLICK=展示非一键告警策略</p>
                     * @return OneClickPolicyType <p>根据一键告警策略筛选 不传展示全部策略 ONECLICK=展示一键告警策略 NOT_ONECLICK=展示非一键告警策略</p>
                     * 
                     */
                    std::vector<std::string> GetOneClickPolicyType() const;

                    /**
                     * 设置<p>根据一键告警策略筛选 不传展示全部策略 ONECLICK=展示一键告警策略 NOT_ONECLICK=展示非一键告警策略</p>
                     * @param _oneClickPolicyType <p>根据一键告警策略筛选 不传展示全部策略 ONECLICK=展示一键告警策略 NOT_ONECLICK=展示非一键告警策略</p>
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
                     * 获取<p>返回结果过滤掉绑定全部对象的策略，1代表需要过滤，0则无需过滤</p>
                     * @return NotBindAll <p>返回结果过滤掉绑定全部对象的策略，1代表需要过滤，0则无需过滤</p>
                     * 
                     */
                    int64_t GetNotBindAll() const;

                    /**
                     * 设置<p>返回结果过滤掉绑定全部对象的策略，1代表需要过滤，0则无需过滤</p>
                     * @param _notBindAll <p>返回结果过滤掉绑定全部对象的策略，1代表需要过滤，0则无需过滤</p>
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
                     * 获取<p>返回结果过滤掉关联实例为实例分组的策略，1代表需要过滤，0则无需过滤</p>
                     * @return NotInstanceGroup <p>返回结果过滤掉关联实例为实例分组的策略，1代表需要过滤，0则无需过滤</p>
                     * 
                     */
                    int64_t GetNotInstanceGroup() const;

                    /**
                     * 设置<p>返回结果过滤掉关联实例为实例分组的策略，1代表需要过滤，0则无需过滤</p>
                     * @param _notInstanceGroup <p>返回结果过滤掉关联实例为实例分组的策略，1代表需要过滤，0则无需过滤</p>
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
                     * 获取<p>策略根据标签过滤</p>
                     * @return Tags <p>策略根据标签过滤</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>策略根据标签过滤</p>
                     * @param _tags <p>策略根据标签过滤</p>
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
                     * 获取<p>prom实例id，自定义指标策略时会用到</p>
                     * @return PromInsId <p>prom实例id，自定义指标策略时会用到</p>
                     * 
                     */
                    std::string GetPromInsId() const;

                    /**
                     * 设置<p>prom实例id，自定义指标策略时会用到</p>
                     * @param _promInsId <p>prom实例id，自定义指标策略时会用到</p>
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
                     * 获取<p>根据排班表搜索</p>
                     * @return ReceiverOnCallFormIDs <p>根据排班表搜索</p>
                     * 
                     */
                    std::vector<std::string> GetReceiverOnCallFormIDs() const;

                    /**
                     * 设置<p>根据排班表搜索</p>
                     * @param _receiverOnCallFormIDs <p>根据排班表搜索</p>
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
                     * 获取<p>通知内容模板ID筛选</p>
                     * @return NoticeContentTmplIDs <p>通知内容模板ID筛选</p>
                     * 
                     */
                    std::vector<std::string> GetNoticeContentTmplIDs() const;

                    /**
                     * 设置<p>通知内容模板ID筛选</p>
                     * @param _noticeContentTmplIDs <p>通知内容模板ID筛选</p>
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
                     * 获取<p>是否为预设策略，1是，0否</p>
                     * @return IsPredefined <p>是否为预设策略，1是，0否</p>
                     * 
                     */
                    int64_t GetIsPredefined() const;

                    /**
                     * 设置<p>是否为预设策略，1是，0否</p>
                     * @param _isPredefined <p>是否为预设策略，1是，0否</p>
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
                     * <p>固定值，为&quot;monitor&quot;</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>页数，从 1 开始计数，默认 1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页的数量，取值1~100，默认20</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>按策略名称模糊搜索</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>根据监控类型过滤 不选默认查所有类型 &quot;MT_QCE&quot;=云产品监控,当Dimension不为空时，该项为必填项</p>
                     */
                    std::vector<std::string> m_monitorTypes;
                    bool m_monitorTypesHasBeenSet;

                    /**
                     * <p>根据命名空间过滤，不同策略类型的值详见<br><a href="https://cloud.tencent.com/document/product/248/50397">策略类型列表</a>当Dimension不为空时，该项为必填项</p>
                     */
                    std::vector<std::string> m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * <p>告警对象列表，JSON 字符串。外层数组，对应多个实例，内层为对象的维度。例如“云服务器-基础监控”可写为：<code>[[{&quot;name&quot;:&quot;unInstanceId&quot;,&quot;value&quot;:&quot;ins-qr888845g&quot;}]]</code>具体也可以参考下方的示例 2。不同云产品参数示例详见 <a href="https://cloud.tencent.com/document/product/248/50397">维度信息Dimensions列表</a>注意：如果NeedCorrespondence传入1，即需要返回策略与实例对应关系，请传入不多于20个告警对象维度，否则容易请求超时</p>
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * <p>根据接收人搜索，可以使用“访问管理”的 <a href="https://cloud.tencent.com/document/product/598/34587">拉取子用户 ListUsers</a> 接口获取用户列表 或 <a href="https://cloud.tencent.com/document/product/598/34590">查询子用户 GetUser</a> 接口查询子用户详情，此处填入返回结果中的 <code>Uid</code> 字段</p>
                     */
                    std::vector<int64_t> m_receiverUids;
                    bool m_receiverUidsHasBeenSet;

                    /**
                     * <p>根据接收组搜索，可以使用“访问管理”的 <a href="https://cloud.tencent.com/document/product/598/34589">查询用户组列表 ListGroups</a> 接口获取用户组列表 或 <a href="https://cloud.tencent.com/document/product/598/34588">列出用户关联的用户组 ListGroupsForUser</a> 查询某个子用户所在的用户组列表 ，此处填入返回结果中的 <code>GroupId</code> 字段</p>
                     */
                    std::vector<int64_t> m_receiverGroups;
                    bool m_receiverGroupsHasBeenSet;

                    /**
                     * <p>根据默认策略筛选 不传展示全部策略 DEFAULT=展示默认策略 NOT_DEFAULT=展示非默认策略</p>
                     */
                    std::vector<std::string> m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>排序字段，例如按照最后修改时间排序，Field: &quot;UpdateTime&quot;</p>
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * <p>排序顺序：升序：ASC  降序：DESC</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>策略所属项目的id数组，可在此页面查看<br><a href="https://console.cloud.tencent.com/project">项目管理</a></p>
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * <p>通知模板的id列表，可查询通知模板列表获取。<br>可使用 <a href="https://cloud.tencent.com/document/product/248/51280">查询通知模板列表</a> 接口查询。</p>
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * <p>根据触发条件筛选 不传展示全部策略 STATIC=展示静态阈值策略 DYNAMIC=展示动态阈值策略</p>
                     */
                    std::vector<std::string> m_ruleTypes;
                    bool m_ruleTypesHasBeenSet;

                    /**
                     * <p>告警启停筛选，[1]：启用   [0]：停止，全部[0, 1]</p>
                     */
                    std::vector<int64_t> m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>传 1 查询未配置通知规则的告警策略；不传或传其他数值，查询所有策略。</p>
                     */
                    int64_t m_notBindingNoticeRule;
                    bool m_notBindingNoticeRuleHasBeenSet;

                    /**
                     * <p>实例分组id</p>
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * <p>是否需要策略与入参过滤维度参数的对应关系，1：是  0：否，默认为0</p>
                     */
                    int64_t m_needCorrespondence;
                    bool m_needCorrespondenceHasBeenSet;

                    /**
                     * <p>按照触发任务（例如弹性伸缩）过滤策略。最多10个</p>
                     */
                    std::vector<AlarmPolicyTriggerTask> m_triggerTasks;
                    bool m_triggerTasksHasBeenSet;

                    /**
                     * <p>根据一键告警策略筛选 不传展示全部策略 ONECLICK=展示一键告警策略 NOT_ONECLICK=展示非一键告警策略</p>
                     */
                    std::vector<std::string> m_oneClickPolicyType;
                    bool m_oneClickPolicyTypeHasBeenSet;

                    /**
                     * <p>返回结果过滤掉绑定全部对象的策略，1代表需要过滤，0则无需过滤</p>
                     */
                    int64_t m_notBindAll;
                    bool m_notBindAllHasBeenSet;

                    /**
                     * <p>返回结果过滤掉关联实例为实例分组的策略，1代表需要过滤，0则无需过滤</p>
                     */
                    int64_t m_notInstanceGroup;
                    bool m_notInstanceGroupHasBeenSet;

                    /**
                     * <p>策略根据标签过滤</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>prom实例id，自定义指标策略时会用到</p>
                     */
                    std::string m_promInsId;
                    bool m_promInsIdHasBeenSet;

                    /**
                     * <p>根据排班表搜索</p>
                     */
                    std::vector<std::string> m_receiverOnCallFormIDs;
                    bool m_receiverOnCallFormIDsHasBeenSet;

                    /**
                     * <p>通知内容模板ID筛选</p>
                     */
                    std::vector<std::string> m_noticeContentTmplIDs;
                    bool m_noticeContentTmplIDsHasBeenSet;

                    /**
                     * <p>是否为预设策略，1是，0否</p>
                     */
                    int64_t m_isPredefined;
                    bool m_isPredefinedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMPOLICIESREQUEST_H_
