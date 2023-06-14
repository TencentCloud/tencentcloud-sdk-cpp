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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_SETAUTOSCALINGCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_SETAUTOSCALINGCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/QueueConfig.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * SetAutoScalingConfiguration请求参数结构体
                */
                class SetAutoScalingConfigurationRequest : public AbstractModel
                {
                public:
                    SetAutoScalingConfigurationRequest();
                    ~SetAutoScalingConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID。
                     * @return ClusterId 集群ID。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID。
                     * @param _clusterId 集群ID。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取任务连续等待时间，队列的任务处于连续等待的时间。单位秒。默认值120。
                     * @return ExpansionBusyTime 任务连续等待时间，队列的任务处于连续等待的时间。单位秒。默认值120。
                     * 
                     */
                    int64_t GetExpansionBusyTime() const;

                    /**
                     * 设置任务连续等待时间，队列的任务处于连续等待的时间。单位秒。默认值120。
                     * @param _expansionBusyTime 任务连续等待时间，队列的任务处于连续等待的时间。单位秒。默认值120。
                     * 
                     */
                    void SetExpansionBusyTime(const int64_t& _expansionBusyTime);

                    /**
                     * 判断参数 ExpansionBusyTime 是否已赋值
                     * @return ExpansionBusyTime 是否已赋值
                     * 
                     */
                    bool ExpansionBusyTimeHasBeenSet() const;

                    /**
                     * 获取节点连续空闲（未运行作业）时间，一个节点连续处于空闲状态时间。单位秒。默认值300。
                     * @return ShrinkIdleTime 节点连续空闲（未运行作业）时间，一个节点连续处于空闲状态时间。单位秒。默认值300。
                     * 
                     */
                    int64_t GetShrinkIdleTime() const;

                    /**
                     * 设置节点连续空闲（未运行作业）时间，一个节点连续处于空闲状态时间。单位秒。默认值300。
                     * @param _shrinkIdleTime 节点连续空闲（未运行作业）时间，一个节点连续处于空闲状态时间。单位秒。默认值300。
                     * 
                     */
                    void SetShrinkIdleTime(const int64_t& _shrinkIdleTime);

                    /**
                     * 判断参数 ShrinkIdleTime 是否已赋值
                     * @return ShrinkIdleTime 是否已赋值
                     * 
                     */
                    bool ShrinkIdleTimeHasBeenSet() const;

                    /**
                     * 获取扩容队列配置列表。
                     * @return QueueConfigs 扩容队列配置列表。
                     * 
                     */
                    std::vector<QueueConfig> GetQueueConfigs() const;

                    /**
                     * 设置扩容队列配置列表。
                     * @param _queueConfigs 扩容队列配置列表。
                     * 
                     */
                    void SetQueueConfigs(const std::vector<QueueConfig>& _queueConfigs);

                    /**
                     * 判断参数 QueueConfigs 是否已赋值
                     * @return QueueConfigs 是否已赋值
                     * 
                     */
                    bool QueueConfigsHasBeenSet() const;

                    /**
                     * 获取是否只预检此次请求。
true：发送检查请求，不会绑定弹性伸缩组。检查项包括是否填写了必需参数，请求格式，业务限制。
如果检查不通过，则返回对应错误码；
如果检查通过，则返回RequestId。
false（默认）：发送正常请求，通过检查后直接绑定弹性伸缩组。
                     * @return DryRun 是否只预检此次请求。
true：发送检查请求，不会绑定弹性伸缩组。检查项包括是否填写了必需参数，请求格式，业务限制。
如果检查不通过，则返回对应错误码；
如果检查通过，则返回RequestId。
false（默认）：发送正常请求，通过检查后直接绑定弹性伸缩组。
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否只预检此次请求。
true：发送检查请求，不会绑定弹性伸缩组。检查项包括是否填写了必需参数，请求格式，业务限制。
如果检查不通过，则返回对应错误码；
如果检查通过，则返回RequestId。
false（默认）：发送正常请求，通过检查后直接绑定弹性伸缩组。
                     * @param _dryRun 是否只预检此次请求。
true：发送检查请求，不会绑定弹性伸缩组。检查项包括是否填写了必需参数，请求格式，业务限制。
如果检查不通过，则返回对应错误码；
如果检查通过，则返回RequestId。
false（默认）：发送正常请求，通过检查后直接绑定弹性伸缩组。
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 集群ID。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 任务连续等待时间，队列的任务处于连续等待的时间。单位秒。默认值120。
                     */
                    int64_t m_expansionBusyTime;
                    bool m_expansionBusyTimeHasBeenSet;

                    /**
                     * 节点连续空闲（未运行作业）时间，一个节点连续处于空闲状态时间。单位秒。默认值300。
                     */
                    int64_t m_shrinkIdleTime;
                    bool m_shrinkIdleTimeHasBeenSet;

                    /**
                     * 扩容队列配置列表。
                     */
                    std::vector<QueueConfig> m_queueConfigs;
                    bool m_queueConfigsHasBeenSet;

                    /**
                     * 是否只预检此次请求。
true：发送检查请求，不会绑定弹性伸缩组。检查项包括是否填写了必需参数，请求格式，业务限制。
如果检查不通过，则返回对应错误码；
如果检查通过，则返回RequestId。
false（默认）：发送正常请求，通过检查后直接绑定弹性伸缩组。
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_SETAUTOSCALINGCONFIGURATIONREQUEST_H_
