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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULFIXRETRYTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULFIXRETRYTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateVulFixRetryTask请求参数结构体
                */
                class CreateVulFixRetryTaskRequest : public AbstractModel
                {
                public:
                    CreateVulFixRetryTaskRequest();
                    ~CreateVulFixRetryTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需要重试的修复任务ID</p>
                     * @return TaskId <p>需要重试的修复任务ID</p>
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置<p>需要重试的修复任务ID</p>
                     * @param _taskId <p>需要重试的修复任务ID</p>
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>指定需要重试的主机实例ID列表，不传则对所有失败主机进行重试</p>
                     * @return InstanceIds <p>指定需要重试的主机实例ID列表，不传则对所有失败主机进行重试</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>指定需要重试的主机实例ID列表，不传则对所有失败主机进行重试</p>
                     * @param _instanceIds <p>指定需要重试的主机实例ID列表，不传则对所有失败主机进行重试</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>需要重试的修复任务ID</p>
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>指定需要重试的主机实例ID列表，不传则对所有失败主机进行重试</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULFIXRETRYTASKREQUEST_H_
