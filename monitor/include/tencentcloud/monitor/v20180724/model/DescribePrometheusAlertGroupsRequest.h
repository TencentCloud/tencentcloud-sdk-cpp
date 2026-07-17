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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSALERTGROUPSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSALERTGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusRuleKV.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusAlertGroups请求参数结构体
                */
                class DescribePrometheusAlertGroupsRequest : public AbstractModel
                {
                public:
                    DescribePrometheusAlertGroupsRequest();
                    ~DescribePrometheusAlertGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Prometheus 实例 ID</p>
                     * @return InstanceId <p>Prometheus 实例 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Prometheus 实例 ID</p>
                     * @param _instanceId <p>Prometheus 实例 ID</p>
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
                     * 获取<p>返回数量，默认为 20，最大值为 100</p>
                     * @return Limit <p>返回数量，默认为 20，最大值为 100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为 20，最大值为 100</p>
                     * @param _limit <p>返回数量，默认为 20，最大值为 100</p>
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
                     * 获取<p>偏移量，默认为 0</p>
                     * @return Offset <p>偏移量，默认为 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为 0</p>
                     * @param _offset <p>偏移量，默认为 0</p>
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
                     * 获取<p>告警分组ID，形如alert-xxxx。<br>查询给定ID的告警分组</p>
                     * @return GroupId <p>告警分组ID，形如alert-xxxx。<br>查询给定ID的告警分组</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>告警分组ID，形如alert-xxxx。<br>查询给定ID的告警分组</p>
                     * @param _groupId <p>告警分组ID，形如alert-xxxx。<br>查询给定ID的告警分组</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>告警分组名称。<br>查询名称中包含给定字符串的告警分组</p>
                     * @return GroupName <p>告警分组名称。<br>查询名称中包含给定字符串的告警分组</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>告警分组名称。<br>查询名称中包含给定字符串的告警分组</p>
                     * @param _groupName <p>告警分组名称。<br>查询名称中包含给定字符串的告警分组</p>
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>通过自定义label查询告警规则：<br>返回包含符合过滤条件告警规则的整个分组</p><p>多个label过滤条件取交集</p>
                     * @return Labels <p>通过自定义label查询告警规则：<br>返回包含符合过滤条件告警规则的整个分组</p><p>多个label过滤条件取交集</p>
                     * 
                     */
                    std::vector<PrometheusRuleKV> GetLabels() const;

                    /**
                     * 设置<p>通过自定义label查询告警规则：<br>返回包含符合过滤条件告警规则的整个分组</p><p>多个label过滤条件取交集</p>
                     * @param _labels <p>通过自定义label查询告警规则：<br>返回包含符合过滤条件告警规则的整个分组</p><p>多个label过滤条件取交集</p>
                     * 
                     */
                    void SetLabels(const std::vector<PrometheusRuleKV>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * <p>Prometheus 实例 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>返回数量，默认为 20，最大值为 100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认为 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>告警分组ID，形如alert-xxxx。<br>查询给定ID的告警分组</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>告警分组名称。<br>查询名称中包含给定字符串的告警分组</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>通过自定义label查询告警规则：<br>返回包含符合过滤条件告警规则的整个分组</p><p>多个label过滤条件取交集</p>
                     */
                    std::vector<PrometheusRuleKV> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSALERTGROUPSREQUEST_H_
