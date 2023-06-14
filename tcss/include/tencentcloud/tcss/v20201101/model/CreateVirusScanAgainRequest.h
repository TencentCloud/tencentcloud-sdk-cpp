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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVIRUSSCANAGAINREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVIRUSSCANAGAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateVirusScanAgain请求参数结构体
                */
                class CreateVirusScanAgainRequest : public AbstractModel
                {
                public:
                    CreateVirusScanAgainRequest();
                    ~CreateVirusScanAgainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取需要扫描的容器id集合
                     * @return ContainerIds 需要扫描的容器id集合
                     * 
                     */
                    std::vector<std::string> GetContainerIds() const;

                    /**
                     * 设置需要扫描的容器id集合
                     * @param _containerIds 需要扫描的容器id集合
                     * 
                     */
                    void SetContainerIds(const std::vector<std::string>& _containerIds);

                    /**
                     * 判断参数 ContainerIds 是否已赋值
                     * @return ContainerIds 是否已赋值
                     * 
                     */
                    bool ContainerIdsHasBeenSet() const;

                    /**
                     * 获取是否是扫描全部超时的
                     * @return TimeoutAll 是否是扫描全部超时的
                     * 
                     */
                    bool GetTimeoutAll() const;

                    /**
                     * 设置是否是扫描全部超时的
                     * @param _timeoutAll 是否是扫描全部超时的
                     * 
                     */
                    void SetTimeoutAll(const bool& _timeoutAll);

                    /**
                     * 判断参数 TimeoutAll 是否已赋值
                     * @return TimeoutAll 是否已赋值
                     * 
                     */
                    bool TimeoutAllHasBeenSet() const;

                    /**
                     * 获取重新设置的超时时长
                     * @return Timeout 重新设置的超时时长
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置重新设置的超时时长
                     * @param _timeout 重新设置的超时时长
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 需要扫描的容器id集合
                     */
                    std::vector<std::string> m_containerIds;
                    bool m_containerIdsHasBeenSet;

                    /**
                     * 是否是扫描全部超时的
                     */
                    bool m_timeoutAll;
                    bool m_timeoutAllHasBeenSet;

                    /**
                     * 重新设置的超时时长
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVIRUSSCANAGAINREQUEST_H_
