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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeInstances请求参数结构体
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群展示策略，该字段取值根据所选页面不同输入不同，集群列表页：clusterList，集群监控：monitorManage，云硬件管理：cloudHardwareManage，组件管理页：componentManage
                     * @return DisplayStrategy 集群展示策略，该字段取值根据所选页面不同输入不同，集群列表页：clusterList，集群监控：monitorManage，云硬件管理：cloudHardwareManage，组件管理页：componentManage
                     */
                    std::string GetDisplayStrategy() const;

                    /**
                     * 设置集群展示策略，该字段取值根据所选页面不同输入不同，集群列表页：clusterList，集群监控：monitorManage，云硬件管理：cloudHardwareManage，组件管理页：componentManage
                     * @param DisplayStrategy 集群展示策略，该字段取值根据所选页面不同输入不同，集群列表页：clusterList，集群监控：monitorManage，云硬件管理：cloudHardwareManage，组件管理页：componentManage
                     */
                    void SetDisplayStrategy(const std::string& _displayStrategy);

                    /**
                     * 判断参数 DisplayStrategy 是否已赋值
                     * @return DisplayStrategy 是否已赋值
                     */
                    bool DisplayStrategyHasBeenSet() const;

                    /**
                     * 获取查询列表,  如果不填写，返回该AppId下所有实例列表
                     * @return InstanceIds 查询列表,  如果不填写，返回该AppId下所有实例列表
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置查询列表,  如果不填写，返回该AppId下所有实例列表
                     * @param InstanceIds 查询列表,  如果不填写，返回该AppId下所有实例列表
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取查询偏移量，默认0
                     * @return Offset 查询偏移量，默认0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询偏移量，默认0
                     * @param Offset 查询偏移量，默认0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询结果限制，默认值10
                     * @return Limit 查询结果限制，默认值10
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询结果限制，默认值10
                     * @param Limit 查询结果限制，默认值10
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取项目列表，默认值-1
                     * @return ProjectId 项目列表，默认值-1
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目列表，默认值-1
                     * @param ProjectId 项目列表，默认值-1
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取排序字段，当前支持以下排序字段：clusterId、addTime、status
                     * @return OrderField 排序字段，当前支持以下排序字段：clusterId、addTime、status
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段，当前支持以下排序字段：clusterId、addTime、status
                     * @param OrderField 排序字段，当前支持以下排序字段：clusterId、addTime、status
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序方法，0降序，1升序
                     * @return Asc 排序方法，0降序，1升序
                     */
                    int64_t GetAsc() const;

                    /**
                     * 设置排序方法，0降序，1升序
                     * @param Asc 排序方法，0降序，1升序
                     */
                    void SetAsc(const int64_t& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     */
                    bool AscHasBeenSet() const;

                private:

                    /**
                     * 集群展示策略，该字段取值根据所选页面不同输入不同，集群列表页：clusterList，集群监控：monitorManage，云硬件管理：cloudHardwareManage，组件管理页：componentManage
                     */
                    std::string m_displayStrategy;
                    bool m_displayStrategyHasBeenSet;

                    /**
                     * 查询列表,  如果不填写，返回该AppId下所有实例列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 查询偏移量，默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询结果限制，默认值10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 项目列表，默认值-1
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 排序字段，当前支持以下排序字段：clusterId、addTime、status
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方法，0降序，1升序
                     */
                    int64_t m_asc;
                    bool m_ascHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCESREQUEST_H_
