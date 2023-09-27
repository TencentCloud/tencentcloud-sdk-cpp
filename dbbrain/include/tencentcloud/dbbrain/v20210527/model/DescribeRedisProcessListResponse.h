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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISPROCESSLISTRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISPROCESSLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/Process.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeRedisProcessList返回参数结构体
                */
                class DescribeRedisProcessListResponse : public AbstractModel
                {
                public:
                    DescribeRedisProcessListResponse();
                    ~DescribeRedisProcessListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取该实例的Proxy节点数量，可用于分页查询。
                     * @return ProxyCount 该实例的Proxy节点数量，可用于分页查询。
                     * 
                     */
                    int64_t GetProxyCount() const;

                    /**
                     * 判断参数 ProxyCount 是否已赋值
                     * @return ProxyCount 是否已赋值
                     * 
                     */
                    bool ProxyCountHasBeenSet() const;

                    /**
                     * 获取实时会话详情列表。
                     * @return Processes 实时会话详情列表。
                     * 
                     */
                    std::vector<Process> GetProcesses() const;

                    /**
                     * 判断参数 Processes 是否已赋值
                     * @return Processes 是否已赋值
                     * 
                     */
                    bool ProcessesHasBeenSet() const;

                private:

                    /**
                     * 该实例的Proxy节点数量，可用于分页查询。
                     */
                    int64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * 实时会话详情列表。
                     */
                    std::vector<Process> m_processes;
                    bool m_processesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISPROCESSLISTRESPONSE_H_
