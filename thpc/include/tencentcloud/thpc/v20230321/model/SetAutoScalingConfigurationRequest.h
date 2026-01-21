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
                     * 获取<p>集群ID。</p>
                     * @return ClusterId <p>集群ID。</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID。</p>
                     * @param _clusterId <p>集群ID。</p>
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
                     * 获取<p>任务连续等待时间，队列的任务处于连续等待的时间。单位秒。默认值120。</p>
                     * @return ExpansionBusyTime <p>任务连续等待时间，队列的任务处于连续等待的时间。单位秒。默认值120。</p>
                     * 
                     */
                    int64_t GetExpansionBusyTime() const;

                    /**
                     * 设置<p>任务连续等待时间，队列的任务处于连续等待的时间。单位秒。默认值120。</p>
                     * @param _expansionBusyTime <p>任务连续等待时间，队列的任务处于连续等待的时间。单位秒。默认值120。</p>
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
                     * 获取<p>节点连续空闲（未运行作业）时间，一个节点连续处于空闲状态时间。单位秒。默认值300。</p>
                     * @return ShrinkIdleTime <p>节点连续空闲（未运行作业）时间，一个节点连续处于空闲状态时间。单位秒。默认值300。</p>
                     * 
                     */
                    int64_t GetShrinkIdleTime() const;

                    /**
                     * 设置<p>节点连续空闲（未运行作业）时间，一个节点连续处于空闲状态时间。单位秒。默认值300。</p>
                     * @param _shrinkIdleTime <p>节点连续空闲（未运行作业）时间，一个节点连续处于空闲状态时间。单位秒。默认值300。</p>
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
                     * 获取<p>扩容队列配置列表。</p>
                     * @return QueueConfigs <p>扩容队列配置列表。</p>
                     * 
                     */
                    std::vector<QueueConfig> GetQueueConfigs() const;

                    /**
                     * 设置<p>扩容队列配置列表。</p>
                     * @param _queueConfigs <p>扩容队列配置列表。</p>
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
                     * 获取<p>是否只预检此次请求。<br>true：发送检查请求，不会绑定弹性伸缩组。检查项包括是否填写了必需参数，请求格式，业务限制。<br>如果检查不通过，则返回对应错误码；<br>如果检查通过，则返回RequestId。<br>false（默认）：发送正常请求，通过检查后直接绑定弹性伸缩组。</p>
                     * @return DryRun <p>是否只预检此次请求。<br>true：发送检查请求，不会绑定弹性伸缩组。检查项包括是否填写了必需参数，请求格式，业务限制。<br>如果检查不通过，则返回对应错误码；<br>如果检查通过，则返回RequestId。<br>false（默认）：发送正常请求，通过检查后直接绑定弹性伸缩组。</p>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>是否只预检此次请求。<br>true：发送检查请求，不会绑定弹性伸缩组。检查项包括是否填写了必需参数，请求格式，业务限制。<br>如果检查不通过，则返回对应错误码；<br>如果检查通过，则返回RequestId。<br>false（默认）：发送正常请求，通过检查后直接绑定弹性伸缩组。</p>
                     * @param _dryRun <p>是否只预检此次请求。<br>true：发送检查请求，不会绑定弹性伸缩组。检查项包括是否填写了必需参数，请求格式，业务限制。<br>如果检查不通过，则返回对应错误码；<br>如果检查通过，则返回RequestId。<br>false（默认）：发送正常请求，通过检查后直接绑定弹性伸缩组。</p>
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
                     * <p>集群ID。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>任务连续等待时间，队列的任务处于连续等待的时间。单位秒。默认值120。</p>
                     */
                    int64_t m_expansionBusyTime;
                    bool m_expansionBusyTimeHasBeenSet;

                    /**
                     * <p>节点连续空闲（未运行作业）时间，一个节点连续处于空闲状态时间。单位秒。默认值300。</p>
                     */
                    int64_t m_shrinkIdleTime;
                    bool m_shrinkIdleTimeHasBeenSet;

                    /**
                     * <p>扩容队列配置列表。</p>
                     */
                    std::vector<QueueConfig> m_queueConfigs;
                    bool m_queueConfigsHasBeenSet;

                    /**
                     * <p>是否只预检此次请求。<br>true：发送检查请求，不会绑定弹性伸缩组。检查项包括是否填写了必需参数，请求格式，业务限制。<br>如果检查不通过，则返回对应错误码；<br>如果检查通过，则返回RequestId。<br>false（默认）：发送正常请求，通过检查后直接绑定弹性伸缩组。</p>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_SETAUTOSCALINGCONFIGURATIONREQUEST_H_
