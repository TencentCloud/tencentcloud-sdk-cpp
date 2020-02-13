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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_BINDALARMPOLICYREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_BINDALARMPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * BindAlarmPolicy请求参数结构体
                */
                class BindAlarmPolicyRequest : public AbstractModel
                {
                public:
                    BindAlarmPolicyRequest();
                    ~BindAlarmPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取拨测任务Id
                     * @return TaskId 拨测任务Id
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置拨测任务Id
                     * @param TaskId 拨测任务Id
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取告警策略组Id
                     * @return PolicyGroupId 告警策略组Id
                     */
                    uint64_t GetPolicyGroupId() const;

                    /**
                     * 设置告警策略组Id
                     * @param PolicyGroupId 告警策略组Id
                     */
                    void SetPolicyGroupId(const uint64_t& _policyGroupId);

                    /**
                     * 判断参数 PolicyGroupId 是否已赋值
                     * @return PolicyGroupId 是否已赋值
                     */
                    bool PolicyGroupIdHasBeenSet() const;

                    /**
                     * 获取是否绑定操作。非0 为绑定， 0 为 解绑。缺省表示 绑定。
                     * @return IfBind 是否绑定操作。非0 为绑定， 0 为 解绑。缺省表示 绑定。
                     */
                    uint64_t GetIfBind() const;

                    /**
                     * 设置是否绑定操作。非0 为绑定， 0 为 解绑。缺省表示 绑定。
                     * @param IfBind 是否绑定操作。非0 为绑定， 0 为 解绑。缺省表示 绑定。
                     */
                    void SetIfBind(const uint64_t& _ifBind);

                    /**
                     * 判断参数 IfBind 是否已赋值
                     * @return IfBind 是否已赋值
                     */
                    bool IfBindHasBeenSet() const;

                    /**
                     * 获取告警主题Id
                     * @return TopicId 告警主题Id
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置告警主题Id
                     * @param TopicId 告警主题Id
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * 拨测任务Id
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 告警策略组Id
                     */
                    uint64_t m_policyGroupId;
                    bool m_policyGroupIdHasBeenSet;

                    /**
                     * 是否绑定操作。非0 为绑定， 0 为 解绑。缺省表示 绑定。
                     */
                    uint64_t m_ifBind;
                    bool m_ifBindHasBeenSet;

                    /**
                     * 告警主题Id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_BINDALARMPOLICYREQUEST_H_
