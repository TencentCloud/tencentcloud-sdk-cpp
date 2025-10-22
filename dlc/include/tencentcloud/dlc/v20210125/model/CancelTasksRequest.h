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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CANCELTASKSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CANCELTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CancelTasks请求参数结构体
                */
                class CancelTasksRequest : public AbstractModel
                {
                public:
                    CancelTasksRequest();
                    ~CancelTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务Id数组，全局唯一
                     * @return TaskId 任务Id数组，全局唯一
                     * 
                     */
                    std::vector<std::string> GetTaskId() const;

                    /**
                     * 设置任务Id数组，全局唯一
                     * @param _taskId 任务Id数组，全局唯一
                     * 
                     */
                    void SetTaskId(const std::vector<std::string>& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取配置信息，key-value数组，对外不可见。key1：AuthorityRole（鉴权角色，默认传SubUin，base64加密，仅在jdbc提交任务时使用）
                     * @return Config 配置信息，key-value数组，对外不可见。key1：AuthorityRole（鉴权角色，默认传SubUin，base64加密，仅在jdbc提交任务时使用）
                     * 
                     */
                    std::vector<KVPair> GetConfig() const;

                    /**
                     * 设置配置信息，key-value数组，对外不可见。key1：AuthorityRole（鉴权角色，默认传SubUin，base64加密，仅在jdbc提交任务时使用）
                     * @param _config 配置信息，key-value数组，对外不可见。key1：AuthorityRole（鉴权角色，默认传SubUin，base64加密，仅在jdbc提交任务时使用）
                     * 
                     */
                    void SetConfig(const std::vector<KVPair>& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * 任务Id数组，全局唯一
                     */
                    std::vector<std::string> m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 配置信息，key-value数组，对外不可见。key1：AuthorityRole（鉴权角色，默认传SubUin，base64加密，仅在jdbc提交任务时使用）
                     */
                    std::vector<KVPair> m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CANCELTASKSREQUEST_H_
